__int64 __fastcall sub_C74220(
        _QWORD *a1,
        const void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8)
{
  int v8; // r14d
  int v9; // r13d
  int v11; // ebp
  size_t v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  char v19; // al
  char v20; // dl
  char v21; // al
  unsigned __int8 v22; // al
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rdx
  int v27; // edx
  char v29; // [rsp+Fh] [rbp-39h]

  v8 = a5;
  v9 = a6;
  v11 = a3;
  v12 = 8 * a3;
  v13 = a1[294];
  v14 = 8 * a3 + 48;
  a1[304] += v14;
  v15 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v14 + v15 && v13 )
  {
    a1[294] = v14 + v15;
    v16 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v16 = sub_962430((__int64)(a1 + 294), v14, 8 * a3 + 48, 3, a5, a6);
  }
  v17 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(unsigned __int8 *)(v17 + 16);
  if ( (unsigned int)(v18 - 43) > 1 )
  {
    v26 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v26 > 1 || (v17 = sub_F3F310(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL), v18, v26, v15)) == 0 )
    {
      v19 = 0;
      goto LABEL_7;
    }
    v18 = *(unsigned __int8 *)(v17 + 16);
  }
  if ( (_BYTE)v18 == 43 )
    goto LABEL_6;
  while ( 1 )
  {
    v24 = (*(_BYTE *)(v17 + 18) & 0x10) == 0;
    v17 = *(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v24 )
      break;
    v25 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 43;
    if ( (unsigned int)v25 > 1 )
      v17 = sub_F3F310(v17, v18, v25, v15);
  }
  v27 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v19 = 2;
  if ( (unsigned int)(v27 - 25) <= 1 )
LABEL_6:
    v19 = 1;
LABEL_7:
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x67;
  if ( unk_2CAD564 )
  {
    v29 = v19;
    sub_EC5E10(103);
    v19 = v29;
  }
  v20 = 2 * v19;
  v21 = *(_BYTE *)(v16 + 1);
  *(_QWORD *)(v16 + 8) = a4;
  *(_DWORD *)(v16 + 16) = v11;
  *(_DWORD *)(v16 + 20) = v8;
  *(_DWORD *)(v16 + 24) = v9;
  *(_BYTE *)(v16 + 1) = v20 | v21 & 0xF9;
  *(_WORD *)(v16 + 1) &= 0xF807u;
  *(_DWORD *)(v16 + 28) = a7;
  *(_QWORD *)(v16 + 40) = 0;
  *(_DWORD *)(v16 + 32) = a8;
  if ( v12 )
    memmove((void *)(v16 + 48), a2, v12);
  v22 = sub_B41C70(v16);
  *(_BYTE *)(v16 + 1) = (v22 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v22 >> 2) & 7;
  return v16;
}

