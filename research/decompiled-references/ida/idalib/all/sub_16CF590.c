void __fastcall sub_16CF590(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        char a8)
{
  int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v24; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v25; // [rsp+24h] [rbp-D4h] BYREF
  char v26; // [rsp+2Ch] [rbp-CCh]
  unsigned __int8 *v27; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-C0h]

  v9 = a5;
  v11 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  v23 = a3;
  v22 = a4;
  if ( (v11 & 8) != 0 && (*(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) != 0 )
    v23 = sub_A72780(*(_QWORD **)(a1 + 248), a3, a3, a4, a5);
  v12 = v22;
  v13 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v13 & 8) != 0 && (*(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) != 0 )
    v22 = sub_A72780(*(_QWORD **)(a1 + 248), v22, a3, a4, a5);
  if ( a8 )
  {
    sub_168B9B0((__int64)&v27, a1 + 8, a6);
    sub_AE9DF0(&v27, v23, 8u);
    sub_AE9DF0(&v27, v22, 8u);
    v26 = 1;
    v25 = sub_EEC8C0(a2, v22, a7);
    sub_AEC610((__int64 *)&v27, &v25);
    LODWORD(v25) = v9;
    HIDWORD(v25) = v9;
    v26 = 1;
    sub_AEC610((__int64 *)&v27, &v25);
    v21 = sub_C00A40(a2, (__int64)&v25, v18, v19, v20);
    sub_18CAED0(a1, v21, a2, &v27);
    if ( v27 )
    {
      if ( v28 )
        sub_1580C40(v28, (unsigned __int64)v27);
    }
  }
  else
  {
    v14 = sub_C00A40(a2, v12, a3, a4, a5);
    sub_168B9F0((__int64)&v27, (__int64 *)(a1 + 8), v14, a6, 0);
    v15 = sub_1605D30((__int64)&v27, &v23);
    v16 = sub_1605D30(v15, &v22);
    v24 = sub_EEC8C0(a2, (__int64)&v22, a7);
    v17 = sub_1587DB0(v16, &v24);
    LODWORD(v25) = v9;
    HIDWORD(v25) = v9;
    sub_1587DB0(v17, &v25);
    sub_15F7200(&v27);
  }
}
