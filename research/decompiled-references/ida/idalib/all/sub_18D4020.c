__int64 __fastcall sub_18D4020(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4, double a5)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rbp
  int v20; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v21; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v22; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v26[200]; // [rsp+40h] [rbp-C8h] BYREF

  v7 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v8 = sub_BFB840(v7);
  v9 = *a4 & 0xFFFFFFFFFFFFFFFELL;
  v21 = *(_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(sub_BFB840(v9) + 8);
  v22 = v10;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 57) <= 1u )
    {
      sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a2, 0x14A9u, 0);
      LODWORD(v23) = 1;
      v16 = sub_1587D10((__int64)v26, (int *)&v23);
      v17 = sub_1605D30(v16, &v21);
      v18 = sub_1605D30(v17, &v22);
      v24 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v22, a5);
      v19 = sub_1587DB0(v18, &v24);
      v25 = sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v24, a5);
      sub_1587DB0(v19, &v25);
      sub_15F7200(v26);
      return 0;
    }
    v11 = v7;
    v7 = v9;
    v9 = v11;
  }
  sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), a2, 0x14A9u, 0);
  v20 = 0;
  v12 = sub_1587D10((__int64)v26, &v20);
  v23 = *(_QWORD *)(v9 + 8);
  v13 = sub_162B6D0(v12, &v23);
  v24 = *(_QWORD *)(sub_BFB840(v7) + 8);
  v14 = sub_162B6D0(v13, &v24);
  v25 = sub_EEC8C0(v9, (__int64)&v24, a5);
  sub_1587DB0(v14, &v25);
  sub_15F7200(v26);
  return 0;
}
