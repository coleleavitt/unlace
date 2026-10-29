__int64 __fastcall sub_BE5800(_QWORD *a1, __int64 a2, int a3, int a4, const void *a5, __int64 a6)
{
  int v8; // r12d
  size_t v9; // rbp
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  char v20; // bl
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // al
  char v25; // bl
  unsigned __int8 v26; // al
  __int64 v28; // rdx
  char v29; // di
  bool v30; // zf
  __int64 v31; // rdx
  unsigned __int64 v33; // [rsp+10h] [rbp-48h]
  unsigned __int64 v34; // [rsp+10h] [rbp-48h]

  v8 = a6;
  v9 = 8 * a6;
  v11 = 8 * a6 + 32;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
  {
    a1[294] = v11 + v13;
    v14 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v14 = sub_962430((__int64)(a1 + 294), v11, 8 * a6 + 32, 3, (__int64)a5, a6);
  }
  v15 = a2;
  v16 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(unsigned __int8 *)(v17 + 16);
  if ( (*(_BYTE *)(v17 + 17) & 4) == 0 )
  {
    v29 = *(_BYTE *)(v17 + 16);
    v19 = (unsigned int)(v18 - 43);
    if ( (unsigned int)v19 > 1 )
    {
      v34 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v20 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
        goto LABEL_6;
      v17 = sub_F3F310(v17, v15, v19, v13);
      v16 = v34;
      if ( !v17 )
        goto LABEL_21;
      v29 = *(_BYTE *)(v17 + 16);
    }
    if ( v29 == 43 )
      goto LABEL_20;
    while ( 1 )
    {
      v30 = (*(_BYTE *)(v17 + 18) & 0x10) == 0;
      v17 = *(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v30 )
        break;
      v31 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 43;
      if ( (unsigned int)v31 > 1 )
      {
        v33 = v16;
        v17 = sub_F3F310(v17, v15, v31, v13);
        v16 = v33;
      }
    }
    v20 = 2;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_20:
      v20 = 1;
LABEL_21:
    v17 = *(_QWORD *)v16;
    LODWORD(v19) = *(unsigned __int8 *)(*(_QWORD *)v16 + 16LL) - 43;
    goto LABEL_6;
  }
  LODWORD(v19) = v18 - 43;
  v20 = 1;
LABEL_6:
  if ( (unsigned int)v19 <= 1
    || (v28 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
        (unsigned int)v28 <= 1)
    && (v17 = sub_F3F310(v17, v15, v28, v13)) != 0 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v17 + 32);
      if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v21 = v15 & 0xFFFFFFFFFFFFFFF0LL;
        v17 = *(_QWORD *)v21;
        v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v21 + 16LL) - 43;
        if ( (unsigned int)v22 <= 1 )
          break;
        v23 = sub_F3F310(v17, v21, v22, v13);
        v15 = *(_QWORD *)(v23 + 32);
        if ( (*(_BYTE *)(v23 + 18) & 0x10) == 0 )
          goto LABEL_10;
      }
    }
  }
LABEL_10:
  *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x10;
  if ( unk_2CAD564 )
    sub_EC5E10(16);
  v24 = 2 * v20;
  v25 = *(_BYTE *)(v14 + 1);
  *(_QWORD *)(v14 + 8) = v15;
  *(_DWORD *)(v14 + 16) = a3;
  *(_DWORD *)(v14 + 20) = a4;
  *(_DWORD *)(v14 + 24) = v8;
  *(_BYTE *)(v14 + 1) = v24 | v25 & 0xF9;
  *(_WORD *)(v14 + 1) &= 0xF807u;
  if ( v9 )
    memmove((void *)(v14 + 32), a5, v9);
  v26 = sub_B404B0(v14);
  *(_BYTE *)(v14 + 1) = (v26 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
  *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v26 >> 2) & 7;
  return v14;
}

