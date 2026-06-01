__m128i *__fastcall sub_2065F30(__int64 a1, unsigned int a2, __int32 a3, __int8 a4, __int8 a5, __int32 a6, __int8 a7)
{
  __int64 v8; // r13
  __m128i *v9; // rbp
  __m128i *v10; // r11
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int32 *v15; // r10
  __m128i *result; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // rbx
  const __m128i *v20; // r8
  __m128i *v21; // r15
  __int64 v22; // rdi
  __int8 *v23; // rcx
  __int64 v24; // rax
  __int8 *v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  const __m128i *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rsi
  char *v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  unsigned int v39; // [rsp+0h] [rbp-58h] BYREF
  __int32 v40; // [rsp+4h] [rbp-54h]
  __int8 v41; // [rsp+8h] [rbp-50h]
  __int8 v42; // [rsp+9h] [rbp-4Fh]
  __int32 v43; // [rsp+Ch] [rbp-4Ch]
  __int8 v44; // [rsp+10h] [rbp-48h]

  v8 = *(unsigned int *)(a1 + 280);
  v9 = *(__m128i **)(a1 + 272);
  v10 = v9;
  v11 = 20 * v8;
  v12 = 5 * v8;
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((20 * v8) >> 2);
  if ( 20 * v8 )
  {
    do
    {
      while ( 1 )
      {
        v14 = v13 >> 1;
        v15 = &v10->m128i_i32[5 * (v13 >> 1)];
        if ( *v15 >= a2 )
          break;
        v10 = (__m128i *)(v15 + 5);
        v13 = v13 - v14 - 1;
        if ( v13 <= 0 )
          goto LABEL_4;
      }
      v13 >>= 1;
    }
    while ( v14 );
    result = (__m128i *)((char *)v9 + v11);
    if ( &v9->m128i_i8[v11] == (__int8 *)v10 )
      goto LABEL_15;
LABEL_5:
    if ( v10->m128i_i32[0] == a2 )
    {
      v10->m128i_i32[1] = a3;
      v10->m128i_i8[8] = a4;
      v10->m128i_i8[9] = a5;
      v10->m128i_i32[3] = a6;
      v10[1].m128i_i8[0] = a7;
    }
    else
    {
      v41 = a4;
      v17 = *(unsigned int *)(a1 + 284);
      v40 = a3;
      v18 = v8 + 1;
      v19 = (char *)((char *)v10 - (char *)v9);
      v42 = a5;
      v20 = (const __m128i *)&v39;
      v44 = a7;
      v21 = (__m128i *)&v39;
      v39 = a2;
      v43 = a6;
      if ( v8 + 1 > v17 )
      {
        v33 = a1 + 272;
        v34 = a1 + 288;
        if ( v9 > (__m128i *)&v39 || result <= (__m128i *)&v39 )
        {
          sub_2237220(v33, v34, v18, 20);
          v9 = *(__m128i **)(a1 + 272);
          v20 = (const __m128i *)&v39;
          v10 = (__m128i *)&v19[(_QWORD)v9];
          v12 = 5LL * *(unsigned int *)(a1 + 280);
          result = (__m128i *)((char *)v9 + v12 * 4);
        }
        else
        {
          v35 = (char *)((char *)&v39 - (char *)v9);
          sub_2237220(v33, v34, v18, 20);
          v9 = *(__m128i **)(a1 + 272);
          v20 = (const __m128i *)&v35[(_QWORD)v9];
          v12 = 5LL * *(unsigned int *)(a1 + 280);
          v10 = (__m128i *)&v19[(_QWORD)v9];
          v21 = (__m128i *)&v35[(_QWORD)v9];
          result = (__m128i *)((char *)v9 + v12 * 4);
        }
      }
      *result = _mm_loadu_si128((__m128i *)((char *)v9 + v12 * 4 - 20));
      result[1].m128i_i32[0] = v9->m128i_i32[v12 - 1];
      v22 = *(unsigned int *)(a1 + 280);
      v23 = &v9->m128i_i8[20 * v22];
      v24 = 20 * v22 - 20;
      v25 = &v9->m128i_i8[v24];
      v26 = v24 - (_QWORD)v19;
      v27 = 0xCCCCCCCCCCCCCCCDLL * (v26 >> 2);
      if ( v26 > 0 )
      {
        v28 = -20;
        do
        {
          *(__m128i *)&v23[v28] = _mm_loadu_si128((const __m128i *)&v25[v28]);
          v23[v28 + 16] = v25[v28 + 16];
          v28 -= 20;
          --v27;
        }
        while ( v27 );
        LODWORD(v22) = *(_DWORD *)(a1 + 280);
      }
      v29 = (unsigned int)(v22 + 1);
      *(_DWORD *)(a1 + 280) = v29;
      if ( v10 <= v21 && (__m128i *)((char *)v9 + 20 * v29) > v21 )
        v20 = (const __m128i *)((char *)v20 + 20);
      *v10 = _mm_loadu_si128(v20);
      result = (__m128i *)v20[1].m128i_u8[0];
      v10[1].m128i_i8[0] = (char)result;
    }
    return result;
  }
LABEL_4:
  result = (__m128i *)((char *)v9 + v11);
  if ( &v9->m128i_i8[v11] != (__int8 *)v10 )
    goto LABEL_5;
LABEL_15:
  v30 = *(unsigned int *)(a1 + 284);
  v40 = a3;
  v31 = v8 + 1;
  v32 = (const __m128i *)&v39;
  v39 = a2;
  v41 = a4;
  v42 = a5;
  v43 = a6;
  v44 = a7;
  if ( v8 + 1 > v30 )
  {
    v36 = a1 + 272;
    v37 = a1 + 288;
    if ( v9 > (__m128i *)&v39 || v10 <= (__m128i *)&v39 )
    {
      sub_2237220(v36, v37, v31, 20);
      v10 = (__m128i *)(*(_QWORD *)(a1 + 272) + 20LL * *(unsigned int *)(a1 + 280));
    }
    else
    {
      sub_2237220(v36, v37, v31, 20);
      v38 = *(_QWORD *)(a1 + 272);
      v32 = (const __m128i *)(v38 + (char *)&v39 - (char *)v9);
      v10 = (__m128i *)(v38 + 20LL * *(unsigned int *)(a1 + 280));
    }
  }
  *v10 = _mm_loadu_si128(v32);
  result = (__m128i *)v32[1].m128i_u32[0];
  v10[1].m128i_i32[0] = (int)result;
  ++*(_DWORD *)(a1 + 280);
  return result;
}
