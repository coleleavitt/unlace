__int64 __fastcall sub_DC3F60(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  int v7; // esi
  __int64 v8; // r12
  __int64 v9; // r13
  int *v10; // rax
  _QWORD v12[3]; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+18h] [rbp-40h]
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v5 = (unsigned int)(*(_DWORD *)v4 + *(_DWORD *)(a2 + 8));
  sub_E23220(v12, *(_QWORD *)(v4 + 32), v5, (unsigned int)v5);
  v6 = sub_B78170(*(_QWORD *)a2);
  if ( v6 <= 0x1F )
  {
    v7 = v3 & ((1 << v6) - 1);
    if ( (v3 & (1 << (v6 - 1))) != 0 )
      v7 |= -(1 << v6);
    v3 = v7;
  }
  v8 = v12[0];
  v9 = v14;
  if ( !v13 && *(_BYTE *)(sub_CFDF60((__int64)v12) + 60) && v8 == v15 )
    v10 = (int *)(v9 + v8 + 72);
  else
    v10 = (int *)(v9 + v8 + 40);
  *v10 = v3;
  sub_E23CF0(v12);
  sub_E24D00(v12);
  sub_E232A0(v12);
  return 1;
}
