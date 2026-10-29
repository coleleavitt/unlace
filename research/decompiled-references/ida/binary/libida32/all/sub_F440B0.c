__int64 __fastcall sub_F440B0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax

  v6 = a1;
  *a3 = 0;
  if ( *(_BYTE *)(a1 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v6 = sub_F3F130(a1);
    if ( !v6 )
      return 0;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 35 > 1 )
  {
    v7 = sub_F3F130(v7);
    v8 = *(unsigned __int8 *)(v7 + 19);
    LOBYTE(v8) = (unsigned __int8)v8 >> 2;
    if ( !(_BYTE)v8 )
      goto LABEL_4;
  }
  else
  {
    v8 = *(unsigned __int8 *)(v7 + 19);
    LOBYTE(v8) = (unsigned __int8)v8 >> 2;
    if ( !(_BYTE)v8 )
    {
LABEL_4:
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v9 + 16) == 13 )
      {
        v10 = 1;
        if ( ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1E9 )
          return v10;
      }
    }
  }
  v11 = sub_A3AA80(v6, a2, v8, a4, a5);
  v10 = sub_F422E0(v11);
  if ( !(_BYTE)v10 )
    return 0;
  v16 = sub_A3AA80(v6, a2, v12, v13, v14);
  v19 = *(unsigned __int8 *)(v16 + 19);
  LOBYTE(v19) = (unsigned __int8)v19 >> 2;
  if ( !(_BYTE)v19 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 0;
  }
  v21 = sub_A3AA80(v6, a2, v19, v17, v18);
  v24 = *(unsigned __int8 *)(v21 + 19);
  LOBYTE(v24) = (unsigned __int8)v24 >> 2;
  if ( (_BYTE)v24 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v25 + 16) == 13 && ((*(_WORD *)(v25 + 18) >> 3) & 0x1FF) == 0x1EA )
      return 0;
  }
  v26 = sub_A3AA80(v6, a2, v24, v22, v23);
  v27 = *(_QWORD *)(sub_F42360(v26, a2) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v27 + 16) - 35 > 1 )
    v27 = sub_F3F890(v27);
  *a3 = v27;
  return v10;
}

