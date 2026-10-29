__int64 __fastcall sub_51CA00(__int64 *a1, unsigned __int64 a2, signed int a3, __int64 a4, unsigned __int8 a5, char a6)
{
  _DWORD *v8; // rsi

  v8 = (_DWORD *)a1[2];
  if ( a3 >= v8[17] && a3 <= v8[18] && v8[20] != a3 )
    return sub_51C400(*a1, a2, a3, a4, a5, a6);
  if ( !a6 )
    sub_378D50();
  return 0;
}
