__int64 __fastcall sub_818010(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  char v10; // al
  unsigned __int64 i; // rdi
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rdx
  char v14; // al
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-20h]

  if ( a2 != 5 )
    return 0;
  v6 = a4;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(a4 + 8);
  if ( *(_BYTE *)(v7 + 16) == 41 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(_BYTE *)(v9 + 16);
    switch ( v10 )
    {
      case 13:
        if ( (((*(_WORD *)(v9 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          return 0;
        break;
      case 46:
        v21 = a3;
        v19 = sub_B14A40(v9);
        if ( (*(_BYTE *)(v19 + 74) & 1) == 0 && *(_QWORD *)(v19 + 128) <= 7u )
          return 0;
        v20 = sub_B14A40(v9);
        a3 = v21;
        if ( *(char *)(v20 + 76) < 0 )
          return 0;
        break;
      case 10:
        break;
      default:
        return 0;
    }
    v6 = a3;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
      return 0;
    v14 = *(_BYTE *)(v7 + 16);
    if ( v14 == 13 )
    {
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        return 0;
      goto LABEL_9;
    }
    if ( v14 != 46 )
    {
      if ( v14 != 10 )
        return 0;
      goto LABEL_9;
    }
    v18 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL));
    if ( (*(_BYTE *)(v18 + 74) & 1) == 0 && *(_QWORD *)(v18 + 128) <= 7u || *(char *)(sub_B14A40(v7) + 76) < 0 )
      return 0;
  }
LABEL_9:
  for ( i = v6; ; i = v13 )
  {
    v12 = *(_WORD *)i & 0x1FF;
    if ( v12 == 21 )
    {
LABEL_22:
      v13 = *(_QWORD *)(i + 24);
      v12 = *(_WORD *)v13 & 0x1FF;
      goto LABEL_23;
    }
    if ( v12 <= 0x15u )
    {
      if ( v12 == 4 )
      {
        v13 = i;
        if ( *(_BYTE *)(i + 2) >> 3 != 12 )
          goto LABEL_26;
        v13 = *(_QWORD *)(i + 16);
        v12 = *(_WORD *)v13 & 0x1FF;
      }
      else
      {
        v13 = i;
        if ( v12 != 19 )
          goto LABEL_44;
        if ( (*(_BYTE *)(i + 3) & 1) == 0 || *(char *)(i + 2) >= 0 )
          goto LABEL_26;
        v13 = *(_QWORD *)(i + 16);
        if ( !v13 )
        {
          v13 = i;
          goto LABEL_26;
        }
        v12 = *(_WORD *)v13 & 0x1FF;
      }
      goto LABEL_23;
    }
    if ( v12 == 58 )
    {
      if ( (~*(_DWORD *)(i + 16) & 0x3FFF8000) == 0 )
        goto LABEL_31;
      v13 = *(_QWORD *)(i
                      + 8LL
                      * (((*(_DWORD *)(i + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(i + 19) & 0x40) != 0))
                      + 32);
      v12 = *(_WORD *)v13 & 0x1FF;
      if ( v12 > 0x4Fu )
      {
LABEL_24:
        if ( v12 > 0x59u )
          goto LABEL_26;
        goto LABEL_25;
      }
      goto LABEL_38;
    }
    if ( v12 != 78 )
      break;
    if ( ((**(_DWORD **)(i + 16) >> 14) & 0xC) != 0 )
      goto LABEL_31;
    if ( *(_BYTE *)(i + 48) )
      goto LABEL_22;
    v13 = *(_QWORD *)(i + 32);
    v12 = *(_WORD *)v13 & 0x1FF;
LABEL_23:
    if ( v12 > 0x4Fu )
      goto LABEL_24;
LABEL_38:
    if ( v12 > 0x3Cu )
      goto LABEL_39;
    if ( v12 == 49 )
      goto LABEL_42;
LABEL_44:
    if ( v12 == 9 )
      goto LABEL_25;
LABEL_26:
    if ( i == v13 )
      goto LABEL_31;
  }
  if ( v12 <= 0x4Fu )
  {
    v13 = i;
    if ( v12 <= 0x3Cu )
    {
      if ( v12 != 49 )
        goto LABEL_26;
LABEL_42:
      v17 = *(_QWORD *)(v13 + 16);
      v13 = v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 4) != 0 )
        v13 = *(_QWORD *)(v13 + 40);
      goto LABEL_26;
    }
LABEL_39:
    if ( v12 <= 0x3Eu )
      goto LABEL_25;
    goto LABEL_26;
  }
  if ( v12 <= 0x59u )
  {
    v13 = i;
LABEL_25:
    v13 = *(_QWORD *)(v13 + 16);
    goto LABEL_26;
  }
LABEL_31:
  if ( !(unsigned int)sub_817820(i, a1, 2) )
    return 0;
  v15 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v16 = *(_QWORD *)v15;
  if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) != 41 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
      return 0;
    v16 = sub_B0D320(v16);
    if ( !v16 )
      return 0;
  }
  return sub_B07E10(*(_QWORD *)(*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL), a1);
}

