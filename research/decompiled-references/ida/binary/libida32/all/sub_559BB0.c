__int64 __fastcall sub_559BB0(__int64 a1)
{
  _BYTE *v1; // rbx
  unsigned int v2; // r13d
  unsigned int v3; // ebp
  int v4; // esi
  int v5; // eax
  __int64 v6; // rdx

  if ( (getinf(10) & 0x80000) == 0 )
    return 0;
  v1 = (_BYTE *)(a1 + 25);
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      if ( !*v1 )
        goto LABEL_4;
      if ( v1[1] )
        break;
      v4 = (char)v1[2];
      if ( v1[2] )
        goto LABEL_8;
LABEL_4:
      ++v3;
      v1 += 24;
      if ( v3 == 8 )
        goto LABEL_9;
    }
    v5 = apply_fixup(
           *(unsigned int *)(a1 + 8),
           (unsigned int)(*(_DWORD *)(a1 + 8) + (char)v1[1]),
           v3,
           *(_WORD *)(a1 + 22) & 1);
    v4 = (char)v1[2];
    v2 |= v5;
    if ( !v1[2] )
      goto LABEL_4;
LABEL_8:
    v6 = v3++;
    LOBYTE(v6) = v6 | 0x80;
    v1 += 24;
    v2 |= apply_fixup(*(unsigned int *)(a1 + 8), (unsigned int)(*(_DWORD *)(a1 + 8) + v4), v6, *(_WORD *)(a1 + 22) & 1);
  }
  while ( v3 != 8 );
LABEL_9:
  if ( (_BYTE)v2 )
    return v2;
  else
    return apply_fixup(*(unsigned int *)(a1 + 8), *(unsigned int *)(a1 + 8), 15, *(_WORD *)(a1 + 22) & 1);
}

