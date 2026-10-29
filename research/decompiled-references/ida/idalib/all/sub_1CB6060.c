bool __fastcall sub_1CB6060(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 544);
  if ( !v2 )
    return 0;
  for ( i = v2; ; i = *(_QWORD *)(a1 + 544) )
  {
    if ( (*(_BYTE *)(i + 8) & 0x7Fu) - 59 <= 2 )
    {
      v4 = i - 64;
      if ( v4 )
        break;
    }
    if ( (*(_BYTE *)(v2 + 8) & 0x7F) == 0 || (*(_BYTE *)(v2 + 8) & 0x7F) == 0x18 )
      return 0;
    v5 = *(_QWORD *)(sub_B8C1B0(v2) + 16);
    if ( (v5 & 4) != 0 )
    {
      v2 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v2 )
        return 0;
    }
    else
    {
      v2 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v2 )
        return 0;
    }
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    v7 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9 & 4) == 0 )
      break;
    v7 = *(_QWORD *)v7;
    v8 = *(_BYTE *)(v7 + 8) & 0x7F;
    if ( (unsigned int)(v8 - 59) > 2 )
      goto LABEL_16;
LABEL_13:
    v4 = v7 - 64;
    if ( !v4 )
      return 0;
  }
  v8 = *(_BYTE *)(v7 + 8) & 0x7F;
  if ( (unsigned int)(v8 - 59) <= 2 )
    goto LABEL_13;
LABEL_16:
  if ( (unsigned int)(v8 - 34) > 5 || v7 == 72 )
    return 0;
  return (unsigned int)sub_B778D0(v7 - 72) != 0;
}
