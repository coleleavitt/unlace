bool __fastcall sub_118A20(__int64 a1, unsigned int a2, int a3)
{
  bool result; // al

  if ( (unsigned int)(a3 - 1) <= 0xF && (a3 & (a3 - 1)) == 0 )
    return 1;
  result = 0;
  if ( a3 == *(_DWORD *)(a1 + 92) )
    return sub_1189B0(a1, a2);
  return result;
}
