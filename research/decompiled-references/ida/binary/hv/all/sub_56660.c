void __fastcall sub_56660(_QWORD *a1)
{
  bool v1; // zf
  void *v3; // rdi
  void *v4; // rdi

  v1 = a1[18] == 0;
  *a1 = &off_163120;
  if ( !v1 || a1[19] || a1[23] )
  {
    if ( !byte_1671A1 )
      sub_96F80(2606);
    BUG();
  }
  v3 = (void *)a1[20];
  if ( v3 )
  {
    a1[21] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[3];
  a1[1] = 0;
  *a1 = qword_164720;
  a1[2] = 0;
  if ( v4 )
  {
    a1[4] = 0;
    j__free(v4);
  }
  operator delete(a1, 0xC0u);
}

