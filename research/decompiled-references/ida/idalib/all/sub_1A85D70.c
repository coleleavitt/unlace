__int64 __fastcall sub_1A85D70(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 i; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int16 v9; // ax
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  for ( i = a2; ; i = *(_QWORD *)((*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF8LL) + 16) )
  {
    while ( 1 )
    {
      v7 = sub_BFB9F0(i);
      v9 = *(_WORD *)v7 & 0x1FF;
      if ( v9 <= 0x4Eu )
        break;
      if ( v9 > 0x58u
        || ((*(_WORD *)(v7 + 2) >> 3) & 0x7Fu) > 0x38
        || ((1LL << ((*(_WORD *)(v7 + 2) >> 3) & 0x7F)) & 0x100000000000016LL) == 0 )
      {
        return 0;
      }
LABEL_23:
      i = *(_QWORD *)(v7 + 16);
    }
    switch ( v9 )
    {
      case '"':
        v12 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v7 + 16) + 48LL) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v12 & 8) != 0
          && (((*(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v12 & 7)) >> 6) & 7) == 2 )
        {
          v13 = *(_QWORD *)(v7 + 24);
          v10 = sub_1A85D70(a1, v13, a3);
          if ( (_BYTE)v10 )
          {
            if ( (*(_BYTE *)(v7 + 40) & 2) != 0 )
            {
              *(_DWORD *)(a3 + 16) = sub_C00A40(v7, v13, v14, v15, v16);
              *(_QWORD *)(a3 + 8) = sub_EEC8C0(v7, v13, a4);
            }
            *(_BYTE *)(a3 + 20) = 1;
            return v10;
          }
        }
        return 0;
      case 'G':
        v17 = *(_QWORD *)(v7 + 16);
        if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 40 <= 6 )
        {
          v18 = *(_QWORD *)&byte_8[*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v18 & 8) != 0
            && (((*(__int64 *)((char *)&qword_18 + (v18 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v18 & 7)) >> 6) & 7) == 2 )
          {
            *(_QWORD *)a3 = v17;
            v19 = sub_C00A40(v7, a2, v17, v18 & 0xFFFFFFFFFFFFFFF0LL, v8);
            goto LABEL_20;
          }
        }
        return 0;
      case '.':
        if ( (*(_QWORD *)v7 & 0x80000LL) != 0 )
          return 0;
        goto LABEL_23;
    }
    if ( v9 != 17 )
      return 0;
    v7 = sub_BFB9F0(*(_QWORD *)(v7 + 16));
    if ( (*(_WORD *)v7 & 0x1FF) != 0x20 )
      return 0;
    v20 = *(_QWORD *)(v7 + 16);
    if ( (v20 & 4) != 0 )
      return 0;
    v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_WORD *)(v21 + 72) & 0x430) == 0 )
    {
      v22 = *(_QWORD *)(v21 + 120);
      if ( !v22 )
        return 0;
      v23 = *(_QWORD *)&byte_8[*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v23 & 8) == 0
        || (((*(__int64 *)((char *)&qword_18 + (v23 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v23 & 7)) >> 6) & 7) != 2 )
      {
        return 0;
      }
    }
    *(_BYTE *)(a3 + 20) = 1;
    if ( ((*(__int64 *)(v7 + 40) >> 1) & 3) == 1 )
      break;
  }
  v24 = *(_QWORD *)(sub_15F1670(a1) + 120);
  *(_QWORD *)a3 = v24;
  if ( !v24 )
    return 0;
  v19 = *(_DWORD *)(v7 + 32);
LABEL_20:
  *(_DWORD *)(a3 + 16) = v19;
  v10 = 1;
  *(_QWORD *)(a3 + 8) = sub_EEC8C0(v7, a2, a4);
  return v10;
}
