__int64 __fastcall sub_1D0D9B0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _WORD *v9; // rsi
  __int64 v11; // r12
  unsigned __int16 *v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __m128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+10h] [rbp-58h]
  __m128 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+30h] [rbp-38h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x200) != 0 )
    v9 = *(_WORD **)(a2 + 24);
  v11 = sub_1CE7590(a1, v9, 0, a3, a4, a6, a7, a8);
  if ( v11 == 1 )
    return 1;
  v13 = *(unsigned __int16 **)(a2 + 8LL * (((*(_QWORD *)a2 & 0x200) != 0) + ((*(_QWORD *)a2 & 0x400) != 0)) + 24);
  v14 = sub_EEE140((_QWORD *)a2);
  sub_1CE9030((__int64)&v28, a1, *(unsigned int *)(a2 + 4), v14, v13, 2, a3, a4);
  if ( (_BYTE)v29 )
    return 1;
  v16 = (__m128)_mm_load_si128(&v28);
  v17 = *(unsigned int *)(a2 + 16);
  v18 = *(unsigned int *)(a2 + 4);
  v30 = v16;
  v19 = *(unsigned int *)(a2 + 20);
  v20 = *a1;
  v31 = v29;
  v24 = sub_1C396C0(
          v20,
          v18,
          v17,
          v11 & 0xFFFFFFFFFFFFFFFELL,
          v19,
          v15,
          *(double *)v16.m128_u64,
          v16.m128_i64[0],
          v16.m128_i64[1]);
  if ( v24 == 1 )
    return 1;
  v25 = sub_1CE7590(
          a1,
          *(_WORD **)(a2 + 8LL * (((*(_QWORD *)a2 & 0x200) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x400) != 0) + 1) + 24),
          0,
          v16,
          a4,
          v21,
          v22,
          v23);
  if ( v25 == 1 )
    return 1;
  else
    return sub_1C50070(
             *a1,
             *(_DWORD *)(a2 + 4),
             v24 & 0xFFFFFFFFFFFFFFFELL,
             (_WORD *)(v25 & 0xFFFFFFFFFFFFFFFELL),
             v26,
             v27,
             *(double *)v16.m128_u64);
}
