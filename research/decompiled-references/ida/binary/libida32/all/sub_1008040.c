_BOOL8 __fastcall sub_1008040(_DWORD *a1, char a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a1[85] != 10 )
  {
    result = 1;
    if ( !a2 )
    {
      result = 0;
      if ( a1[62] == 38 && a1[64] == 3 )
        return a1[65] == 24;
    }
  }
  return result;
}

