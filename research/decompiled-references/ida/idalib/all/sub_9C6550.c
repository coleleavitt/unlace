char __fastcall sub_9C6550(_WORD *a1, __int64 a2, unsigned int *a3, unsigned __int8 a4, char a5)
{
  char v5; // r14
  unsigned int *v7; // rbp
  unsigned __int8 v8; // r12
  unsigned __int8 v9; // bl
  _WORD *v10; // rax
  __int64 v11; // r15
  unsigned __int16 v12; // ax
  char v13; // r12
  int v14; // eax
  __int64 v15; // rdi
  char v16; // al
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int8 v28; // [rsp+Ch] [rbp-4Ch]

  while ( 1 )
  {
    if ( !a1 )
      return 0;
    v5 = 0;
    if ( ((*a1 + 509) & 0x1FFu) > 0x7E )
      return v5;
    v7 = a3;
    v8 = a4;
    v28 = a5;
    v9 = a4;
    v10 = (_WORD *)sub_BFB900(a1);
    if ( ((*v10 + 509) & 0x1FFu) > 0x7E )
      return v5;
    v11 = sub_BFB880(v10);
    v12 = *(_WORD *)v11 & 0x1FF;
    if ( v12 == 20 )
    {
      if ( *(int *)(v11 + 16) >= 0 )
      {
        a1 = *(_WORD **)(v11 + 24);
        a4 = v8;
        a5 = 1;
        goto LABEL_46;
      }
LABEL_7:
      v11 = sub_BFB880(v11);
      v12 = *(_WORD *)v11 & 0x1FF;
      goto LABEL_8;
    }
    if ( ((v12 + 509) & 0x1FFu) <= 0x7E )
      goto LABEL_7;
LABEL_8:
    if ( v12 == 52 )
      goto LABEL_36;
    if ( v12 > 0x34u )
      break;
    if ( v12 == 5 )
      return 1;
    if ( v12 > 5u )
    {
      if ( v12 == 40 )
      {
        v13 = 1;
        goto LABEL_14;
      }
      if ( v12 == 46 )
      {
        v15 = *(_QWORD *)(v11 + 24);
        return sub_9C6060(v15, a2);
      }
      return 0;
    }
    if ( v12 != 4 || (((*(_BYTE *)(v11 + 2) >> 3) + 25) & 0x1D) != 0 )
      return 0;
    a4 = v9;
    a1 = *(_WORD **)(v11 + 16);
    a5 = v28;
    if ( v7 && !*v7 )
    {
      v16 = sub_9C6550(a1, a2, v7, v9, v28);
      v17 = *v7;
      v5 = v16;
      if ( *v7 )
      {
        v18 = sub_BFB880(*(_QWORD *)(v11 + 16));
        if ( __PAIR64__(v7[1], v17) == sub_EEC8C0(v18) )
          *(_QWORD *)v7 = sub_EEC8C0(v11);
      }
      return v5;
    }
LABEL_46:
    a3 = v7;
  }
  if ( v12 == 89 )
  {
    v20 = sub_BFBC70(*(_QWORD *)(v11 + 32));
    if ( v20 && (*(_BYTE *)(v20 + 28) & 0x7Fu) - 34 <= 5 )
      return (*(_BYTE *)(v20 + 84) & 3) != 0;
    return 0;
  }
  if ( v12 <= 0x59u )
  {
    if ( v12 == 71 )
    {
      v15 = *(_QWORD *)(v11 + 16);
      return sub_9C6060(v15, a2);
    }
    return 0;
  }
  if ( v12 != 115 )
  {
    if ( v12 != 118 )
      return 0;
    v14 = (*(_WORD *)(v11 + 2) >> 3) & 0x3F;
    if ( (unsigned int)(v14 - 19) > 1 )
      v8 = v9 & ((unsigned int)(v14 - 9) <= 6);
    if ( (unsigned __int8)sub_9C6550(*(_QWORD *)(v11 + 16), a2, v7, v8, 0) )
      return 1;
    a1 = *(_WORD **)(v11 + 24);
    a5 = 0;
    a4 = v8;
    goto LABEL_46;
  }
LABEL_36:
  v13 = 0;
LABEL_14:
  if ( !v9 )
    return 0;
  if ( v7 && !*v7 )
    *(_QWORD *)v7 = sub_EEC8C0(v11);
  if ( v28 )
    return 1;
  v19 = sub_EEB7E0(v11);
  if ( (v19 & 0x80000000) == 0 )
    return 0;
  v21 = *(_QWORD *)(a2 + 88);
  if ( v13 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_1020490(v21, v19, 0) )
      {
        v23 = sub_10205A0(v21, v19);
        if ( v23 >= 0 )
          goto LABEL_60;
      }
      else
      {
        v23 = sub_101FC50(v21, v19);
        if ( v23 >= 0 )
        {
LABEL_60:
          v24 = sub_13DC120(v19, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 56));
          if ( v25 == 3 )
          {
            if ( *(_WORD *)v24 != 17753 || *(_BYTE *)(v24 + 2) != 83 )
              return v9;
          }
          else if ( v25 != 2 || *(_WORD *)v24 != 20302 )
          {
            return v9;
          }
          return 0;
        }
      }
      v19 = v23;
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 1LL) & 8) != 0 )
    return v9;
  while ( 2 )
  {
    if ( !(unsigned __int8)sub_1020490(v21, v19, 0) )
    {
      v22 = sub_101FC50(v21, v19);
      if ( v22 >= 0 )
        break;
      goto LABEL_55;
    }
    v22 = sub_10205A0(v21, v19);
    if ( v22 < 0 )
    {
LABEL_55:
      v19 = v22;
      continue;
    }
    break;
  }
  v26 = sub_13DC120(v19, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 56));
  if ( v27 != 5 )
  {
    if ( v27 != 4 || *(_DWORD *)v26 != 1702195828 )
      return v9;
    return 0;
  }
  if ( *(_DWORD *)v26 == 1936482662 && *(_BYTE *)(v26 + 4) == 101 )
    return 0;
  return v9;
}
