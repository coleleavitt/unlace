__int64 __fastcall sub_D181A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // esi
  _BYTE v11[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(_DWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v7 = (unsigned int)(*(_DWORD *)v6 + *(_DWORD *)(a3 + 8));
  sub_E23220(v11, *(_QWORD *)(v6 + 32), v7, (unsigned int)v7);
  v8 = sub_B78170(*(_QWORD *)a3);
  if ( v8 <= 0x1F )
  {
    v9 = v5 & ((1 << v8) - 1);
    if ( (v5 & (1 << (v8 - 1))) != 0 )
      v9 |= -(1 << v8);
    v5 = v9;
  }
  *(_DWORD *)sub_D0D1D0((__int64)v11) = v5;
  sub_E23CF0(v11);
  sub_E24D00(v11);
  sub_E232A0(v11);
  return 1;
}
