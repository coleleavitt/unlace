unsigned __int64 __fastcall sub_470720(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int *v9; // r12
  unsigned int i; // ebx
  __int64 v11; // rax
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+18h] [rbp-50h]
  __m128i v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v3 = *(int *)(a1 + 8);
  v17 = __readfsqword(0x28u);
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_46B920, (__m128i)(unsigned __int64)sub_46B280);
  v4 = *(_QWORD *)(switch_dbctx(v3) + 1480);
  v8 = **(_QWORD **)(a1 + 40);
  v16 = _mm_load_si128(&v13);
  v15 = 0;
  v14 = v4;
  v9 = (unsigned int *)(v8 + 8 * a2);
  if ( sub_46B920 )
  {
    for ( i = *v9; i < v9[1]; i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, i) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 168LL))(
              a1,
              i,
              v8,
              v5,
              v6,
              v7,
              v13.m128i_i64[0],
              v13.m128i_i64[1],
              v14,
              v15);
      if ( v11 )
      {
        if ( !v16.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int64 *, __int64))v16.m128i_i64[1])(&v14, v11) )
          break;
      }
    }
    if ( v16.m128i_i64[0] )
      ((void (__fastcall *)(__int64 *, __int64 *, __int64))v16.m128i_i64[0])(&v14, &v14, 3);
  }
  return v17 - __readfsqword(0x28u);
}

