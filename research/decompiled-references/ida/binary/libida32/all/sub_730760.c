FILE *__fastcall sub_730760(__int64 a1, const char *a2, char a3)
{
  const char *v4; // rsi

  if ( (a3 & 3) == 1 )
  {
    v4 = "rb";
  }
  else if ( (a3 & 4) != 0 )
  {
    v4 = "r+b";
  }
  else
  {
    v4 = "wb";
    if ( (a3 & 8) == 0 )
      return nullptr;
  }
  if ( a2 )
    return fopen64(a2, v4);
  return nullptr;
}

