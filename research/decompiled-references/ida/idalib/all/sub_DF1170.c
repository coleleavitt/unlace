__int64 __fastcall sub_DF1170(__int64 a1)
{
  __int64 v1; // r12
  _DWORD v3[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v3);
  sub_E21790(v1, 48);
  sub_DF0E20(a1, (__int64)v3);
  if ( !v3[6] && v4 && v5 )
  {
    sub_E24D00(v3);
    sub_E23CF0(v3);
  }
  sub_E232A0(v3);
  return 1;
}
