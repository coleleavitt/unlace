/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CFE0
// Address: 0x000000010005CFE0

//----- (000000010005CFE0) ----------------------------------------------------
__int64 __fastcall sub_10005CFE0(_OWORD *__dst, _OWORD *__src, unsigned __int8 a3, char a4)
{
  unsigned int v4; // r15d
  unsigned int v7; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12

  v7 = *((unsigned __int16 *)__src + 12);
  LOBYTE(v4) = 1;
  if ( v7 > 0x10A )
  {
    if ( v7 != 267 )
    {
      if ( v7 == 523 )
      {
        __dst[5] = __src[5];
        __dst[4] = __src[4];
        v8 = *__src;
        v9 = __src[1];
        v10 = __src[2];
        __dst[3] = __src[3];
        __dst[2] = v10;
        __dst[1] = v9;
        *__dst = v8;
        v4 = (unsigned int)__src;
        memcpy(__dst + 7, __src + 8, 0x88u);
        *((_DWORD *)__dst + 24) = *((_DWORD *)__src + 24);
        *((_DWORD *)__dst + 25) = *((_DWORD *)__src + 26);
        *((_DWORD *)__dst + 26) = *((_DWORD *)__src + 28);
        *((_DWORD *)__dst + 27) = *((_DWORD *)__src + 30);
        LOBYTE(v4) = 1;
        goto LABEL_11;
      }
      goto LABEL_8;
    }
  }
  else if ( *((_WORD *)__src + 12) && v7 != 263 )
  {
LABEL_8:
    v4 = 0;
    if ( !a3 )
      sub_1000162E0((int)"The input file has non-standard magic number (%x)", *((unsigned __int16 *)__src + 12));
  }
  memcpy(__dst, __src, 0xF8u);
LABEL_11:
  if ( (unsigned __int16)(*((_WORD *)__dst + 46) - 10) < 4u )
    goto LABEL_19;
  v11 = *((_DWORD *)__dst + 14);
  v12 = *((_DWORD *)__dst + 15);
  if ( v11 < v12
    || (16843009
      * ((((v12 - ((v12 >> 1) & 0x55555555)) & 0x33333333)
        + (((v12 - ((v12 >> 1) & 0x55555555)) >> 2) & 0x33333333)
        + ((((v12 - ((v12 >> 1) & 0x55555555)) & 0x33333333) + (((v12 - ((v12 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
       & 0xF0F0F0F)) >> 24 > 1 )
  {
    if ( a3 )
      goto LABEL_21;
    goto LABEL_18;
  }
  if ( v11 && !(a3 | (((v11 - 1) & v11) == 0)) )
LABEL_18:
    sub_10005D210(
      "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
      v11,
      v12);
LABEL_19:
  v13 = *((_DWORD *)__dst + 20);
  if ( !(a3 | (v13 < 0x77000001 && v13 >= *((_DWORD *)__dst + 21))) )
    sub_10005D210("Invalid file: bad ImageSize value %x", v13);
LABEL_21:
  if ( a4 )
  {
    v14 = *((unsigned int *)__dst + 29);
    if ( (unsigned int)(v14 - 1) <= 0xE )
      __bzero((char *)__dst + 8 * v14 + 120, 128 - 8 * v14);
    v15 = 16 * (unsigned int)(*((_WORD *)__dst + 12) == 523);
    v16 = *((unsigned __int16 *)__dst + 10) + 24LL;
    v17 = v15 + 248 - v16;
    if ( v15 + 248 > v16 && (int)v15 + 120 <= (unsigned int)v16 )
    {
      if ( !a3 )
        sub_100000AE0((int)"Warning: image directories are covered by the section table, some entries will be ignored\n");
      __bzero((char *)__dst + 8 * (16 - ((v17 + 7) >> 3)) + 120, (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  return v4;
}
// 10005D1FC: variable 'v4' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
