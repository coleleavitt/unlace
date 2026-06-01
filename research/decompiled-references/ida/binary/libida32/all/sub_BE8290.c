unsigned __int64 __fastcall sub_BE8290(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned __int64 a8,
        unsigned int a9,
        char a10)
{
  unsigned int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  char v18; // al
  char v19; // r9
  __int16 v20; // ax
  int v21; // esi
  __int64 v22; // rdx
  bool v23; // al
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  int v29; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-58h]
  __int64 v34; // [rsp+0h] [rbp-58h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+8h] [rbp-50h]
  char v37; // [rsp+14h] [rbp-44h]
  char v38; // [rsp+14h] [rbp-44h]
  _QWORD *v39; // [rsp+18h] [rbp-40h]
  _QWORD *v40; // [rsp+18h] [rbp-40h]

  v13 = a9;
  if ( (unsigned int)a4 >= a9 )
    v13 = a4;
  v14 = 8 * ((HIDWORD(a8) != 0) + v13 + 1) + 32;
  v15 = a1[294];
  a1[304] += v14;
  v16 = v14 + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v16 && v15 )
  {
    a1[294] = v16;
    v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v40 = a3;
    v38 = a6;
    v36 = a5;
    v34 = a2;
    v32 = sub_962430((__int64)(a1 + 294), v14, 8 * ((HIDWORD(a8) != 0) + v13 + 1) + 32, 3, a5, a6);
    a3 = v40;
    LOBYTE(a6) = v38;
    v17 = v32;
    a5 = v36;
    a2 = v34;
  }
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x59;
  if ( unk_2CAD564 )
  {
    v39 = a3;
    v37 = a6;
    v35 = a5;
    v33 = a2;
    sub_EC5E10(89);
    a3 = v39;
    LOBYTE(a6) = v37;
    a5 = v35;
    a2 = v33;
  }
  *(_QWORD *)(v17 + 8) = a5;
  v18 = 2 * (a6 & 3);
  v19 = *(_BYTE *)(v17 + 1);
  *(_DWORD *)(v17 + 16) = v13;
  *(_DWORD *)(v17 + 20) = a7;
  *(_QWORD *)(v17 + 32) = a2;
  *(_BYTE *)(v17 + 1) = v18 | v19 & 0xF9;
  v20 = *(_WORD *)(v17 + 1) & 0xF807;
  *(_WORD *)(v17 + 1) = v20;
  *(_BYTE *)(v17 + 2) = (16 * (a10 & 1)) | HIBYTE(v20) & 0xE7;
  if ( a4 )
  {
    v21 = 1;
    v22 = 1;
    for ( *(_QWORD *)(v17 + 40) = *a3; v21 != a4; v22 = (unsigned int)++v21 )
      *(_QWORD *)(v17 + 8 * (((*(_BYTE *)(v17 + 2) & 8) != 0) + 1LL) + 8 * v22 + 32) = a3[v22];
    v13 = *(_DWORD *)(v17 + 16);
    v23 = (*(_BYTE *)(v17 + 2) & 8) != 0;
    v24 = v23;
  }
  else
  {
    v24 = 0;
    v23 = 0;
  }
  if ( (_DWORD)a4 != v13 )
  {
    v25 = (unsigned int)a4;
    v26 = a4 + 1;
    for ( *(_QWORD *)(v17 + 8LL * v23 + 8 + 8 * v25 + 32) = 0;
          *(_DWORD *)(v17 + 16) != v26;
          *(_QWORD *)(v17 + 8 * (v27 + ((*(_BYTE *)(v17 + 2) & 8) != 0)) + 40) = 0 )
    {
      v27 = v26++;
    }
    v24 = (*(_BYTE *)(v17 + 2) & 8) != 0;
  }
  v28 = sub_B40660(v17, (_DWORD **)(v17 + 40), v24);
  *(_BYTE *)(v17 + 1) = (v28 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = (32 * (HIDWORD(a8) != 0)) | (v28 >> 2) & 7 | *(_BYTE *)(v17 + 2) & 0xD8;
  *(_WORD *)(v17 + 2) &= 0xFE3Fu;
  if ( (*(_DWORD *)v17 & 0x200000) != 0 )
    *(_QWORD *)(v17 + 8 * (*(_DWORD *)(v17 + 16) + (unsigned int)((*(_BYTE *)(v17 + 2) & 8) != 0) + 1) + 32) = a8;
  if ( (*(_BYTE *)(v17 + 3) & 1) != 0 )
  {
    v29 = *(_DWORD *)(v17 + 24);
  }
  else if ( *(char *)(v17 + 2) >= 0
         || (v29 = sub_EC7AA0(*(_QWORD *)(v17 + 8 * (((*(_BYTE *)(v17 + 2) & 8) != 0) + 1LL) + 32))) == 0 )
  {
    v29 = sub_EC7AA0(*(_QWORD *)(v17 + 32));
    if ( !v29 )
    {
      if ( *(_DWORD *)(v17 + 16) )
      {
        v31 = *(_QWORD *)(v17 + 8 * (((*(_BYTE *)(v17 + 2) & 8) != 0) + 1LL) + 32);
        if ( v31 )
          v29 = sub_EC7AA0(v31);
      }
    }
  }
  *(_DWORD *)(v17 + 24) = v29;
  *(_BYTE *)(v17 + 3) |= 1u;
  return v17;
}

