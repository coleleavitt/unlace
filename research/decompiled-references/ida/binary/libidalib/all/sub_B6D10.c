__int64 __fastcall sub_B6D10(_QWORD *a1, __int64 a2, double a3, __m128i a4)
{
  const char *v5; // rsi
  const char *v6; // rax

  v5 = s1;
  if ( a1[6] )
    v5 = (const char *)a1[5];
  v6 = s1;
  if ( a1[2] )
    v6 = (const char *)a1[1];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)sub_B67D0(v6, (__int64)v5, a3, a4);
  return 0;
}

