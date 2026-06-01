void __fastcall sub_1E5E570(__int64 a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v3; // r8
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ecx

  v3 = *(_DWORD **)a1;
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 192LL);
  *a3 = v4;
  a3[1] = v4;
  if ( (((*(_WORD *)(a2 + 18) >> 3) + 74) & 0x1FFu) > 0x31
    || ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) + 74)) & 1) == 0 )
  {
    return;
  }
  a3[2] = v3[70];
  v5 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
  if ( (unsigned int)(v5 - 443) <= 4 || (unsigned int)(v5 - 451) <= 0x24 )
  {
    if ( (a3[2] & 0x180) == 0 )
      goto LABEL_9;
  }
  else
  {
    if ( v5 != 438 && v5 != 449 )
      return;
    if ( (a3[2] & 0x180) == 0 )
      goto LABEL_21;
  }
  v8 = v3[47];
  if ( v4 )
  {
    v9 = v3[47];
    if ( v4 <= v8 )
      v9 = v4;
    if ( v4 < v8 )
      v4 = v3[47];
    *a3 = v9;
    a3[1] = v4;
  }
  else
  {
    *a3 = v8;
    a3[1] = v8;
  }
  v5 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
  if ( (unsigned int)(v5 - 451) > 0x24 && (unsigned int)(v5 - 443) > 4 )
  {
LABEL_21:
    if ( v5 != 449 && v5 != 438 )
      return;
  }
LABEL_9:
  if ( (*((_BYTE *)a3 + 9) & 6) != 0 )
  {
    v6 = v3[44];
    v7 = v3[45];
    if ( *a3 )
    {
      if ( v6 > *a3 )
        v6 = *a3;
      if ( a3[1] >= v7 )
        v7 = a3[1];
      *a3 = v6;
      a3[1] = v7;
    }
    else
    {
      *a3 = v6;
      a3[1] = v7;
    }
  }
}
