void __fastcall sub_63E860(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __m128i v9; // xmm0
  __m128i *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r11d
  __int64 v17; // rax
  const char *v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // rsi
  const __m128i *p_ptr; // rdx
  __m128i *v30; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-140h]
  int v33; // [rsp+48h] [rbp-128h]
  int v34; // [rsp+50h] [rbp-120h]
  __m128i v35; // [rsp+58h] [rbp-118h] BYREF
  __m128i v36; // [rsp+68h] [rbp-108h] BYREF
  __m128i v37; // [rsp+78h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+88h] [rbp-E8h]
  __m256i ptr; // [rsp+98h] [rbp-D8h] BYREF
  __m128i v40; // [rsp+B8h] [rbp-B8h]
  __int64 v41; // [rsp+C8h] [rbp-A8h]

  if ( a3 != a4 )
  {
    v6 = a3;
    do
    {
      v11 = *v6;
      v12 = *v6;
      *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
      ptr.m256i_i64[0] = (__int64)&ptr.m256i_i64[3];
      sub_11240B0(v12, &ptr);
      v13 = sub_FC8D80(*(_QWORD *)(a1 + 8), ptr.m256i_i64[0], ptr.m256i_i64[1]);
      v14 = v13;
      if ( v13 )
      {
        sub_FC8C20(&v35, v13);
      }
      else
      {
        v15 = 0;
        v16 = 0;
        if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 16 <= 0x3E )
        {
          v17 = *(_QWORD *)(v11 + 40);
          v18 = &byte_3B9466E;
          if ( (v17 & 7) == 0 )
          {
            v19 = v17 & 0xFFFFFFFFFFFFFFF8LL;
            v15 = v19;
            if ( v19 )
            {
              v18 = *(const char **)(v19 + 16);
              v15 = *(_DWORD *)v18;
              LODWORD(v18) = (_DWORD)v18 + 16;
            }
          }
          v16 = v15;
          v15 = (int)v18;
        }
        v20 = *(_QWORD *)(a1 + 8);
        if ( *(char *)(v11 + 29) < 0
          && (*(_BYTE *)(v11 + 8) & 7) != 0
          && (v33 = v15, v34 = v16, v21 = sub_794640(v11), v14 = 0, v15 = v33, v16 = v34, v21) )
        {
          v22 = (__int64 *)sub_C92EB0(v21, v20);
          v15 = v33;
          v14 = *v22;
          v16 = v34;
          v23 = v22[1];
        }
        else
        {
          v23 = 0;
        }
        sub_FC8F70((unsigned int)&v35, v20, v15, v16, ptr.m256i_i32[0], ptr.m256i_i32[2], v14, v23);
      }
      if ( (unsigned __int64 *)ptr.m256i_i64[0] != &ptr.m256i_u64[3] )
        free((void *)ptr.m256i_i64[0]);
      v7 = *(unsigned int *)(a2 + 400);
      v8 = *(_QWORD *)(a2 + 392);
      v9 = _mm_load_si128(&v35);
      v10 = (__m128i *)(v8 + 56 * v7);
      if ( v7 >= *(unsigned int *)(a2 + 404) )
      {
        *(__m128i *)ptr.m256i_i8 = v9;
        v24 = v7 + 1;
        v25 = a2 + 408;
        *(__m128i *)&ptr.m256i_u64[2] = _mm_load_si128(&v36);
        v26 = _mm_load_si128(&v37);
        v41 = v38;
        v40 = v26;
        if ( (unsigned __int64)&ptr < v8 )
        {
          sub_25D6060(a2 + 392, v25, v24, 56);
          v28 = *(_QWORD *)(a2 + 392);
          p_ptr = (const __m128i *)&ptr;
        }
        else
        {
          v32 = v8;
          v27 = a2 + 392;
          if ( &ptr < (__m256i *)v10 )
          {
            sub_25D6060(v27, v25, v24, 56);
            v28 = *(_QWORD *)(a2 + 392);
            p_ptr = (const __m128i *)&ptr.m256i_i8[v28 - v32];
          }
          else
          {
            sub_25D6060(v27, v25, v24, 56);
            v28 = *(_QWORD *)(a2 + 392);
            p_ptr = (const __m128i *)&ptr;
          }
        }
        v30 = (__m128i *)(v28 + 56LL * *(unsigned int *)(a2 + 400));
        *v30 = _mm_loadu_si128(p_ptr);
        v30[1] = _mm_loadu_si128(p_ptr + 1);
        v30[2] = _mm_loadu_si128(p_ptr + 2);
        v30[3].m128i_i64[0] = p_ptr[3].m128i_i64[0];
        ++*(_DWORD *)(a2 + 400);
      }
      else
      {
        *v10 = v9;
        v10[1] = _mm_load_si128(&v36);
        v10[2] = _mm_load_si128(&v37);
        v10[3].m128i_i64[0] = v38;
        ++*(_DWORD *)(a2 + 400);
      }
      ++v6;
    }
    while ( a4 != v6 );
  }
}

