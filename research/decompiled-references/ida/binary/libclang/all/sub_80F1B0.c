unsigned __int64 __fastcall sub_80F1B0(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // ax

  while ( 1 )
  {
    v3 = *(_WORD *)a1 & 0x1FF;
    if ( v3 == 80 )
    {
      v2 = sub_80C4C0(a1);
      goto LABEL_3;
    }
    if ( v3 > 0x3Cu )
      break;
    if ( v3 != 49 )
      return a1;
    v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
      goto LABEL_3;
    v2 = *(_QWORD *)(v2 + 40);
    if ( v2 == a1 )
      return a1;
LABEL_4:
    a1 = v2;
  }
  if ( v3 <= 0x3Eu )
  {
    v2 = *(_QWORD *)(a1 + 16);
LABEL_3:
    if ( v2 == a1 )
      return a1;
    goto LABEL_4;
  }
  if ( v3 == 117 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    goto LABEL_3;
  }
  return a1;
}

