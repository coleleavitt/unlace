__int64 __fastcall sub_4EAE10(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  _QWORD *v6; // rax
  __int64 v7; // xmm1_8
  const __m128i *v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // r8
  _QWORD *v11; // rax
  __m128i v13[4]; // [rsp+8h] [rbp-40h] BYREF

  sub_4D6490(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v6 )
    goto LABEL_7;
  v7 = v6[4];
  *(_QWORD *)(a1 + 32) = v7;
  v13[0].m128i_i64[0] = v7;
  v8 = (const __m128i *)__dynamic_cast(
                          a3,
                          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                          (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
                          0);
  v9 = _mm_loadl_epi64(v13);
  if ( !v8 )
    goto LABEL_7;
  v10 = 1;
  *(__m128i *)(a1 + 40) = _mm_unpacklo_epi64(_mm_loadl_epi64(v8 + 2), v9);
  if ( a4 )
  {
    v11 = __dynamic_cast(
            a4,
            (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
            0);
    if ( v11 )
    {
      v10 = 2;
      *(_QWORD *)(a1 + 56) = v11[4];
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 40LL)
                                                                                           + 32LL))(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL),
               *(_QWORD *)(a1 + 16),
               2,
               a1 + 32,
               v10,
               a1 + 48);
    }
LABEL_7:
    __cxa_bad_cast();
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 40LL)
                                                                                       + 32LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL),
           *(_QWORD *)(a1 + 16),
           2,
           a1 + 32,
           v10,
           a1 + 48);
}

