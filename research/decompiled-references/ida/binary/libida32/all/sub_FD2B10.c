__m128i *__fastcall sub_FD2B10(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // r12d
  unsigned __int64 *v9; // rbp
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r8d
  __int64 v15; // rcx
  unsigned __int64 *v16; // rdi
  __m128i *v17; // rdx
  unsigned __int64 v18; // r9
  __m128i si128; // xmm0
  unsigned __int64 *v20; // rdx
  int v21; // r14d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r10
  __int64 v24; // r9
  int v25; // r9d
  unsigned __int64 *v26; // r10
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __m128i *v30; // rdx
  unsigned __int64 v31; // rsi
  __m128i v32; // xmm0
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r11
  __int64 v35; // r9
  unsigned __int64 v36; // r9
  __int64 v37; // r11
  __int64 v38; // rsi
  __int64 v39; // r11
  unsigned __int64 *v40; // [rsp+0h] [rbp-58h]
  unsigned __int64 v41; // [rsp+8h] [rbp-50h]
  int v42; // [rsp+10h] [rbp-48h]
  int v43; // [rsp+14h] [rbp-44h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_DWORD *)(a1 + 16);
  v9 = *(unsigned __int64 **)a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *(_DWORD *)(a1 + 16) = v10;
  result = (__m128i *)sub_220C370(8LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = 8LL * v8;
    v14 = v12;
    v15 = 8 * v12;
    v16 = (unsigned __int64 *)((char *)v9 + v13);
    if ( result != (__m128i *)&result->m128i_i8[v15] )
    {
      v17 = result;
      v18 = ((unsigned __int64)(v15 - 8) >> 3) + 1;
      if ( v15 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v17++ = si128;
      while ( v17 != &result[v18 >> 1] );
      v17 = (__m128i *)((char *)result + 8 * (v18 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v18 & 0xFFFFFFFFFFFFFFFELL) != v18 )
LABEL_9:
        v17->m128i_i64[0] = -4096;
    }
    if ( v16 != v9 )
    {
      v20 = v9;
      v21 = v14 - 1;
      do
      {
        v22 = *v20;
        if ( *v20 != -4096 && v22 != -8192 )
        {
          if ( !v14 )
          {
            *(_QWORD *)&dword_0 = *v20;
            BUG();
          }
          v23 = *v20;
          while ( 1 )
          {
            v24 = *(_QWORD *)(v23 + 8);
            if ( !v24 )
            {
LABEL_19:
              v25 = -1916529075;
              goto LABEL_33;
            }
            v23 = v24 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v24 & 4) == 0 )
              break;
            if ( !v23 )
              goto LABEL_19;
          }
          v33 = HIDWORD(v23);
          v34 = 0x9DDFEA08EB382D69LL * (v33 ^ (((8 * v24) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v25 = -348639895
              * ((-348639895 * ((v34 >> 47) ^ v33 ^ v34))
               ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v34 >> 47) ^ v33 ^ v34)) >> 32) >> 15));
LABEL_33:
          v35 = v21 & (unsigned int)v25;
          v43 = 1;
          v26 = (unsigned __int64 *)result + v35;
          v42 = v35;
          v36 = *v26;
          v40 = nullptr;
          if ( *v26 != v22 )
          {
            while ( v36 != -4096 )
            {
              if ( v36 == -8192 )
              {
                if ( v40 )
                  v26 = v40;
                v40 = v26;
              }
              else
              {
                v41 = *v20;
                v37 = v13;
                while ( 1 )
                {
                  v38 = *(_QWORD *)(v41 + 8);
                  if ( !v38 )
                    break;
                  v41 = v38 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v38 & 4) == 0 || (v38 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  {
                    v13 = v37;
                    goto LABEL_41;
                  }
                }
                v13 = v37;
                v41 = 0;
LABEL_41:
                while ( 1 )
                {
                  v39 = *(_QWORD *)(v36 + 8);
                  if ( !v39 )
                    break;
                  v36 = v39 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v39 & 4) == 0 || !v36 )
                    goto LABEL_44;
                }
                v36 = 0;
LABEL_44:
                if ( v36 == v41 )
                  goto LABEL_22;
              }
              v26 = (unsigned __int64 *)result + (v21 & (unsigned int)(v43 + v42));
              v42 = v21 & (v43 + v42);
              v36 = *v26;
              if ( v22 == *v26 )
                goto LABEL_22;
              ++v43;
            }
            if ( v40 )
              v26 = v40;
          }
LABEL_22:
          v27 = *v20;
          ++*(_DWORD *)(a1 + 8);
          *v26 = v27;
        }
        ++v20;
      }
      while ( v16 != v20 );
    }
    return (__m128i *)operator delete();
  }
  else
  {
    v28 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v29 = 8 * v28;
    if ( result != (__m128i *)&result->m128i_i8[v29] )
    {
      v30 = result;
      v31 = ((unsigned __int64)(v29 - 8) >> 3) + 1;
      if ( v29 == 8 )
        goto LABEL_30;
      v32 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      do
        *v30++ = v32;
      while ( v30 != &result[v31 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v31 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v31 & 0xFFFFFFFFFFFFFFFELL) != v31 )
LABEL_30:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}

