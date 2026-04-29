__int64 __fastcall sub_322890(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // esi
  int v4; // r8d
  unsigned __int64 v5; // rax

  v3 = 4 * (a2 + (a2 > 1) + 5);
  v4 = 4 * (a3 + (a3 > 1) + 5);
  v5 = (a1 & (unsigned __int64)(15LL << v3)) >> ((unsigned __int8)v3 - (unsigned __int8)v4);
  if ( v4 - v3 > 0 )
    v5 = (a1 & (15LL << v3)) << ((unsigned __int8)v4 - (unsigned __int8)v3);
  return a1 & ~(15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5))) & ~(15LL << v3) | v5;
}
