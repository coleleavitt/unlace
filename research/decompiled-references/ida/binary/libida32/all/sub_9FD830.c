__int64 __fastcall sub_9FD830(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // edx

  result = *a1;
  v2 = a1[1];
  if ( *a1 != v2 )
  {
    do
    {
      v3 = *(_DWORD *)(result + 8);
      if ( v3 == -1 )
      {
        if ( *(_DWORD *)(result + 4) != -1 || *(_BYTE *)result != 0xFF )
          return result;
      }
      else if ( v3 != -2 || *(_DWORD *)(result + 4) != -2 || *(_BYTE *)result != 0xFE )
      {
        return result;
      }
      result += 360;
      *a1 = result;
    }
    while ( result != v2 );
  }
  return result;
}

