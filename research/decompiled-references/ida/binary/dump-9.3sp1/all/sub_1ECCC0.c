__int64 __fastcall sub_1ECCC0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4DEB68;
  sub_1559D0((__int64)(a1 + 6), 1);
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
  }
  return j__qfree((__int64)a1);
}
