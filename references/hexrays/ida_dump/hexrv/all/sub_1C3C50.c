void __fastcall sub_1C3C50(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4B1338;
  v2 = a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
  }
  qfree(a1[2]);
  operator delete(a1, 0x38u);
}
