__int64 __fastcall sub_BEB480(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *src,
        __int64 a8,
        char *a9,
        __int64 a10,
        int a11)
{
  __int64 v14; // rdx
  __int64 *v15; // r10
  __int16 v16; // ax
  size_t v17; // rdx
  char v18; // di
  __int64 *v19; // r8
  __int64 *v20; // rcx
  char v21; // r12
  __int16 v22; // bp
  __int64 v23; // rax
  size_t v24; // r13
  char *v25; // rsi
  char *i; // rcx
  _DWORD *v27; // rax
  char v28; // al
  __int64 v29; // r8
  char v30; // al
  char v31; // al
  __int64 result; // rax
  char v33; // cl
  int v34; // eax
  __int64 v35; // [rsp+8h] [rbp-50h]
  int v36; // [rsp+10h] [rbp-48h]
  int v37; // [rsp+14h] [rbp-44h]

  v14 = *(_QWORD *)(a2 + 18640);
  v15 = src;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0xF;
  if ( unk_2CAD564 )
  {
    v37 = a6;
    v36 = a5;
    v35 = v14;
    sub_EC5E10(15);
    v15 = src;
    a6 = v37;
    a5 = v36;
    v14 = v35;
  }
  v16 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = v14;
  *(_DWORD *)(a1 + 32) = a5;
  v16 &= 0xF801u;
  *(_DWORD *)(a1 + 16) = a8;
  *(_DWORD *)(a1 + 40) = a11;
  v17 = 8 * a8;
  v18 = HIBYTE(v16) & 0xF7;
  v19 = &v15[a8];
  *(_WORD *)(a1 + 1) = v16;
  *(_DWORD *)(a1 + 20) = a10;
  *(_QWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 36) = a6;
  *(_BYTE *)(a1 + 2) = HIBYTE(v16) & 0xF7;
  *(_DWORD *)(a1 + 4) = a3;
  if ( v19 == v15 )
  {
    v21 = 0;
    LOBYTE(v22) = 0;
  }
  else
  {
    v20 = v15;
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = *v20++;
      LOWORD(v23) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
      v21 |= v23 & 1;
      v22 |= ((unsigned __int16)v23 >> 1) & 1;
    }
    while ( v19 != v20 );
  }
  v24 = 8 * a10;
  v25 = &a9[8 * a10];
  *(_BYTE *)(a1 + 2) = v18 | 8;
  if ( a9 != v25 )
  {
    for ( i = a9; v25 != i; i += 8 )
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)i;
        v30 = *(_BYTE *)(*(_QWORD *)i + 4LL);
        v21 |= (v30 & 2) != 0;
        LOBYTE(v22) = v30 & 1 | v22;
        if ( !(_BYTE)v22 )
        {
          v31 = *(_BYTE *)(a1 + 2) & 0xF7 | (2 * v30) & 8;
          *(_BYTE *)(a1 + 2) = v31;
          if ( (v31 & 8) == 0 )
            goto LABEL_19;
        }
        if ( (unsigned int)(*(_DWORD *)v29 - 1) > 1 )
          break;
        v27 = (_DWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFFCLL);
        if ( v27 )
          goto LABEL_9;
LABEL_11:
        i += 8;
        if ( v25 == i )
          goto LABEL_19;
      }
      if ( *(_DWORD *)v29 != 3 || *(_BYTE *)(v29 + 24) )
        goto LABEL_11;
      v27 = *(_DWORD **)(v29 + 8);
      if ( v27 )
      {
LABEL_9:
        if ( (*v27 & 0x40000) != 0 )
        {
          v28 = (unsigned __int8)((*(_DWORD *)a1 >> 14) & 0xF | 0x10) >> 2;
          *(_BYTE *)(a1 + 1) = (((*(_DWORD *)a1 >> 14) & 0xF | 0x10) << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
          *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xF8 | v28;
        }
        goto LABEL_11;
      }
    }
  }
LABEL_19:
  if ( v17 )
    memmove((void *)(a1 + 48), v15, v17);
  if ( v24 )
    memmove((void *)(a1 + 8LL * (unsigned int)a8 + 48), a9, v24);
  result = (8 * (v22 & 1 | ((*(_BYTE *)(a1 + 2) & 8) != 0))) | *(_BYTE *)(a1 + 2) & 0xF7u;
  *(_BYTE *)(a1 + 2) = (8 * (v22 & 1 | ((*(_BYTE *)(a1 + 2) & 8) != 0))) | *(_BYTE *)(a1 + 2) & 0xF7;
  if ( v21 )
  {
    result = ((unsigned __int8)((*(_DWORD *)a1 >> 14) & 0x1E | 1) >> 2) | (unsigned int)result & 0xFFFFFFF8;
    v33 = (((*(_DWORD *)a1 >> 14) & 0x1E | 1) << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
    *(_BYTE *)(a1 + 2) = result;
    *(_BYTE *)(a1 + 1) = v33;
  }
  if ( (_BYTE)v22 )
  {
    v34 = (unsigned __int8)((*(_DWORD *)a1 >> 14) & 0x15 | 0xA) >> 2;
    *(_BYTE *)(a1 + 1) = (((*(_DWORD *)a1 >> 14) & 0x15 | 0xA) << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
    result = *(_BYTE *)(a1 + 2) & 0xF8 | (unsigned int)v34;
    *(_BYTE *)(a1 + 2) = result;
  }
  return result;
}

