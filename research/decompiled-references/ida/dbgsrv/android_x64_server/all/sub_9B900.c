/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B900
// Address: 0x000000000009B900

//----- (000000000009B900) ----------------------------------------------------
__int64 __fastcall sub_9B900(_OWORD *dest, _OWORD *src, char a3, char a4)
{
  unsigned int v4; // r14d
  int v8; // eax
  int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  unsigned int v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbp

  v8 = *((__int16 *)src + 12);
  v9 = *((unsigned __int16 *)src + 12);
  LOBYTE(v4) = 1;
  if ( v8 > 266 )
  {
    if ( v9 != 267 )
    {
      if ( v9 == 523 )
      {
        dest[5] = src[5];
        dest[4] = src[4];
        v10 = *src;
        v11 = src[1];
        v12 = src[2];
        dest[3] = src[3];
        dest[2] = v12;
        dest[1] = v11;
        *dest = v10;
        memcpy(dest + 7, src + 8, 0x88u);
        *((_DWORD *)dest + 24) = *((_DWORD *)src + 24);
        *((_DWORD *)dest + 25) = *((_DWORD *)src + 26);
        *((_DWORD *)dest + 26) = *((_DWORD *)src + 28);
        *((_DWORD *)dest + 27) = *((_DWORD *)src + 30);
        LOBYTE(v4) = 1;
        goto LABEL_11;
      }
      goto LABEL_8;
    }
  }
  else if ( (_WORD)v8 && v9 != 263 )
  {
LABEL_8:
    v4 = 0;
    if ( !a3 )
      sub_59BF0((int)"The input file has non-standard magic number (%x)");
  }
  memcpy(dest, src, 0xF8u);
LABEL_11:
  if ( (unsigned __int16)(*((_WORD *)dest + 46) - 10) >= 4u )
  {
    if ( (v13 = *((_DWORD *)dest + 14), v14 = *((_DWORD *)dest + 15), v13 < v14)
      || v14 && (v14 & (v14 - 1)) != 0
      || v13 && (v13 & (v13 - 1)) != 0 )
    {
      if ( !a3 )
        sub_9BAF0(
          "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
          v13,
          v14);
    }
  }
  v15 = *((_DWORD *)dest + 20);
  if ( (v15 > 0x77000000 || v15 < *((_DWORD *)dest + 21)) && !a3 )
    sub_9BAF0("Invalid file: bad ImageSize value %x", v15);
  if ( a4 )
  {
    v16 = *((unsigned int *)dest + 29);
    if ( *((_DWORD *)dest + 29) && (unsigned int)v16 <= 0xF )
      memset((char *)dest + 8 * v16 + 120, 0, 128 - 8 * v16);
    v17 = 16LL * (*((_WORD *)dest + 12) == 523);
    v18 = *((unsigned __int16 *)dest + 10) + 24LL;
    v19 = v17 + 248 - v18;
    if ( v17 + 248 > v18 && v17 + 120 <= v18 )
    {
      if ( !a3 )
        sub_390A0((int)"Warning: image directories are covered by the section table, some entries will be ignored\n");
      memset((char *)dest + 8 * (16 - ((v19 + 7) >> 3)) + 120, 0, (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  return v4;
}
// 9BADE: variable 'v4' is possibly undefined
