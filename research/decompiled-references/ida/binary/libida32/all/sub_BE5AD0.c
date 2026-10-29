unsigned __int64 __fastcall sub_BE5AD0(
        _QWORD *a1,
        const void *a2,
        size_t a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v10; // rax
  int v11; // r10d
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __int16 v14; // ax
  unsigned int v15; // edx
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned int *v19; // rdi
  char v20; // al
  __int16 v21; // ax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  char v28; // [rsp+Ch] [rbp-4Ch]
  char v29; // [rsp+Ch] [rbp-4Ch]
  __int64 v30; // [rsp+10h] [rbp-48h]
  char v31; // [rsp+10h] [rbp-48h]
  char v32; // [rsp+10h] [rbp-48h]
  char v33; // [rsp+10h] [rbp-48h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  int v35; // [rsp+18h] [rbp-40h]

  v8 = a4;
  v10 = a1[294];
  v11 = a8;
  v12 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = 4 * a8 + 4 + a3 + 16;
  a1[304] += v13;
  if ( a1[295] >= v13 + v12 && v10 )
  {
    a1[294] = v13 + v12;
  }
  else
  {
    v34 = a6;
    v29 = a5;
    v26 = sub_962430((__int64)(a1 + 294), v13, v13, 3, a5, a6);
    v11 = a8;
    a6 = v34;
    v12 = v26;
    LOBYTE(a5) = v29;
  }
  *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 9;
  if ( unk_2CAD564 )
  {
    v35 = v11;
    v30 = a6;
    v28 = a5;
    sub_EC5E10(9);
    v11 = v35;
    a6 = v30;
    LOBYTE(a5) = v28;
  }
  v14 = *(_WORD *)(v12 + 1);
  *(_QWORD *)(v12 + 8) = a6;
  v15 = a3;
  *(_DWORD *)(v12 + 4) = v11;
  v16 = v14 & 0xF801 | 2;
  *(_WORD *)(v12 + 1) = v16;
  *(_BYTE *)(v12 + 2) = (8 * (v8 & 7)) | HIBYTE(v16) & 0xC7;
  if ( (_DWORD)v8 == 5 )
  {
    *(_WORD *)(v12 + 2) = *(_WORD *)(v12 + 2) & 0xFC3F | 0x40;
  }
  else
  {
    v19 = (unsigned int *)a1[2181];
    switch ( v8 )
    {
      case 0LL:
      case 2LL:
      case 6LL:
        goto LABEL_14;
      case 1LL:
        v32 = a5;
        v24 = sub_1009DF0(v19, v19[38]);
        v15 = a3;
        LOBYTE(a5) = v32;
        v23 = v24 >> 3;
        break;
      case 3LL:
        v31 = a5;
        v22 = sub_1009DF0(v19, v19[40]);
        v15 = a3;
        LOBYTE(a5) = v31;
        v23 = v22 >> 3;
        break;
      case 4LL:
        v33 = a5;
        v25 = sub_1009DF0(v19, v19[41]);
        LOBYTE(a5) = v33;
        v15 = a3;
        v23 = v25 >> 3;
        break;
    }
    if ( v23 == 2 )
    {
      v20 = 2;
      v15 = (unsigned int)a3 >> 1;
    }
    else if ( v23 == 4 )
    {
      v20 = 4;
      v15 = (unsigned int)a3 >> 2;
    }
    else
    {
LABEL_14:
      v20 = 1;
    }
    v21 = ((v20 & 7) << 6) | *(_WORD *)(v12 + 2) & 0xFE3F;
    *(_WORD *)(v12 + 2) = v21;
    *(_BYTE *)(v12 + 3) = (2 * (a5 & 1)) | HIBYTE(v21) & 0xFD;
  }
  *(_DWORD *)(v12 + 16) = v15;
  v17 = 0;
  if ( 4 * a8 > 0 )
  {
    do
    {
      *(_DWORD *)(v12 + 4 * v17 + 20) = *(_DWORD *)(a7 + 4 * v17);
      ++v17;
    }
    while ( ((4 * a8) >> 2) - v17 > 0 );
  }
  if ( a3 )
    memmove((void *)(v12 + 20 + 4LL * *(unsigned int *)(v12 + 4)), a2, a3);
  *(_BYTE *)(v12 + 1) &= 0x3Fu;
  *(_BYTE *)(v12 + 2) &= 0xF8u;
  return v12;
}

