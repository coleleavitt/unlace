__m128i *__fastcall sub_2087880(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 *v9; // r12
  unsigned int v10; // edi
  __m128i *result; // rax
  __int64 *v12; // r14
  __int64 v13; // rcx
  __m128i *v14; // rdx
  unsigned __int64 v15; // rsi
  __m128i si128; // xmm0
  __int64 *v17; // rbp
  __int64 **v18; // r13
  __int64 v19; // rax
  int v20; // ebx
  unsigned __int8 v21; // dl
  __int64 *v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // rdx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 *v30; // rdx
  __int64 v31; // rdi
  int v32; // r10d
  __int64 *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __m128i *v36; // rdx
  unsigned __int64 v37; // rsi
  __m128i v38; // xmm0
  __int64 v39; // [rsp+18h] [rbp-60h]
  __int64 v40; // [rsp+28h] [rbp-50h] BYREF
  int v41[18]; // [rsp+30h] [rbp-48h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
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
  *((_DWORD *)a1 + 4) = v10;
  result = (__m128i *)sub_22300B0(8LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64 *)result;
  if ( v9 )
  {
    a1[1] = nullptr;
    v39 = 8 * v8;
    v12 = &v9[v8];
    v13 = 8LL * *((unsigned int *)a1 + 4);
    if ( result != (__m128i *)&result->m128i_i8[v13] )
    {
      v14 = result;
      v15 = ((unsigned __int64)(v13 - 8) >> 3) + 1;
      if ( v13 == 8 )
        goto LABEL_9;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v14++ = si128;
      while ( v14 != &result[v15 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v15 & 0xFFFFFFFFFFFFFFFELL));
      if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_9:
        result->m128i_i64[0] = -4096;
    }
    v17 = v9;
    if ( v12 != v9 )
    {
      v18 = a1;
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 != -8192 && v19 != -4096 )
          break;
LABEL_29:
        if ( v12 == ++v17 )
          return (__m128i *)operator delete(v9, v39, 8);
      }
      v20 = *((_DWORD *)v18 + 4);
      if ( !v20 )
      {
        *(_QWORD *)&dword_0 = *v17;
        BUG();
      }
      v21 = *(_BYTE *)(v19 - 16);
      v22 = *v18;
      v23 = *v17;
      if ( (v21 & 2) != 0 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v19 - 32) + 8LL);
        if ( *(_BYTE *)v19 == 16 )
          goto LABEL_19;
        v25 = *(__int64 **)(v19 - 32);
      }
      else
      {
        v25 = (__int64 *)(v19 + -16 - 8LL * ((v21 >> 2) & 0xF));
        v24 = v25[1];
        if ( *(_BYTE *)v19 == 16 )
        {
LABEL_19:
          v40 = v23;
          v26 = v20 - 1;
          v41[0] = *(_DWORD *)(v19 + 4);
          v27 = sub_206F1A0(v24, &v40, v41);
          v28 = *v17;
          v29 = v26 & v27;
          v30 = &v22[v29];
          v31 = *v30;
          if ( *v17 != *v30 && v31 != -4096 )
          {
            v32 = 1;
            v33 = nullptr;
            while ( 1 )
            {
              if ( v33 || v31 != -8192 )
                v30 = v33;
              v29 = v26 & (v32 + v29);
              v31 = v22[v29];
              if ( v31 == v28 )
              {
                v30 = &v22[v29];
                goto LABEL_28;
              }
              if ( v31 == -4096 )
                break;
              v33 = v30;
              ++v32;
              v30 = &v22[v29];
            }
            if ( !v30 )
              v30 = &v22[v29];
          }
LABEL_28:
          *v30 = v28;
          ++*((_DWORD *)v18 + 2);
          goto LABEL_29;
        }
      }
      v23 = *v25;
      goto LABEL_19;
    }
    return (__m128i *)operator delete(v9, v39, 8);
  }
  else
  {
    v34 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v35 = 8 * v34;
    if ( result != (__m128i *)&result->m128i_i8[v35] )
    {
      v36 = result;
      v37 = ((unsigned __int64)(v35 - 8) >> 3) + 1;
      if ( v35 == 8 )
        goto LABEL_39;
      v38 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v36++ = v38;
      while ( v36 != &result[v37 >> 1] );
      result = (__m128i *)((char *)result + 8 * (v37 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v37 & 0xFFFFFFFFFFFFFFFELL) != v37 )
LABEL_39:
        result->m128i_i64[0] = -4096;
    }
  }
  return result;
}
