unsigned __int64 __fastcall sub_1A88520(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // r8

  v6 = *a1;
  a1[10] += 40;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v8 = result + 40;
  if ( a1[1] < result + 40 || !v6 )
    return sub_986170((__int64)a1, 40, 40, a3, v8, a6);
  *a1 = v8;
  return result;
}
