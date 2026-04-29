__int64 __fastcall sub_1F980(unsigned __int64 a1, unsigned __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // edx

  v4 = 0;
  if ( a2 < a1 && a1 - a2 != 1 )
    LOBYTE(v4) = (unsigned __int16)get_word(a2) == a3;
  return v4;
}
