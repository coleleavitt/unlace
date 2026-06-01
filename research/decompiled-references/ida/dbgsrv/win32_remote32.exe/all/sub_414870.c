/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414870
// Address: 0x00414870

//----- (00414870) --------------------------------------------------------
char __usercall sub_414870@<al>(__m128i a1@<xmm0>, __m128i *a2, __m128i *a3, char a4, char a5)
{
  unsigned int v5; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  char v11; // al
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // edi
  char v17; // [esp+13h] [ebp-1h]

  v17 = 1;
  v5 = a3[1].m128i_u16[4];
  if ( v5 <= 0x10B )
  {
    if ( v5 == 267 || !a3[1].m128i_i16[4] || v5 == 263 )
    {
LABEL_10:
      v6 = (int)a2;
      qmemcpy(a2, a3, 0xF8u);
      v7 = (int)&a2[15].m128i_i32[2];
      goto LABEL_12;
    }
LABEL_7:
    if ( !a4 )
      sub_404400("The input file has non-standard magic number (%x)", v5);
    v17 = 0;
    goto LABEL_10;
  }
  if ( v5 != 523 )
    goto LABEL_7;
  v6 = (int)a2;
  *a2 = *a3;
  a2[1] = a3[1];
  a2[2] = a3[2];
  a2[3] = a3[3];
  a2[4] = a3[4];
  a1 = a3[5];
  a2[5] = a1;
  qmemcpy(&a2[7], &a3[8], 0x88u);
  v7 = (int)&a2[15].m128i_i32[2];
  a2[6].m128i_i32[0] = a3[6].m128i_i32[0];
  a2[6].m128i_i32[1] = a3[6].m128i_i32[2];
  a2[6].m128i_i32[2] = a3[7].m128i_i32[0];
  a2[6].m128i_i32[3] = a3[7].m128i_i32[2];
LABEL_12:
  v8 = *(unsigned __int16 *)(v6 + 92);
  if ( v8 != 10 && v8 != 11 && v8 != 12 && v8 != 13 )
  {
    if ( (v9 = *(_DWORD *)(v6 + 56), v10 = *(_DWORD *)(v6 + 60), v9 < v10)
      || v10 && ((v10 - 1) & v10) != 0
      || v9 && ((v9 - 1) & v9) != 0 )
    {
      v11 = a4;
      if ( a4 )
        goto LABEL_24;
      sub_414A40(
        v6,
        v7,
        a1,
        "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
        v9,
        v10);
    }
  }
  v11 = a4;
LABEL_24:
  v12 = *(_DWORD *)(v6 + 80);
  if ( (v12 > 0x77000000 || v12 < *(_DWORD *)(v6 + 84)) && !v11 )
    sub_414A40(v6, v7, a1, "Invalid file: bad ImageSize value %x", *(_DWORD *)(v6 + 80));
  if ( a5 )
  {
    v13 = *(_DWORD *)(v6 + 116);
    if ( v13 && v13 < 0x10 )
      sub_464890((__m128i *)(v6 + 8 * (v13 + 15)), 0, 8 * (16 - v13));
    v14 = 248;
    if ( *(_WORD *)(v6 + 24) == 523 )
      v14 = 264;
    v15 = *(unsigned __int16 *)(v6 + 20) + 24;
    if ( v15 < v14 && v15 >= v14 - 128 )
    {
      if ( !a4 )
        sub_402760("Warning: image directories are covered by the section table, some entries will be ignored\n");
      sub_464890((__m128i *)(v6 + 8 * (31 - ((v14 - v15 + 7) >> 3))), 0, 8 * ((v14 - v15 + 7) >> 3));
    }
  }
  return v17;
}
// 404400: using guessed type _DWORD sub_404400(const char *, ...);
