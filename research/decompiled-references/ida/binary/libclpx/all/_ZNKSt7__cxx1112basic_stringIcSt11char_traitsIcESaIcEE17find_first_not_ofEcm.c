__int64 __fastcall std::string::find_first_not_of(_QWORD *a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  v3 = a1[1];
  result = -1;
  if ( a3 < v3 )
  {
    if ( a2 == *(_BYTE *)(*a1 + a3) )
    {
      while ( ++a3 != v3 )
      {
        if ( *(_BYTE *)(*a1 + a3) != a2 )
          return a3;
      }
      return -1;
    }
    else
    {
      return a3;
    }
  }
  return result;
}

