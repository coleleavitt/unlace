__int64 __fastcall sub_B39520(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rsi
  __int64 result; // rax
  unsigned int v4; // edx

  v1 = *(_DWORD *)(a1 + 36);
  v2 = a1;
  result = a1;
  if ( v1 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(result + 16);
      if ( a1 == result )
        break;
      while ( 1 )
      {
        v4 = *(_DWORD *)(result + 36);
        if ( v4 >= v1 )
          break;
        if ( !v4 )
          return result;
        v2 = result;
        result = *(_QWORD *)(result + 16);
        v1 = v4;
        if ( a1 == result )
          return v2;
      }
    }
  }
  return v2;
}

