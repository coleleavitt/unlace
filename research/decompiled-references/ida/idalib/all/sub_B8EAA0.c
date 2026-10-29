unsigned __int64 __fastcall sub_B8EAA0(__int64 a1)
{
  unsigned __int64 v1; // r8
  char v2; // si
  unsigned __int64 i; // rdi
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( v2 != 62 )
    goto LABEL_2;
  v6 = sub_B8C1B0(a1);
  if ( (*(_BYTE *)(v6 + 28) & 0x7F) != 0 )
    v6 = sub_B8C2C0(v6);
  i = v1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 88) + 2320LL) + 1LL) & 8) != 0 )
  {
LABEL_2:
    for ( i = v1; ; v2 = *(_BYTE *)(i + 8) & 0x7F )
    {
      if ( v2 == 62 )
      {
        if ( *(char *)(i + 12) < 0 )
          return i;
      }
      else if ( (v2 & 0x7D) != 4 && v2 != 25 )
      {
        return i;
      }
      v4 = *(_QWORD *)(sub_B8C1B0(i) + 16);
      if ( (v4 & 4) != 0 )
        i = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      else
        i = v4 & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
  while ( 1 )
  {
    if ( ((v2 + 70) & 0x7Fu) <= 3 )
      goto LABEL_22;
    if ( v2 == 62 )
      break;
    if ( (v2 & 0x7D) != 4 && v2 != 25 )
      return i;
LABEL_22:
    v7 = *(_QWORD *)(sub_B8C1B0(i) + 16);
    if ( (v7 & 4) != 0 )
      i = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    else
      i = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v2 = *(_BYTE *)(i + 8) & 0x7F;
  }
  if ( *(char *)(i + 12) >= 0 )
    goto LABEL_22;
  return i;
}
