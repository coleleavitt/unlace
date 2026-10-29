char __fastcall sub_16FEC20(__int16 a1, __int16 a2)
{
  __int16 v2; // si
  char result; // al
  int v4; // esi

  v2 = a1 | a2;
  result = 1;
  if ( (v2 & 9) != 9 )
  {
    result = 0;
    if ( (v2 & 0xE30) != 0 )
    {
      v4 = v2 & 0xE34;
      result = v4 != 32 && v4 != 2048;
      if ( result )
        return v4 != 16 && ((v4 - 512) & 0xFFFFFDFC) != 0;
    }
  }
  return result;
}
