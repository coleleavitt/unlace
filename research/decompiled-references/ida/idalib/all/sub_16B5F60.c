__int64 __fastcall sub_16B5F60(__int64 a1, unsigned __int64 a2, char a3)
{
  char v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int16 v6; // cx
  int v7; // eax
  __int64 result; // rax
  __int16 v9; // dx

  while ( 1 )
  {
    v3 = a3;
    v4 = sub_BFD550(a2);
    v5 = v4;
    v6 = *(_WORD *)v4 & 0x1FF;
    if ( v6 == 4 )
    {
      if ( !v3 || (unsigned int)(*(_BYTE *)(v4 + 2) >> 3) - 2 > 1 )
        return 0;
      goto LABEL_4;
    }
    if ( ((v6 + 394) & 0x1FFu) > 1 )
      break;
    v7 = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
    if ( v7 == 32 )
    {
      a3 = v3;
      a2 = *(_QWORD *)(v5 + 24);
    }
    else
    {
      if ( !v3 || (unsigned int)(v7 - 21) > 0xA )
        return 0;
LABEL_4:
      a2 = *(_QWORD *)(v5 + 16);
      a3 = 1;
    }
  }
  if ( v6 == 46 )
  {
    v9 = *(_WORD *)sub_BFD550(*(_QWORD *)(v4 + 16));
    result = 0;
    if ( (v9 & 0x1FF) == 0x62 )
      return *(_QWORD *)(v5 + 24);
  }
  else
  {
    result = 0;
    if ( v6 == 71 )
      return *(_QWORD *)(v5 + 16);
  }
  return result;
}
