unsigned __int64 __fastcall sub_485080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int64 *v4; // r12
  unsigned __int64 i; // rbx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+10h] [rbp-48h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v3 = **(_QWORD **)(a1 + 40);
  v8[0] = a1;
  v8[1] = a2;
  v4 = (unsigned __int64 *)(16 * a3 + v3);
  v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_47FE20, (__m128i)(unsigned __int64)sub_480B10);
  if ( sub_47FE20 )
  {
    for ( i = *v4; i < v4[1]; i = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a2 + 176LL))(a2, i) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a2 + 168LL))(a2, i);
      if ( v6 )
      {
        if ( !v9.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v9.m128i_i64[1])(v8, v6) )
          break;
      }
    }
    if ( v9.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v9.m128i_i64[0])(v8, v8, 3);
  }
  return v10 - __readfsqword(0x28u);
}
