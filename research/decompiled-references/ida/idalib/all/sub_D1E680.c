__int64 __fastcall sub_D1E680(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rax
  _DWORD v8[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v8);
  sub_E21790(v4, 48);
  v5 = sub_DCBF60(a1, a2, v8);
  if ( (_BYTE)v5 )
  {
    if ( !v8[6] && v9 && v10 )
    {
      sub_E24D00(v8);
      sub_E23CF0(v8);
    }
    v6 = sub_CFE5B0((__int64)v8);
    if ( v6 )
      sub_B78170(v6);
    *(_BYTE *)sub_D0E7B0((__int64)v8) = v3;
  }
  sub_E232A0(v8);
  return v5;
}
