unsigned int *__fastcall sub_560380(__int64 a1, const void *a2, const void *a3)
{
  const void **v4; // rax
  const void **v5; // rbp
  _QWORD *v6; // r13
  __int64 v7; // rbx
  void *v8; // rax
  char *v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  int v14; // eax
  _DWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  _DWORD *v22; // rsi
  size_t v23; // rdx
  unsigned int *result; // rax
  unsigned int v25; // r13d
  __int64 v26; // rax
  __m128i v27; // xmm0
  unsigned int *v28; // rsi
  size_t v29; // rdx
  _DWORD *v30; // r12
  __int64 v32; // [rsp+8h] [rbp-30h]

  v4 = (const void **)__dynamic_cast(
                        a2,
                        (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                        (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                        0);
  if ( !v4
    || (v5 = v4,
        (v6 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                0)) == nullptr)
    || (v7 = sub_186B270(0x50u),
        (v8 = __dynamic_cast(
                v5[1],
                (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  *(_QWORD *)(v7 + 8) = v8;
  v9 = (char *)v5[2];
  *(_QWORD *)v7 = &off_1C675A8;
  *(_QWORD *)(v7 + 16) = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 8));
    v32 = v10.m128i_i64[0];
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    *(_QWORD *)(v7 + 16) = v11 + 1;
    v12 = v5[2];
    *v11 = v10.m128i_i64[0];
    if ( v12 )
    {
      v13 = 8LL * *((unsigned int *)v12 - 1);
      if ( v13 <= 8 )
      {
        if ( v13 == 8 )
          v11[1] = *v12;
      }
      else
      {
        memmove(v11 + 1, v12, v13);
      }
    }
  }
  v14 = *((_DWORD *)v5 + 6);
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 24) = v14;
  *(_QWORD *)v7 = off_1C50F48;
  v15 = v5[5];
  *(_QWORD *)(v7 + 48) = v15;
  if ( v15 )
    ++v15[8];
  v16 = v6[5];
  *(_QWORD *)(v7 + 56) = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 32);
  v17 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v7 + 64) = 0;
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 - 4);
    v19 = *(unsigned int *)(v17 - 8);
    LODWORD(v32) = v19;
    v20 = sub_186B270(4 * v19 + 8);
    v21 = _mm_cvtsi32_si128(v32);
    v22 = *(_DWORD **)(a1 + 8);
    *(_QWORD *)(v7 + 64) = v20 + 8;
    *(_QWORD *)v20 = _mm_unpacklo_epi32(v21, _mm_cvtsi32_si128(v18)).m128i_u64[0];
    if ( v22 )
    {
      v23 = 4LL * (unsigned int)*(v22 - 1);
      if ( v23 <= 4 )
      {
        if ( v23 == 4 )
          *(_DWORD *)(v20 + 8) = *v22;
      }
      else
      {
        memmove((void *)(v20 + 8), v22, v23);
      }
    }
  }
  result = *(unsigned int **)(a1 + 16);
  *(_QWORD *)(v7 + 72) = 0;
  if ( result )
  {
    v25 = *(result - 1);
    v26 = *(result - 2);
    LODWORD(v32) = v26;
    result = (unsigned int *)sub_186B270(4 * v26 + 8);
    v27 = _mm_cvtsi32_si128(v32);
    v28 = *(unsigned int **)(a1 + 16);
    *(_QWORD *)(v7 + 72) = result + 2;
    *(_QWORD *)result = _mm_unpacklo_epi32(v27, _mm_cvtsi32_si128(v25)).m128i_u64[0];
    if ( v28 )
    {
      v29 = 4LL * *(v28 - 1);
      if ( v29 <= 4 )
      {
        if ( v29 == 4 )
          result[2] = *v28;
      }
      else
      {
        result = (unsigned int *)memmove(result + 2, v28, v29);
      }
    }
  }
  v30 = v5[5];
  ++*(_DWORD *)(v7 + 32);
  if ( v30 )
  {
    if ( v30[8]-- == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 8LL))(v30);
      result = (unsigned int *)sub_186B220(v30);
    }
  }
  v5[5] = (const void *)v7;
  return result;
}

