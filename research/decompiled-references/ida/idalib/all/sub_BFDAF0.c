unsigned __int64 __fastcall sub_BFDAF0(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int64 v4; // rbp
  _WORD *v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  _WORD **v9; // rax
  _WORD *v10; // r13
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // rbx
  __int16 v14; // bx
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax

  while ( 1 )
  {
    v3 = *(_WORD *)a1 & 0x1FF;
    if ( v3 == 79 || ((v3 + 452) & 0x1FFu) <= 1 )
    {
      v2 = *(_QWORD *)(a1 + 16);
      if ( v2 == a1 )
        goto LABEL_4;
      goto LABEL_3;
    }
    if ( v3 != 48 )
    {
      if ( v3 != 116 )
      {
        v2 = a1;
        goto LABEL_18;
      }
      v2 = *(_QWORD *)(a1 + 24);
LABEL_3:
      v3 = *(_WORD *)v2 & 0x1FF;
      goto LABEL_4;
    }
    v7 = *(_QWORD *)(a1 + 16);
    if ( (v7 & 4) != 0 )
    {
      v2 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      v3 = *(_WORD *)v2 & 0x1FF;
LABEL_4:
      if ( v3 == 79 )
        goto LABEL_5;
      goto LABEL_18;
    }
    v2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v3 = *(_WORD *)v2 & 0x1FF;
    if ( v3 == 79 )
      goto LABEL_5;
LABEL_18:
    if ( ((v3 + 452) & 0x1FFu) <= 1 )
    {
LABEL_5:
      v4 = *(_QWORD *)(v2 + 16);
      if ( v4 == v2 )
        goto LABEL_7;
      goto LABEL_6;
    }
    if ( v3 == 48 )
    {
      v8 = *(_QWORD *)(v2 + 16);
      if ( (v8 & 4) == 0 )
      {
        v4 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v3 = *(_WORD *)v4 & 0x1FF;
        goto LABEL_7;
      }
      v4 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 40);
LABEL_6:
      v3 = *(_WORD *)v4 & 0x1FF;
      goto LABEL_7;
    }
    if ( v3 == 8 )
    {
      v4 = *(_QWORD *)(v2 + 16);
      v3 = *(_WORD *)v4 & 0x1FF;
    }
    else
    {
      v4 = v2;
    }
LABEL_7:
    if ( v3 == 20 )
    {
      v4 = *(_QWORD *)(v4 + 24);
      v3 = *(_WORD *)v4 & 0x1FF;
    }
    if ( v3 != 86 )
    {
      if ( (unsigned int)v3 - 113 > 1 )
        goto LABEL_30;
      if ( *(_DWORD *)(v4 + 32) == 1 )
      {
        if ( v3 == 114 )
        {
LABEL_27:
          v9 = (_WORD **)(v4 + 48);
LABEL_28:
          v10 = *v9;
          v11 = sub_EEC8C0(v4);
          if ( sub_EEC8C0(v10) == v11 || (*(_QWORD *)v4 & 0x80000LL) != 0 )
          {
            v4 = (unsigned __int64)v10;
            v3 = *v10 & 0x1FF;
          }
          goto LABEL_30;
        }
      }
      else
      {
        if ( *(_DWORD *)(v4 + 32) <= 1u )
          goto LABEL_30;
        if ( v3 == 114 )
        {
          if ( (**(_WORD **)(v4 + 56) & 0x1FF) != 0x70 )
            goto LABEL_11;
          goto LABEL_27;
        }
        if ( (**(_WORD **)(v4 + 48) & 0x1FF) != 0x70 )
          goto LABEL_30;
      }
      v9 = (_WORD **)(v4 + 40);
      goto LABEL_28;
    }
    v5 = *(_WORD **)(v4 + 16);
    v6 = sub_EEC8C0(v4);
    if ( sub_EEC8C0(v5) != v6 )
      goto LABEL_11;
    v4 = (unsigned __int64)v5;
    v3 = *v5 & 0x1FF;
LABEL_30:
    if ( v3 != 92 )
      goto LABEL_11;
    v12 = sub_C94680(v4);
    v13 = sub_EEC8C0(v4);
    if ( sub_EEC8C0(v12) != v13 )
      break;
    v4 = v12;
LABEL_11:
    if ( v4 == a1 )
      return v4;
LABEL_12:
    a1 = v4;
  }
  v14 = *(_WORD *)v12 & 0x1FF;
  if ( v14 == 20 )
  {
    v15 = sub_EEC8C0(v4);
    if ( sub_EEC8C0(v12) == v15 )
    {
      v4 = v12;
      goto LABEL_11;
    }
  }
  while ( 2 )
  {
    if ( v14 == 20 )
      goto LABEL_35;
    if ( v14 != 4 )
    {
      switch ( v14 )
      {
        case 57:
          if ( (*(_DWORD *)(v12 + 16) & 0x3FFF8000) != 0x3FFF8000 )
          {
            v16 = *(_QWORD *)(v12
                            + 8LL * (((*(_BYTE *)(v12 + 19) & 0x40) != 0) + ((*(_DWORD *)(v12 + 16) >> 15) & 0x7FFFu))
                            + 32);
            v14 = *(_WORD *)v16 & 0x1FF;
            if ( v14 == 79 )
              goto LABEL_37;
            goto LABEL_55;
          }
          break;
        case 77:
          if ( ((**(_DWORD **)(v12 + 16) >> 14) & 0xC) == 0 )
          {
            if ( (*(_BYTE *)(v12 + 2) & 8) == 0 )
            {
              v16 = *(_QWORD *)(v12 + 32);
              v14 = *(_WORD *)v16 & 0x1FF;
              goto LABEL_36;
            }
LABEL_35:
            v16 = *(_QWORD *)(v12 + 24);
            v14 = *(_WORD *)v16 & 0x1FF;
            goto LABEL_36;
          }
          break;
        case 18:
          if ( (*(_QWORD *)v12 & 0x1000000) != 0 && (BYTE2(*(_QWORD *)v12) & 0x80u) != 0 )
          {
            v16 = *(_QWORD *)(v12 + 16);
            if ( v16 )
            {
              v14 = *(_WORD *)v16 & 0x1FF;
              goto LABEL_36;
            }
          }
          break;
        default:
          v16 = v12;
          goto LABEL_36;
      }
LABEL_43:
      v16 = v12;
      goto LABEL_44;
    }
    if ( *(_BYTE *)(v12 + 2) >> 3 != 12 )
      goto LABEL_43;
    v16 = *(_QWORD *)(v12 + 16);
    v14 = *(_WORD *)v16 & 0x1FF;
LABEL_36:
    if ( v14 == 79 )
    {
LABEL_37:
      v17 = *(_QWORD *)(v16 + 16);
      goto LABEL_38;
    }
LABEL_55:
    if ( ((v14 + 452) & 0x1FFu) <= 1 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      if ( v17 != v16 )
        goto LABEL_38;
      goto LABEL_57;
    }
LABEL_44:
    if ( v14 != 48 )
    {
LABEL_57:
      if ( v14 == 8 )
        goto LABEL_37;
      v17 = v16;
LABEL_38:
      if ( v17 == v12 )
        goto LABEL_47;
LABEL_39:
      v12 = v17;
      v14 = *(_WORD *)v17 & 0x1FF;
      continue;
    }
    break;
  }
  v18 = *(_QWORD *)(v16 + 16);
  v17 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v18 & 4) == 0 )
    goto LABEL_38;
  v17 = *(_QWORD *)(v17 + 40);
  if ( v17 != v12 )
    goto LABEL_39;
LABEL_47:
  v19 = sub_EEC8C0(v4);
  v20 = sub_EEC8C0(v17);
  if ( (_DWORD)v20 != (_DWORD)v19 )
    goto LABEL_11;
  if ( HIDWORD(v20) == HIDWORD(v19) )
    v4 = v17;
  if ( v4 != a1 )
    goto LABEL_12;
  return v4;
}
