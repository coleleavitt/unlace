__int64 __fastcall sub_9FADA0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *a1;
  v2 = a1[1];
  if ( *a1 != v2 )
  {
    do
    {
      if ( *(_DWORD *)result == -1 )
      {
        if ( *(_BYTE *)(result + 4) != 0xFF || *(_DWORD *)(result + 8) != -1 )
          return result;
      }
      else if ( *(_DWORD *)result != -2 || *(_BYTE *)(result + 4) != 0xFE || *(_DWORD *)(result + 8) != -2 )
      {
        return result;
      }
      result += 216;
      *a1 = result;
    }
    while ( v2 != result );
  }
  return result;
}

