__int64 __fastcall sub_12DC80(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  int v6; // r15d
  __int64 v9; // r12
  __int64 v12; // [rsp+8h] [rbp-48h]

  v6 = a6;
  v9 = a3 + 32;
  v12 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( (unsigned __int8)sub_129EC0(v12, a1, a2, a3 + 32, a4, a5, a6) )
    return a3 + 48;
  if ( !(unsigned __int8)sub_129EC0(v12, a1, a2, a3 + 48, a4, a5, v6) )
    return 0;
  return v9;
}
