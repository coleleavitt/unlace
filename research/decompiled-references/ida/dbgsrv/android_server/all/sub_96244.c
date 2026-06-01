/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96244
// Address: 0x0000000000096244

//----- (0000000000096244) ----------------------------------------------------
__int64 __fastcall sub_96244(__int64 a1, __int128 *a2, char a3, char a4)
{
  int v5; // w1
  unsigned int v9; // w21
  __int128 v10; // q1
  __int128 v11; // q1
  __int128 v12; // q2
  __int128 v13; // q3
  __int128 v14; // q1
  __int128 v15; // q2
  __int128 v16; // q3
  __int128 v17; // q0
  __int128 v18; // q2
  __int128 v19; // q1
  __int128 v20; // q1
  __int128 v21; // q2
  __int128 v22; // q3
  __int128 v23; // q1
  __int128 v24; // q2
  __int128 v25; // q3
  __int128 v26; // q1
  __int128 v27; // q2
  __int128 v28; // q3
  __int128 v29; // q0
  __int128 v30; // q2
  __int128 v31; // q1
  unsigned int v32; // w1
  unsigned int v33; // w2
  unsigned int v34; // w1
  __int64 v35; // x8
  __int64 v36; // x10
  unsigned __int64 v37; // x8
  unsigned __int64 v38; // x22

  v5 = *((unsigned __int16 *)a2 + 12);
  v9 = 1;
  if ( v5 > 266 )
  {
    if ( v5 != 267 )
    {
      if ( v5 == 523 )
      {
        v10 = a2[1];
        v9 = 1;
        *(_OWORD *)a1 = *a2;
        *(_OWORD *)(a1 + 16) = v10;
        v11 = a2[5];
        v12 = a2[2];
        v13 = a2[3];
        *(_OWORD *)(a1 + 64) = a2[4];
        *(_OWORD *)(a1 + 80) = v11;
        *(_OWORD *)(a1 + 32) = v12;
        *(_OWORD *)(a1 + 48) = v13;
        *(_OWORD *)(a1 + 112) = a2[8];
        v14 = a2[12];
        v15 = a2[9];
        v16 = a2[10];
        *(_OWORD *)(a1 + 160) = a2[11];
        *(_OWORD *)(a1 + 176) = v14;
        *(_OWORD *)(a1 + 128) = v15;
        *(_OWORD *)(a1 + 144) = v16;
        v18 = a2[14];
        v17 = a2[15];
        v19 = a2[13];
        *(_QWORD *)(a1 + 240) = *((_QWORD *)a2 + 32);
        *(_OWORD *)(a1 + 208) = v18;
        *(_OWORD *)(a1 + 224) = v17;
        *(_OWORD *)(a1 + 192) = v19;
        *(_DWORD *)(a1 + 96) = *((_QWORD *)a2 + 12);
        *(_DWORD *)(a1 + 100) = *((_QWORD *)a2 + 13);
        *(_DWORD *)(a1 + 104) = *((_QWORD *)a2 + 14);
        *(_DWORD *)(a1 + 108) = *((_QWORD *)a2 + 15);
        goto LABEL_12;
      }
      goto LABEL_8;
    }
  }
  else if ( v5 && v5 != 263 )
  {
LABEL_8:
    if ( (a3 & 1) == 0 )
      sub_57E7C((__int64)"The input file has non-standard magic number (%x)", v5);
    v9 = 0;
  }
  v20 = a2[3];
  v21 = *a2;
  v22 = a2[1];
  *(_OWORD *)(a1 + 32) = a2[2];
  *(_OWORD *)(a1 + 48) = v20;
  *(_OWORD *)a1 = v21;
  *(_OWORD *)(a1 + 16) = v22;
  v23 = a2[7];
  v24 = a2[4];
  v25 = a2[5];
  *(_OWORD *)(a1 + 96) = a2[6];
  *(_OWORD *)(a1 + 112) = v23;
  *(_OWORD *)(a1 + 64) = v24;
  *(_OWORD *)(a1 + 80) = v25;
  v26 = a2[11];
  v27 = a2[8];
  v28 = a2[9];
  *(_OWORD *)(a1 + 160) = a2[10];
  *(_OWORD *)(a1 + 176) = v26;
  *(_OWORD *)(a1 + 128) = v27;
  *(_OWORD *)(a1 + 144) = v28;
  v30 = a2[13];
  v29 = a2[14];
  v31 = a2[12];
  *(_QWORD *)(a1 + 240) = *((_QWORD *)a2 + 30);
  *(_OWORD *)(a1 + 208) = v30;
  *(_OWORD *)(a1 + 224) = v29;
  *(_OWORD *)(a1 + 192) = v31;
LABEL_12:
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 92) - 10 >= 4 )
  {
    if ( (v32 = *(_DWORD *)(a1 + 56), v33 = *(_DWORD *)(a1 + 60), v32 < v33)
      || v33 && ((v33 - 1) & v33) != 0
      || v32 && ((v32 - 1) & v32) != 0 )
    {
      if ( (a3 & 1) == 0 )
        sub_96478(
          "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
          v32,
          v33);
    }
  }
  v34 = *(_DWORD *)(a1 + 80);
  if ( (v34 > 0x77000000 || v34 < *(_DWORD *)(a1 + 84)) && (a3 & 1) == 0 )
    sub_96478("Invalid file: bad ImageSize value %x", v34);
  if ( (a4 & 1) != 0 )
  {
    v35 = *(unsigned int *)(a1 + 116);
    if ( (_DWORD)v35 && (unsigned int)v35 <= 0xF )
      memset((void *)(a1 + 8 * v35 + 120), 0, 128 - 8 * v35);
    v36 = *(unsigned __int16 *)(a1 + 20);
    if ( *(_WORD *)(a1 + 24) == 523 )
      v37 = 264;
    else
      v37 = 248;
    v38 = v37 - (v36 + 24);
    if ( v37 > v36 + 24 && v37 - 128 <= v36 + 24 )
    {
      if ( (a3 & 1) == 0 )
        sub_39FA0((__int64)"Warning: image directories are covered by the section table, some entries will be ignored\n");
      memset((void *)(a1 + 8 * (16 - ((v38 + 7) >> 3)) + 120), 0, (v38 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  return v9;
}
