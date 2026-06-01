__int64 __fastcall sub_16CF790(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4, double a5)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // [rsp+Fh] [rbp-E9h]
  int v24; // [rsp+1Ch] [rbp-DCh] BYREF
  unsigned __int64 v25; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v29[184]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = sub_BFD410(a2);
  v9 = *(_QWORD *)(a1 + 248);
  v25 = v8;
  v26 = sub_BFD410(a3);
  if ( !(unsigned __int8)sub_F61000(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL), v9, v10, v11, v12, v13)
    || !(unsigned __int8)sub_F61000(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL), v9, v14, v15, v16, v17)
    || *(_QWORD *)(*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    return 0;
  }
  sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a4, 0xDBBu, 0);
  v27 = sub_EEC8C0(a2, a1 + 8, a5);
  v19 = sub_1587DB0((__int64)v29, &v27);
  v28 = sub_EEC8C0(a3, (__int64)&v27, a5);
  v20 = sub_1587DB0(v19, &v28);
  v24 = 0;
  v21 = sub_1587D10(v20, &v24);
  v22 = sub_1605D30(v21, (__int64 *)&v25);
  v23 = *(_BYTE *)(sub_1605D30(v22, (__int64 *)&v26) + 120);
  sub_15F7200(v29);
  return v23;
}
