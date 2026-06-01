bool __fastcall sub_1038F20(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  int v4; // eax

  result = 0;
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 == 29541 && *(_BYTE *)(a2 + 2) == 112 )
    {
      return 1;
    }
    else
    {
      if ( *(_WORD *)a2 != 29554 || (v4 = 0, *(_BYTE *)(a2 + 2) != 112) )
        v4 = 1;
      return v4 == 0;
    }
  }
  return result;
}
