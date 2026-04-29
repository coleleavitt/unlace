__m128i *__fastcall sub_123A40(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i *result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r12
  _DWORD *v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  size_t v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rbp
  void *v26; // rax
  const __m128i *v27; // roff
  const __m128i *v28; // rdx
  __m128i *v29; // r13
  __int64 v30; // r14
  __int8 *v31; // r13
  const void **v32; // rbp
  __int64 v33; // r8
  void *v34; // rax
  void *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 n; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  *(_DWORD *)(a1 + 4) = *((_DWORD *)a2 + 1);
  v4 = *a2;
  *(_BYTE *)a1 = v4;
  *(_BYTE *)(a1 + 1) = a2[1];
  v5 = *((unsigned __int16 *)a2 + 1);
  *(_WORD *)(a1 + 2) = v5;
  switch ( v4 )
  {
    case 2LL:
      result = (__m128i *)j__qalloc_or_throw(32, (__int64)a2, v5, a4);
      v28 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v28);
      result[1] = _mm_loadu_si128(v28 + 1);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 3LL:
    case 11LL:
      result = (__m128i *)qstrdup();
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 4LL:
      v7 = j__qalloc_or_throw(80, (__int64)a2, v5, a4);
      v8 = *((_QWORD *)a2 + 1);
      v9 = v7;
      *(_OWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v7 + 56) = 0;
      *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v7 + 72) = 0;
      result = (__m128i *)sub_1253A0(v7, v8);
      goto LABEL_5;
    case 5LL:
      result = (__m128i *)j__qalloc_or_throw(16, (__int64)a2, v5, a4);
      *result = _mm_loadu_si128((const __m128i *)*((_QWORD *)a2 + 1));
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 8LL:
      v9 = j__qalloc_or_throw(312, (__int64)a2, v5, a4);
      result = (__m128i *)sub_BE490(v9, *((__int64 **)a2 + 1), v10, v11);
      goto LABEL_5;
    case 9LL:
      result = (__m128i *)j__qalloc_or_throw(24, (__int64)a2, v5, a4);
      v12 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = *(_QWORD *)v12;
      result->m128i_i64[1] = *(_QWORD *)(v12 + 8);
      result[1].m128i_i32[0] = *(_DWORD *)(v12 + 16);
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 10LL:
      v13 = j__qalloc_or_throw(24, (__int64)a2, v5, a4);
      v14 = *((_QWORD *)a2 + 1);
      v15 = v13;
      sub_123A40(v13);
      result = *(__m128i **)(v14 + 16);
      *(_QWORD *)(v15 + 16) = result;
      *(_QWORD *)(a1 + 8) = v15;
      return result;
    case 12LL:
      result = (__m128i *)j__qalloc_or_throw(48, (__int64)a2, v5, a4);
      v23 = *((_QWORD *)a2 + 1);
      result->m128i_i64[0] = 0;
      v9 = (__int64)result;
      *(__m128i *)((char *)result + 8) = 0;
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
      {
        v36 = *(_QWORD *)(v23 + 8);
        result = (__m128i *)qalloc_or_throw(24 * v24, (__int64)a2, v22, v24);
        v24 = v36;
        *(_QWORD *)v9 = result;
        v29 = result;
        v30 = 0;
        *(_QWORD *)(v9 + 16) = v36;
        while ( 1 )
        {
          v31 = &v29->m128i_i8[24 * v30];
          v22 = *(_QWORD *)v23 + 24 * v30;
          *(_QWORD *)v31 = 0;
          v32 = (const void **)v22;
          *(_OWORD *)(v31 + 8) = 0;
          v33 = *(_QWORD *)(v22 + 8);
          if ( v33 )
          {
            v39 = v24;
            v37 = *(_QWORD *)(v22 + 8);
            n = 8 * v33;
            v34 = (void *)qalloc_or_throw(8 * v33, (__int64)a2, 8 * v33, v24);
            *(_QWORD *)v31 = v34;
            *((_QWORD *)v31 + 2) = v37;
            a2 = (unsigned __int8 *)*v32;
            result = (__m128i *)memcpy(v34, *v32, n);
            v24 = v39;
            *((_QWORD *)v31 + 1) = v37;
          }
          if ( v24 == ++v30 )
            break;
          v29 = *(__m128i **)v9;
        }
        *(_QWORD *)(v9 + 8) = v24;
      }
      *(_QWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 32) = 0;
      v25 = *(_QWORD *)(v23 + 32);
      if ( v25 )
      {
        v26 = (void *)qalloc_or_throw(4 * v25, (__int64)a2, v22, v24);
        *(_QWORD *)(v9 + 24) = v26;
        *(_QWORD *)(v9 + 40) = v25;
        result = (__m128i *)memcpy(v26, *(const void **)(v23 + 24), 4 * v25);
        *(_QWORD *)(v9 + 32) = v25;
      }
      goto LABEL_5;
    case 13LL:
      result = (__m128i *)j__qalloc_or_throw(20, (__int64)a2, v5, a4);
      v27 = *((const __m128i **)a2 + 1);
      *result = _mm_loadu_si128(v27);
      result[1].m128i_i32[0] = v27[1].m128i_i32[0];
      *(_QWORD *)(a1 + 8) = result;
      return result;
    case 14LL:
      v9 = j__qalloc_or_throw(32, (__int64)a2, v5, a4);
      sub_123A40(v9);
      result = (__m128i *)sub_123A40(v9 + 16);
      goto LABEL_5;
    case 15LL:
      v16 = (_DWORD *)qalloc_or_throw(56, (__int64)a2, v5, a4);
      v17 = *((_QWORD *)a2 + 1);
      *v16 = 0;
      v9 = (__int64)v16;
      copy_argloc();
      v20 = *(_QWORD *)(v17 + 16);
      *(_QWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 16) = v20;
      v21 = *(_QWORD *)(v17 + 32);
      if ( v21 )
      {
        v35 = (void *)qalloc_or_throw(*(_QWORD *)(v17 + 32), v17, v18, v19);
        *(_QWORD *)(v9 + 24) = v35;
        *(_QWORD *)(v9 + 40) = v21;
        memcpy(v35, *(const void **)(v17 + 24), v21);
        *(_QWORD *)(v9 + 32) = v21;
      }
      *(_QWORD *)(v9 + 48) = 0;
      result = (__m128i *)copy_tinfo_t();
LABEL_5:
      *(_QWORD *)(a1 + 8) = v9;
      break;
    default:
      result = *((__m128i **)a2 + 1);
      *(_QWORD *)(a1 + 8) = result;
      break;
  }
  return result;
}
