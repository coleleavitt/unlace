unsigned __int64 __fastcall sub_C767A0(
        _QWORD *a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        unsigned __int8 a8,
        _QWORD *src,
        __int64 a10)
{
  int v10; // r10d
  __int64 v14; // r9
  __int64 v15; // rax
  size_t v16; // r14
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  __int16 v19; // ax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbp
  unsigned __int8 v23; // al
  __int64 v25; // rax
  unsigned int *v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  int v29; // [rsp+10h] [rbp-58h]
  int v30; // [rsp+10h] [rbp-58h]
  int v31; // [rsp+14h] [rbp-54h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __int64 v34; // [rsp+18h] [rbp-50h]
  void *v35; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+28h] [rbp-40h]
  char v37; // [rsp+2Ch] [rbp-3Ch]

  v10 = a3;
  if ( ((a10 != 0) & a8) != 0 && a6 )
    v14 = *(_QWORD *)(src[a7] + 8LL);
  else
    v14 = *(_QWORD *)(a4 + 8);
  v15 = a1[294];
  v16 = 8 * a10;
  v17 = 8 * a10 + 40;
  a1[304] += v17;
  v18 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v17 + v18 && v15 )
  {
    a1[294] = v17 + v18;
  }
  else
  {
    v34 = a5;
    v30 = a2;
    v28 = v14;
    v25 = sub_962430((__int64)(a1 + 294), v17, 8 * a10 + 40, 3, a5, v14);
    a5 = v34;
    v10 = a3;
    v18 = v25;
    a2 = v30;
    v14 = v28;
  }
  *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x15;
  if ( unk_2CAD564 )
  {
    v33 = a5;
    v31 = v10;
    v29 = a2;
    v27 = v14;
    sub_EC5E10(21);
    a5 = v33;
    v10 = v31;
    a2 = v29;
    v14 = v27;
  }
  v19 = *(_WORD *)(v18 + 1);
  *(_QWORD *)(v18 + 8) = v14;
  *(_DWORD *)(v18 + 16) = a2;
  *(_DWORD *)(v18 + 20) = v10;
  *(_QWORD *)(v18 + 24) = a4;
  *(_WORD *)(v18 + 1) = v19 & 0xF801 | 2;
  v20 = *(_DWORD *)(v18 + 4);
  *(_QWORD *)(v18 + 32) = a5;
  v21 = a10 & 0x7FFFFFFF | v20 & 0x80000000;
  v22 = v18 + 40;
  *(_DWORD *)(v18 + 4) = v21;
  *(_BYTE *)(v18 + 7) = (a6 << 7) | HIBYTE(v21) & 0x7F;
  if ( v16 )
    memmove((void *)(v18 + 40), src, v16);
  v23 = sub_B3FAF0(v18);
  *(_BYTE *)(v18 + 1) = (v23 << 6) | *(_BYTE *)(v18 + 1) & 0x3F;
  *(_BYTE *)(v18 + 2) = (v23 >> 2) & 7 | *(_BYTE *)(v18 + 2) & 0xF8;
  if ( (v23 & 2) == 0 )
  {
    sub_BD3D10((__int64)&v35, *(_QWORD *)(v18 + 32));
    if ( v37 )
    {
      v26 = (unsigned int *)v35;
      if ( v36 <= 0x40 )
      {
        v22 = v18 + 8LL * (unsigned int)v35 + 40;
        goto LABEL_21;
      }
    }
    else
    {
      v26 = (unsigned int *)v35;
      if ( v36 <= 0x40 )
      {
        if ( v36 )
          v22 = v18
              + 8LL
              * (unsigned int)((__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36))
              + 40;
        goto LABEL_21;
      }
    }
    v22 = v18 + 8LL * *v26 + 40;
    operator delete[](v26);
LABEL_21:
    *(_BYTE *)(v18 + 1) = *(_BYTE *)(*(_QWORD *)v22 + 1LL) & 6 | *(_BYTE *)(v18 + 1) & 0xF9;
  }
  return v18;
}

