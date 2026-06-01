__int64 __fastcall sub_570DF0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // rcx
  unsigned int v4; // eax

  if ( (a1 & 1) != 0 || (*(_BYTE *)(a1 + 44) & 0x40) == 0 )
    return 0;
  v1 = *(_DWORD *)(a1 + 36);
  if ( !v1 )
    return a1;
  do
  {
    v2 = v1 - 1;
    v3 = a1 - 8LL * v1;
    if ( (a1 & 1) != 0 )
      v3 = 0;
LABEL_6:
    v4 = v2;
    while ( 1 )
    {
      a1 = *(_QWORD *)(v3 + 8LL * v4);
      if ( (a1 & 1) == 0 && (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
        break;
      if ( v4-- == 0 )
        goto LABEL_6;
    }
    v1 = *(_DWORD *)(a1 + 36);
  }
  while ( v1 );
  return a1;
}
