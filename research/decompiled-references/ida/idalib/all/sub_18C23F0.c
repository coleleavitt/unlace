__int64 __fastcall sub_18C23F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi

  v4 = 0;
  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57;
  if ( (unsigned int)v8 > 1 )
    goto LABEL_7;
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 57;
  if ( (unsigned int)v7 > 1 )
  {
    if ( ((*(_BYTE *)(sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8) + 18) >> 3) & 0xF) == 1 )
      goto LABEL_20;
  }
  else if ( ((*(_BYTE *)(v6 + 18) >> 3) & 0xF) == 1 )
  {
    goto LABEL_20;
  }
  v9 = *(_QWORD *)v5;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 57 <= 1 )
  {
    if ( ((*(_BYTE *)(v9 + 18) >> 3) & 0xF) != 3 )
    {
LABEL_6:
      LOBYTE(v4) = ((*(_BYTE *)(v9 + 18) >> 3) & 0xF) == 2;
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  if ( ((*(_BYTE *)(sub_F63050(v9, a2, v7, v8) + 18) >> 3) & 0xF) == 3 )
  {
LABEL_20:
    v4 = 1;
    goto LABEL_7;
  }
  v9 = *(_QWORD *)v5;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 16LL) - 57 <= 1 )
    goto LABEL_6;
  LOBYTE(v4) = ((*(_BYTE *)(sub_F63050(v9, a2, v7, v8) + 18) >> 3) & 0xF) == 2;
LABEL_7:
  v10 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = *(_QWORD *)v10;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
     - 57 > 1 )
    return v4;
  if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 57 <= 1 )
  {
    if ( ((*(_BYTE *)(v11 + 18) >> 3) & 0xF) == 1 )
      return 1;
    goto LABEL_10;
  }
  if ( ((*(_BYTE *)(sub_F63050(v11, a2, v7, v8) + 18) >> 3) & 0xF) == 1 )
    return 1;
  v11 = *(_QWORD *)v10;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 57 <= 1 )
  {
LABEL_10:
    v12 = (*(_BYTE *)(v11 + 18) >> 3) & 0xF;
    if ( (_BYTE)v12 != 3 )
    {
LABEL_11:
      LOBYTE(v12) = (_BYTE)v12 == 2;
      v4 |= v12;
      return v4;
    }
    return 1;
  }
  if ( ((*(_BYTE *)(sub_F63050(v11, a2, v14, v15) + 18) >> 3) & 0xF) != 3 )
  {
    v18 = *(_QWORD *)v10;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 57 > 1 )
    {
      v4 |= ((*(_BYTE *)(sub_F63050(v18, a2, v16, v17) + 18) >> 3) & 0xF) == 2;
      return v4;
    }
    v12 = (*(_BYTE *)(v18 + 18) >> 3) & 0xF;
    goto LABEL_11;
  }
  return 1;
}
