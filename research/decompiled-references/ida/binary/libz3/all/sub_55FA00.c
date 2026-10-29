__int64 __fastcall sub_55FA00(__int64 a1, const void *a2)
{
  void *v2; // rax
  void *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r13
  int v6; // r12d
  __int64 v7; // rbx
  void *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  int v14; // eax
  int v15; // edx
  __int64 result; // rax
  _DWORD *v17; // r12
  bool v18; // zf
  __int64 v19; // [rsp+8h] [rbp-30h]

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
         0);
  if ( !v2
    || (v3 = v2,
        v4 = sub_186B270(0x48u),
        v5 = *(_QWORD *)(a1 + 8),
        v6 = *(_DWORD *)(a1 + 16),
        v7 = v4,
        (v8 = __dynamic_cast(
                *((const void **)v3 + 1),
                (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  *(_QWORD *)(v7 + 8) = v8;
  v9 = *((_QWORD *)v3 + 2);
  *(_QWORD *)v7 = &off_1C675A8;
  *(_QWORD *)(v7 + 16) = 0;
  if ( v9 )
  {
    v10 = _mm_loadl_epi64((const __m128i *)(v9 - 8));
    v19 = v10.m128i_i64[0];
    v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
    *(_QWORD *)(v7 + 16) = v11 + 1;
    v12 = *((_QWORD **)v3 + 2);
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
  v14 = *((_DWORD *)v3 + 6);
  v15 = 1;
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 24) = v14;
  *(_QWORD *)v7 = off_1C50EE8;
  result = *((_QWORD *)v3 + 5);
  *(_DWORD *)(v7 + 48) = v6;
  *(_QWORD *)(v7 + 56) = v5;
  *(_QWORD *)(v7 + 64) = result;
  if ( result )
  {
    ++*(_DWORD *)(result + 32);
    result = *(unsigned int *)(v7 + 32);
    v15 = result + 1;
  }
  v17 = *((_DWORD **)v3 + 5);
  *(_DWORD *)(v7 + 32) = v15;
  if ( v17 && (v18 = v17[8] == 1, --v17[8], v18) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 8LL))(v17);
    result = sub_186B220(v17);
    *((_QWORD *)v3 + 5) = v7;
  }
  else
  {
    *((_QWORD *)v3 + 5) = v7;
  }
  return result;
}

