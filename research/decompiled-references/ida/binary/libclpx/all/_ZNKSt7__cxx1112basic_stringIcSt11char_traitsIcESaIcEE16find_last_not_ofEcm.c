__int64 __fastcall std::string::find_last_not_of(_QWORD *a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = a1[1];
  result = -1;
  if ( v3 )
  {
    result = v3 - 1;
    if ( v3 - 1 > a3 )
      result = a3;
    while ( *(_BYTE *)(*a1 + result) == a2 )
    {
      if ( !result )
        return -1;
      --result;
    }
  }
  return result;
}

