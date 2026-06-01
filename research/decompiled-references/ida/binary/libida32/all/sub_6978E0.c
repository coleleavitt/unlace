bool __fastcall sub_6978E0(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  bool result; // al
  int v5; // ecx
  int v6; // esi

  result = 0;
  if ( a4 | a2 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        result = (_DWORD)a4 != 0 && (_DWORD)a2 != 0;
        if ( result )
        {
          result = 0;
          if ( a1 + (unsigned int)a2 - 1 >= a3 )
            return a3 + (unsigned int)a4 - 1 >= a1;
        }
      }
      else
      {
        v6 = a2 - 1;
        result = v6 != 0 && a3 >= a1 + 1;
        if ( result )
          return a1 + v6 >= a3;
      }
    }
    else
    {
      v5 = a4 - 1;
      result = v5 != 0 && a1 >= a3 + 1;
      if ( result )
        return a3 + v5 >= a1;
    }
  }
  return result;
}

