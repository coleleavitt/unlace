__int64 __fastcall sub_70ABF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  while ( 1 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 34 > 1 )
      v6 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    v7 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 34 > 1 )
      v7 = sub_B0D320(*(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    if ( !(*(_BYTE *)(v6 + 19) >> 2) )
      break;
    if ( !(*(_BYTE *)(v7 + 19) >> 2) )
    {
      v8 = *(_QWORD *)(v7 + 24);
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1E8 )
        return 1;
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) != 13 )
        goto LABEL_12;
      v11 = (*(_WORD *)(v10 + 18) >> 3) & 0x1FF;
      if ( v11 != 488 )
      {
        if ( v11 != 489 )
          goto LABEL_12;
        goto LABEL_41;
      }
      goto LABEL_25;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v20 + 16) != 13 )
    {
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v28 + 16) != 13 || ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) != 0x1E8 )
        goto LABEL_12;
LABEL_25:
      if ( (unsigned __int8)sub_6D5120((__int64)a1, a2, a3, 0) )
        return 1;
      goto LABEL_18;
    }
    v21 = *(_WORD *)(v20 + 18);
    if ( ((v21 >> 3) & 0x1FF) == 0x1E8 )
      goto LABEL_25;
    v8 = *(_QWORD *)(v7 + 24);
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v22 + 16) == 13 && ((*(_WORD *)(v22 + 18) >> 3) & 0x1FF) == 0x1E8 )
      goto LABEL_25;
    if ( ((v21 >> 3) & 0x1FF) != 0x1E9 )
      goto LABEL_12;
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) != 13 || ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) != 0x1E9 )
      goto LABEL_41;
    if ( (unsigned __int8)sub_6D6840((__int64)a1, a2, a3) )
      return 1;
LABEL_18:
    if ( !(unsigned __int8)sub_B0DBD0(v7) )
      return 0;
    v15 = sub_B0EBE0(a2, a1);
    v16 = sub_B0EBE0(a3, a1);
    a3 = v15;
    a2 = v16;
  }
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) != 13 )
  {
    if ( !(*(_BYTE *)(v7 + 19) >> 2) )
    {
      v8 = *(_QWORD *)(v7 + 24);
      v24 = *(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v25 = *(_QWORD *)v24;
      if ( *(_BYTE *)(*(_QWORD *)v24 + 16LL) != 13 )
        goto LABEL_12;
      goto LABEL_38;
    }
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v27 + 16) != 13 || ((*(_WORD *)(v27 + 18) >> 3) & 0x1FF) != 0x1E8 )
      goto LABEL_12;
    goto LABEL_25;
  }
  if ( ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1E8 )
    return 1;
  if ( *(_BYTE *)(v7 + 19) >> 2 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) != 13 || ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1E8 )
      goto LABEL_40;
    goto LABEL_25;
  }
  v8 = *(_QWORD *)(v7 + 24);
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v25 + 16) != 13 )
    goto LABEL_40;
LABEL_38:
  if ( ((*(_WORD *)(v25 + 18) >> 3) & 0x1FF) == 0x1E8 )
    return 1;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) != 13 )
    goto LABEL_12;
LABEL_40:
  if ( ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) != 0x1E9 )
    goto LABEL_12;
LABEL_41:
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v26 + 16) == 13 && ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) == 0x1E9 )
    return 1;
LABEL_12:
  v12 = *(_QWORD *)(v6 + 24);
  while ( 2 )
  {
    v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(unsigned __int8 *)(v13 + 16);
    if ( (unsigned int)(v14 - 34) <= 1 )
    {
      if ( (_BYTE)v14 == 35 )
        break;
      goto LABEL_56;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      return 0;
    v29 = sub_B0D320(v13);
    v13 = v29;
    if ( !v29 )
      return 0;
    if ( *(_BYTE *)(v29 + 16) != 35 )
    {
LABEL_56:
      v12 = *(_QWORD *)(v13 + 24);
      continue;
    }
    break;
  }
  if ( !sub_B07AF0(v13) || !sub_6A8100(*(_QWORD *)(v7 + 24)) )
    return 0;
  if ( !(unsigned __int8)sub_70A720(a1, v6, v7) )
    goto LABEL_18;
  return 1;
}

