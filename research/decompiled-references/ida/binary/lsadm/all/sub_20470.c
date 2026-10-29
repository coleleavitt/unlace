void __fastcall sub_20470(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_79458;
  a1[8] = 0;
  a1[10] = 0;
  sub_203B0(a1, -1);
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x68u);
}

