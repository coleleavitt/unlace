unsigned __int64 __fastcall sub_448E30(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 i; // r12
  __int64 v5; // rsi

  sub_444370((__int64)a1, a2);
  v2 = a1[50];
  result = 11LL * a1[51];
  for ( i = v2 + 88LL * a1[51]; i != v2; result = sub_448890(a1, v5) )
  {
    v5 = v2;
    v2 += 88;
  }
  return result;
}
