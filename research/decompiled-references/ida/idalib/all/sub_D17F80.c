__int64 __fastcall sub_D17F80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  _BYTE v10[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v5 = *(unsigned __int8 *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v7 = (unsigned int)(*(_DWORD *)v6 + *(_DWORD *)(a3 + 8));
  sub_E23220(v10, *(_QWORD *)(v6 + 32), v7, (unsigned int)v7);
  v8 = sub_B78170(*(_QWORD *)a3);
  if ( v8 <= 7 )
    v5 &= (1 << v8) - 1;
  *(_BYTE *)sub_D0C7E0((__int64)v10) = v5;
  sub_E23CF0(v10);
  sub_E24D00(v10);
  sub_E232A0(v10);
  return 1;
}
