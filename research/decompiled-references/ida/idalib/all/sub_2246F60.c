__int64 __fastcall sub_2246F60(__int64 *a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 result; // rax

  v3 = a1[1];
  v4 = *a1;
  result = -1;
  if ( a3 < v3 )
  {
    if ( a2 == *(_BYTE *)(v4 + a3) )
    {
      while ( ++a3 < v3 )
      {
        if ( a2 != *(_BYTE *)(v4 + a3) )
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
