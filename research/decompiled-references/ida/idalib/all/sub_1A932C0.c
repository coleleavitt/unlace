__int64 __fastcall sub_1A932C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( (*(_BYTE *)(a4 + 88) & 8) == 0 )
    return 0;
  v6 = sub_BAD910(a2, *(_QWORD *)(a3 + 40), (*(_BYTE *)(a3 + 58) & 2) != 0, 0, 1, 0);
  v7 = v6;
  if ( !v6 || (*(_BYTE *)(v6 + 58) & 8) == 0 )
    return 0;
  v8 = sub_B8E970(a2 + 48);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = *(_BYTE *)(v8 + 28) & 0x7F;
      if ( (_BYTE)v9 == 75 && (*(_BYTE *)(v8 + 73) & 0x40) == 0 )
        break;
      v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        goto LABEL_18;
    }
    v10 = *(_QWORD *)(v7 + 40);
LABEL_12:
    if ( (v10 == *(_QWORD *)(v8 + 80) || v10 == *(_QWORD *)(v8 + 88)) && a4 == *(_QWORD *)(v8 + 120) )
      return 1;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v8 )
        break;
      while ( 1 )
      {
        v9 = *(_BYTE *)(v8 + 28) & 0x7F;
        if ( (_BYTE)v9 != 75 )
          break;
        if ( (*(_BYTE *)(v8 + 73) & 0x40) == 0 )
          goto LABEL_12;
        v8 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v8 )
          goto LABEL_18;
      }
    }
  }
LABEL_18:
  v13 = *(_QWORD *)(a2 + 120);
  if ( !v13 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v9, v10, v11, v12);
    v13 = *(_QWORD *)(a2 + 120);
  }
  v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14 )
  {
    if ( (*(_BYTE *)(v14 + 72) & 1) != 0 )
    {
      sub_BA8900(a2);
      v14 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v15 = *(_QWORD *)(v14 + 56);
  }
  else
  {
    v15 = 0;
  }
  v20[0] = v15;
  sub_1A93120(v20);
  v16 = v20[0];
  if ( !v20[0] )
    return 0;
LABEL_25:
  v17 = sub_B8E970(v16 + 48);
  if ( !v17 )
  {
LABEL_37:
    while ( 1 )
    {
      v16 = *(_QWORD *)(v16 + 128);
      if ( !v16 )
        return 0;
      if ( *(char *)(v16 + 28) >= 0 )
      {
        v19 = *(_QWORD *)(v16 + 40);
        if ( (v19 & 7) != 0 || (v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_25;
      }
    }
  }
  while ( (*(_BYTE *)(v17 + 28) & 0x7F) != 0x4B || (*(_BYTE *)(v17 + 73) & 0x40) != 0 )
  {
    v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v17 )
      goto LABEL_37;
  }
  v18 = *(_QWORD *)(v7 + 40);
LABEL_31:
  if ( v18 != *(_QWORD *)(v17 + 80) && v18 != *(_QWORD *)(v17 + 88) || a4 != *(_QWORD *)(v17 + 120) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v17 )
        goto LABEL_37;
      while ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x4B )
      {
        if ( (*(_BYTE *)(v17 + 73) & 0x40) == 0 )
          goto LABEL_31;
        v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v17 )
          goto LABEL_37;
      }
    }
  }
  return 1;
}
