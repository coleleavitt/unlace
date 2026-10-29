bool __fastcall sub_120840(__int64 *a1, _DWORD *a2, unsigned __int8 a3)
{
  int v4; // r13d

  if ( (unsigned int)(*a2 - 12) > 1 )
    return 0;
  v4 = a3;
  if ( !(unsigned __int8)sub_120770(a1, (__int64)(a2 + 8), a3) )
    return 0;
  if ( *a2 == 13 )
    v4 = a3 ^ 1;
  return (unsigned __int8)sub_120770(a1, (__int64)(a2 + 12), v4) && a1[1] != 0;
}
