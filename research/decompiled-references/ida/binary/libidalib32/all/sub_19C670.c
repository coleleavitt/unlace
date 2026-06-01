__int64 __fastcall sub_19C670(__int16 a1)
{
  __int16 v1; // si
  int v2; // eax
  _WORD *i; // rdx
  int v5; // eax
  _WORD *j; // rdx

  if ( (_BYTE)a1 )
  {
    v1 = (*__ctype_toupper_loc())[(unsigned __int8)a1];
    if ( dword_255978 <= 0 )
    {
      return 0;
    }
    else
    {
      v2 = 0;
      for ( i = qword_255980; *i != v1; i += 8 )
      {
        if ( ++v2 == dword_255978 )
          return 0;
      }
      return qword_255980[2 * v2 + 1];
    }
  }
  else if ( dword_255978 <= 0 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    for ( j = qword_255980; *j != a1; j += 8 )
    {
      if ( ++v5 == dword_255978 )
        return 0;
    }
    return qword_255980[2 * v5 + 1];
  }
}

