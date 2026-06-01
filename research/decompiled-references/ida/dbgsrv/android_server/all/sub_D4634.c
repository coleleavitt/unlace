/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4634
// Address: 0x00000000000D4634

//----- (00000000000D4634) ----------------------------------------------------
__int64 __fastcall sub_D4634(int a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x8
  __int64 v7; // x8
  unsigned int v9; // t1
  unsigned __int64 v10; // x10
  __int64 v11; // x14
  int v12; // w15
  unsigned __int8 *v13; // x16
  __int64 v14; // x17
  __int64 v15; // x18
  __int64 v16; // x9
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 v23; // x8
  __int64 v24; // x9
  __int64 v25; // x8
  __int64 v26; // x9
  __int64 v27; // x8
  __int64 v28; // x9
  __int64 v29; // x8
  __int64 v30; // x9
  __int64 v31; // x8
  __int64 v32; // x9
  __int64 v33; // x8
  __int64 v34; // x9
  __int64 v35; // x8
  __int64 v36; // x9
  __int64 v37; // x8
  __int64 v38; // x9
  __int64 v39; // x8
  __int64 v40; // x9
  __int64 v41; // x8
  __int64 v42; // x9
  __int64 v43; // x8
  __int64 v44; // x9
  __int64 v45; // x8
  unsigned __int64 v46; // x11
  unsigned __int64 v47; // x12
  unsigned __int8 *v48; // x13
  unsigned __int64 v49; // x9
  __int64 v50; // x8
  unsigned __int64 v51; // x9
  __int64 v52; // x8
  unsigned __int64 v53; // x9
  __int64 v54; // x8
  unsigned __int64 v55; // x9
  __int64 v56; // x8
  unsigned __int64 v57; // x9
  __int64 v58; // x8
  unsigned __int64 v59; // x9
  __int64 v60; // x8
  unsigned __int64 v61; // x9
  __int64 v62; // x8
  unsigned __int64 v63; // x9
  __int64 v64; // x8
  unsigned __int64 v65; // x9
  __int64 v66; // x8
  __int64 v67; // x9
  __int64 v68; // x8
  __int64 v69; // x9
  __int64 v70; // x8
  __int64 v71; // x9
  __int64 v72; // x8
  __int64 v73; // x9
  __int64 v74; // x8
  __int64 v75; // x9
  __int64 v76; // x8
  __int64 v77; // x9
  __int64 v78; // x14
  __int64 v79; // x8
  unsigned int v80; // t1

  a3 = (unsigned int)a3;
  v3 = HIWORD(a1);
  v4 = (unsigned __int16)a1;
  if ( (unsigned int)a3 != 1 )
  {
    if ( !a2 )
      return 1;
    if ( (unsigned int)a3 < 0x10uLL )
    {
      if ( (_DWORD)a3 )
      {
        do
        {
          v9 = *a2++;
          --a3;
          v4 += v9;
          v3 += v4;
        }
        while ( a3 );
      }
      if ( v4 > 0xFFF0 )
        v4 -= 65521LL;
      v10 = v3 / 0xFFF1;
      goto LABEL_28;
    }
    if ( (unsigned __int64)(unsigned int)a3 >> 4 < 0x15B )
      goto LABEL_22;
    do
    {
      v11 = 0;
      a3 -= 5552LL;
      v12 = -347;
      do
      {
        v13 = &a2[v11];
        v14 = a2[v11];
        v15 = a2[v11 + 1];
        ++v12;
        v11 += 16;
        v16 = v4 + v14;
        v17 = v16 + v3;
        v18 = v16 + v15;
        v19 = v17 + v18;
        v20 = v18 + v13[2];
        v21 = v19 + v20;
        v22 = v20 + v13[3];
        v23 = v21 + v22;
        v24 = v22 + v13[4];
        v25 = v23 + v24;
        v26 = v24 + v13[5];
        v27 = v25 + v26;
        v28 = v26 + v13[6];
        v29 = v27 + v28;
        v30 = v28 + v13[7];
        v31 = v29 + v30;
        v32 = v30 + v13[8];
        v33 = v31 + v32;
        v34 = v32 + v13[9];
        v35 = v33 + v34;
        v36 = v34 + v13[10];
        v37 = v35 + v36;
        v38 = v36 + v13[11];
        v39 = v37 + v38;
        v40 = v38 + v13[12];
        v41 = v39 + v40;
        v42 = v40 + v13[13];
        v43 = v41 + v42;
        v44 = v42 + v13[14];
        v45 = v43 + v44;
        v4 = v44 + v13[15];
        v3 = v45 + v4;
      }
      while ( v12 );
      a2 += 5552;
      v4 %= 0xFFF1u;
      v3 %= 0xFFF1u;
    }
    while ( a3 >> 4 > 0x15A );
    if ( !a3 )
      return v4 | (v3 << 16);
    if ( a3 >= 0x10 )
    {
LABEL_22:
      v46 = a3 - 16;
      v47 = (a3 - 16) & 0xFFFFFFFFFFFFFFF0LL;
      v48 = a2;
      do
      {
        a3 -= 16LL;
        v49 = v4 + *v48;
        v50 = v49 + v3;
        v51 = v49 + v48[1];
        v52 = v50 + v51;
        v53 = v51 + v48[2];
        v54 = v52 + v53;
        v55 = v53 + v48[3];
        v56 = v54 + v55;
        v57 = v55 + v48[4];
        v58 = v56 + v57;
        v59 = v57 + v48[5];
        v60 = v58 + v59;
        v61 = v59 + v48[6];
        v62 = v60 + v61;
        v63 = v61 + v48[7];
        v64 = v62 + v63;
        v65 = v63 + v48[8];
        v66 = v64 + v65;
        v67 = v65 + v48[9];
        v68 = v66 + v67;
        v69 = v67 + v48[10];
        v70 = v68 + v69;
        v71 = v69 + v48[11];
        v72 = v70 + v71;
        v73 = v71 + v48[12];
        v74 = v72 + v73;
        v75 = v73 + v48[13];
        v76 = v74 + v75;
        v77 = v75 + v48[14];
        v78 = v48[15];
        v79 = v76 + v77;
        v48 += 16;
        v4 = v77 + v78;
        v3 = v79 + v4;
      }
      while ( a3 > 0xF );
      a3 = v46 - v47;
      if ( v46 == v47 )
        goto LABEL_27;
      a2 += v47 + 16;
    }
    do
    {
      v80 = *a2++;
      --a3;
      v4 += v80;
      v3 += v4;
    }
    while ( a3 );
LABEL_27:
    v10 = v3 / 0xFFF1;
    v4 %= 0xFFF1u;
LABEL_28:
    v3 -= 65521 * v10;
    return v4 | (v3 << 16);
  }
  v5 = (unsigned __int16)a1 + (unsigned __int64)*a2;
  if ( v5 > 0xFFF0 )
    v5 -= 65521LL;
  v6 = v5 + HIWORD(a1);
  if ( v6 <= 0xFFF0 )
    v7 = v6 << 16;
  else
    v7 = (v6 << 16) - 4293984256u;
  return v7 | v5;
}
// D4634: too many cbuild loops
