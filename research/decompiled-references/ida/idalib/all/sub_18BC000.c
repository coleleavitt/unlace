__int64 __fastcall sub_18BC000(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi

  v4 = 0;
  v5 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57;
  if ( (unsigned int)v7 > 1 )
    goto LABEL_7;
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 57;
  if ( (unsigned int)v7 > 1 )
  {
    if ( ((*(_BYTE *)(sub_F63050(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, a4) + 18) >> 3) & 0xF) == 1 )
      goto LABEL_20;
  }
  else if ( ((*(_BYTE *)(v6 + 18) >> 3) & 0xF) == 1 )
  {
    goto LABEL_20;
  }
  v8 = *(_QWORD *)v5;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 57 <= 1 )
  {
    if ( ((*(_BYTE *)(v8 + 18) >> 3) & 0xF) != 3 )
    {
LABEL_6:
      LOBYTE(v4) = ((*(_BYTE *)(v8 + 18) >> 3) & 0xF) == 2;
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  if ( ((*(_BYTE *)(sub_F63050(v8, a2, v7, a4) + 18) >> 3) & 0xF) == 3 )
  {
LABEL_20:
    v4 = 1;
    goto LABEL_7;
  }
  v8 = *(_QWORD *)v5;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 57 <= 1 )
    goto LABEL_6;
  LOBYTE(v4) = ((*(_BYTE *)(sub_F63050(v8, a2, v7, a4) + 18) >> 3) & 0xF) == 2;
LABEL_7:
  v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
    return v4;
  if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57 <= 1 )
  {
    if ( ((*(_BYTE *)(v10 + 18) >> 3) & 0xF) == 1 )
      return 1;
    goto LABEL_10;
  }
  if ( ((*(_BYTE *)(sub_F63050(v10, a2, v7, a4) + 18) >> 3) & 0xF) == 1 )
    return 1;
  v10 = *(_QWORD *)v9;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 57 <= 1 )
  {
LABEL_10:
    v11 = (*(_BYTE *)(v10 + 18) >> 3) & 0xF;
    if ( (_BYTE)v11 != 3 )
    {
LABEL_11:
      LOBYTE(v11) = (_BYTE)v11 == 2;
      v4 |= v11;
      return v4;
    }
    return 1;
  }
  if ( ((*(_BYTE *)(sub_F63050(v10, a2, v13, v14) + 18) >> 3) & 0xF) != 3 )
  {
    v17 = *(_QWORD *)v9;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v9 + 16LL) - 57 > 1 )
    {
      v4 |= ((*(_BYTE *)(sub_F63050(v17, a2, v15, v16) + 18) >> 3) & 0xF) == 2;
      return v4;
    }
    v11 = (*(_BYTE *)(v17 + 18) >> 3) & 0xF;
    goto LABEL_11;
  }
  return 1;
}
