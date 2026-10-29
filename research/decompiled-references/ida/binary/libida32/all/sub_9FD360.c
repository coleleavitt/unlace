__int64 __fastcall sub_9FD360(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // dl
  __int64 result; // rax

  sub_9FD0E0(a1, a2);
  v2 = *(_BYTE *)(a2 + 152) & 1 | *(_BYTE *)(a1 + 152) & 0xFE;
  *(_BYTE *)(a1 + 152) = v2;
  v3 = *(_BYTE *)(a2 + 152) & 2 | v2 & 0xFD;
  *(_BYTE *)(a1 + 152) = v3;
  v4 = *(_BYTE *)(a2 + 152) & 4 | v3 & 0xFB;
  *(_BYTE *)(a1 + 152) = v4;
  v5 = *(_BYTE *)(a2 + 152) & 8 | v4 & 0xF7;
  *(_BYTE *)(a1 + 152) = v5;
  v6 = *(_BYTE *)(a2 + 152) & 0x10 | v5 & 0xEF;
  *(_BYTE *)(a1 + 152) = v6;
  v7 = *(_BYTE *)(a2 + 152);
  *(_BYTE *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 152) = v7 & 0x20 | v6 & 0xDF;
  if ( *(_BYTE *)(a2 + 192) )
  {
    sub_9FB050(a1 + 160, a2 + 160);
    *(_BYTE *)(a1 + 232) = 0;
    if ( !*(_BYTE *)(a2 + 232) )
    {
LABEL_3:
      *(_BYTE *)(a1 + 272) = 0;
      if ( !*(_BYTE *)(a2 + 272) )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 232) = 0;
    if ( !*(_BYTE *)(a2 + 232) )
      goto LABEL_3;
  }
  sub_9FB050(a1 + 200, a2 + 200);
  *(_BYTE *)(a1 + 272) = 0;
  if ( !*(_BYTE *)(a2 + 272) )
  {
LABEL_4:
    *(_BYTE *)(a1 + 312) = 0;
    if ( !*(_BYTE *)(a2 + 312) )
      goto LABEL_5;
LABEL_10:
    sub_9FB050(a1 + 280, a2 + 280);
    *(_BYTE *)(a1 + 352) = 0;
    if ( !*(_BYTE *)(a2 + 352) )
      goto LABEL_6;
LABEL_11:
    sub_9FB050(a1 + 320, a2 + 320);
    goto LABEL_6;
  }
LABEL_9:
  sub_9FB050(a1 + 240, a2 + 240);
  *(_BYTE *)(a1 + 312) = 0;
  if ( *(_BYTE *)(a2 + 312) )
    goto LABEL_10;
LABEL_5:
  *(_BYTE *)(a1 + 352) = 0;
  if ( *(_BYTE *)(a2 + 352) )
    goto LABEL_11;
LABEL_6:
  result = *(_QWORD *)(a2 + 360);
  *(_QWORD *)(a1 + 360) = result;
  return result;
}

