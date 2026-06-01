bool __fastcall sub_1D38D30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax

  v4 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  if ( *(_BYTE *)(*v4 + 16) != 44 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 44 )
      return 0;
    v5 = sub_F63050(*v4, a2, a3, a4);
    if ( !v5 )
      return 0;
  }
  v6 = v5;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v6 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      v8 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 43;
      if ( (unsigned int)v8 <= 1 )
        break;
      v9 = sub_F63050(v6, a2, v8, a4);
      v7 = *(_QWORD *)(v9 + 32);
      if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
        goto LABEL_6;
    }
  }
LABEL_6:
  v10 = 0;
  v11 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v11 & 8) != 0 )
  {
    v10 = *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v10 | ((unsigned __int8)v7 | (unsigned __int8)v11) & 7 )
      return 0;
  }
  else if ( (((unsigned __int8)v7 | (unsigned __int8)v11) & 7) != 0 )
  {
    return 0;
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v14 = *(_QWORD *)v13;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 43 > 1 )
        break;
      v13 = *(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
        goto LABEL_13;
    }
    v5 = sub_F63050(v14, a2, v7, v10);
  }
LABEL_13:
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 50 )
    return 0;
  return (unsigned int)a2 <= *(unsigned __int16 *)(v15 + 22);
}
