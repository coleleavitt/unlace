unsigned __int64 __fastcall sub_485880(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm2
  unsigned __int64 i; // rbx
  __int64 v10; // rax
  __m128i v12; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v14; // [rsp+18h] [rbp-70h]
  __int64 *v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  _QWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __m128i v18; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+58h] [rbp-30h]

  v3 = *a1;
  v19 = __readfsqword(0x28u);
  v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_4803E0, (__m128i)(unsigned __int64)sub_47F1C0);
  (*(void (__fastcall **)(void **, __int64 *, __int64))(v3 + 64))(&ptr, a1, a2);
  if ( ptr )
  {
    v14 = 0;
    qfree(ptr);
  }
  v4 = *((int *)a1 + 2);
  v5 = (unsigned __int64 *)(*(_QWORD *)a1[5] + 16 * a2);
  v6 = *(_QWORD *)a1[6];
  ptr = off_2B2B870;
  v14 = 0;
  v15 = nullptr;
  v16 = v6 + 40 * v4;
  v7 = switch_dbctx(v4);
  v8 = _mm_load_si128(&v12);
  v15 = a1;
  v14 = v7;
  v17[1] = 0;
  v17[0] = &ptr;
  v18 = v8;
  if ( sub_4803E0 )
  {
    for ( i = *v5; i < v5[1]; i = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 176))(a1, i) )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 168))(a1, i);
      if ( v10 )
      {
        if ( !v18.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(_QWORD *, __int64))v18.m128i_i64[1])(v17, v10) )
          break;
      }
    }
    if ( v18.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v18.m128i_i64[0])(v17, v17, 3);
  }
  return v19 - __readfsqword(0x28u);
}
