__int64 (__fastcall **__fastcall sub_55B790(__int64 a1))()
{
  __int64 v1; // rbx
  _QWORD **v2; // rax
  __int64 v3; // r12
  void *v4; // rax
  __int64 v5; // rax
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  size_t v9; // rdx
  int v10; // eax
  _DWORD *v11; // r12
  __int64 (__fastcall **result)(); // rax
  __int64 v14; // [rsp+8h] [rbp-30h]

  v1 = sub_186B270(0x30u);
  v2 = (_QWORD **)__dynamic_cast(
                    *(const void **)(a1 + 8),
                    (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                    (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                    0);
  if ( !v2
    || (v3 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v2[4] + 40LL))(v2[4], a1 + 16),
        (v4 = __dynamic_cast(
                *(const void **)(a1 + 8),
                (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  *(_QWORD *)(v1 + 8) = v4;
  v5 = *(_QWORD *)(v3 + 16);
  *(_QWORD *)v1 = &off_1C675A8;
  *(_QWORD *)(v1 + 16) = 0;
  if ( v5 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(v5 - 8));
    v14 = v6.m128i_i64[0];
    v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8);
    *(_QWORD *)(v1 + 16) = v7 + 1;
    v8 = *(_QWORD **)(v3 + 16);
    *v7 = v6.m128i_i64[0];
    if ( v8 )
    {
      v9 = 8LL * *((unsigned int *)v8 - 1);
      if ( v9 <= 8 )
      {
        if ( v9 == 8 )
          v7[1] = *v8;
      }
      else
      {
        memmove(v7 + 1, v8, v9);
      }
    }
  }
  v10 = *(_DWORD *)(v3 + 24);
  *(_QWORD *)(v1 + 40) = v3;
  v11 = *(_DWORD **)(a1 + 40);
  *(_DWORD *)(v1 + 32) = 1;
  *(_DWORD *)(v1 + 24) = v10;
  result = off_1C50BA0;
  *(_QWORD *)v1 = off_1C50BA0;
  if ( v11 )
  {
    if ( v11[8]-- == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
      result = (__int64 (__fastcall **)())sub_186B220(v11);
    }
  }
  *(_QWORD *)(a1 + 40) = v1;
  return result;
}

