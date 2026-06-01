unsigned __int64 __fastcall sub_811DB0(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int16 v3; // ax
  _WORD *v4; // r13
  __int64 v5; // r12
  _WORD **v6; // rax
  __int64 v7; // r12
  _WORD *v8; // r12
  __int64 v9; // r13
  __int64 v10; // r13
  unsigned __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v15; // rax

  while ( 1 )
  {
    v3 = *(_WORD *)a1 & 0x1FF;
    if ( v3 == 80 )
    {
LABEL_2:
      v2 = *(_QWORD *)(a1 + 16);
      goto LABEL_3;
    }
    if ( v3 <= 0x3Cu )
    {
      if ( v3 == 49 )
      {
        v2 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
          goto LABEL_3;
        v2 = *(_QWORD *)(v2 + 40);
        v3 = *(_WORD *)v2 & 0x1FF;
        if ( v3 == 80 )
          goto LABEL_4;
        goto LABEL_16;
      }
      v2 = a1;
LABEL_52:
      if ( v3 == 9 )
        goto LABEL_4;
      v3 = *(_WORD *)v2 & 0x1FF;
      if ( v3 != 21 )
        goto LABEL_19;
      goto LABEL_6;
    }
    if ( v3 <= 0x3Eu )
      goto LABEL_2;
    if ( v3 == 117 )
      break;
    v2 = a1;
LABEL_7:
    if ( v3 == 87 )
      goto LABEL_8;
LABEL_19:
    if ( v3 == 114 )
    {
      if ( *(_DWORD *)(v2 + 32) != 1 && (*(_DWORD *)(v2 + 32) <= 1u || (**(_WORD **)(v2 + 48) & 0x1FF) != 0x71) )
        goto LABEL_9;
      v6 = (_WORD **)(v2 + 40);
    }
    else
    {
      if ( v3 != 115 )
        goto LABEL_28;
      if ( *(_DWORD *)(v2 + 32) != 1 && (*(_DWORD *)(v2 + 32) <= 1u || (**(_WORD **)(v2 + 56) & 0x1FF) != 0x71) )
        goto LABEL_9;
      v6 = (_WORD **)(v2 + 48);
    }
    v4 = *v6;
    v7 = sub_AC7B80(v2);
    if ( sub_AC7B80(v4) == v7 || (*(_BYTE *)(v2 + 2) & 8) != 0 )
      goto LABEL_27;
LABEL_9:
    if ( a1 == v2 )
      return a1;
LABEL_10:
    a1 = v2;
  }
  v2 = *(_QWORD *)(a1 + 24);
LABEL_3:
  v3 = *(_WORD *)v2 & 0x1FF;
  if ( v3 == 80 )
  {
LABEL_4:
    v2 = *(_QWORD *)(v2 + 16);
LABEL_5:
    v3 = *(_WORD *)v2 & 0x1FF;
    if ( v3 != 21 )
      goto LABEL_7;
LABEL_6:
    v2 = *(_QWORD *)(v2 + 24);
    v3 = *(_WORD *)v2 & 0x1FF;
    goto LABEL_7;
  }
LABEL_16:
  if ( v3 <= 0x3Cu )
  {
    if ( v3 == 49 )
    {
      v15 = *(_QWORD *)(v2 + 16);
      v2 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) != 0 )
        v2 = *(_QWORD *)(v2 + 40);
      goto LABEL_5;
    }
    goto LABEL_52;
  }
  if ( v3 <= 0x3Eu )
    goto LABEL_4;
  if ( v3 != 87 )
    goto LABEL_19;
LABEL_8:
  v4 = *(_WORD **)(v2 + 16);
  v5 = sub_AC7B80(v2);
  if ( sub_AC7B80(v4) != v5 )
    goto LABEL_9;
LABEL_27:
  v2 = (unsigned __int64)v4;
  v3 = *v4 & 0x1FF;
LABEL_28:
  if ( v3 != 93 )
    goto LABEL_9;
  v8 = (_WORD *)sub_8C3120(v2);
  v9 = sub_AC7B80(v2);
  if ( sub_AC7B80(v8) == v9 )
  {
    v2 = (unsigned __int64)v8;
    goto LABEL_9;
  }
  if ( (*v8 & 0x1FF) == 0x15 )
  {
    v10 = sub_AC7B80(v2);
    if ( sub_AC7B80(v8) == v10 )
    {
      v2 = (unsigned __int64)v8;
      goto LABEL_9;
    }
  }
  v11 = sub_80F310((unsigned __int64)v8);
  v12 = sub_AC7B80(v2);
  v13 = sub_AC7B80(v11);
  if ( (_DWORD)v13 != (_DWORD)v12 )
    goto LABEL_9;
  if ( HIDWORD(v13) == HIDWORD(v12) )
    v2 = v11;
  if ( a1 != v2 )
    goto LABEL_10;
  return a1;
}

