__int64 __fastcall sub_5601A0(__int64 a1, const void *a2)
{
  void *v2; // rax
  void *v3; // rbp
  __int64 v4; // rax
  const void *v5; // r15
  unsigned __int64 v6; // r12
  __m128i *v7; // rbx
  void *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  __int32 v14; // eax
  _QWORD *v15; // rax
  __int64 result; // rax
  _DWORD *v17; // r12

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
         0);
  if ( !v2
    || (v3 = v2,
        v4 = sub_186B270(0x48u),
        v5 = *((const void **)v3 + 1),
        v6 = *(_QWORD *)(a1 + 8),
        v7 = (__m128i *)v4,
        (v8 = __dynamic_cast(
                v5,
                (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v7->m128i_i64[1] = (__int64)v8;
  v9 = *((_QWORD *)v3 + 2);
  v7->m128i_i64[0] = (__int64)&off_1C675A8;
  v7[1].m128i_i64[0] = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 8));
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    v7[1].m128i_i64[0] = (__int64)(v11 + 1);
    v12 = *((_QWORD **)v3 + 2);
    *v11 = v10.m128i_i64[0];
    if ( v12 )
    {
      v13 = 8LL * *((unsigned int *)v12 - 1);
      if ( v13 <= 8 )
      {
        v5 = *((const void **)v3 + 1);
        if ( v13 == 8 )
          v11[1] = *v12;
      }
      else
      {
        memmove(v11 + 1, v12, v13);
        v5 = *((const void **)v3 + 1);
      }
    }
    else
    {
      v5 = *((const void **)v3 + 1);
    }
  }
  v14 = *((_DWORD *)v3 + 6);
  v7[2].m128i_i32[0] = 0;
  v7[2].m128i_i64[1] = 0;
  v7[1].m128i_i32[2] = v14;
  v7->m128i_i64[0] = (__int64)off_1C50F18;
  v15 = __dynamic_cast(
          v5,
          (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
          (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
          0);
  if ( !v15 )
    __cxa_bad_cast();
  v7[3] = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(unsigned __int64)sub_4D6490(v15[3]));
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  result = *((_QWORD *)v3 + 5);
  v7[4].m128i_i64[0] = result;
  if ( result )
    ++*(_DWORD *)(result + 32);
  v17 = *((_DWORD **)v3 + 5);
  ++v7[2].m128i_i32[0];
  if ( v17 )
  {
    if ( v17[8]-- == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
      result = sub_186B220(v17);
    }
  }
  *((_QWORD *)v3 + 5) = v7;
  return result;
}

