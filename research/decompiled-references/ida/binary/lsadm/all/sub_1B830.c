void __fastcall sub_1B830(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_791D0;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    j__free(v3);
  }
  operator delete(a1, 0x68u);
}

