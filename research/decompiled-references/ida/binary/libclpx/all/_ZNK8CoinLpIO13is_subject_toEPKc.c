__int64 __fastcall CoinLpIO::is_subject_to(CoinLpIO *this, const char *a2)
{
  size_t v2; // rax
  int v3; // ebp
  int v4; // ebx
  int v6; // ebp
  int v7; // ebp
  int v8; // ebx
  int v9; // ebp
  int v10; // r12d
  int v11; // ebp
  int v12; // r12d
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  int v17; // ebp
  int v18; // ebp
  int v19; // ebx

  v2 = strlen(a2);
  switch ( v2 )
  {
    case 4uLL:
      if ( *a2 )
      {
        v9 = tolower(*a2);
        if ( tolower(115) == v9 )
        {
          if ( a2[1] )
          {
            v10 = tolower(a2[1]);
            v11 = tolower(46);
            if ( v11 == v10 )
            {
              if ( a2[2] )
              {
                v12 = tolower(a2[2]);
                if ( v12 == tolower(116) )
                {
                  if ( a2[3] )
                    return tolower(a2[3]) == v11;
                }
              }
            }
          }
        }
      }
      return 0;
    case 3uLL:
      if ( *a2 )
      {
        v6 = tolower(*a2);
        if ( tolower(115) == v6 )
        {
          if ( a2[1] )
          {
            v7 = tolower(a2[1]);
            if ( v7 == tolower(116) )
            {
              if ( a2[2] )
              {
                v8 = tolower(a2[2]);
                return v8 == tolower(46);
              }
            }
          }
        }
      }
      return 0;
    case 2uLL:
      if ( *a2 )
      {
        v3 = tolower(*a2);
        if ( v3 == tolower(115) )
        {
          if ( a2[1] )
          {
            v4 = tolower(a2[1]);
            return v4 == tolower(116);
          }
        }
      }
      return 0;
  }
  if ( v2 != 7 )
    return 0;
  if ( !*a2 )
    return 0;
  v13 = tolower(*a2);
  if ( v13 != tolower(115) )
    return 0;
  if ( !a2[1] )
    return 0;
  v14 = tolower(a2[1]);
  if ( v14 != tolower(117) )
    return 0;
  if ( !a2[2] )
    return 0;
  v15 = tolower(a2[2]);
  if ( v15 != tolower(98) )
    return 0;
  if ( !a2[3] )
    return 0;
  v16 = tolower(a2[3]);
  if ( v16 != tolower(106) )
    return 0;
  if ( !a2[4] )
    return 0;
  v17 = tolower(a2[4]);
  if ( v17 != tolower(101) )
    return 0;
  if ( !a2[5] )
    return 0;
  v18 = tolower(a2[5]);
  if ( v18 != tolower(99) || !a2[6] )
    return 0;
  v19 = tolower(a2[6]);
  return 2 * (unsigned int)(v19 == tolower(116));
}

