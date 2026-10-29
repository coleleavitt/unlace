__int64 __fastcall sub_19E9D90(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = a1[5];
  if ( (v2 & 6) == 0 )
    a1[5] = a2 & 0xFFFFFFFFFFFFFFF9LL | 4;
  result = sub_BD4680(a1, a2);
  a1[5] = v2;
  return result;
}
