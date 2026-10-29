__int64 __fastcall Z3_solver_propagate_created(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-48h] BYREF
  __m128i v5; // [rsp+10h] [rbp-38h]

  *(_DWORD *)(a1 + 1520) = 0;
  v5 = 0u;
  v4 = 0;
  if ( a3 )
  {
    *(_QWORD *)&v4 = a3;
    v5 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4CCA8), (__m128i)(unsigned __int64)sub_2B1E90);
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 72LL) + 64LL))(
    *(_QWORD *)(a2 + 32) + 72LL,
    &v4);
  result = v5.m128i_i64[0];
  if ( v5.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64))v5.m128i_i64[0])(&v4, &v4, 3);
  return result;
}

