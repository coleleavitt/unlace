__int64 __fastcall sub_1894760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax

  v6 = a3;
  v7 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16) - 35;
  if ( (_BYTE)a4 )
  {
    if ( v8 > 1 )
      v7 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
    a3 = *(unsigned __int8 *)(v7 + 19);
    LOBYTE(a3) = (unsigned __int8)a3 >> 2;
    if ( !(_BYTE)a3 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1E9 )
        return 0;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(unsigned __int8 *)(v7 + 16) - 35;
  }
  if ( v8 > 1 )
  {
    v7 = sub_F63050(v7, a2, a3, a4);
    if ( *(_BYTE *)(v7 + 19) >> 2 )
      goto LABEL_10;
    return sub_AABC90(a1, a2, v6, a4, a5);
  }
  if ( !(*(_BYTE *)(v7 + 19) >> 2) )
    return sub_AABC90(a1, a2, v6, a4, a5);
LABEL_10:
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 13 || ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) != 0x1E9 )
    return sub_AABC90(a1, a2, v6, a4, a5);
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 35;
  if ( (unsigned int)v12 > 1 )
    v11 = sub_F63050(v11, a2, v12, a4);
  if ( !(*(_BYTE *)(v11 + 19) >> 2) )
    return 0;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) != 13 || ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) != 0x1E9 )
    return 0;
  return sub_A7F400(a1, a2, v6, 0, a5);
}
