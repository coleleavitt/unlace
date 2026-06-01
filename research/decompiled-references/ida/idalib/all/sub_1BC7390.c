__int64 __fastcall sub_1BC7390(
        __m128 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __m128 a7,
        __m128 a8,
        _QWORD *a9)
{
  int v13; // r13d
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-48h]
  int v20[15]; // [rsp+14h] [rbp-3Ch] BYREF

  v20[0] = a6;
  if ( (unsigned __int8)sub_18F5260((__int64)a1, a3, v20, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0)
    || a3 != a2
    && (unsigned __int8)sub_18F5260((__int64)a1, a2, v20, 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0) )
  {
    return 1;
  }
  v13 = v20[0];
  v19 = *(_QWORD *)(a2 + 48);
  v14 = sub_EEE9A0(32, (_QWORD *)a1[15].m128_u64[1], 8u);
  sub_BF7BD0(v14, a1[15].m128_i64[1], a2, 0, v19, 1, v13, a9, 0);
  if ( a5 )
    *(_BYTE *)(v14 + 2) |= 0x40u;
  sub_1911920(a1, v14, a4, a7, a8);
  v17 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v17 + 16) == 26
     || (v17 = sub_1BC7360(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL), v14, v15, v16)) != 0)
    && ((*(_BYTE *)(v17 + 19) >> 1) & 0xFu) - 9 <= 1 )
  {
    sub_18B0530((__int64)a1, v20[0], v17, *(double *)a7.m128_u64, a8);
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(a2 + 48);
  }
  v18 = sub_A70010(a1[15].m128_i64[1], *(_QWORD *)(v14 + 8));
  return sub_160A600((__int64)a1, v14, v18, 0xCu, 0, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64, 0);
}
