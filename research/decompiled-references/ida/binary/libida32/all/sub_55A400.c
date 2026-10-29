__int64 __fastcall sub_55A400(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  int v4; // edi
  int v5; // r8d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rsi

  result = a1;
  if ( (a3 | a2) <= 7 )
  {
    v4 = 4 * (a2 + (a2 > 1) + 5);
    v5 = 4 * (a3 + (a3 > 1) + 5);
    v6 = result & (15LL << (4 * ((unsigned __int8)a2 + (a2 > 1) + 5)));
    v7 = v6 << ((unsigned __int8)v5 - (unsigned __int8)v4);
    v8 = v6 >> ((unsigned __int8)v4 - (unsigned __int8)v5);
    if ( v5 - v4 > 0 )
      v8 = v7;
    return result & ~(15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5))) | v8;
  }
  return result;
}

