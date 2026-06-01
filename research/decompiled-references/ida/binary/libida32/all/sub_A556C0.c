__int64 __fastcall sub_A556C0(__int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp

  if ( (a1[2841] & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    return a1[2841];
  if ( (a1[2840] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v2 = sub_A4C290(a1 + 294, 48, 4u);
    v3 = v2 & 0xFFFFFFFFFFFFFFF0LL;
    sub_F3AE10(v2, 0, 0, 0, 0, 0, 0, 0);
    a1[2840] = v3;
  }
  a1[2841] = sub_A4F090((__int64)a1, a1[2840]);
  return a1[2841];
}

