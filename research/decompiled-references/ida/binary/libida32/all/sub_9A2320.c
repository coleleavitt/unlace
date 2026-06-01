char __fastcall sub_9A2320(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  _WORD *v4; // rdi
  __int64 v5; // rax
  char v6; // di
  unsigned __int8 v7; // si
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rax
  _WORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int16 v14; // ax
  unsigned int v15; // ebx
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r8
  _BOOL4 v20; // r12d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // ebx
  __int64 v25; // r12
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int8 v29; // cl

  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *(_BYTE *)(a1 + 28) & 0x7F;
      if ( v3 != 33 )
      {
        if ( (unsigned int)v3 - 40 > 6 )
          goto LABEL_4;
        v6 = *(_BYTE *)(a1 + 96);
        v7 = v6 & 7;
        if ( (v6 & 7) == 0 )
        {
          v8 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v8 & 8) != 0
            && (*(_DWORD *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v8 & 7)) >> 9 == 3 )
          {
            goto LABEL_19;
          }
          if ( ((v3 + 85) & 0x7D) != 0 )
          {
            v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
              v9 = *(_QWORD *)(v9 + 8);
            v10 = *(_BYTE *)(sub_B6AD60(v9) + 8) & 0x7F;
            if ( !v10 || v10 == 24 )
              goto LABEL_19;
            if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
            {
              v11 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
                v11 = *(_QWORD *)v11;
              if ( ((*(_BYTE *)(v11 + 8) + 70) & 0x7Fu) <= 3 )
                goto LABEL_19;
            }
            v6 = *(_BYTE *)(a1 + 96);
          }
          if ( (v6 & 0x18) != 0 )
            goto LABEL_19;
          return *(_QWORD *)(a1 + 48) & 1LL;
        }
        if ( v7 != 5 )
          goto LABEL_21;
        if ( v3 != 40 && v3 != 46 )
          goto LABEL_87;
        v28 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
          v28 = *(_QWORD *)(v28 + 8);
        if ( !v28 )
        {
LABEL_87:
          if ( v3 != 43 )
            goto LABEL_19;
          return *(_QWORD *)(a1 + 48) & 1LL;
        }
        v29 = *(_BYTE *)(sub_B6AD60(v28) + 8) & 0x7F;
        if ( v29 > 0x12u )
        {
          if ( ((v29 + 94) & 0x7Fu) > 5 )
          {
LABEL_85:
            if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
              goto LABEL_19;
          }
        }
        else if ( ((1LL << v29) & 0x40182) == 0 )
        {
          goto LABEL_85;
        }
        v7 = *(_BYTE *)(a1 + 96) & 7;
LABEL_21:
        if ( v7 <= 3u )
          goto LABEL_19;
        return *(_QWORD *)(a1 + 48) & 1LL;
      }
      v4 = *(_WORD **)(a1 + 72);
      if ( !v4 )
        goto LABEL_4;
      if ( ((*v4 + 509) & 0x1FFu) > 0x7E )
        goto LABEL_4;
      v12 = (_WORD *)sub_BD7BC0(v4);
      if ( ((*v12 + 509) & 0x1FFu) > 0x7E )
        goto LABEL_4;
      v13 = sub_BD7B40(v12);
      v14 = *(_WORD *)v13 & 0x1FF;
      if ( v14 == 20 )
      {
        if ( *(int *)(v13 + 16) >= 0 )
        {
          v18 = *(_QWORD *)(v13 + 24);
          v19 = 1;
LABEL_53:
          v22 = 1;
          goto LABEL_54;
        }
LABEL_26:
        v13 = sub_BD7B40(v13);
        v14 = *(_WORD *)v13 & 0x1FF;
        goto LABEL_27;
      }
      if ( ((v14 + 509) & 0x1FFu) <= 0x7E )
        goto LABEL_26;
