__int64 __fastcall sub_8145F0(__int64 a1)
{
  unsigned __int64 i; // rdi
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // dx
  __int64 v5; // rdi
  unsigned int v6; // edx

  for ( i = *(_QWORD *)(*(unsigned __int8 *)(a1 + 3) + a1); ; i = *(_QWORD *)(v2 + 16) )
  {
    v2 = sub_80F310(i);
    v3 = *(_WORD *)v2 & 0x1FF;
    if ( v3 != 9 )
      break;
  }
  while ( v3 > 0x76u )
  {
    if ( v3 > 0x78u || ((*(_WORD *)(v2 + 2) >> 3) & 0x3Fu) > 1 )
      return 0;
    v2 = sub_80F310(*(_QWORD *)(v2 + 24));
LABEL_7:
    v3 = *(_WORD *)v2 & 0x1FF;
  }
  switch ( v3 )
  {
    case 4u:
      if ( (((*(_BYTE *)(v2 + 2) >> 3) + 28) & 0x1Fu) > 2 )
        return 0;
      v2 = sub_80F310(*(_QWORD *)(v2 + 16));
      goto LABEL_7;
    case 0x48u:
      goto LABEL_12;
    case 0x2Fu:
      v5 = *(_QWORD *)(v2 + 24);
      goto LABEL_13;
  }
  if ( v3 != 118 )
    return 0;
LABEL_12:
  v5 = *(_QWORD *)(v2 + 16);
LABEL_13:
  if ( !v5 || (*(_BYTE *)(v5 + 28) & 0x7Fu) - 32 > 5 )
    return 0;
  LOBYTE(v6) = (unsigned int)sub_77F000(v5, 0) == 932;
  return v6;
}

