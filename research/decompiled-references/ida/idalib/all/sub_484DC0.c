unsigned __int64 __fastcall sub_484DC0(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __m128i v7; // xmm1
  unsigned __int64 *v8; // r12
  unsigned __int64 i; // rbx
  __int64 v10; // rax
  __m128i v12; // [rsp+8h] [rbp-68h] BYREF
  __m128 v13; // [rsp+18h] [rbp-58h] BYREF
  __m128i v14; // [rsp+28h] [rbp-48h]
  unsigned __int64 v15; // [rsp+40h] [rbp-30h]

  v4 = *(int *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_47FF20, (__m128i)(unsigned __int64)sub_480470);
  switch_dbctx(v4);
  v6 = switch_dbctx(a2[2]);
  v7 = _mm_load_si128(&v12);
  v8 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  v13 = _mm_loadh_ps((const double *)(v6 + 1672));
  v14 = v7;
  if ( sub_47FF20 )
  {
    for ( i = *v8; i < v8[1]; i = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 176LL))(a2, i) )
    {
      v10 = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a2 + 168LL))(a2, i);
      if ( v10 )
      {
        if ( !v14.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__m128 *, __int64))v14.m128i_i64[1])(&v13, v10) )
          break;
      }
    }
    if ( v14.m128i_i64[0] )
      ((void (__fastcall *)(__m128 *, __m128 *, __int64))v14.m128i_i64[0])(&v13, &v13, 3);
  }
  return v15 - __readfsqword(0x28u);
}
