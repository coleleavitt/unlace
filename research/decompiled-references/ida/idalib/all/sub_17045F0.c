bool __fastcall sub_17045F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  char v12; // di
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdi

  v7 = sub_17040B0(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL), a2, a3, a4, a5, a6);
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)&byte_8[sub_A71450(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL), v7)
                                       & 0xFFFFFFFFFFFFFFF0LL]
                    & 0xFFFFFFFFFFFFFFF0LL);
    v19 = *(_BYTE *)(v18 + 16);
    if ( v19 == 13 )
    {
      if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FFu) - 489 <= 2 )
        return 1;
    }
    else if ( v19 >= 0xDu && (unsigned __int8)(v19 - 34) <= 2u
           || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 248LL) + 2320LL) + 1LL) & 8) != 0
           && ((*(_BYTE *)(v18 + 17) & 4) != 0
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48) )
    {
      return 1;
    }
  }
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  v11 = v10;
  if ( (unsigned int)v10 - 40 > 6 )
    return 0;
  v12 = *(_BYTE *)(a2 + 96);
  v13 = v12 & 7;
  v14 = (unsigned __int8)v13;
  if ( (_BYTE)v13 )
  {
    if ( (unsigned __int8)v13 != 5 )
      goto LABEL_16;
    if ( v10 != 40 && v10 != 46 )
      goto LABEL_52;
    v24 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v11 = *(_QWORD *)(a2 + 16) & 4LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v24 = *(_QWORD *)(v24 + 8);
    if ( !v24 )
    {
LABEL_52:
      if ( v10 != 43 )
        return 0;
      goto LABEL_17;
    }
    v14 = *(_BYTE *)(sub_B8EAA0(v24) + 8) & 0x7F;
    if ( (unsigned __int8)v14 > 0x12u )
    {
      v14 = ((_BYTE)v14 + 94) & 0x7F;
      if ( (unsigned __int8)v14 > 5u )
      {
LABEL_45:
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
          return 0;
      }
    }
    else if ( ((1LL << v14) & 0x40182) == 0 )
    {
      goto LABEL_45;
    }
    v13 = *(_BYTE *)(a2 + 96) & 7;
LABEL_16:
    if ( (unsigned __int8)v13 <= 3u )
      return 0;
    goto LABEL_17;
  }
  v11 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v11 & 8) != 0 )
  {
    v14 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    v11 = (*(_DWORD *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v11 & 7)) >> 9;
    if ( (_DWORD)v11 == 3 )
      return 0;
  }
  if ( ((v10 + 85) & 0x7D) != 0 )
  {
    v15 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v15 = *(_QWORD *)(v15 + 8);
    v16 = *(_BYTE *)(sub_B8EAA0(v15) + 8) & 0x7F;
    if ( !v16 || v16 == 24 )
      return 0;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    {
      v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v11 = *(_QWORD *)v11;
      if ( ((*(_BYTE *)(v11 + 8) + 70) & 0x7Fu) <= 3 )
        return 0;
    }
    v12 = *(_BYTE *)(a2 + 96);
  }
  if ( (v12 & 0x18) != 0 )
    return 0;
LABEL_17:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 1;
  v20 = sub_B8C3D0(a2, v13, v11, v14, v8, v9);
  v21 = *v20;
  v22 = *v20 + 8LL * *((unsigned int *)v20 + 2);
  if ( v21 >= v22 )
  {
    if ( v21 != v22 )
    {
      while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 148 )
      {
        v22 += 8LL;
        if ( v21 == v22 )
          return 1;
      }
      return v21 == v22;
    }
    return 1;
  }
  v23 = v21;
  while ( 1 )
  {
    v21 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 148 )
      break;
    v23 += 8LL;
    if ( v22 == v23 )
      return 1;
  }
  return v21 == v22;
}
