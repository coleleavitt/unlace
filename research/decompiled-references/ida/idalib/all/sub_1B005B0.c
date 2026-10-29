__int64 __fastcall sub_1B005B0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int64 a9,
        char a10,
        char a11,
        __int64 a12)
{
  unsigned __int64 v16; // r11
  __int64 result; // rax
  _QWORD *v18; // r9
  size_t v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r12
  unsigned __int64 v22; // rdx
  size_t v23; // rax
  unsigned __int64 v24; // rbp
  _QWORD *v25; // r12
  char v26; // al
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned __int64 v32; // [rsp+10h] [rbp-68h]
  unsigned __int64 v33; // [rsp+18h] [rbp-60h]
  unsigned __int64 v34; // [rsp+18h] [rbp-60h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  unsigned __int64 v36; // [rsp+18h] [rbp-60h]
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v38[80]; // [rsp+28h] [rbp-50h] BYREF

  v16 = sub_190C990(a1, a3, a3, a6 & 0xFFFFFFFFFFFFFFFELL, *(double *)a7.m128_u64, a8);
  if ( v16 <= 1 || a4 <= 1 || a5 <= 1 || a9 <= 1 )
    return 1;
  v18 = (_QWORD *)(a9 & 0xFFFFFFFFFFFFFFFELL);
  if ( a12 )
  {
    v33 = v16;
    v19 = j__strlen(".capture_expr.");
    v20 = sub_1B00390((_QWORD *)a1, (_QWORD *)(a9 & 0xFFFFFFFFFFFFFFFELL), a12, ".capture_expr.", v19, a7, a8);
    v16 = v33;
    if ( v20 == 1 )
      return 1;
    v18 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
  }
  v32 = sub_1929BB0(a1, a2, a3, 2u, v16 & 0xFFFFFFFFFFFFFFFELL, v18, a7, a8, 0);
  if ( v32 <= 1 )
    return 1;
  v21 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFELL);
  v22 = sub_190C990(a1, a3, a3, (__int64)v21, *(double *)a7.m128_u64, a8);
  if ( v22 <= 1 )
    return 1;
  if ( a12 )
  {
    if ( a11 != 1 )
    {
      v23 = j__strlen(".capture_expr.");
      v22 = sub_1B00390((_QWORD *)a1, v21, a12, ".capture_expr.", v23, a7, a8);
      if ( v22 == 1 )
        return 1;
    }
  }
  v24 = a4 & 0xFFFFFFFFFFFFFFFELL;
  v34 = v22;
  v25 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFELL);
  if ( !sub_1741750(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL))
    && !sub_1741750(*(_QWORD *)(*(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL))
    && !sub_1741750(*(_QWORD *)(*(_QWORD *)((v32 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    goto LABEL_20;
  }
  v37 = a1;
  sub_1AE9670((__int64)v38, a1);
  v26 = *(_BYTE *)(a1 + 10024);
  *(_BYTE *)(a1 + 10024) = 1;
  v38[16] = v26;
  v27 = sub_1929BB0(a1, a2, a3, 0x15u, v24, v25, a7, a8, 0);
  if ( v27 == 1
    || (v35 = v27) == 0
    || (v28 = sub_1929BB0(
                a1,
                a2,
                a3,
                26 - (unsigned int)(a10 == 0),
                v24,
                (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFELL),
                a7,
                a8,
                0),
        v28 < 2) )
  {
    sub_1AF2A30((__int64)&v37);
    goto LABEL_20;
  }
  v36 = sub_1928110(a1, a3, 0x20u, v35 & 0xFFFFFFFFFFFFFFFELL, v28 & 0xFFFFFFFFFFFFFFFELL, 0, a7, a8);
  sub_1AF2A30((__int64)&v37);
  result = v36;
  if ( v36 == 1 || !v36 )
  {
LABEL_20:
    v29 = sub_1929BB0(
            a1,
            a2,
            a3,
            6 - (unsigned int)(a10 == 0),
            (__int64)v25,
            (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFELL),
            a7,
            a8,
            0);
    if ( v29 > 1 )
    {
      v30 = *(_QWORD *)(v24 + 8);
      v31 = *(_QWORD *)&byte_8[*(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v31 & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)v31 | (unsigned __int8)*(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFFELL) + 8)) & 7) == (*(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v30 | (unsigned __int8)*(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
        return sub_1929BB0(a1, a2, a3, 0x15u, v24, (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
      v29 = sub_1BFA490(a1, v29 & 0xFFFFFFFFFFFFFFFELL, v30, 3, 1);
      if ( v29 > 1 )
        return sub_1929BB0(a1, a2, a3, 0x15u, v24, (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
    }
    return 1;
  }
  return result;
}
