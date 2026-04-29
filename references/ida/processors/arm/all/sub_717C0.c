__int64 __fastcall sub_717C0(const __m128i *a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // bp
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx

  if ( !*(_BYTE *)(a1[54].m128i_i64[0] + 1) )
  {
    a1[49].m128i_i8[8] = 1;
    return 0;
  }
  if ( (unsigned __int8)sub_71760(a1, -1, 0) )
    return 0;
  v2 = *(_WORD *)(a1[23].m128i_i64[1] + 4);
  result = sub_711D0((__int64)a1, 0);
  v3 = a1[23].m128i_i64[1];
  if ( !(_BYTE)result )
    goto LABEL_12;
  v4 = a1[54].m128i_i64[0];
  if ( (*(_BYTE *)(v4 + 72) & 2) != 0 )
    goto LABEL_12;
  if ( (*(_BYTE *)(v4 + 72) & 1) != 0 )
  {
    ++*(_WORD *)(v3 + 4);
    v3 = a1[23].m128i_i64[1];
  }
  if ( v2 < *(_WORD *)(v3 + 4) || (v5 = *(_QWORD *)(v4 + 64), v5 == -1) )
  {
LABEL_12:
    *(_WORD *)(v3 + 4) = v2;
    return 0;
  }
  *(_QWORD *)(v3 + 24) = v5;
  return result;
}
