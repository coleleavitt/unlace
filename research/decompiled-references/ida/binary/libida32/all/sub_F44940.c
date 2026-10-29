bool __fastcall sub_F44940(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v2 = a1;
  if ( *(_BYTE *)(a1 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v2 = sub_F3F130(a1);
    if ( !v2 )
      return 0;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v3 + 16) - 35 > 1 )
  {
    v3 = sub_F3F130(v3);
    if ( !(*(_BYTE *)(v3 + 19) >> 2) )
      goto LABEL_4;
  }
  else if ( !(*(_BYTE *)(v3 + 19) >> 2) )
  {
LABEL_4:
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v4 + 16) == 13 && ((*(_WORD *)(v4 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 1;
  }
  v6 = *(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v6 + 16LL) - 35 > 1 )
  {
    v11 = sub_F3F130(v7);
    if ( !(unsigned __int8)sub_F422E0(v11) )
      return 0;
  }
  else if ( !(unsigned __int8)sub_F422E0(v7) )
  {
    return 0;
  }
  v12 = sub_A3AA80(v2, a2, v8, v9, v10);
  v15 = *(unsigned __int8 *)(v12 + 19);
  LOBYTE(v15) = (unsigned __int8)v15 >> 2;
  if ( !(_BYTE)v15 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 1;
  }
  v17 = sub_A3AA80(v2, a2, v15, v13, v14);
  if ( !(*(_BYTE *)(v17 + 19) >> 2) )
    return 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v18 + 16) != 13 )
    return 0;
  return ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 490;
}

