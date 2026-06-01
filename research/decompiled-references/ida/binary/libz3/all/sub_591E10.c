_QWORD *__fastcall sub_591E10(__int64 a1, void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r12
  __int64 *v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, __int64 *); // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+8h] [rbp-30h]

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = v2[1];
  v4 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(
                    *(_QWORD *)(a1 + 24),
                    v2[5]);
  sub_58EB10(v3, (__int64 *)a2, v4, (_QWORD *)(a1 + 16));
  v5 = (_QWORD *)sub_186B270(0x40u);
  *v5 = qword_1C665B0;
  v6 = v5;
  v5[1] = v3;
  v5[2] = 0;
  v7 = v4[2];
  if ( v7 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(v7 - 8));
    v18 = v8.m128i_i64[0];
    v9 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v6[2] = v9 + 1;
    v10 = (_QWORD *)v4[2];
    *v9 = v8.m128i_i64[0];
    if ( v10 )
    {
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v9[1] = *v10;
      }
      else
      {
        memmove(v9 + 1, v10, v11);
      }
    }
  }
  v12 = *(_QWORD *)(v3 + 24);
  *((_DWORD *)v6 + 6) = *(_DWORD *)(v3 + 8);
  *v6 = &off_1C51738;
  v13 = sub_4D6490(v12);
  v6[4] = v13;
  v6[7] = v13;
  v14 = *v4;
  v6[5] = v4;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(v14 + 144);
  v6[6] = 0;
  if ( v15 == sub_586990 )
  {
    v16 = v4[6];
    if ( v16 )
    {
      v6[6] = v16;
      ++*(_DWORD *)(v16 + 8);
    }
    return v6;
  }
  else
  {
    v15((__int64)v4, v6 + 6);
    return v6;
  }
}

