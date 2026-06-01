_QWORD *__fastcall sub_7DA670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // r12
  __int64 v10; // rdi
  __m128i v11; // [rsp+0h] [rbp-48h]
  __m128i v12; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 80);
  v12.m128i_i64[0] = a2;
  v12.m128i_i64[1] = a3;
  if ( !v6 )
    v6 = sub_7D0C20(a1);
  v7 = v6 + 8;
  v8 = sub_7DA470(a1, v7, a4, v12.m128i_i64);
  if ( !v8
    && (v11 = _mm_load_si128(&v12), (v10 = *(_QWORD *)(sub_798D40(a1) + 18200)) != 0)
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v10 + 88LL))(
         v10,
         *(_QWORD *)(a1 + 72),
         v11.m128i_i64[0],
         v11.m128i_i64[1]) )
  {
    return sub_7DA470(a1, v7, a4, v12.m128i_i64);
  }
  else
  {
    return v8;
  }
}

