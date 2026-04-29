__m128i *__fastcall sub_123A40(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __m128i *result; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  _DWORD *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  size_t v14; // r13
  __int64 v15; // r15
  __int64 v16; // rbp
  void *v17; // rax
  const __m128i *v18; // roff
  __int64 v19; // rax
  __int64 v20; // rbp
  const __m128i *v21; // rdx
  __int64 v22; // rcx
  __m128i *v23; // r13
  __int64 v24; // r14
  __int8 *v25; // r13
  __int64 v26; // rdx
  const void **v27; // rbp
  __int64 v28; // r8
  void *v29; // rax
  void *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 n; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+18h] [rbp-40h]

  *(_DWORD *)(a1 + 4) = *((_DWORD *)a2 + 1);
  v2 = *a2;
  *(_BYTE *)a1 = v2;
  *(_BYTE *)(a1 + 1) = a2[1];
  *(_WORD *)(a1 + 2) = *((_WORD *)a2 + 1);
  switch ( v2 )
  {
    case 2LL:
      result = (__m128i *)j__qalloc_or_throw();
      v21 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v21);
      result[1] = _mm_loadu_si128(v21 + 1);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 3LL:
    case 11LL:
      result = (__m128i *)qstrdup();
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 4LL:
      v4 = j__qalloc_or_throw();
      v5 = *((_QWORD *)a2 + 1);
      v6 = v4;
      *(_OWORD *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 40) = 0;
      *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 56) = 0;
      *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 72) = 0;
      result = (__m128i *)sub_1253A0(v4, v5);
      goto LABEL_5;
    case 5LL:
      result = (__m128i *)j__qalloc_or_throw();
      *result = _mm_loadu_si128((const __m128i *)*((_QWORD *)a2 + 1));
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 8LL:
      v6 = j__qalloc_or_throw();
      result = (__m128i *)sub_BE490(v6, *((__int64 **)a2 + 1));
      goto LABEL_5;
    case 9LL:
      result = (__m128i *)j__qalloc_or_throw();
      v7 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = *(_QWORD *)v7;
      result->m128i_i64[1] = *(_QWORD *)(v7 + 8);
      result[1].m128i_i32[0] = *(_DWORD *)(v7 + 16);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 10LL:
      v8 = j__qalloc_or_throw();
      v9 = *((_QWORD *)a2 + 1);
      v10 = v8;
      sub_123A40(v8, v9);
      result = *(__m128i **)(v9 + 16);
      *(_QWORD *)(v10 + 16) = result;
      *(_QWORD *)(a1 + 8) = v10;
      return result;
    case 12LL:
      result = (__m128i *)j__qalloc_or_throw();
      v15 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = 0;
      v6 = (__int64)result;
      *(__m128i *)((char *)result + 8) = 0;
      if ( *(_QWORD *)(v15 + 8) )
      {
        v31 = *(_QWORD *)(v15 + 8);
        result = (__m128i *)qalloc_or_throw();
        v22 = v31;
        *(_QWORD *)v6 = result;
        v23 = result;
        v24 = 0;
        *(_QWORD *)(v6 + 16) = v31;
        while ( 1 )
        {
          v25 = &v23->m128i_i8[24 * v24];
          v26 = *(_QWORD *)v15 + 24 * v24;
          *(_QWORD *)v25 = 0;
          v27 = (const void **)v26;
          *(_OWORD *)(v25 + 8) = 0;
          v28 = *(_QWORD *)(v26 + 8);
          if ( v28 )
          {
            v34 = v22;
            v32 = *(_QWORD *)(v26 + 8);
            n = 8 * v28;
            v29 = (void *)qalloc_or_throw();
            *(_QWORD *)v25 = v29;
            *((_QWORD *)v25 + 2) = v32;
            result = (__m128i *)memcpy(v29, *v27, n);
            v22 = v34;
            *((_QWORD *)v25 + 1) = v32;
          }
          if ( v22 == ++v24 )
            break;
          v23 = *(__m128i **)v6;
        }
        *(_QWORD *)(v6 + 8) = v22;
      }
      *(_QWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 32) = 0;
      v16 = *(_QWORD *)(v15 + 32);
      if ( v16 )
      {
        v17 = (void *)qalloc_or_throw();
        *(_QWORD *)(v6 + 24) = v17;
        *(_QWORD *)(v6 + 40) = v16;
        result = (__m128i *)memcpy(v17, *(const void **)(v15 + 24), 4 * v16);
        *(_QWORD *)(v6 + 32) = v16;
      }
      goto LABEL_5;
    case 13LL:
      result = (__m128i *)j__qalloc_or_throw();
      v18 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v18);
      result[1].m128i_i32[0] = v18[1].m128i_i32[0];
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 14LL:
      v19 = j__qalloc_or_throw();
      v20 = *((_QWORD *)a2 + 1);
      v6 = v19;
      sub_123A40(v19, v20);
      result = (__m128i *)sub_123A40(v6 + 16, v20 + 16);
      goto LABEL_5;
    case 15LL:
      v11 = (_DWORD *)qalloc_or_throw();
      v12 = *((_QWORD *)a2 + 1);
      *v11 = 0;
      v6 = (__int64)v11;
      copy_argloc();
      v13 = *(_QWORD *)(v12 + 16);
      *(_QWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 16) = v13;
      v14 = *(_QWORD *)(v12 + 32);
      if ( v14 )
      {
        v30 = (void *)qalloc_or_throw();
        *(_QWORD *)(v6 + 24) = v30;
        *(_QWORD *)(v6 + 40) = v14;
        memcpy(v30, *(const void **)(v12 + 24), v14);
        *(_QWORD *)(v6 + 32) = v14;
      }
      *(_QWORD *)(v6 + 48) = 0;
      result = (__m128i *)copy_tinfo_t();
LABEL_5:
      *(_QWORD *)(a1 + 8) = v6;
      break;
    default:
      result = *((__m128i **)a2 + 1);
      *(_QWORD *)(a1 + 8) = result;
      break;
  }
  return result;
}
