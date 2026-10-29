__int64 __fastcall sub_18B5210(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // r13
  char v14; // al
  int v15; // r15d
  int v16; // r14d
  unsigned int v17; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v18; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-B0h]
  __int8 *v20; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-90h]
  unsigned __int64 v22; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-70h]
  unsigned __int64 v24; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-50h]

  v6 = sub_18B0170(a3, a2, a3, a4);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( (unsigned __int8)sub_F64AF0(v6) )
    return 0;
  v12 = sub_18B0170(*(_QWORD *)(a2 + 8), a2, v8, v9);
  v13 = v12;
  if ( !v12 || (unsigned __int8)sub_F64AF0(v12) )
  {
    return 0;
  }
  else
  {
    v14 = *(_BYTE *)(a1[29] + 1LL) & 0x40;
    v15 = v14 == 0 ? 3626 : 6806;
    v16 = -(v14 == 0);
    v17 = sub_EEC8C0(a2, a2, *(double *)a5.m128i_i64);
    sub_168B9B0((__int64)&v24, (__int64)(a1 + 1), 0);
    sub_168B9B0((__int64)&v22, (__int64)(a1 + 1), 0);
    sub_168B9B0((__int64)&v20, (__int64)(a1 + 1), v15);
    sub_168B9B0((__int64)&v18, (__int64)(a1 + 1), (v16 & 0xFFFFF3FC) + 7032);
    v10 = sub_18B4A40(a1, (__int64)&v18, &v20, (__int64)&v22, (__int64)&v24, v7, a5, a6, 0, v17, v13, 0, 0);
    if ( (_BYTE)v10 )
      v10 = ((*(_BYTE *)(a1[29] + 1LL) >> 6) ^ 1) & 1;
    if ( v18 && v19 )
      sub_1580C40(v19, v18);
    if ( v20 && v21 )
      sub_1580C40(v21, (unsigned __int64)v20);
    if ( v22 && v23 )
      sub_1580C40(v23, v22);
    if ( v24 && v25 )
      sub_1580C40(v25, v24);
  }
  return v10;
}
