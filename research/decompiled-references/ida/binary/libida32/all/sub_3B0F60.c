__int64 __fastcall sub_3B0F60(__int64 a1, char a2, __int64 a3, int a4, int a5, int a6)
{
  if ( !a1 )
    return 0;
  if ( a2 != ((*(_BYTE *)(a1 + 64) & 8) != 0) )
    callui(1087, a2, (int)&callui, a4, a5, a6);
  return 1;
}

