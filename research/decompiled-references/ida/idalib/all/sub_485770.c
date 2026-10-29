unsigned __int64 __fastcall sub_485770(int *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11; // xmm0
  unsigned __int64 i; // rbx
  __int64 v13; // rax
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  __m128i v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v4 = a1[2];
  v19 = __readfsqword(0x28u);
  v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_4803E0, (__m128i)(unsigned __int64)sub_47F1C0);
  v6 = switch_dbctx(v4);
  v11 = _mm_load_si128(&v15);
  v17 = 0;
  v18 = v11;
  *(_QWORD *)(a3 + 8) = v6;
  *(_QWORD *)(a3 + 16) = a1;
  v16 = a3;
  if ( sub_4803E0 )
  {
    for ( i = *a2; i < a2[1]; i = (*(__int64 (__fastcall **)(int *, unsigned __int64))(*(_QWORD *)a1 + 176LL))(a1, i) )
    {
      v13 = (*(__int64 (__fastcall **)(int *, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 168LL))(
              a1,
              i,
              v7,
              v8,
              v9,
              v10,
              v15.m128i_i64[0],
              v15.m128i_i64[1],
              v16,
              v17);
      if ( v13 )
      {
        if ( !v18.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int64 *, __int64))v18.m128i_i64[1])(&v16, v13) )
          break;
      }
    }
    if ( v18.m128i_i64[0] )
      ((void (__fastcall *)(__int64 *, __int64 *, __int64))v18.m128i_i64[0])(&v16, &v16, 3);
  }
  return v19 - __readfsqword(0x28u);
}
