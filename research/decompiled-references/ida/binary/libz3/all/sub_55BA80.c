__int64 __fastcall sub_55BA80(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i *v13; // rax
  __int64 *v14; // rsi
  const __m128i *v15; // r14
  size_t v16; // rdx
  int v17; // r15d
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  size_t v20; // rdx
  int v21; // eax
  __int64 (__fastcall **v23)(__int64); // rax
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-48h]
  void *src; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(v4 + 40);
  if ( !v5 )
  {
    v23 = *(__int64 (__fastcall ***)(__int64))v4;
    src = a3;
    v26 = a2;
    v24 = (*v23)(v4);
    v25 = *(void **)(v4 + 40);
    v5 = v24;
    if ( (void *)v24 != v25 && v25 )
      sub_4D63E0(v25);
    *(_QWORD *)(v4 + 40) = v5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 128LL))(v5);
  v7 = sub_186B270(0x30u);
  v8 = sub_186B270(0x30u);
  v9 = __dynamic_cast(
         *(const void **)(a1 + 8),
         (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
         0);
  v10 = v9;
  if ( !v9 )
    __cxa_bad_cast();
  *(_QWORD *)(v8 + 8) = v9;
  *(_QWORD *)v8 = &off_1C675A8;
  v11 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v8 + 16) = 0;
  if ( v11 )
  {
    v12 = _mm_loadl_epi64((const __m128i *)(v11 - 8));
    v26 = v12.m128i_i64[0];
    v13 = (__m128i *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v12) + 8);
    v14 = *(__int64 **)(v6 + 16);
    v15 = v13;
    src = &v13->m128i_u64[1];
    *(_QWORD *)(v8 + 16) = &v13->m128i_i64[1];
    v13->m128i_i64[0] = v12.m128i_i64[0];
    if ( v14 )
    {
      v16 = 8LL * *((unsigned int *)v14 - 1);
      if ( v16 <= 8 )
      {
        if ( v16 == 8 )
          v13->m128i_i64[1] = *v14;
      }
      else
      {
        memcpy(&v13->m128i_u64[1], v14, v16);
      }
    }
    v17 = *(_DWORD *)(v6 + 24);
    v18 = _mm_loadl_epi64(v15);
    *(_QWORD *)(v8 + 40) = v6;
    *(_QWORD *)v8 = off_1C50BA0;
    *(_QWORD *)v7 = qword_1C67518;
    *(_DWORD *)(v8 + 24) = v17;
    *(_DWORD *)(v8 + 32) = 0;
    *(_QWORD *)(v7 + 8) = v10;
    v26 = v18.m128i_i64[0];
    v19 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v18) + 8);
    v18.m128i_i64[0] = v26;
    v20 = 8LL * v15->m128i_u32[1];
    *(_QWORD *)(v7 + 16) = v19 + 1;
    *v19 = v18.m128i_i64[0];
    if ( v20 <= 8 )
    {
      if ( v20 == 8 )
        v19[1] = v15->m128i_i64[1];
    }
    else
    {
      memcpy(v19 + 1, src, v20);
    }
  }
  else
  {
    v17 = *(_DWORD *)(v6 + 24);
    *(_QWORD *)(v8 + 40) = v6;
    *(_QWORD *)v8 = off_1C50BA0;
    *(_DWORD *)(v8 + 24) = v17;
    *(_QWORD *)(v7 + 8) = v10;
    *(_QWORD *)(v7 + 16) = 0;
  }
  v21 = v10[2];
  *(_DWORD *)(v7 + 24) = v17;
  *(_QWORD *)(v7 + 40) = v8;
  *(_DWORD *)(v7 + 32) = v21;
  *(_QWORD *)v7 = &off_1C675D8;
  *(_DWORD *)(v8 + 32) = 1;
  return v7;
}

