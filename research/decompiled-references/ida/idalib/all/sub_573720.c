__int64 __fastcall sub_573720(__int64 a1)
{
  _BYTE *v1; // rbx
  unsigned int v2; // r13d
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // edx

  if ( (getinf(10) & 0x80000) == 0 )
    return 0;
  v1 = (_BYTE *)(a1 + 41);
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      if ( !*v1 )
        goto LABEL_4;
      v5 = (char)v1[1];
      if ( (_BYTE)v5 )
        break;
      v4 = (char)v1[2];
      if ( (_BYTE)v4 )
        goto LABEL_8;
LABEL_4:
      ++v3;
      v1 += 40;
      if ( v3 == 8 )
        goto LABEL_9;
    }
    v6 = apply_fixup(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + v5, v3, *(_BYTE *)(a1 + 34) & 1);
    v4 = (char)v1[2];
    v2 |= v6;
    if ( !(_BYTE)v4 )
      goto LABEL_4;
LABEL_8:
    v7 = v3++;
    LOBYTE(v7) = v7 | 0x80;
    v1 += 40;
    v2 |= apply_fixup(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + v4, v7, *(_BYTE *)(a1 + 34) & 1);
  }
  while ( v3 != 8 );
LABEL_9:
  if ( (_BYTE)v2 )
    return v2;
  else
    return apply_fixup(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16), 0xFu, *(_BYTE *)(a1 + 34) & 1);
}
