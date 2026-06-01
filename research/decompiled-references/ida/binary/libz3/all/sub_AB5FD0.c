__int64 __fastcall sub_AB5FD0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // r12d
  unsigned int i; // ebp
  unsigned int v7; // esi

  v1 = a1[3];
  if ( !*(_BYTE *)(v1 + 4) && (*(_DWORD *)v1 || *(_QWORD *)(v1 + 16) < *(_QWORD *)(v1 + 8)) )
    return 1;
  v2 = a1[2];
  if ( *(_QWORD *)(v2 + 8984) != qword_1C7ECE8 )
    return 1;
  if ( *(_BYTE *)(v2 + 2416) )
    return 1;
  v4 = a1[4];
  if ( !v4 )
    return 1;
  v5 = *(_DWORD *)(v4 - 4);
  if ( !v5 )
    return 1;
  for ( i = 0; i != v5; ++i )
  {
    sub_AB5A80(a1, i);
    v7 = i;
    sub_AB5DA0(a1, v7);
  }
  return 1;
}

