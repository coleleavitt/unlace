unsigned __int64 __fastcall sub_B7BC10(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r8
  unsigned __int64 result; // rax
  __int64 v5; // r9

  v3 = *a1;
  a1[10] += a2;
  result = (v3 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v5 = a2 + result;
  if ( a1[1] < a2 + result || !v3 )
    return sub_986170((__int64)a1, a2, a2, a3, v3, v5);
  *a1 = v5;
  return result;
}
