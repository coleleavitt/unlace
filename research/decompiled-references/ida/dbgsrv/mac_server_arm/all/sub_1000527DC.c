/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000527DC
// Address: 0x00000001000527DC

//----- (00000001000527DC) ----------------------------------------------------
__int64 __fastcall sub_1000527DC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // w21
  char v9; // w20
  unsigned int v11; // w8
  __int64 v12; // x22
  __int128 v13; // q1
  __int128 v14; // q0
  __int128 v15; // q1
  __int128 v16; // q3
  __int128 v17; // q1
  __int128 v18; // q2
  __int128 v19; // q3
  __int128 v20; // q0
  __int128 v21; // q1
  __int128 v22; // q2
  __int64 v23; // x22
  __int128 v24; // q0
  __int128 v25; // q1
  __int128 v26; // q3
  __int128 v27; // q0
  __int128 v28; // q1
  __int128 v29; // q3
  __int128 v30; // q0
  __int128 v31; // q1
  __int128 v32; // q3
  __int128 v33; // q0
  __int128 v34; // q1
  __int128 v35; // q2
  unsigned int v36; // w8
  int8x8_t v37; // x9
  uint8x8_t v38; // d0
  unsigned int v39; // w8
  bool v40; // cf
  __int64 v41; // x8
  unsigned __int64 v42; // x8
  unsigned __int64 v43; // x9
  unsigned __int64 v44; // x21

  v8 = a4;
  v9 = a3;
  v11 = *(unsigned __int16 *)(a2 + 24);
  v12 = 1;
  if ( v11 > 0x10A )
  {
    if ( v11 != 267 )
    {
      if ( v11 == 523 )
      {
        v13 = *(_OWORD *)(a2 + 16);
        *(_OWORD *)a1 = *(_OWORD *)a2;
        *(_OWORD *)(a1 + 16) = v13;
        v14 = *(_OWORD *)(a2 + 32);
        v15 = *(_OWORD *)(a2 + 48);
        v16 = *(_OWORD *)(a2 + 80);
        *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
        *(_OWORD *)(a1 + 80) = v16;
        *(_OWORD *)(a1 + 32) = v14;
        *(_OWORD *)(a1 + 48) = v15;
        v17 = *(_OWORD *)(a2 + 192);
        v19 = *(_OWORD *)(a2 + 144);
        v18 = *(_OWORD *)(a2 + 160);
        *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 176);
        *(_OWORD *)(a1 + 176) = v17;
        *(_OWORD *)(a1 + 128) = v19;
        *(_OWORD *)(a1 + 144) = v18;
        v21 = *(_OWORD *)(a2 + 224);
        v20 = *(_OWORD *)(a2 + 240);
        v22 = *(_OWORD *)(a2 + 208);
        *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 256);
        *(_OWORD *)(a1 + 208) = v21;
        *(_OWORD *)(a1 + 224) = v20;
        *(_OWORD *)(a1 + 192) = v22;
        *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 128);
        *(_DWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
        *(_DWORD *)(a1 + 100) = *(_QWORD *)(a2 + 104);
        *(_DWORD *)(a1 + 104) = *(_QWORD *)(a2 + 112);
        *(_DWORD *)(a1 + 108) = *(_QWORD *)(a2 + 120);
        goto LABEL_12;
      }
      goto LABEL_8;
    }
  }
  else if ( *(_WORD *)(a2 + 24) && v11 != 263 )
  {
LABEL_8:
    if ( (a3 & 1) == 0 )
    {
      v23 = a2;
      sub_100013F10();
      a2 = v23;
    }
    v12 = 0;
  }
  v24 = *(_OWORD *)a2;
  v25 = *(_OWORD *)(a2 + 16);
  v26 = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = v26;
  *(_OWORD *)a1 = v24;
  *(_OWORD *)(a1 + 16) = v25;
  v27 = *(_OWORD *)(a2 + 64);
  v28 = *(_OWORD *)(a2 + 80);
  v29 = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = v29;
  *(_OWORD *)(a1 + 64) = v27;
  *(_OWORD *)(a1 + 80) = v28;
  v30 = *(_OWORD *)(a2 + 128);
  v31 = *(_OWORD *)(a2 + 144);
  v32 = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 176) = v32;
  *(_OWORD *)(a1 + 128) = v30;
  *(_OWORD *)(a1 + 144) = v31;
  v33 = *(_OWORD *)(a2 + 192);
  v34 = *(_OWORD *)(a2 + 208);
  v35 = *(_OWORD *)(a2 + 224);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
  *(_OWORD *)(a1 + 208) = v34;
  *(_OWORD *)(a1 + 224) = v35;
  *(_OWORD *)(a1 + 192) = v33;
LABEL_12:
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 92) - 10 >= 4 )
  {
    v36 = *(_DWORD *)(a1 + 56);
    v37 = (int8x8_t)*(unsigned int *)(a1 + 60);
    if ( v36 < v37.i32[0] || (v38 = (uint8x8_t)vcnt_s8(v37), v38.i16[0] = vaddlv_u8(v38), v38.i32[0] > 1u) )
    {
      if ( (v9 & 1) != 0 )
        goto LABEL_28;
    }
    else if ( !v36 || (v36 & (v36 - 1)) == 0 || (v9 & 1) != 0 )
    {
      goto LABEL_21;
    }
    sub_100052A2C(
      "Invalid file: bad alignment value specified (section alignment: %08X, file alignment: %08X)",
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      *(_DWORD *)(a1 + 56));
  }
LABEL_21:
  v39 = *(_DWORD *)(a1 + 80);
  v40 = v39 < *(_DWORD *)(a1 + 84) || v39 >= 0x77000001;
  if ( v40 && (v9 & 1) == 0 )
    sub_100052A2C("Invalid file: bad ImageSize value %x", a2, a3, a4, a5, a6, a7, a8, *(_DWORD *)(a1 + 80));
LABEL_28:
  if ( v8 )
  {
    v41 = *(unsigned int *)(a1 + 116);
    if ( (unsigned int)(v41 - 1) <= 0xE )
      bzero((void *)(a1 + 8 * v41 + 120), 128 - 8 * v41);
    v42 = 248;
    if ( *(_WORD *)(a1 + 24) == 523 )
      v42 = 264;
    v43 = *(unsigned __int16 *)(a1 + 20) + 24LL;
    v44 = v42 - v43;
    if ( v42 > v43 && v42 - 128 <= v43 )
    {
      if ( (v9 & 1) == 0 )
        sub_100000AA0();
      bzero((void *)(a1 + 8 * (16 - ((v44 + 7) >> 3)) + 120), (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  return v12;
}
// 10005295C: variable 'a3' is possibly undefined
// 10005295C: variable 'a4' is possibly undefined
// 10005295C: variable 'a5' is possibly undefined
// 10005295C: variable 'a6' is possibly undefined
// 10005295C: variable 'a7' is possibly undefined
// 10005295C: variable 'a8' is possibly undefined
// 100052988: variable 'a2' is possibly undefined
