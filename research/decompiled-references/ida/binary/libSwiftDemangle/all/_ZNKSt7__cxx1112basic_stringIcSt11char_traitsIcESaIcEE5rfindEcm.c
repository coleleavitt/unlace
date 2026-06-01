__int64 __fastcall std::string::rfind(_QWORD *a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rcx

  v3 = a1[1];
  result = -1;
  if ( v3 )
  {
    v5 = v3 - 1;
    result = a3;
    if ( v5 <= a3 )
      result = v5;
    do
    {
      if ( *(_BYTE *)(*a1 + result) == a2 )
        break;
    }
    while ( result-- != 0 );
  }
  return result;
}

