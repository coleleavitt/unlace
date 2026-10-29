__int64 __fastcall sub_AABC90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rax

  v5 = a2;
  v6 = a3;
  while ( 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 35 > 1 )
      v7 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35 > 1 )
      v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    v9 = *(_BYTE *)(v7 + 19) >> 2;
    if ( !v9 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v10 + 16) == 13 && ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) == 0x1E9 )
        return 1;
    }
    v12 = *(unsigned __int8 *)(v8 + 19);
    LOBYTE(v12) = (unsigned __int8)v12 >> 2;
    if ( !(_BYTE)v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1E9 )
        return 1;
      if ( !v9 )
      {
LABEL_34:
        v14 = *(_QWORD *)(v7 + 24);
        goto LABEL_35;
      }
      v14 = *(_QWORD *)(v7 + 24);
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v15 + 16) != 13 )
        goto LABEL_15;
LABEL_29:
      if ( ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E9 )
        goto LABEL_25;
      if ( !(_BYTE)v12 )
        goto LABEL_15;
      goto LABEL_31;
    }
    if ( !v9 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v17 + 16) != 13 || ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) != 0x1E9 )
        goto LABEL_34;
      goto LABEL_25;
    }
    v14 = *(_QWORD *)(v7 + 24);
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 13 )
      goto LABEL_29;
LABEL_31:
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) != 13 || ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1E9 )
    {
LABEL_15:
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1EA && (_BYTE)v12 && sub_A56B80(v8) )
      {
        if ( (unsigned __int8)sub_A804F0(a1, v5, v6, v14, a5) )
          return 1;
      }
      else
      {
LABEL_35:
        v19 = v14 & 0xFFFFFFFFFFFFFFF0LL;
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1EA )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v21 + 16) == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1EA )
            return 1;
        }
        if ( !sub_9C7D40(v7, a2, v12, v19, a5) || !sub_9C7D40(v8, a2, v22, v23, v24) )
          return 0;
        if ( (unsigned __int8)sub_AAB830(a1, v7, v8, v25, v26) )
          return 1;
      }
      if ( !(unsigned __int8)sub_F66020(v8) )
        return 0;
      goto LABEL_43;
    }
LABEL_25:
    if ( (unsigned __int8)sub_A7F400(a1, v5, v6, 0, a5) )
      return 1;
    if ( !(unsigned __int8)sub_F66020(v8) )
      return 0;
LABEL_43:
    a2 = a1;
    v27 = sub_F67FB0(v5, a1);
    v28 = sub_F67FB0(v6, a1);
    v6 = v27;
    v5 = v28;
  }
}
