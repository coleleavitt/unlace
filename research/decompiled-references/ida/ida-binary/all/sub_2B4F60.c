__int64 __fastcall sub_2B4F60(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = (__int64)(a1 + 24);
  v4 = a1[24];
  if ( v4 )
  {
    a1[25] = 0;
    qfree(v4, a2);
    a1[24] = 0;
    a1[26] = 0;
  }
  sub_2B38C0(v2);
  sub_2B45E0((__int64)(a1 + 30), nullptr, 0);
  v5 = a1[62];
  if ( v5 )
  {
    a1[63] = 0;
    qfree(v5, nullptr);
    a1[62] = 0;
    a1[64] = 0;
  }
  v6 = a1[59];
  if ( v6 )
  {
    a1[60] = 0;
    qfree(v6, nullptr);
    a1[59] = 0;
    a1[61] = 0;
  }
  sub_466DB0(a1 + 56);
  return sub_466DA0(a1 + 56);
}
