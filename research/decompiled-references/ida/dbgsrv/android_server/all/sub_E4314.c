/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4314
// Address: 0x00000000000E4314

//----- (00000000000E4314) ----------------------------------------------------
void *__fastcall sub_E4314(void *result, char **a2)
{
  unsigned __int8 *v2; // x8
  int v3; // w12
  int v4; // w13
  char v5; // w14
  char v6; // w12
  char v7; // w14
  int v8; // w12
  int v9; // w13
  char v11; // w14
  char v12; // w12
  char v13; // w14
  int v14; // w12
  int v15; // w13
  char v16; // w14
  char v17; // w12
  char v18; // w14
  int v19; // w12
  int v20; // w13
  char v21; // w14
  char v22; // w12
  char v23; // w14
  int v24; // w12
  int v25; // w13
  char v26; // w14
  char v27; // w12
  char v28; // w14
  int v29; // w12
  int v30; // w13
  char v31; // w14
  char v32; // w12
  char v33; // w14
  int v34; // w12
  int v35; // w13
  char v36; // w14
  char v37; // w12
  char v38; // w14
  int v39; // w12
  int v40; // w8
  char v41; // w9
  char v42; // w10
  char v43; // w11
  char v44; // w10
  char *v45; // x9
  char *v46; // x8
  char v47; // w11
  char *v49; // x8
  unsigned __int64 v50; // x10
  size_t v51; // x20
  unsigned __int64 v52; // x9
  char *v53; // x0
  char *v54; // x0
  size_t v55; // x1
  double v56; // [xsp+0h] [xbp-50h] BYREF
  char s[16]; // [xsp+8h] [xbp-48h] BYREF
  __int128 v58; // [xsp+18h] [xbp-38h]
  __int64 v59; // [xsp+28h] [xbp-28h]

  v59 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *((unsigned __int8 **)result + 2);
  if ( (unsigned __int64)(*((_QWORD *)result + 3) + 1LL - (_QWORD)v2) >= 0x11 )
  {
    v3 = *v2;
    v4 = v2[1];
    v5 = (unsigned int)(v3 - 48) >= 0xA ? 9 : 0;
    v6 = v5 + v3;
    v7 = (unsigned int)(v4 - 48) >= 0xA ? -87 : -48;
    LOBYTE(v56) = v7 + v4 + 16 * v6;
    v8 = v2[2];
    v9 = v2[3];
    v11 = (unsigned int)(v8 - 48) >= 0xA ? 9 : 0;
    v12 = v11 + v8;
    v13 = (unsigned int)(v9 - 48) >= 0xA ? -87 : -48;
    BYTE1(v56) = v13 + v9 + 16 * v12;
    v14 = v2[4];
    v15 = v2[5];
    v16 = (unsigned int)(v14 - 48) >= 0xA ? 9 : 0;
    v17 = v16 + v14;
    v18 = (unsigned int)(v15 - 48) >= 0xA ? -87 : -48;
    BYTE2(v56) = v18 + v15 + 16 * v17;
    v19 = v2[6];
    v20 = v2[7];
    v21 = (unsigned int)(v19 - 48) >= 0xA ? 9 : 0;
    v22 = v21 + v19;
    v23 = (unsigned int)(v20 - 48) >= 0xA ? -87 : -48;
    BYTE3(v56) = v23 + v20 + 16 * v22;
    v24 = v2[8];
    v25 = v2[9];
    v26 = (unsigned int)(v24 - 48) >= 0xA ? 9 : 0;
    v27 = v26 + v24;
    v28 = (unsigned int)(v25 - 48) >= 0xA ? -87 : -48;
    BYTE4(v56) = v28 + v25 + 16 * v27;
    v29 = v2[10];
    v30 = v2[11];
    v31 = (unsigned int)(v29 - 48) >= 0xA ? 9 : 0;
    v32 = v31 + v29;
    v33 = (unsigned int)(v30 - 48) >= 0xA ? -87 : -48;
    BYTE5(v56) = v33 + v30 + 16 * v32;
    v34 = v2[12];
    v35 = v2[13];
    v36 = (unsigned int)(v34 - 48) >= 0xA ? 9 : 0;
    v37 = v36 + v34;
    v38 = (unsigned int)(v35 - 48) >= 0xA ? -87 : -48;
    BYTE6(v56) = v38 + v35 + 16 * v37;
    v39 = v2[14];
    v40 = v2[15];
    v41 = (unsigned int)(v39 - 48) >= 0xA ? 9 : 0;
    v42 = (unsigned int)(v40 - 48) >= 0xA ? -87 : -48;
    v43 = LOBYTE(v56);
    v44 = v42 + v40 + 16 * (v41 + v39);
    v45 = (char *)&v56 + 2;
    v46 = (char *)&v56 + 6;
    LOBYTE(v56) = v44;
    HIBYTE(v56) = v43;
    do
    {
      v47 = *(v45 - 1);
      *(v45 - 1) = *v46;
      *v46-- = v47;
    }
    while ( v45++ < v46 );
    v58 = 0u;
    *(_OWORD *)s = 0u;
    result = (void *)snprintf(s, 0x20u, "%a", v56);
    if ( (_DWORD)result )
    {
      v49 = a2[1];
      v50 = (unsigned __int64)a2[2];
      v51 = (int)result;
      v52 = (unsigned __int64)&v49[(int)result];
      if ( v52 >= v50 )
      {
        v54 = *a2;
        if ( 2 * v50 >= v52 )
          v55 = 2 * v50;
        else
          v55 = v52;
        a2[2] = (char *)v55;
        v53 = (char *)realloc(v54, v55);
        v49 = a2[1];
        *a2 = v53;
      }
      else
      {
        v53 = *a2;
      }
      result = memmove(&v49[(_QWORD)v53], s, v51);
      a2[1] += v51;
    }
  }
  return result;
}
