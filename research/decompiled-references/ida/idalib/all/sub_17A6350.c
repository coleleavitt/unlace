void __fastcall sub_17A6350(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 v12[8]; // [rsp+18h] [rbp-40h] BYREF

  v11 = a3;
  sub_1CB44B0(a1, &v11);
  v5 = v11;
  if ( v11 )
  {
    v12[0] = v11;
    a1[68] = v11 + 64;
    *(_QWORD *)(a2 + 360) = v5 + 64;
    v6 = a1[33];
    v7 = *(_DWORD *)(v5 + 24);
    v8 = *(_QWORD *)(v6 + 32);
    if ( (unsigned __int8)sub_FD3830(v8, 0xA57u, v7, v6, v3, v4) != 1
      || (unsigned __int8)sub_FD3830(v8, 0xA5Eu, v7, v6, v9, v10) != 1 )
    {
      sub_A93480(a1[31], v12, 1, a1[30]);
    }
  }
  else
  {
    a1[68] = 0;
    *(_QWORD *)(a2 + 360) = 0;
  }
  sub_1666A30((__int64)a1, v5);
}
