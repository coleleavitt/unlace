__int64 __fastcall sub_80F4C0(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int16 v2; // dx

  while ( 1 )
  {
    v1 = sub_80F310(a1);
    v2 = *(_WORD *)v1 & 0x1FF;
    if ( v2 != 9 )
      break;
    a1 = *(_QWORD *)(v1 + 16);
  }
  while ( v2 > 0x76u )
  {
    if ( v2 > 0x78u || ((*(_WORD *)(v1 + 2) >> 3) & 0x3Fu) > 1 )
      return 0;
    v1 = sub_80F310(*(_QWORD *)(v1 + 24));
LABEL_6:
    v2 = *(_WORD *)v1 & 0x1FF;
  }
  switch ( v2 )
  {
    case 4u:
      if ( (((*(_BYTE *)(v1 + 2) >> 3) + 28) & 0x1Fu) > 2 )
        return 0;
      v1 = sub_80F310(*(_QWORD *)(v1 + 16));
      goto LABEL_6;
    case 0x48u:
      return *(_QWORD *)(v1 + 16);
    case 0x2Fu:
      return *(_QWORD *)(v1 + 24);
  }
  if ( v2 != 118 )
    return 0;
  return *(_QWORD *)(v1 + 16);
}

