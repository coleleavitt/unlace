__int64 __fastcall sub_D1E270(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // eax
  int v9; // esi
  _DWORD v10[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v10);
  sub_E21790(v4, 48);
  v5 = sub_DCBF60(a1, a2, v10);
  if ( (_BYTE)v5 )
  {
    if ( !v10[6] && v11 && v12 )
    {
      sub_E24D00(v10);
      sub_E23CF0(v10);
    }
    v6 = sub_CFE5B0((__int64)v10);
    if ( v6 )
    {
      v7 = sub_B78170(v6);
      if ( v7 <= 0x1F )
      {
        v9 = v3 & ((1 << v7) - 1);
        if ( (v3 & (1 << (v7 - 1))) != 0 )
          v9 |= -(1 << v7);
        v3 = v9;
      }
    }
    *(_DWORD *)sub_D0D1D0((__int64)v10) = v3;
  }
  sub_E232A0(v10);
  return v5;
}
