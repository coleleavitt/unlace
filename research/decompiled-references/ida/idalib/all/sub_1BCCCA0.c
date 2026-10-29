unsigned __int64 __fastcall sub_1BCCCA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // cl
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v26; // rsi
  _QWORD v27[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a5;
  v27[0] = a3;
  v8 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 34 )
  {
LABEL_2:
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 35;
    if ( (unsigned int)v10 > 1 )
    {
      v9 = sub_F63050(v9, a2, v10, a4);
      v11 = *(unsigned __int8 *)(v9 + 19);
      LOBYTE(v11) = (unsigned __int8)v11 >> 2;
      if ( (_BYTE)v11 )
        goto LABEL_4;
    }
    else
    {
      v11 = *(unsigned __int8 *)(v9 + 19);
      LOBYTE(v11) = (unsigned __int8)v11 >> 2;
      if ( (_BYTE)v11 )
        goto LABEL_4;
    }
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 13 && ((*(_WORD *)(v24 + 18) >> 3) & 0x1FF) == 0x1E9 )
      return sub_6D5440(v27);
LABEL_4:
    v8 = *(_QWORD *)(v27[0] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v8 + 16) == 34 )
      goto LABEL_5;
    goto LABEL_26;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 34 )
  {
    v8 = sub_F63050(v8, a2, v11, a4);
    if ( !v8 )
      goto LABEL_4;
    goto LABEL_2;
  }
LABEL_26:
  v8 = sub_1BC7620(v8, a2, v11, a4);
  if ( !v8 )
    goto LABEL_9;
LABEL_5:
  v12 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 35;
  if ( (unsigned int)v13 > 1 )
  {
    v12 = sub_F63050(v12, a2, v13, a4);
    v14 = *(unsigned __int8 *)(v12 + 19);
    LOBYTE(v14) = (unsigned __int8)v14 >> 2;
    if ( !(_BYTE)v14 )
      goto LABEL_9;
  }
  else
  {
    v14 = *(unsigned __int8 *)(v12 + 19);
    LOBYTE(v14) = (unsigned __int8)v14 >> 2;
    if ( !(_BYTE)v14 )
      goto LABEL_9;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E9 )
    return sub_6D5440(v27);
LABEL_9:
  v16 = sub_F68450(a1, a2, v14, a4, a5);
  v17 = 0;
  v18 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v16) & 7;
  v19 = *(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v19 & 8) != 0 )
    v17 = *(__int64 *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL));
  v20 = v18 | v19;
  v21 = v17 | v20 & 7;
  if ( v6 )
    v21 = v17 & 0xFFFFFFFFFFFFFE3FLL | v20 & 7;
  v22 = 0;
  v23 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  if ( (v23 & 8) != 0 )
    v22 = *(__int64 *)((char *)&qword_18 + (v23 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v21 == (v22 | v23 & 7) )
  {
    if ( (v27[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      BUG();
    return sub_6D5440(v27);
  }
  v26 = sub_A70F20(a4, *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL, v21);
  if ( *(_BYTE *)(*(_QWORD *)(v27[0] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
    return sub_A74EC0(a4, v26);
  else
    return sub_A70010(a4, v26);
}
