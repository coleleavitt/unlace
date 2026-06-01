__m128i *__fastcall sub_F59AE0(__m128i *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edi
  const __m128i *v14; // rsi
  __int32 v15; // r9d
  int v16; // ecx
  __int32 v17; // r11d
  unsigned __int64 v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // edx
  const __m128i *v22; // rax
  __int32 v23; // r9d
  int v24; // eax
  int v25; // r9d
  __int32 v26; // r8d
  __int64 v27; // r10
  __m128i v28; // xmm3
  __m128i v30; // xmm1

  v8 = a3 & 7;
  v9 = (*(__int64 (**)(void))(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))();
  v10 = *(_QWORD *)(a2 + 48);
  v11 = v9 & 0xFFFFFFFFFFFFFFF8LL | v8;
  v12 = *(unsigned int *)(a2 + 64);
  if ( !(_DWORD)v12 )
    goto LABEL_11;
  v13 = (v12 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v14 = (const __m128i *)(v10 + 48LL * v13);
  v15 = v14->m128i_i32[2];
  if ( v14->m128i_i64[0] == v11 && v15 == a4 )
    goto LABEL_25;
  if ( !v15 && !v14->m128i_i64[0] )
  {
LABEL_11:
    v18 = sub_B4E950((v11 & 0xFFFFFFFFFFFFFFF8LL) + 72);
    if ( v18 )
      v18 -= 64LL;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2, v18);
    v19 = *(_DWORD *)(a2 + 64);
    v20 = *(_QWORD *)(a2 + 48);
    if ( v19 )
    {
      v21 = (v19 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v22 = (const __m128i *)(v20 + 48LL * v21);
      v23 = v22->m128i_i32[2];
      if ( v22->m128i_i64[0] == v11 && v23 == a4 )
        goto LABEL_24;
      if ( v22->m128i_i64[0] || v23 )
      {
        v24 = 1;
        do
        {
          v25 = v24 + 1;
          v21 = (v19 - 1) & (v24 + v21);
          v22 = (const __m128i *)(v20 + 48LL * v21);
          v26 = v22->m128i_i32[2];
          v27 = v22->m128i_i64[0];
          if ( a4 == v26 && v11 == v27 )
            goto LABEL_24;
          v24 = v25;
        }
        while ( v27 || v26 );
      }
    }
    v22 = (const __m128i *)(v20 + 48LL * v19);
LABEL_24:
    v28 = _mm_loadu_si128(v22 + 2);
    *a1 = _mm_loadu_si128(v22 + 1);
    a1[1] = v28;
    return a1;
  }
  v16 = 1;
  while ( 1 )
  {
    v13 = (v12 - 1) & (v16 + v13);
    v14 = (const __m128i *)(v10 + 48LL * v13);
    v17 = v14->m128i_i32[2];
    if ( v11 == v14->m128i_i64[0] && a4 == v17 )
      break;
    ++v16;
    if ( !v14->m128i_i64[0] && !v17 )
      goto LABEL_11;
  }
LABEL_25:
  if ( v14 == (const __m128i *)(v10 + 48 * v12) )
    goto LABEL_11;
  v30 = _mm_loadu_si128(v14 + 2);
  *a1 = _mm_loadu_si128(v14 + 1);
  a1[1] = v30;
  return a1;
}

