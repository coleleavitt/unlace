__int64 __fastcall sub_819E80(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(unsigned int *)(a1 + 68);
  if ( !(_DWORD)v2 )
    return 0;
  v3 = a1 + 8 * v2;
  while ( *(_DWORD *)(a1 + 80) != a2 )
  {
    a1 += 8;
    if ( a1 == v3 )
      return 0;
  }
  return 1;
}

