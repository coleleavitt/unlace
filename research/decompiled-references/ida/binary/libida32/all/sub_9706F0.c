__int64 __fastcall sub_9706F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int16 v3; // dx

  v1 = sub_BD7CB0(a1);
  v2 = sub_BD7CB0(v1);
  v3 = *(_WORD *)v2 & 0x1FF;
  if ( ((v3 + 433) & 0x1FFu) <= 9 )
  {
    if ( (((unsigned __int8)(*(_WORD *)(v2 + 2) >> 3) + 101) & 0x7D) != 0 )
      goto LABEL_4;
    v2 = *(_QWORD *)(v2 + 16);
    v3 = *(_WORD *)v2 & 0x1FF;
  }
  if ( v3 == 4 )
  {
    if ( *(_BYTE *)(v2 + 2) >> 3 != 7 )
      goto LABEL_4;
    v3 = **(_WORD **)(v2 + 16) & 0x1FF;
  }
  if ( ((v3 + 450) & 0x1EF) == 0 )
    return v1;
  if ( v3 == 52 )
    return v1;
LABEL_4:
  v1 = sub_BD7DA0(v1);
  if ( (*(_WORD *)v1 & 0x1FF) == 0x47 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v1 + 16) + 28LL) & 0x7F) != 0x21 )
      return 0;
    return v1;
  }
  return 0;
}

