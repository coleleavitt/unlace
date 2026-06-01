__int64 __fastcall sub_D1D8B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // eax
  int v9; // esi

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v5 = sub_DCBF60(a1, a2, v4);
  if ( (_BYTE)v5 )
  {
    if ( !*(_DWORD *)(v4 + 24) && *(_QWORD *)(v4 + 32) && *(_DWORD *)(v4 + 40) )
    {
      sub_E24D00(v4);
      sub_E23CF0(v4);
    }
    v6 = sub_CFE5B0(v4);
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
    *(_DWORD *)sub_D0D1D0(v4) = v3;
  }
  return v5;
}