LABEL_27:
      if ( v14 == 52 )
        goto LABEL_67;
      if ( v14 <= 0x34u )
        break;
      if ( v14 == 89 )
      {
        v5 = sub_BD7F30(*(_QWORD *)(v13 + 32));
        if ( v5 && (*(_BYTE *)(v5 + 28) & 0x7Fu) - 34 <= 5 )
        {
          LOBYTE(v5) = (*(_BYTE *)(v5 + 84) & 3) != 0;
          return v5;
        }
        goto LABEL_4;
      }
      if ( v14 > 0x59u )
      {
        if ( v14 == 115 )
        {
LABEL_67:
          v24 = sub_EC7AA0(v13);
          if ( (v24 & 0x80000000) == 0 )
            goto LABEL_4;
          if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 1LL) & 8) != 0 )
            goto LABEL_19;
          v25 = *(_QWORD *)(a2 + 88);
          while ( 1 )
          {
            if ( (unsigned __int8)sub_FFC750(v25, v24, 0) )
            {
              v26 = sub_FFC860(v25, v24);
              if ( v26 >= 0 )
              {
LABEL_74:
                v5 = sub_13B83E0(v24, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 56));
                if ( v27 != 5 )
                {
                  if ( v27 != 4 )
                    goto LABEL_19;
                  LOBYTE(v5) = *(_DWORD *)v5 != 1702195828;
                  return v5;
                }
                if ( *(_DWORD *)v5 != 1936482662 || *(_BYTE *)(v5 + 4) != 101 )
                  goto LABEL_19;
LABEL_4:
                LOBYTE(v5) = 0;
                return v5;
              }
            }
            else
            {
              v26 = sub_FFBF10(v25, v24);
              if ( v26 >= 0 )
                goto LABEL_74;
            }
            v24 = v26;
          }
        }
        if ( v14 != 118 )
          goto LABEL_4;
        v20 = 1;
        v21 = (*(_WORD *)(v13 + 2) >> 3) & 0x3F;
        if ( (unsigned int)(v21 - 19) > 1 )
          v20 = (unsigned int)(v21 - 9) <= 6;
        if ( (unsigned __int8)sub_9A2810(*(_QWORD *)(v13 + 16), a2, 0, v20, 0) )
          goto LABEL_19;
        v18 = *(_QWORD *)(v13 + 24);
        v19 = 0;
        v22 = v20;
LABEL_54:
        LOBYTE(v5) = sub_9A2810(v18, a2, 0, v22, v19);
        return v5;
      }
      if ( v14 != 71 )
        goto LABEL_4;
      a1 = *(_QWORD *)(v13 + 16);
    }
    if ( v14 == 5 )
      goto LABEL_19;
    if ( v14 <= 5u )
    {
      if ( v14 != 4 || (((*(_BYTE *)(v13 + 2) >> 3) + 25) & 0x1D) != 0 )
        goto LABEL_4;
      v18 = *(_QWORD *)(v13 + 16);
      v19 = 0;
      goto LABEL_53;
    }
    if ( v14 == 40 )
      break;
    if ( v14 != 46 )
      goto LABEL_4;
    a1 = *(_QWORD *)(v13 + 24);
  }
  v15 = sub_EC7AA0(v13);
  if ( (v15 & 0x80000000) == 0 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a2 + 88);
  while ( 2 )
  {
    if ( !(unsigned __int8)sub_FFC750(v16, v15, 0) )
    {
      v17 = sub_FFBF10(v16, v15);
      if ( v17 >= 0 )
        break;
      goto LABEL_36;
    }
    v17 = sub_FFC860(v16, v15);
    if ( v17 < 0 )
    {
LABEL_36:
      v15 = v17;
      continue;
    }
    break;
  }
  v5 = sub_13B83E0(v15, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 56));
  if ( v23 == 3 )
  {
    if ( *(_WORD *)v5 == 17753 && *(_BYTE *)(v5 + 2) == 83 )
      goto LABEL_4;
LABEL_19:
    LOBYTE(v5) = 1;
  }
  else
  {
    if ( v23 != 2 )
      goto LABEL_19;
    LOBYTE(v5) = *(_WORD *)v5 != 20302;
  }
  return v5;
}

