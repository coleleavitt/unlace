__int64 __fastcall sub_6A740(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  int v8; // esi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx

  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = 14;
  v7 = *(unsigned int *)(a1 + 52);
  v8 = HIBYTE(*(_DWORD *)(a1 + 52));
  if ( a2 )
  {
    if ( (~(_BYTE)v8 & 0xEF) != 0 )
    {
      if ( v8 == 249 )
        goto LABEL_4;
      goto LABEL_8;
    }
    if ( (unsigned int)sub_64D70(
                         a1,
                         ((unsigned int)v7 >> 28) & 1,
                         ((unsigned int)v7 >> 28) & 1,
                         (unsigned __int8)~(_BYTE)v8 & 0xEF,
                         a5,
                         a6) )
      return 1;
LABEL_26:
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 26LL) = 0;
    return 1;
  }
  v10 = (unsigned __int8)v8 & 0xFE;
  if ( (_DWORD)v10 == 242 )
  {
    if ( (unsigned int)sub_64D70(a1, v8 & 1, v7, v10, a5, a6) )
      return 1;
    goto LABEL_26;
  }
  if ( v8 == 244 )
  {
LABEL_4:
    if ( (v7 & 0x100000) != 0 )
      return 0;
    if ( !(unsigned int)sub_65130(a1) )
      goto LABEL_26;
    return 1;
  }
LABEL_8:
  if ( (~(_DWORD)v7 & 0xC000000) != 0 )
    return 0;
  v11 = *(_QWORD *)a1;
  if ( *(int *)(*(_QWORD *)a1 + 192LL) <= 13 )
  {
    v12 = v7 & 0xE00;
    if ( (_DWORD)v12 != 2560 )
      return 0;
    if ( a2 )
    {
      v12 = v7 & 0x3000000;
      if ( (_DWORD)v12 != 0x2000000 )
      {
LABEL_13:
        if ( (v7 & 0x2000000) != 0 )
          return 0;
        if ( *(int *)(v11 + 192) <= 13 )
        {
          if ( (v7 & 0x10000000) != 0 )
            goto LABEL_26;
          goto LABEL_16;
        }
        goto LABEL_40;
      }
      if ( (v7 & 0x10000000) != 0 )
        goto LABEL_26;
      goto LABEL_23;
    }
  }
  else
  {
    v12 = v7 & 0xC00;
    if ( (_DWORD)v12 != 2048 )
      return 0;
    if ( a2 )
    {
      v12 = v7 & 0x3000000;
      if ( (_DWORD)v12 != 0x2000000 )
        goto LABEL_13;
      goto LABEL_23;
    }
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 32LL) = (unsigned int)v7 >> 28;
  v16 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v16 + 32) == 15 )
    *(_BYTE *)(v16 + 32) = 14;
  LODWORD(v7) = *(_DWORD *)(a1 + 52);
  v11 = v7 & 0x3000000;
  if ( (_DWORD)v11 == 0x2000000 )
  {
    if ( *(int *)(*(_QWORD *)a1 + 192LL) <= 13 && (unsigned int)v7 >> 28 == 15 )
      goto LABEL_26;
LABEL_23:
    v14 = v7 & 0x10;
    if ( (_DWORD)v14 )
      v15 = sub_65E50(a1);
    else
      v15 = sub_66990(a1, v12, v14, v11, a5, a6);
    if ( v15 )
      return 1;
    goto LABEL_26;
  }
  if ( (v7 & 0x2000000) != 0 )
    return 0;
  if ( *(int *)(*(_QWORD *)a1 + 192LL) <= 13 )
  {
    if ( (unsigned int)v7 >> 28 == 15 )
      goto LABEL_26;
    goto LABEL_16;
  }
LABEL_40:
  if ( (unsigned int)v7 >> 28 != 15 )
  {
LABEL_16:
    v13 = sub_65660(a1, a2);
    if ( !v13 )
      return 0;
    if ( v13 != -1 )
      return 1;
    goto LABEL_26;
  }
  return 0;
}
