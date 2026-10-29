__m128i *__fastcall sub_1CF74E0(__m128i *a1, __int64 a2, const __m128i *a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  __m128i v11; // xmm0
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm2
  unsigned int v19; // edx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // xmm3_8^8
  __int32 v27; // esi
  int v28; // ecx
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // r12d
  int v34; // [rsp+Ch] [rbp-5Ch]
  __m128i v35; // [rsp+10h] [rbp-58h] BYREF
  __int64 v36; // [rsp+20h] [rbp-48h]

  v6 = a3->m128i_i64[0];
  if ( !a3->m128i_i64[0] )
    goto LABEL_14;
  v9 = a3->m128i_i64[0] & 7;
  v10 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (_DWORD)v9 == 7 )
  {
    v13 = 3;
    if ( *(_DWORD *)v10 <= 3u )
      v13 = *(_DWORD *)v10;
    v14 = v13 + 8;
    if ( ((1LL << v14) & 0xE47) != 0 )
      goto LABEL_4;
    if ( ((1LL << v14) & 0x100) != 0 )
    {
      v15 = 0;
      if ( v14 == 8 )
        v15 = *(_QWORD *)(v10 + 16);
      v16 = sub_1CB9120(a2, v15);
      if ( v16 )
      {
        v36 = a3[1].m128i_i64[0];
        v17 = *(_QWORD *)a2;
        v35 = _mm_loadu_si128(a3);
        v35.m128i_i64[0] = sub_B87960(*(_QWORD *)(v17 + 248) + 17536LL, v16);
        v18 = _mm_load_si128(&v35);
        a1[1].m128i_i64[0] = v36;
        *a1 = v18;
        return a1;
      }
      goto LABEL_14;
    }
    v19 = 4;
LABEL_21:
    v27 = a3->m128i_i32[2];
    v28 = *(_DWORD *)(a2 + 32);
    v29 = *(_QWORD *)(a2 + 40);
    if ( v27 )
    {
      *(_DWORD *)(a2 + 32) = v27;
      *(_QWORD *)(a2 + 40) = v6;
    }
    v30 = 0;
    if ( v19 <= 2 )
      v30 = *(_QWORD *)(v10 + 8);
    v34 = v28;
    v31 = sub_1CF6840((unsigned int *)a2, v30, a4, a5);
    if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      a1->m128i_i32[2] = 0;
      a1->m128i_i64[0] = 0;
      a1[1].m128i_i64[0] = 0;
      *(_DWORD *)(a2 + 32) = v34;
      *(_QWORD *)(a2 + 40) = v29;
      return a1;
    }
    v32 = *(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL];
    *(_DWORD *)(a2 + 32) = v34;
    *(_QWORD *)(a2 + 40) = v29;
    v23 = v32 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v32 | (unsigned __int8)v31) & 7;
    v24 = *(_QWORD *)(*(_QWORD *)a2 + 248LL) + 17536LL;
    if ( (_DWORD)v9 == 7 )
    {
      v33 = 3;
      if ( *(_DWORD *)v10 <= 3u )
        v33 = *(_DWORD *)v10;
      LODWORD(v9) = v33 + 8;
    }
    v22 = nullptr;
    goto LABEL_19;
  }
  if ( ((1LL << v9) & 0xE47) == 0 )
  {
    v19 = v9 - 3;
    if ( (unsigned int)(v9 - 3) <= 2 )
    {
      v20 = a3[1].m128i_i64[0];
      if ( v20 )
      {
        v21 = sub_1CF6590(a2, v20, a4, a5);
        v22 = v21;
        if ( v21 )
        {
          v23 = *(_QWORD *)&byte_8[*v21 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[*v21 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v21) & 7;
          v24 = *(_QWORD *)(*(_QWORD *)a2 + 248LL) + 17536LL;
LABEL_19:
          v25 = sub_B87D00(v24, v9, v23);
          v26 = _mm_loadu_si128(a3).m128i_i64[1];
          a1[1].m128i_i64[0] = (__int64)v22;
          v35.m128i_i64[1] = v26;
          v35.m128i_i64[0] = v25;
          *a1 = _mm_load_si128(&v35);
          return a1;
        }
LABEL_14:
        a1->m128i_i32[2] = 0;
        a1->m128i_i64[0] = 0;
        a1[1].m128i_i64[0] = 0;
        return a1;
      }
    }
    goto LABEL_21;
  }
LABEL_4:
  v11 = _mm_loadu_si128(a3);
  a1[1].m128i_i64[0] = a3[1].m128i_i64[0];
  *a1 = v11;
  return a1;
}
