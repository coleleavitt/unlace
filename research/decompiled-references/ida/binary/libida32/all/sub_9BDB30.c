__int64 __fastcall sub_9BDB30(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int8 v5; // cl
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int8 v8; // dl
  __int64 v9; // rax
  char v10; // al
  unsigned __int64 v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // al
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx

  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v2 != 40 && v2 != 46 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
  {
    if ( v3 )
      goto LABEL_5;
    return 0;
  }
  v3 = *(_QWORD *)(v3 + 8);
  if ( !v3 )
    return 0;
LABEL_5:
  v5 = *(_BYTE *)(sub_B6AD60(v3) + 8) & 0x7F;
  if ( v5 > 0x12u )
  {
    if ( ((v5 + 94) & 0x7Fu) > 5 )
      return 0;
  }
  else if ( ((1LL << v5) & 0x40182) == 0 )
  {
    return 0;
  }
  v7 = *(unsigned __int8 *)(a1 + 96);
  v8 = *(_BYTE *)(a1 + 96) & 7;
  if ( v8 )
  {
    if ( v8 != 5 )
    {
LABEL_25:
      if ( v8 <= 3u )
        return 0;
      v10 = *(_BYTE *)(a1 + 28) & 0x7F;
LABEL_27:
      if ( v10 != 43 )
        goto LABEL_28;
      goto LABEL_30;
    }
    v21 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( v21 != 46 && v21 != 40 )
      goto LABEL_48;
    v22 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v22 = *(_QWORD *)(v22 + 8);
    if ( !v22 )
    {
LABEL_48:
      if ( v21 != 43 )
        return 0;
      goto LABEL_30;
    }
    v7 = *(_BYTE *)(sub_B6AD60(v22) + 8) & 0x7F;
    if ( (unsigned __int8)v7 > 0x12u )
    {
      v7 = ((_BYTE)v7 + 94) & 0x7F;
      if ( (unsigned __int8)v7 <= 5u )
        goto LABEL_47;
    }
    else if ( ((1LL << v7) & 0x40182) != 0 )
    {
LABEL_47:
      v8 = *(_BYTE *)(a1 + 96) & 7;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x2B && (*(_BYTE *)(a1 + 96) & 7u) > 3 )
      goto LABEL_30;
    return 0;
  }
  v9 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v9 & 8) != 0
    && (*(_DWORD *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v9 & 7)) >> 9 == 3 )
  {
    return 0;
  }
  v10 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( ((v10 + 85) & 0x7D) == 0 )
  {
    v7 &= 0x18u;
    if ( (_DWORD)v7 )
      return 0;
    goto LABEL_27;
  }
  v11 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 8);
  v12 = *(_BYTE *)(sub_B6AD60(v11) + 8) & 0x7F;
  if ( v12 == 24 || !v12 )
    return 0;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
  {
    v13 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v13 = *(_QWORD *)v13;
    if ( ((*(_BYTE *)(v13 + 8) + 70) & 0x7Fu) <= 3 || (*(_BYTE *)(a1 + 96) & 0x18) != 0 )
      return 0;
LABEL_28:
    if ( (*(_BYTE *)(a1 + 97) & 2) == 0 && (*(_BYTE *)(a1 + 98) & 1) == 0 )
      goto LABEL_30;
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 96) & 0x18) != 0 )
    return 0;
LABEL_30:
  if ( (*(_BYTE *)(a1 + 29) & 2) != 0 )
    return 0;
  v15 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  v16 = *(_QWORD *)(a1 + 16) & 4LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v15 = (_QWORD *)*v15;
  if ( a2 != v15 )
    return 0;
  v17 = (_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = sub_F3F500(*v17, a2, v16, v7, v6);
  if ( v18 )
    return sub_9BDA00(v18);
  v23 = *v17;
  v24 = *(_QWORD *)(*(_QWORD *)(*v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v25 = *(unsigned __int8 *)(v24 + 16);
  if ( (_BYTE)v25 == 13 )
  {
    if ( (((*(_WORD *)(v24 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
      return sub_F34610(v23);
  }
  else
  {
    if ( (_BYTE)v25 == 47 )
    {
      v26 = sub_F3D1D0(v24, a2, v23, v19, v20);
      if ( (*(_BYTE *)(v26 + 74) & 1) != 0 || (*(_QWORD *)(v26 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        return 1;
      v23 = *v17;
    }
    else if ( (unsigned __int8)v25 <= 0x2Au )
    {
      v27 = 0x40600004C00LL;
      if ( _bittest64(&v27, v25) )
        return 1;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
      return sub_F34610(v23);
  }
  return 1;
}

