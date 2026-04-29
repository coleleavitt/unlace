unsigned __int8 *__fastcall dyld4::Loader::uuidToStr(unsigned __int8 *this, unsigned __int8 *a2, char *a3)
{
  unsigned int v3; // w9
  int v4; // w8
  unsigned __int8 v5; // w9
  unsigned int v6; // w9
  int v7; // w10
  unsigned __int8 v8; // w9
  unsigned int v9; // w9
  int v10; // w10
  unsigned __int8 v11; // w9
  unsigned int v12; // w9
  int v13; // w10
  unsigned __int8 v14; // w9
  unsigned int v15; // w10
  int v16; // w11
  unsigned __int8 v17; // w10
  unsigned int v18; // w10
  int v19; // w11
  unsigned __int8 v20; // w10
  unsigned int v21; // w10
  int v22; // w11
  unsigned __int8 v23; // w10
  unsigned int v24; // w10
  int v25; // w11
  unsigned __int8 v26; // w10
  unsigned int v27; // w10
  int v28; // w11
  unsigned __int8 v29; // w10
  unsigned int v30; // w10
  int v31; // w11
  unsigned __int8 v32; // w10
  unsigned int v33; // w9
  int v34; // w10
  unsigned __int8 v35; // w9
  unsigned int v36; // w9
  int v37; // w10
  unsigned __int8 v38; // w9
  unsigned int v39; // w9
  int v40; // w10
  unsigned __int8 v41; // w9
  unsigned int v42; // w9
  int v43; // w10
  unsigned __int8 v44; // w9
  unsigned int v45; // w9
  int v46; // w10
  unsigned __int8 v47; // w9
  unsigned int v48; // w9
  int v49; // w10
  unsigned __int8 v50; // w8

  v3 = *this;
  v4 = (v3 >> 4) | 0x30;
  if ( v3 >= 0xA0 )
    LOBYTE(v4) = (*this >> 4) + 55;
  *a2 = v4;
  if ( (v3 & 0xF) >= 0xA )
    v5 = (v3 & 0xF) + 55;
  else
    v5 = v3 & 0xF | 0x30;
  a2[1] = v5;
  v6 = *(this + 1);
  v7 = (v6 >> 4) | 0x30;
  if ( v6 >= 0xA0 )
    LOBYTE(v7) = (*(this + 1) >> 4) + 55;
  a2[2] = v7;
  if ( (v6 & 0xF) >= 0xA )
    v8 = (v6 & 0xF) + 55;
  else
    v8 = v6 & 0xF | 0x30;
  a2[3] = v8;
  v9 = *(this + 2);
  v10 = (v9 >> 4) | 0x30;
  if ( v9 >= 0xA0 )
    LOBYTE(v10) = (*(this + 2) >> 4) + 55;
  a2[4] = v10;
  if ( (v9 & 0xF) >= 0xA )
    v11 = (v9 & 0xF) + 55;
  else
    v11 = v9 & 0xF | 0x30;
  a2[5] = v11;
  v12 = *(this + 3);
  v13 = (v12 >> 4) | 0x30;
  if ( v12 >= 0xA0 )
    LOBYTE(v13) = (*(this + 3) >> 4) + 55;
  a2[6] = v13;
  if ( (v12 & 0xF) >= 0xA )
    v14 = (v12 & 0xF) + 55;
  else
    v14 = v12 & 0xF | 0x30;
  a2[7] = v14;
  a2[8] = 45;
  v15 = *(this + 4);
  v16 = (v15 >> 4) | 0x30;
  if ( v15 >= 0xA0 )
    LOBYTE(v16) = (*(this + 4) >> 4) + 55;
  a2[9] = v16;
  if ( (v15 & 0xF) >= 0xA )
    v17 = (v15 & 0xF) + 55;
  else
    v17 = v15 & 0xF | 0x30;
  a2[10] = v17;
  v18 = *(this + 5);
  v19 = (v18 >> 4) | 0x30;
  if ( v18 >= 0xA0 )
    LOBYTE(v19) = (*(this + 5) >> 4) + 55;
  a2[11] = v19;
  if ( (v18 & 0xF) >= 0xA )
    v20 = (v18 & 0xF) + 55;
  else
    v20 = v18 & 0xF | 0x30;
  a2[12] = v20;
  a2[13] = 45;
  v21 = *(this + 6);
  v22 = (v21 >> 4) | 0x30;
  if ( v21 >= 0xA0 )
    LOBYTE(v22) = (*(this + 6) >> 4) + 55;
  a2[14] = v22;
  if ( (v21 & 0xF) >= 0xA )
    v23 = (v21 & 0xF) + 55;
  else
    v23 = v21 & 0xF | 0x30;
  a2[15] = v23;
  v24 = *(this + 7);
  v25 = (v24 >> 4) | 0x30;
  if ( v24 >= 0xA0 )
    LOBYTE(v25) = (*(this + 7) >> 4) + 55;
  a2[16] = v25;
  if ( (v24 & 0xF) >= 0xA )
    v26 = (v24 & 0xF) + 55;
  else
    v26 = v24 & 0xF | 0x30;
  a2[17] = v26;
  a2[18] = 45;
  v27 = *(this + 8);
  v28 = (v27 >> 4) | 0x30;
  if ( v27 >= 0xA0 )
    LOBYTE(v28) = (*(this + 8) >> 4) + 55;
  a2[19] = v28;
  if ( (v27 & 0xF) >= 0xA )
    v29 = (v27 & 0xF) + 55;
  else
    v29 = v27 & 0xF | 0x30;
  a2[20] = v29;
  v30 = *(this + 9);
  v31 = (v30 >> 4) | 0x30;
  if ( v30 >= 0xA0 )
    LOBYTE(v31) = (*(this + 9) >> 4) + 55;
  a2[21] = v31;
  if ( (v30 & 0xF) >= 0xA )
    v32 = (v30 & 0xF) + 55;
  else
    v32 = v30 & 0xF | 0x30;
  a2[22] = v32;
  a2[23] = 45;
  v33 = *(this + 10);
  v34 = (v33 >> 4) | 0x30;
  if ( v33 >= 0xA0 )
    LOBYTE(v34) = (*(this + 10) >> 4) + 55;
  a2[24] = v34;
  if ( (v33 & 0xF) >= 0xA )
    v35 = (v33 & 0xF) + 55;
  else
    v35 = v33 & 0xF | 0x30;
  a2[25] = v35;
  v36 = *(this + 11);
  v37 = (v36 >> 4) | 0x30;
  if ( v36 >= 0xA0 )
    LOBYTE(v37) = (*(this + 11) >> 4) + 55;
  a2[26] = v37;
  if ( (v36 & 0xF) >= 0xA )
    v38 = (v36 & 0xF) + 55;
  else
    v38 = v36 & 0xF | 0x30;
  a2[27] = v38;
  v39 = *(this + 12);
  v40 = (v39 >> 4) | 0x30;
  if ( v39 >= 0xA0 )
    LOBYTE(v40) = (*(this + 12) >> 4) + 55;
  a2[28] = v40;
  if ( (v39 & 0xF) >= 0xA )
    v41 = (v39 & 0xF) + 55;
  else
    v41 = v39 & 0xF | 0x30;
  a2[29] = v41;
  v42 = *(this + 13);
  v43 = (v42 >> 4) | 0x30;
  if ( v42 >= 0xA0 )
    LOBYTE(v43) = (*(this + 13) >> 4) + 55;
  a2[30] = v43;
  if ( (v42 & 0xF) >= 0xA )
    v44 = (v42 & 0xF) + 55;
  else
    v44 = v42 & 0xF | 0x30;
  a2[31] = v44;
  v45 = *(this + 14);
  v46 = (v45 >> 4) | 0x30;
  if ( v45 >= 0xA0 )
    LOBYTE(v46) = (*(this + 14) >> 4) + 55;
  a2[32] = v46;
  if ( (v45 & 0xF) >= 0xA )
    v47 = (v45 & 0xF) + 55;
  else
    v47 = v45 & 0xF | 0x30;
  a2[33] = v47;
  v48 = *(this + 15);
  v49 = (v48 >> 4) | 0x30;
  if ( v48 >= 0xA0 )
    LOBYTE(v49) = (*(this + 15) >> 4) + 55;
  a2[34] = v49;
  v50 = v48 & 0xF | 0x30;
  if ( (v48 & 0xF) >= 0xA )
    v50 = (v48 & 0xF) + 55;
  a2[35] = v50;
  a2[36] = 0;
  return this;
}
