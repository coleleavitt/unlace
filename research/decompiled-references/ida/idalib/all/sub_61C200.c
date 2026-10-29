void __fastcall sub_61C200(void *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  bool v4; // zf

  *(_QWORD *)a1 = &off_2B32900;
  v2 = *((void **)a1 + 14);
  if ( v2 )
  {
    *((_QWORD *)a1 + 15) = 0;
    qfree(v2);
  }
  v3 = *((void **)a1 + 11);
  if ( v3 )
  {
    *((_QWORD *)a1 + 12) = 0;
    qfree(v3);
  }
  v4 = *((_BYTE *)a1 + 68) == 0;
  *(_QWORD *)a1 = &unk_2BFB430;
  if ( !v4 )
  {
    qfree(*((void **)a1 + 2));
    qfree(*((void **)a1 + 4));
    qfree(*((void **)a1 + 5));
  }
  operator delete(a1, 0xCC0u);
}
