__int64 __fastcall sub_826950(unsigned int *a1, int a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rax

  v2 = a1[15] + 1;
  if ( (unsigned int)v2 > a1[8] )
    v2 = a1[8];
  if ( !(_DWORD)v2 )
    return 0;
  v3 = &a1[v2];
  while ( a2 != a1[16] )
  {
    if ( ++a1 == v3 )
      return 0;
  }
  return 1;
}

