unsigned __int64 __fastcall sub_1AF8330(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // r8

  v6 = *a1;
  a1[10] += 24;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v8 = result + 24;
  if ( a1[1] < result + 24 || !v6 )
    return sub_986170((__int64)a1, 24, 24, a3, v8, a6);
  *a1 = v8;
  return result;
}
