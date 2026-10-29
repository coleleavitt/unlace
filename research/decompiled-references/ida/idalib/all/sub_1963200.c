__int64 __fastcall sub_1963200(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int16 *v9; // rsi
  __int64 v11; // rax
  int v12; // r12d
  unsigned __int16 *v14; // r13
  __int64 v15; // rax
  int v16; // r9d
  __m128 v17; // xmm0
  int v18; // edx
  int v19; // esi
  int v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-68h] BYREF
  __int64 v28; // [rsp+10h] [rbp-58h]
  __m128 v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+30h] [rbp-38h]

  v9 = nullptr;
  if ( (*(_WORD *)a2 & 0x200) != 0 )
    v9 = *(unsigned __int16 **)(a2 + 24);
  v11 = sub_1961D20(a1, v9, 0, a3, a4, a6, a7, a8);
  v12 = v11;
  if ( v11 == 1 )
    return 1;
  v14 = *(unsigned __int16 **)(a2 + 8LL * (((*(_QWORD *)a2 & 0x200) != 0) + ((*(_QWORD *)a2 & 0x400) != 0)) + 24);
  v15 = sub_EEE140((_QWORD *)a2);
  sub_194FF90((__int64)&v27, a1, *(_DWORD *)(a2 + 4), v15, v14, 2u, a3, a4);
  if ( (_BYTE)v28 )
    return 1;
  v17 = (__m128)_mm_load_si128(&v27);
  v18 = *(_DWORD *)(a2 + 16);
  v19 = *(_DWORD *)(a2 + 4);
  v29 = v17;
  v20 = *(_DWORD *)(a2 + 20);
  v21 = *a1;
  v30 = v28;
  v25 = sub_1C396C0(v21, v19, v18, v12 & 0xFFFFFFFE, v20, v16, v17.m128_i64[0], v17.m128_i64[1]);
  if ( v25 == 1 )
    return 1;
  v26 = sub_1961D20(
          a1,
          *(unsigned __int16 **)(a2
                               + 8LL
                               * (((*(_QWORD *)a2 & 0x200) != 0) + (unsigned int)((*(_QWORD *)a2 & 0x400) != 0) + 1)
                               + 24),
          0,
          v17,
          a4,
          v22,
          v23,
          v24);
  if ( v26 == 1 )
    return 1;
  else
    return sub_1C50070(*a1, *(unsigned int *)(a2 + 4), v25 & 0xFFFFFFFFFFFFFFFELL, v26 & 0xFFFFFFFFFFFFFFFELL);
}
