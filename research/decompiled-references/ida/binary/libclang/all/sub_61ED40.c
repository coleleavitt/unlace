__int64 __fastcall sub_61ED40(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *a1;
  a1[10] += a2;
  result = -(1LL << a3) & (v4 + (1LL << a3) - 1);
  if ( a1[1] < (unsigned __int64)(a2 + result) || !v4 )
    return sub_5F8390((__int64)a1, a2, a3);
  *a1 = a2 + result;
  return result;
}

