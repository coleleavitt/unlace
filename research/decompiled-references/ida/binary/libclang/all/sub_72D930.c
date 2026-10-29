unsigned __int64 __fastcall sub_72D930(const __m128i *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  __int8 v9; // si
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __int64 v13; // rdi
  __m128i v14; // xmm3
  __m128i v15; // xmm3
  __int64 v16; // rax
  char v17; // al
  char v18; // al
  __int8 v20; // [rsp+7h] [rbp-51h]
  __int32 v21; // [rsp+8h] [rbp-50h]
  __int32 v22; // [rsp+Ch] [rbp-4Ch]
  void *src; // [rsp+10h] [rbp-48h]
  void *v24; // [rsp+18h] [rbp-40h]

  v2 = a2 + 2192;
  v4 = sub_7222F0(a2 + 2192, 144, 3);
  v5 = a1[7].m128i_u32[1];
  v6 = v4;
  v7 = a1[8].m128i_i64[1];
  v8 = a1[6].m128i_u32[1];
  v20 = a1[7].m128i_i8[0];
  v9 = a1[6].m128i_i8[0];
  v10 = _mm_loadu_si128(a1 + 5);
  v24 = (void *)a1[7].m128i_i64[1];
  v11 = _mm_loadu_si128(a1 + 4);
  v22 = a1[8].m128i_i32[0];
  v12 = _mm_loadu_si128(a1 + 3);
  v13 = a1[2].m128i_i64[1];
  v21 = a1[7].m128i_i32[1];
  src = (void *)a1[6].m128i_i64[1];
  v14 = _mm_loadu_si128(a1);
  *(_WORD *)(v4 + 32) = 136;
  LOBYTE(v4) = *(_BYTE *)(v4 + 34);
  *(__m128i *)v6 = v14;
  v15 = _mm_loadu_si128(a1 + 1);
  *(_QWORD *)(v6 + 40) = v13;
  *(_BYTE *)(v6 + 96) = v9;
  *(_BYTE *)(v6 + 34) = v4 & 0xE0 | 0x10;
  *(_DWORD *)(v6 + 100) = v8;
  *(__m128i *)(v6 + 16) = v15;
  *(__m128i *)(v6 + 48) = v12;
  *(__m128i *)(v6 + 64) = v11;
  *(__m128i *)(v6 + 80) = v10;
  *(_QWORD *)(v6 + 104) = sub_7222C0(v2, v8, 0);
  *(_BYTE *)(v6 + 112) = v20;
  *(_DWORD *)(v6 + 116) = v21;
  v16 = sub_7222C0(v2, v5, 0);
  *(_QWORD *)(v6 + 136) = v7;
  *(_QWORD *)(v6 + 120) = v16;
  *(_DWORD *)(v6 + 128) = v22;
  if ( v8 )
  {
    memcpy(*(void **)(v6 + 104), src, *(unsigned int *)(v6 + 100));
    if ( !v5 )
      goto LABEL_3;
LABEL_5:
    memcpy(*(void **)(v6 + 120), v24, *(unsigned int *)(v6 + 116));
    goto LABEL_3;
  }
  if ( v5 )
    goto LABEL_5;
LABEL_3:
  v17 = a1[2].m128i_i8[2] & 1 | *(_BYTE *)(v6 + 34) & 0xFE;
  *(_BYTE *)(v6 + 34) = v17;
  v18 = a1[2].m128i_i8[2] & 2 | v17 & 0xFD;
  *(_BYTE *)(v6 + 34) = v18;
  *(_BYTE *)(v6 + 34) = a1[2].m128i_i8[2] & 4 | v18 & 0xFB;
  return v6;
}

