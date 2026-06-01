void __fastcall sub_1C026E0(
        __m128 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned __int64 a10,
        unsigned __int8 a11)
{
  unsigned int *v12; // rax
  __int64 v13; // rbp
  signed __int64 v14; // rdx
  _BOOL8 v17; // [rsp+38h] [rbp-90h]
  char v18; // [rsp+4Fh] [rbp-79h] BYREF
  _BYTE *v19; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-70h]
  __int64 v21; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-48h]

  if ( (*(_BYTE *)(a6 + 83) & 8) != 0 && (v12 = *(unsigned int **)(a6 + 128), *((_BYTE *)v12 + 4)) )
  {
    v13 = *(_QWORD *)&v12[2 * *v12 + 2];
    v17 = v13 != 0;
  }
  else
  {
    v17 = 0;
    v13 = 0;
  }
  sub_168B9B0((__int64)&v19, (__int64)&a1->m128_i64[1], 4750);
  sub_AE9DF0(&v19, a11, 2u);
  sub_AE9DF0(&v19, a4, 9u);
  sub_AE9DF0(&v19, v17, 2u);
  v14 = 0;
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 16) * ((*(_WORD *)(v13 + 2) >> 6) & 7u);
    v13 += 4LL * *(unsigned int *)(v13 + 4) + 20;
  }
  sub_AEC220(&v19, (_BYTE *)v13, v14);
  v21 = a3;
  LOBYTE(v22) = 1;
  sub_AEC610((__int64 *)&v19, &v21);
  LODWORD(v21) = a2;
  sub_1582CA0((__int64)&v22, &v19);
  sub_1C022A0(
    a5,
    (unsigned int *)&v21,
    a1,
    0,
    a9,
    a10,
    a7,
    a8,
    &byte_22F0C30,
    0,
    0,
    (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
    (__int64)&v18);
  if ( v22 && v23 )
    sub_1580C40(v23, v22);
  if ( v19 )
  {
    if ( v20 )
      sub_1580C40(v20, (unsigned __int64)v19);
  }
}
