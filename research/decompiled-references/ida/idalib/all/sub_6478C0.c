__int64 __fastcall sub_6478C0(__int64 a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rcx

  v1 = 0;
  if ( !a1 )
    return v1;
  if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
    return v1;
  v2 = *(_DWORD **)(a1 + 40);
  if ( !v2 )
    return v1;
  v3 = *(unsigned int *)(a1 + 48);
  if ( !(_DWORD)v3 )
    return v1;
  v4 = &v2[v3];
  do
  {
    if ( *v2 + 0x80000000 <= 0x7FFFFFFE )
      return 1;
    ++v2;
  }
  while ( v2 != v4 );
  return 0;
}
