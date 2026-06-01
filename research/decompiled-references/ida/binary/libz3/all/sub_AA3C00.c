__int64 __fastcall sub_AA3C00(
        __int64 a1,
        unsigned int a2,
        const void *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v8; // eax
  char v11; // r12
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  _DWORD *v17; // rax
  _DWORD *v18; // rdi
  char *v19; // rax
  _DWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rax

  v8 = 4 * a2 + 8;
  v11 = a4;
  if ( (unsigned int)(a4 - 2) < 2 )
    v8 = 4 * a2 + 12;
  v13 = (v8 + 7) & 0xFFFFFFF8;
  if ( a7 )
    v13 += 8 * a2;
  if ( a6 )
    v13 += 8;
  v14 = v13 + 8;
  if ( !a5 )
    v14 = v13;
  v15 = sub_17E9C90(a1 + 40, v14);
  *(_DWORD *)v15 = a2;
  v16 = v15;
  *(_DWORD *)(v15 + 4) = a2 & 0xFFFFFF;
  *(_BYTE *)(v15 + 7) = ((a5 != 0) << 6) & 0x7F
                      | (32 * (a6 != 0)) & 0x7F
                      | (16 * a7) & 0x7F
                      | (8 * a7) & 0x7F
                      | v11 & 3
                      | (4 * a7) & 0x7F;
  v17 = memcpy((void *)(v15 + 8), a3, 4LL * a2);
  v18 = v17;
  if ( (v11 & 3u) - 2 <= 1 )
    v17[a2 & 0xFFFFFF] = 1;
  if ( a6 )
  {
    v19 = (char *)&v17[*(_DWORD *)(v16 + 4) & 0xFFFFFF];
    if ( (*(_BYTE *)(v16 + 7) & 3u) - 2 < 2 )
      v19 += 4;
    *(_QWORD *)((unsigned __int64)(v19 + 7) & 0xFFFFFFFFFFFFFFF8LL) = a6;
  }
  if ( a5 )
  {
    v20 = &v18[*(_DWORD *)(v16 + 4) & 0xFFFFFF];
    if ( (*(_BYTE *)(v16 + 7) & 3u) - 2 < 2 )
      ++v20;
    v21 = (_QWORD *)(((unsigned __int64)v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_BYTE *)(v16 + 7) & 0x20) != 0 )
      ++v21;
    *v21 = a5;
  }
  if ( a7 && a2 )
  {
    v22 = (__int64)&v18[(*(_DWORD *)(v16 + 4) & 0xFFFFFF) + 1];
    if ( (*(_BYTE *)(v16 + 7) & 3u) - 2 > 1 )
      v22 = (__int64)&v18[*(_DWORD *)(v16 + 4) & 0xFFFFFF];
    v23 = (v22 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v16 + 7) & 0x20) != 0 )
      v23 += 8LL;
    v24 = v23 + 8;
    if ( (*(_BYTE *)(v16 + 7) & 0x40) == 0 )
      v24 = v23;
    v25 = 0;
    do
    {
      while ( 1 )
      {
        v26 = *((_DWORD *)a3 + v25);
        v27 = *(_QWORD *)(a8 + 8LL * (v26 >> 1));
        if ( !v27 )
          break;
        ++*(_DWORD *)(v27 + 8);
        *(_QWORD *)(v24 + 8 * v25++) = v26 & 1 | v27;
        if ( a2 == v25 )
          return v16;
      }
      *(_QWORD *)(v24 + 8 * v25++) = v26 & 1;
    }
    while ( a2 != v25 );
  }
  return v16;
}

