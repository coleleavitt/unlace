unsigned __int64 __fastcall sub_4702F0(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128 v8; // xmm0
  __int64 v9; // rax
  unsigned int *v10; // r12
  unsigned int i; // ebx
  __int64 v12; // rax
  __m128i v14; // [rsp+8h] [rbp-68h] BYREF
  __m128 v15; // [rsp+18h] [rbp-58h] BYREF
  __m128i v16; // [rsp+28h] [rbp-48h]
  unsigned __int64 v17; // [rsp+40h] [rbp-30h]

  v4 = *(int *)(a1 + 8);
  v17 = __readfsqword(0x28u);
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_46BA60, (__m128i)(unsigned __int64)sub_46BEF0);
  switch_dbctx(v4);
  v6 = switch_dbctx(a2[2]);
  v7 = _mm_load_si128(&v14);
  v8 = _mm_loadh_ps((const double *)(v6 + 1480));
  v9 = **(_QWORD **)(a1 + 40);
  v15 = v8;
  v16 = v7;
  v10 = (unsigned int *)(v9 + 8 * a3);
  if ( sub_46BA60 )
  {
    for ( i = *v10; i < v10[1]; i = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, i) )
    {
      v12 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, i);
      if ( v12 )
      {
        if ( !v16.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__m128 *, __int64))v16.m128i_i64[1])(&v15, v12) )
          break;
      }
    }
    if ( v16.m128i_i64[0] )
      ((void (__fastcall *)(__m128 *, __m128 *, __int64))v16.m128i_i64[0])(&v15, &v15, 3);
  }
  return v17 - __readfsqword(0x28u);
}

