__int64 __fastcall sub_720510(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = (int)a1;
  if ( !a1 || !a2 )
    return 0;
  if ( a1 != a2 )
  {
    v3 = (int)a2;
    while ( 1 )
    {
      LODWORD(v3) = qword_47D46A0[2 * v3];
      if ( a1 == (_DWORD)v3 )
        break;
      if ( !(_DWORD)v3 )
      {
        while ( 1 )
        {
          LODWORD(v2) = qword_47D46A0[2 * v2];
          if ( a2 == (_DWORD)v2 )
            break;
          if ( !(_DWORD)v2 )
            return 0;
        }
        return a1;
      }
    }
  }
  return a2;
}

