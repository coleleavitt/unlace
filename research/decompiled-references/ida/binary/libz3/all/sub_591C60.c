_QWORD *__fastcall sub_591C60(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rbx
  __int64 *v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64 *); // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-30h]

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = v2[1];
  v4 = v2;
  v5 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(
                    *(_QWORD *)(a1 + 40),
                    v2[5]);
  sub_58E950(v3, (__int64 *)v4[5], v5, *(_QWORD *)(a1 + 24), (_QWORD *)(a1 + 16));
  v6 = (_QWORD *)sub_186B270(0x40u);
  *v6 = qword_1C665B0;
  v7 = v6;
  v6[1] = v3;
  v6[2] = 0;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    v9 = _mm_loadl_epi64((const __m128i *)(v8 - 8));
    v19 = v9.m128i_i64[0];
    v10 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v9) + 8);
    v11 = *(_QWORD **)(a1 + 8);
    v7[2] = v10 + 1;
    *v10 = v9.m128i_i64[0];
    if ( v11 )
    {
      v12 = 8LL * *((unsigned int *)v11 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v10[1] = *v11;
      }
      else
      {
        memmove(v10 + 1, v11, v12);
      }
    }
  }
  v13 = *(_QWORD *)(v3 + 24);
  *((_DWORD *)v7 + 6) = *(_DWORD *)(v3 + 8);
  *v7 = &off_1C51738;
  v14 = sub_4D6490(v13);
  v7[4] = v14;
  v7[7] = v14;
  v15 = *v5;
  v7[5] = v5;
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(v15 + 144);
  v7[6] = 0;
  if ( v16 == sub_586990 )
  {
    v17 = v5[6];
    if ( v17 )
    {
      v7[6] = v17;
      ++*(_DWORD *)(v17 + 8);
    }
    return v7;
  }
  else
  {
    v16((__int64)v5, v7 + 6);
    return v7;
  }
}

