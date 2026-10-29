__int64 __fastcall sub_D18310(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rsi
  _BYTE v11[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v7 = (unsigned int)(*(_DWORD *)v6 + *(_DWORD *)(a3 + 8));
  sub_E23220(v11, *(_QWORD *)(v6 + 32), v7, (unsigned int)v7);
  v8 = sub_B78170(*(_QWORD *)a3);
  if ( v8 <= 0x3F )
  {
    v9 = v5 & ((1LL << v8) - 1);
    if ( (v5 & (1LL << ((unsigned __int8)v8 - 1))) != 0 )
      v9 |= -(1LL << v8);
    v5 = v9;
  }
  *(_QWORD *)sub_D0D9C0((__int64)v11) = v5;
  sub_E23CF0(v11);
  sub_E24D00(v11);
  sub_E232A0(v11);
  return 1;
}
