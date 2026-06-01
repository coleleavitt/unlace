__int64 __fastcall sub_DE8A00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned int v6; // ebp
  __int64 v8; // r12
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v9 = v3;
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v10[0] = v5;
  v6 = sub_D37DA0(a1, a2, v10, &v9);
  if ( (_BYTE)v6 )
  {
    v8 = v10[0] % v9;
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v8;
  }
  return v6;
}
