void __fastcall sub_1D38630(__int64 a1)
{
  unsigned int *v2; // rbx
  __int64 v3; // r13
  __m128i *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // edx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __m128i *v10; // rbp
  unsigned __int64 v11; // rcx
  __m128i *v12; // rax
  unsigned __int64 v13; // rcx
  __m128i *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  const __m128i *v17; // rax
  __m128i v18; // xmm5
  __int32 v19; // ebp
  char v20; // r11
  __int8 v21; // si
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int8 v24; // dl
  int v25; // ebp
  char v26; // si
  unsigned __int32 v27; // eax
  unsigned int *v28; // rsi
  __int8 *v29; // rbp
  __int64 v30; // rax
  const __m128i *v31; // rbp
  unsigned __int64 v32; // rdx
  __m128i *v33; // rax
  unsigned int *v34; // rdi
  unsigned int *v35; // rsi
  __int8 *v36; // rbp
  unsigned int *i; // [rsp+0h] [rbp-68h]
  unsigned int *v38; // [rsp+8h] [rbp-60h]
  __m128i v39; // [rsp+10h] [rbp-58h] BYREF
  __m128i v40; // [rsp+20h] [rbp-48h]

  if ( !*(_BYTE *)(a1 + 39) )
  {
    v2 = *(unsigned int **)(a1 + 48);
    v3 = 56LL * *(unsigned int *)(a1 + 56);
    for ( i = &v2[v3]; i != v2; *v4 = _mm_load_si128(&v39) )
    {
      while ( 1 )
      {
        v4 = (__m128i *)(**(_QWORD **)(a1 + 16) + 32LL * *v2);
        v5 = v2[20];
        if ( (_DWORD)v5 || (v4->m128i_i32[0] & 0x7FFFFFFF) != 0 )
          break;
        v2 += 56;
        if ( i == v2 )
          goto LABEL_17;
      }
      v6 = *(unsigned int *)(a1 + 32);
      v7 = v6;
      if ( (unsigned int)v5 < (unsigned int)v6 )
      {
        v38 = v2 + 18;
        do
        {
          v8 = v2[21];
          v9 = v5 + 1;
          v40.m128i_i8[8] = 0;
          v10 = &v39;
          v39 = (__m128i)(0xFFFFFFFE00000000LL & v39.m128i_u64[0]);
          v11 = *((_QWORD *)v2 + 9);
          if ( v5 + 1 > v8 )
          {
            v28 = v2 + 22;
            if ( v11 <= (unsigned __int64)&v39 && (unsigned __int64)&v39 < v11 + 32 * v5 )
            {
              v29 = &v39.m128i_i8[-v11];
              sub_2237220(v38, v28, v9, 32);
              v11 = *((_QWORD *)v2 + 9);
              v5 = v2[20];
              v10 = (__m128i *)&v29[v11];
            }
            else
            {
              sub_2237220(v38, v28, v9, 32);
              v11 = *((_QWORD *)v2 + 9);
              v5 = v2[20];
            }
          }
          v12 = (__m128i *)(v11 + 32 * v5);
          *v12 = _mm_loadu_si128(v10);
          v12[1] = _mm_loadu_si128(v10 + 1);
          v5 = v2[20] + 1;
          v2[20] = v5;
          v7 = *(_DWORD *)(a1 + 32);
        }
        while ( v7 > (unsigned int)v5 );
        v6 = v7;
      }
      v13 = *((_QWORD *)v2 + 9);
      if ( v7 == (_DWORD)v5 )
      {
        v30 = v7;
        v31 = v4;
        v32 = v7 + 1LL;
        if ( v32 > v2[21] )
        {
          v34 = v2 + 18;
          v35 = v2 + 22;
          if ( v13 > (unsigned __int64)v4 || (unsigned __int64)v4 >= v13 + 32 * v30 )
          {
            v31 = v4;
            sub_2237220(v34, v35, v32, 32);
            v13 = *((_QWORD *)v2 + 9);
            v30 = v2[20];
          }
          else
          {
            v36 = &v4->m128i_i8[-v13];
            sub_2237220(v34, v35, v32, 32);
            v13 = *((_QWORD *)v2 + 9);
            v30 = v2[20];
            v31 = (const __m128i *)&v36[v13];
          }
        }
        v33 = (__m128i *)(v13 + 32 * v30);
        *v33 = _mm_loadu_si128(v31);
        v33[1] = _mm_loadu_si128(v31 + 1);
        v15 = v2[20] + 1;
        v2[20] = v15;
      }
      else
      {
        v14 = (__m128i *)(v13 + 32 * v6);
        *v14 = _mm_loadu_si128(v4);
        v14[1].m128i_i64[0] = v4[1].m128i_i64[0];
        v14[1].m128i_i8[8] = v4[1].m128i_i8[8];
        v15 = v2[20];
      }
      v16 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
      if ( (unsigned int)v16 >= v15 )
      {
        v26 = 0;
        v20 = 0;
        v24 = 0;
        v23 = 0;
        v22 = 0;
        v25 = 0;
      }
      else
      {
        v17 = (const __m128i *)(*((_QWORD *)v2 + 9) + 32 * v16);
        v18 = _mm_loadu_si128(v17 + 1);
        v19 = v17->m128i_i32[0];
        v20 = (unsigned __int8)v17->m128i_i8[3] >> 7;
        v21 = v17->m128i_i8[4];
        v22 = v17->m128i_i64[1];
        v39 = _mm_loadu_si128(v17);
        v23 = v17[1].m128i_i64[0];
        v24 = v17[1].m128i_i8[8];
        v40 = v18;
        v25 = v19 & 0x7FFFFFFF;
        v26 = v21 & 1;
      }
      v39.m128i_i64[1] = v22;
      v2 += 56;
      v40.m128i_i64[0] = v23;
      v40.m128i_i8[8] = v24;
      v27 = v25 | v39.m128i_i32[0] & 0x80000000;
      v4[1].m128i_i64[0] = v23;
      v39.m128i_i32[0] = v27;
      v4[1].m128i_i8[8] = v24;
      v39.m128i_i8[3] = (v20 << 7) | HIBYTE(v27) & 0x7F;
      v39.m128i_i8[4] = v39.m128i_i8[4] & 0xFE | v26;
    }
  }
LABEL_17:
  ++*(_DWORD *)(a1 + 32);
}
