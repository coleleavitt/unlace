__int64 __fastcall sub_1BCBEB0(__int64 a1, __int64 a2, char a3, char a4, char *a5, _BYTE *a6, __int64 a7)
{
  __int64 v7; // r10
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r10
  __int64 v18; // rsi
  unsigned int v22; // edi
  unsigned int v23; // r14d
  char v24; // al
  char v25; // al
  char v26; // si
  int v27; // edx
  char v28; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v29[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = 0;
  v8 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)&byte_8[a1 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v9 & 8) != 0 )
    v7 = *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
  v10 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = ((unsigned __int8)a1 | (unsigned __int8)v9) & 7;
  v12 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v13 = v7 | v11;
  v14 = 0;
  if ( (v12 & 8) != 0 )
    v14 = *(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
  v15 = v13 & 0xFFFFFFFFFFFFFFF7LL;
  v16 = v14 | ((unsigned __int8)a2 | (unsigned __int8)v12) & 7;
  v29[0] = v16;
  v17 = ((v13 & 0xFFFFFFFFFFFFFFF7LL) >> 6) & 7;
  v18 = (v16 >> 6) & 7;
  if ( (_DWORD)v17 != (_DWORD)v18 )
  {
    if ( (_DWORD)v18 == 3 || (_DWORD)v17 == 3 || (_DWORD)v18 && (_DWORD)v17 && (v16 & 1) == 0 )
      return 0;
    if ( (_DWORD)v18 != 1 || (v16 & 1) == 0 )
      *a6 = 1;
    v16 &= 0xFFFFFFFFFFFFFE3FLL;
    v29[0] = v16;
    v15 = v13 & 0xFFFFFFFFFFFFFE37LL;
  }
  if ( ((v16 >> 4) & 3) != ((v15 >> 4) & 3) && ((v15 & 0x30) == 0 || (v16 & 0x30) == 0) )
  {
    v16 &= 0xFFFFFFFFFFFFFFCFLL;
    v15 &= 0xFFFFFFFFFFFFFFCFLL;
    v29[0] = v16;
  }
  if ( HIDWORD(v15) != HIDWORD(v16) )
    return 0;
  if ( a3 )
  {
    v22 = (unsigned int)v16 >> 9;
    v23 = (unsigned int)v15 >> 9;
    if ( v22 == (unsigned int)v15 >> 9 )
      goto LABEL_28;
    goto LABEL_23;
  }
  v28 = a4;
  v25 = sub_16A8C50(v29, v15, a7);
  a4 = v28;
  if ( !v25 )
    return 0;
  v26 = v29[0];
  v23 = (unsigned int)v15 >> 9;
  v22 = LODWORD(v29[0]) >> 9;
  if ( LODWORD(v29[0]) >> 9 != (unsigned int)v15 >> 9 )
  {
LABEL_23:
    if ( !a4 )
      return 0;
    if ( !sub_F56A30(v22, v23, a7) )
    {
      if ( !a3 || LODWORD(v29[0]) >> 9 != v23 && !sub_F56A30(v23, LODWORD(v29[0]) >> 9, a7) )
        return 0;
      goto LABEL_28;
    }
    if ( !a3 )
    {
      v26 = v29[0];
      goto LABEL_34;
    }
LABEL_28:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5 )
    {
LABEL_29:
      v24 = *a5;
      goto LABEL_30;
    }
LABEL_37:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
      goto LABEL_29;
    return 0;
  }
LABEL_34:
  if ( (v26 & 7) != (v15 & 7) && !*a5 )
    return 0;
  v27 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v27 == 5 )
    goto LABEL_37;
  v24 = *a5;
  if ( (unsigned int)(v27 - 2) <= 1
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
  {
    if ( v24 )
      goto LABEL_40;
    return 0;
  }
LABEL_30:
  if ( v24 )
  {
    v26 = v29[0];
LABEL_40:
    v24 = v26 & 1;
  }
  *a5 = v24;
  return 1;
}
