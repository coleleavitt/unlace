/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61E8C
// Address: 0x00061E8C

//----- (00061E8C) --------------------------------------------------------
int __fastcall sub_61E8C(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  int v8; // r1
  int v9; // r2
  unsigned int v11; // r2
  unsigned int v12; // r1
  unsigned int v13; // r1
  int v14; // r0
  unsigned int v15; // r5
  unsigned int v16; // r7
  int v18; // [sp+8h] [bp-8h]
  int v19; // [sp+Ch] [bp-4h]

  v4 = a4;
  v8 = (*(unsigned __int8 *)(a2 + 25) << 8) + *(unsigned __int8 *)(a2 + 24);
  v9 = 1;
  if ( v8 > 266 )
  {
    if ( v8 != 267 )
    {
      if ( v8 == 523 )
      {
        v19 = 1;
        v18 = a3;
        qmemcpy((void *)a1, (const void *)a2, 0x60u);
        qmemcpy((void *)(a1 + 112), (const void *)(a2 + 128), 0x88u);
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
        v4 = a4;
        a3 = v18;
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 104);
        *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 112);
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 120);
        goto LABEL_11;
      }
      goto LABEL_8;
    }
  }
  else if ( v8 && v8 != 263 )
  {
LABEL_8:
    v9 = 0;
    if ( !a3 )
    {
      sub_34014((int)"The input file has non-standard magic number (%x)");
      v9 = 0;
    }
  }
  v19 = v9;
  qmemcpy((void *)a1, (const void *)a2, 0xF8u);
LABEL_11:
  if ( (unsigned __int16)((*(unsigned __int8 *)(a1 + 93) << 8) + *(unsigned __int8 *)(a1 + 92) - 10) >= 4u )
  {
    if ( (v11 = (((*(unsigned __int8 *)(a1 + 63) << 8) + *(unsigned __int8 *)(a1 + 62)) << 16)
              + (*(unsigned __int8 *)(a1 + 61) << 8)
              + *(unsigned __int8 *)(a1 + 60),
          v12 = (((*(unsigned __int8 *)(a1 + 59) << 8) + *(unsigned __int8 *)(a1 + 58)) << 16)
              + (*(unsigned __int8 *)(a1 + 57) << 8)
              + *(unsigned __int8 *)(a1 + 56),
          v12 < v11)
      || v11 && ((v11 - 1) & v11) != 0
      || v12 && ((v12 - 1) & v12) != 0 )
    {
      if ( !a3 )
        sub_620D0(
          "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
          v12,
          v11);
    }
  }
  v13 = (((*(unsigned __int8 *)(a1 + 83) << 8) + *(unsigned __int8 *)(a1 + 82)) << 16)
      + (*(unsigned __int8 *)(a1 + 81) << 8)
      + *(unsigned __int8 *)(a1 + 80);
  if ( (v13 > 0x77000000
     || v13 < (((*(unsigned __int8 *)(a1 + 87) << 8) + *(unsigned __int8 *)(a1 + 86)) << 16)
            + (*(unsigned __int8 *)(a1 + 85) << 8)
            + (unsigned int)*(unsigned __int8 *)(a1 + 84))
    && !a3 )
  {
    sub_620D0("Invalid file: bad ImageSize value %x", v13);
  }
  if ( v4 )
  {
    v14 = (((*(unsigned __int8 *)(a1 + 119) << 8) + *(unsigned __int8 *)(a1 + 118)) << 16)
        + (*(unsigned __int8 *)(a1 + 117) << 8)
        + *(unsigned __int8 *)(a1 + 116);
    if ( (unsigned int)(v14 - 1) <= 0xE )
      memset((void *)(a1 + 8 * v14 + 120), 0, 128 - 8 * v14);
    v15 = (*(unsigned __int8 *)(a1 + 21) << 8) + *(unsigned __int8 *)(a1 + 20) + 24;
    v16 = 264;
    if ( (*(unsigned __int8 *)(a1 + 25) << 8) + *(unsigned __int8 *)(a1 + 24) != 523 )
      v16 = 248;
    if ( v16 > v15 && v15 >= v16 - 128 )
    {
      if ( !a3 )
        sub_1BBA0((int)"Warning: image directories are covered by the section table, some entries will be ignored\n");
      memset((void *)(a1 + 8 * (16 - ((v16 - v15 + 7) >> 3)) + 120), 0, (v16 - v15 + 7) & 0xFFFFFFF8);
    }
  }
  return v19;
}
