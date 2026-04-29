void __fastcall sub_144D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = off_C74F0;
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x50u);
}
