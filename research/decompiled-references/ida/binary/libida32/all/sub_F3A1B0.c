__int64 __fastcall sub_F3A1B0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  int v11; // eax
  char v12; // r11
  char v13; // si
  char v14; // di
  char v15; // si
  char v16; // di
  char v17; // al
  __int64 *v18; // r9
  __int64 v19; // r10
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  char v22; // di
  char v23; // di
  __int64 *v24; // rbp
  char v25; // si
  char v26; // al
  unsigned __int64 v27; // rsi
  int v28; // edx
  __int64 result; // rax
  __int64 v30; // rdx
  __int64 *v31; // r11
  __int64 v32; // r8

  v11 = *a4 >> 14;
  v12 = 16 * ((v11 & 0x10) != 0);
  v13 = 8 * ((v11 & 8) != 0);
  v14 = 4 * ((v11 & 4) != 0);
  if ( (v11 & 2) != 0 )
  {
    v15 = v14 | v12 | v13;
    if ( (*a4 & 0x4000) != 0 )
      v16 = v15 | 3;
    else
      v16 = v15 | 2;
    v17 = sub_F328B0(v16);
    v20 = a4;
    v21 = a8;
    v22 = v17 | 6;
  }
  else
  {
    if ( (*a4 & 0x4000) != 0 )
      v23 = v12 | v14 | v13 | 1;
    else
      v23 = v12 | v13 | v14;
    v17 = sub_F328B0(v23);
    v20 = a4;
    v21 = a8;
    v22 = v17;
  }
  v24 = &a7[v21];
  v25 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  if ( v21 )
  {
    if ( a7 != v24 )
    {
      v31 = a7;
      do
      {
        v32 = *v31++;
        v22 |= *(_BYTE *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
      }
      while ( v24 != v31 );
    }
  }
  else
  {
    v22 |= *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 6;
  }
  *(_QWORD *)v19 = v19;
  *(_QWORD *)(v19 + 24) = 0;
  if ( (v17 & 1) == 0 )
    v22 &= 0x1Eu;
  *(_QWORD *)(v19 + 32) = a3;
  *(_QWORD *)(v19 + 40) = v20;
  if ( (v25 & 1) == 0 )
    v22 |= 0x16u;
  v26 = *(_BYTE *)(v19 + 17);
  v27 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v27 = a2;
  *(_BYTE *)(v19 + 18) &= 0xF8u;
  *(_QWORD *)(v19 + 8) = v27;
  *(_BYTE *)(v19 + 17) = v26 & 0xE0 | v22 & 0x1F;
  *(_WORD *)(v19 + 16) = *(_WORD *)(v19 + 16) & 0x1F00 | 0x27;
  v28 = *(_DWORD *)(v19 + 48) & 0x80000000 | v21 & 0x7FFFFFFF;
  result = v19 + 64;
  *(_DWORD *)(v19 + 48) = v28;
  *(_BYTE *)(v19 + 51) = HIBYTE(v28) & 0x7F | (a5 << 7);
  if ( a7 != v24 )
  {
    do
    {
      v30 = *v18++;
      result += 8;
      *(_QWORD *)(result - 8) = v30;
    }
    while ( v18 != v24 );
  }
  return result;
}

