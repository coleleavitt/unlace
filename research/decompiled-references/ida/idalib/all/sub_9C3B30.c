__int64 __fastcall sub_9C3B30(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8

  v3 = *a1;
  a1[10] += a2;
  v4 = (v3 + (1LL << a3) - 1) & -(1LL << a3);
  if ( a1[1] < (unsigned __int64)(a2 + v4) || !v3 )
    return sub_986170((__int64)a1, a2, a2, a3, v4, v3);
  *a1 = a2 + v4;
  return (v3 + (1LL << a3) - 1) & -(1LL << a3);
}
