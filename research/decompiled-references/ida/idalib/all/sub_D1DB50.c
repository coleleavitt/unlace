__int64 __fastcall sub_D1DB50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // eax

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_E21760(v2, 8);
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
      if ( v7 <= 0x3F )
        v3 &= ~(-1LL << v7);
    }
    *(_QWORD *)sub_D0DBD0(v4) = v3;
  }
  return v5;
}
