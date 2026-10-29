__int64 __fastcall sub_B694E0(unsigned __int64 a1)
{
  unsigned __int8 v2; // al
  int v3; // edx
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax

LABEL_1:
  while ( 1 )
  {
    v2 = *(_BYTE *)(a1 + 8) & 0x7F;
    v3 = v2;
    if ( v2 != 35 )
      break;
LABEL_8:
    v4 = a1 - 72;
    if ( (unsigned int)sub_B53B50(a1 - 72) != 42 )
      return v4;
    v6 = *(_QWORD *)(sub_B68470(a1) + 16);
    v7 = (v6 & 4) != 0 ? *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) : v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      BUG();
    v8 = *(_QWORD *)(v7 + 64);
    if ( !v8 || (*(_BYTE *)(v8 + 10) & 0x20) == 0 )
      return v4;
    a1 = sub_B4E950(v7);
  }
  while ( (unsigned int)(v3 - 34) > 5 )
  {
    if ( v2 == 18 )
      return a1 - 48;
    if ( v2 == 8 )
    {
      v4 = a1 - 40;
      if ( a1 == 40 )
        return v4;
      goto LABEL_6;
    }
LABEL_15:
    if ( v2 != 7 && v2 != 3 )
      return 0;
    v4 = a1 - 40;
    if ( a1 == 40 )
      return v4;
LABEL_6:
    v5 = *(_QWORD *)(sub_B68470(a1) + 16);
    if ( (v5 & 4) != 0 )
    {
      a1 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      goto LABEL_1;
    }
    a1 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    v2 = *(_BYTE *)(a1 + 8) & 0x7F;
    v3 = v2;
    if ( v2 == 35 )
      goto LABEL_8;
  }
  v4 = a1 - 72;
  if ( a1 != 72 )
    return v4;
  if ( v2 != 18 )
  {
    if ( v2 == 8 )
      goto LABEL_6;
    goto LABEL_15;
  }
  return 24;
}

