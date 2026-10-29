__int64 __fastcall sub_19D270(__int16 a1)
{
  __int16 v1; // si
  int v2; // eax
  _WORD *i; // rdx
  int v5; // eax
  _WORD *j; // rdx

  if ( (_BYTE)a1 )
  {
    v1 = (*__ctype_toupper_loc())[(unsigned __int8)a1];
    if ( dword_256B38 <= 0 )
    {
      return 0;
    }
    else
    {
      v2 = 0;
      for ( i = qword_256B40; *i != v1; i += 8 )
      {
        if ( ++v2 == dword_256B38 )
          return 0;
      }
      return qword_256B40[2 * v2 + 1];
    }
  }
  else if ( dword_256B38 <= 0 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    for ( j = qword_256B40; *j != a1; j += 8 )
    {
      if ( ++v5 == dword_256B38 )
        return 0;
    }
    return qword_256B40[2 * v5 + 1];
  }
}

