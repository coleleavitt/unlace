unsigned __int64 __fastcall sub_B6AFD0(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 v5; // rax
  int v6; // eax
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // eax
  int v14; // r9d
  __int64 v15; // r10

  v1 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( (unsigned int)(v1 - 34) > 5 )
    goto LABEL_2;
  v5 = *(_QWORD *)(sub_B68470(a1) + 16);
  if ( (v5 & 4) != 0 )
  {
    v13 = *(_BYTE *)(sub_B6AD60(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL)) + 8) & 0x7F;
    if ( v13 && v13 != 24 )
    {
      if ( (unsigned int)(v14 - 35) > 3 )
      {
        v2 = *(_QWORD *)(sub_B68470(a1) + 16);
        return *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      }
      goto LABEL_10;
    }
    v8 = *(_QWORD *)(v15 + 8);
    goto LABEL_26;
  }
  v6 = *(_BYTE *)(sub_B6AD60(v5 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0x7F;
  if ( !v6 || v6 == 24 )
  {
LABEL_26:
    if ( ((*(_BYTE *)(sub_B6AD60(v8) + 8) + 70) & 0x7Fu) <= 3 )
      return v3;
LABEL_2:
    if ( (unsigned int)(v1 - 35) > 3 )
    {
LABEL_3:
      v2 = *(_QWORD *)(sub_B68470(a1) + 16);
      if ( (v2 & 4) != 0 )
        return *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      return v2 & 0xFFFFFFFFFFFFFFF8LL;
    }
LABEL_10:
    v9 = *(_QWORD *)(sub_B68470(a1) + 16);
    if ( (v9 & 4) != 0 )
      v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10 )
    {
      if ( v10 != 64 )
      {
        v11 = *(_QWORD *)(v10 + 64);
        if ( v11 )
        {
          if ( (*(_BYTE *)(v11 + 10) & 0x20) != 0 && (unsigned int)sub_B53B50(a1 - 72) == 42 )
          {
            v12 = sub_B4E950(a1);
            return sub_B4E950(v12);
          }
        }
      }
    }
    goto LABEL_3;
  }
  if ( (unsigned int)(v7 - 35) <= 3 )
    goto LABEL_10;
  v2 = *(_QWORD *)(sub_B68470(a1) + 16);
  return v2 & 0xFFFFFFFFFFFFFFF8LL;
}

