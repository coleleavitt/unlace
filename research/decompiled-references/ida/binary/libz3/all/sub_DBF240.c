unsigned __int64 *__fastcall sub_DBF240(unsigned __int64 *a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 *v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // r8
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax

  v3 = *a3;
  v4 = a1;
  if ( *a3 )
  {
    if ( (*a3 & 7) == 1 )
      v5 = v3 >> 3;
    else
      LODWORD(v5) = *(_DWORD *)(v3 - 8);
  }
  else
  {
    LODWORD(v5) = -1640531495;
  }
  v6 = 24LL * ((unsigned int)v5 & (a2 - 1));
  v7 = 24LL * a2;
  v8 = &a1[(unsigned __int64)v6 / 8];
  v9 = &a1[(unsigned __int64)v7 / 8];
  if ( v6 != v7 )
  {
    result = &a1[(unsigned __int64)v6 / 8];
    do
    {
      v12 = *result;
      if ( !*result )
        return nullptr;
      if ( qword_1C7F378 != v12 )
      {
        if ( v12 )
        {
          if ( (*result & 7) == 1 )
            v11 = v12 >> 3;
          else
            LODWORD(v11) = *(_DWORD *)(v12 - 8);
        }
        else
        {
          LODWORD(v11) = -1640531495;
        }
        if ( (_DWORD)v5 == (_DWORD)v11 && v3 == v12 )
          return result;
      }
      result += 3;
    }
    while ( v9 != result );
  }
  if ( v8 == a1 )
    return nullptr;
  while ( 1 )
  {
    v14 = *v4;
    if ( !*v4 )
      return nullptr;
    if ( qword_1C7F378 != v14 )
    {
      if ( v14 )
      {
        if ( (*v4 & 7) == 1 )
          v13 = v14 >> 3;
        else
          LODWORD(v13) = *(_DWORD *)(v14 - 8);
      }
      else
      {
        LODWORD(v13) = -1640531495;
      }
      if ( v3 == v14 && (_DWORD)v5 == (_DWORD)v13 )
        break;
    }
    v4 += 3;
    if ( v8 == v4 )
      return nullptr;
  }
  return v4;
}

