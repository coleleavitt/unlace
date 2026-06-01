void __fastcall sub_556E30(char *a1)
{
  _QWORD *v2; // rbp
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  v2 = *((_QWORD **)a1 + 16);
  *(_QWORD *)a1 = &off_2B2E5C8;
  if ( v2 )
  {
    delete_dirtree(*v2);
    operator delete(v2, 8u);
  }
  v3 = *((void **)a1 + 11);
  *(_QWORD *)a1 = &unk_2BFB060;
  *(_OWORD *)(a1 + 120) = 0;
  if ( v3 )
  {
    *((_QWORD *)a1 + 12) = 0;
    qfree(v3);
  }
  v4 = *((void **)a1 + 8);
  if ( v4 )
  {
    *((_QWORD *)a1 + 9) = 0;
    qfree(v4);
  }
  v5 = *((void **)a1 + 4);
  if ( v5 )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree(v5);
  }
  v6 = *((void **)a1 + 1);
  if ( v6 )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree(v6);
  }
  operator delete(a1, 0x90u);
}
