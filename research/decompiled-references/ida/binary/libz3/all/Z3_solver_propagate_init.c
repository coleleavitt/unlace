__int64 __fastcall Z3_solver_propagate_init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax
  __int128 v14; // [rsp+0h] [rbp-98h] BYREF
  __m128i v15; // [rsp+10h] [rbp-88h]
  __int128 v16; // [rsp+20h] [rbp-78h] BYREF
  __m128i v17; // [rsp+30h] [rbp-68h]
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __m128i v19; // [rsp+50h] [rbp-48h]

  v10 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !v10 )
  {
    sub_2A74C0(a1, a2);
    v10 = *(_QWORD *)(a2 + 32);
  }
  v15 = 0u;
  v14 = 0;
  if ( a4 )
  {
    *(_QWORD *)&v14 = a4;
    v15 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4CC80), (__m128i)(unsigned __int64)sub_2B1E30);
  }
  v17 = 0u;
  v16 = 0;
  if ( a5 )
  {
    *(_QWORD *)&v16 = a5;
    v17 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4CC88), (__m128i)(unsigned __int64)sub_2B1E40);
  }
  v11 = v10 + 72;
  v12 = *(_QWORD *)(v10 + 72);
  v18[0] = a6;
  v18[1] = 0;
  v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4CC90), (__m128i)(unsigned __int64)sub_2AA350);
  (*(void (__fastcall **)(__int64, __int64, __int128 *, __int128 *, _QWORD *))(v12 + 16))(v11, a3, &v14, &v16, v18);
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v19.m128i_i64[0])(v18, v18, 3);
  if ( v17.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v17.m128i_i64[0])(&v16, &v16, 3);
  result = v15.m128i_i64[0];
  if ( v15.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64))v15.m128i_i64[0])(&v14, &v14, 3);
  return result;
}

