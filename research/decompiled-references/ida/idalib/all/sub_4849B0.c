unsigned __int64 __fastcall sub_4849B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __m128i v9; // xmm0
  unsigned __int64 *v10; // r12
  unsigned __int64 i; // rbx
  __int64 v12; // rax
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  __m128i v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v3 = *(int *)(a1 + 8);
  v18 = __readfsqword(0x28u);
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_480160, (__m128i)(unsigned __int64)sub_47F860);
  v4 = switch_dbctx(v3);
  v8 = *(_QWORD **)(a1 + 40);
  v9 = _mm_load_si128(&v14);
  v10 = (unsigned __int64 *)(*v8 + 16 * a2);
  v15 = *(_QWORD *)(v4 + 1672);
  v16 = 0;
  v17 = v9;
  if ( sub_480160 )
  {
    for ( i = *v10; i < v10[1]; i = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 176LL))(
                                      a1,
                                      i) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 168LL))(
              a1,
              i,
              v8,
              v5,
              v6,
              v7,
              v14.m128i_i64[0],
              v14.m128i_i64[1],
              v15,
              v16);
      if ( v12 )
      {
        if ( !v17.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int64 *, __int64))v17.m128i_i64[1])(&v15, v12) )
          break;
      }
    }
    if ( v17.m128i_i64[0] )
      ((void (__fastcall *)(__int64 *, __int64 *, __int64))v17.m128i_i64[0])(&v15, &v15, 3);
  }
  return v18 - __readfsqword(0x28u);
}
