__m128i *__fastcall sub_11EE80(__int64 a1, unsigned __int8 *a2)
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
  __int64 v16; // rcx
  __int64 v17; // rbp
  void *v18; // rax
  const __m128i *v19; // roff
  __int64 v20; // rax
  __int64 v21; // rbp
  const __m128i *v22; // rdx
  __int64 v23; // rcx
  __m128i *v24; // r13
  __int64 v25; // r14
  __int8 *v26; // r13
  __int64 v27; // rdx
  const void **v28; // rbp
  __int64 v29; // r8
  void *v30; // rax
  void *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 n; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  *(_DWORD *)(a1 + 4) = *((_DWORD *)a2 + 1);
  v2 = *a2;
  *(_BYTE *)a1 = v2;
  *(_BYTE *)(a1 + 1) = a2[1];
  *(_WORD *)(a1 + 2) = *((_WORD *)a2 + 1);
  switch ( v2 )
  {
    case 2LL:
      result = (__m128i *)j__qalloc_or_throw(32);
      v22 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v22);
      result[1] = _mm_loadu_si128(v22 + 1);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 3LL:
    case 11LL:
      result = (__m128i *)qstrdup(*((_QWORD *)a2 + 1));
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 4LL:
      v4 = j__qalloc_or_throw(80);
      v5 = *((_QWORD *)a2 + 1);
      v6 = v4;
      *(_OWORD *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 40) = 0;
      *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 56) = 0;
      *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v4 + 72) = 0;
      result = (__m128i *)sub_1207E0(v4, v5);
      goto LABEL_5;
    case 5LL:
      result = (__m128i *)j__qalloc_or_throw(16);
      *result = _mm_loadu_si128((const __m128i *)*((_QWORD *)a2 + 1));
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 8LL:
      v6 = j__qalloc_or_throw(312);
      result = (__m128i *)sub_B98D0(v6, *((__int64 **)a2 + 1));
      goto LABEL_5;
    case 9LL:
      result = (__m128i *)j__qalloc_or_throw(24);
      v7 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = *(_QWORD *)v7;
      result->m128i_i64[1] = *(_QWORD *)(v7 + 8);
      result[1].m128i_i32[0] = *(_DWORD *)(v7 + 16);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 10LL:
      v8 = j__qalloc_or_throw(24);
      v9 = *((_QWORD *)a2 + 1);
      v10 = v8;
      sub_11EE80(v8, v9);
      result = *(__m128i **)(v9 + 16);
      *(_QWORD *)(v10 + 16) = result;
      *(_QWORD *)(a1 + 8) = v10;
      return result;
    case 12LL:
      result = (__m128i *)j__qalloc_or_throw(48);
      v15 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = 0;
      v6 = (__int64)result;
      *(__m128i *)((char *)result + 8) = 0;
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
      {
        v32 = *(_QWORD *)(v15 + 8);
        result = (__m128i *)qalloc_or_throw(24 * v16);
        v23 = v32;
        *(_QWORD *)v6 = result;
        v24 = result;
        v25 = 0;
        *(_QWORD *)(v6 + 16) = v32;
        while ( 1 )
        {
          v26 = &v24->m128i_i8[24 * v25];
          v27 = *(_QWORD *)v15 + 24 * v25;
          *(_QWORD *)v26 = 0;
          v28 = (const void **)v27;
          *(_OWORD *)(v26 + 8) = 0;
          v29 = *(_QWORD *)(v27 + 8);
          if ( v29 )
          {
            v35 = v23;
            v33 = *(_QWORD *)(v27 + 8);
            n = 8 * v29;
            v30 = (void *)qalloc_or_throw(8 * v29);
            *(_QWORD *)v26 = v30;
            *((_QWORD *)v26 + 2) = v33;
            result = (__m128i *)memcpy(v30, *v28, n);
            v23 = v35;
            *((_QWORD *)v26 + 1) = v33;
          }
          if ( v23 == ++v25 )
            break;
          v24 = *(__m128i **)v6;
        }
        *(_QWORD *)(v6 + 8) = v23;
      }
      *(_QWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 32) = 0;
      v17 = *(_QWORD *)(v15 + 32);
      if ( v17 )
      {
        v18 = (void *)qalloc_or_throw(4 * v17);
        *(_QWORD *)(v6 + 24) = v18;
        *(_QWORD *)(v6 + 40) = v17;
        result = (__m128i *)memcpy(v18, *(const void **)(v15 + 24), 4 * v17);
        *(_QWORD *)(v6 + 32) = v17;
      }
      goto LABEL_5;
    case 13LL:
      result = (__m128i *)j__qalloc_or_throw(20);
      v19 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v19);
      result[1].m128i_i32[0] = v19[1].m128i_i32[0];
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 14LL:
      v20 = j__qalloc_or_throw(32);
      v21 = *((_QWORD *)a2 + 1);
      v6 = v20;
      sub_11EE80(v20, v21);
      result = (__m128i *)sub_11EE80(v6 + 16, v21 + 16);
      goto LABEL_5;
    case 15LL:
      v11 = (_DWORD *)qalloc_or_throw(56);
      v12 = *((_QWORD *)a2 + 1);
      *v11 = 0;
      v6 = (__int64)v11;
      copy_argloc(v11, v12);
      v13 = *(_QWORD *)(v12 + 16);
      *(_QWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 16) = v13;
      v14 = *(_QWORD *)(v12 + 32);
      if ( v14 )
      {
        v31 = (void *)qalloc_or_throw(*(_QWORD *)(v12 + 32));
        *(_QWORD *)(v6 + 24) = v31;
        *(_QWORD *)(v6 + 40) = v14;
        memcpy(v31, *(const void **)(v12 + 24), v14);
        *(_QWORD *)(v6 + 32) = v14;
      }
      *(_QWORD *)(v6 + 48) = 0;
      result = (__m128i *)copy_tinfo_t(v6 + 48, v12 + 48);
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
