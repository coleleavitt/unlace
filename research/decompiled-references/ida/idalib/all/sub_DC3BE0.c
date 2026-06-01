__int64 __fastcall sub_DC3BE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *v9; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v5 = (unsigned int)(*(_DWORD *)v4 + *(_DWORD *)(a2 + 8));
  sub_E23220(v11, *(_QWORD *)(v4 + 32), v5, (unsigned int)v5);
  v6 = sub_B78170(*(_QWORD *)a2);
  if ( v6 <= 0x3F )
    v3 &= ~(-1LL << v6);
  v7 = v11[0];
  v8 = v13;
  if ( !v12 && *(_BYTE *)(sub_CFDF60((__int64)v11) + 60) && v7 == v14 )
    v9 = (_QWORD *)(v8 + v7 + 72);
  else
    v9 = (_QWORD *)(v8 + v7 + 40);
  *v9 = v3;
  sub_E23CF0(v11);
  sub_E24D00(v11);
  sub_E232A0(v11);
  return 1;
}
