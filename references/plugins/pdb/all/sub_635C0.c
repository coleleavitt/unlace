void __fastcall sub_635C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = off_AFCF0;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = a1[3];
  a1[1] = 0;
  *a1 = off_AEE30;
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x70u);
}
