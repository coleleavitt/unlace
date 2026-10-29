__int64 __fastcall sub_1AF8F00(__int64 a1, __int64 a2, char a3, bool *a4)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // eax
  unsigned int v15; // ebp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rbx
  __int64 v22; // rsi
  __int64 *v23; // rdi
  __int64 v25; // rdx
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD **)(a1 + 248);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 <= 1
    || (LOBYTE(v9) = a2,
        v25 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v25 <= 1)
    && (v7 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v25, a4)) != 0 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 32);
      if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
        v7 = *(_QWORD *)v10;
        v11 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 43;
        if ( (unsigned int)v11 <= 1 )
          break;
        v12 = sub_F63050(v7, a2, v11, a4);
        v9 = *(_QWORD *)(v12 + 32);
        if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
          goto LABEL_5;
      }
    }
LABEL_5:
    v6 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v13 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v6 + 8) | (unsigned __int8)v9) & 7;
  LOBYTE(v14) = sub_F56AE0(v13, v8);
  v15 = v14;
  v16 = sub_A71450((__int64)v8, v13);
  if ( a3
    && (v17 = *(_QWORD *)(a1 + 232), (*(_BYTE *)(v17 + 1) & 8) != 0)
    && (v26 = sub_F63270(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), v13, v17, v18, v19, v20), (v21 = v26) != nullptr) )
  {
    if ( (*((_BYTE *)v26 + 28) & 0x7Fu) - 60 <= 1 )
    {
      v27 = sub_BBF290((__int64)v26);
      if ( v27 )
        v21 = *(_QWORD **)(v27 + 48);
    }
  }
  else
  {
    v21 = nullptr;
  }
  if ( a4 )
    *a4 = v21 != nullptr;
  if ( (_BYTE)v15 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && v21 )
  {
    v22 = v21[13];
    v23 = (__int64 *)(v22 + 96);
    if ( !v21[16] )
    {
      sub_7052B0(v23, v22, v17, v18, v19, v20);
      if ( !v21[16] )
        return v15;
      v22 = v21[13];
      v23 = (__int64 *)(v22 + 96);
    }
    sub_7052B0(v23, v22, v17, v18, v19, v20);
    return ((*(_BYTE *)(v21[16] + 2LL) >> 3) ^ 1) & 1;
  }
  return v15;
}
