__int64 __fastcall sub_12BB60(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v9; // rcx

  v9 = a5;
  if ( a5 && (v9 = sub_120440((__int64)a1, a2, a4, a5, a6, 0)) == 0 )
    return 0;
  else
    return (unsigned __int8)sub_129EC0(*(_QWORD *)(a1[4].m128i_i64[0] + 1504), a1, a2, a3, v9, a6, a7);
}
