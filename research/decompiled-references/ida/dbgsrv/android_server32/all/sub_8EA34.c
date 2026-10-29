/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EA34
// Address: 0x0008EA34

//----- (0008EA34) --------------------------------------------------------
unsigned int __fastcall sub_8EA34(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r4
  unsigned int v4; // r7
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r2
  int v8; // r0
  unsigned int result; // r0
  unsigned int v10; // r4
  int i; // r0
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r7
  unsigned int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r3
  int v27; // r2
  int v28; // r3
  int v29; // r2
  int v30; // r3
  int v31; // r2
  int v32; // r3
  int v33; // r2
  int v34; // r3
  int v35; // r2
  int v36; // r3
  int v37; // r2
  int v38; // r3
  unsigned int v39; // r1
  unsigned int v40; // r0
  unsigned __int8 *v41; // r3
  unsigned int v42; // r5
  unsigned int v43; // r7
  unsigned int v44; // r5
  unsigned int v45; // r6
  unsigned int v46; // r5
  unsigned int v47; // r6
  unsigned int v48; // r5
  unsigned int v49; // r6
  unsigned int v50; // r5
  unsigned int v51; // r6
  unsigned int v52; // r5
  unsigned int v53; // r6
  unsigned int v54; // r5
  unsigned int v55; // r6
  unsigned int v56; // r5
  unsigned int v57; // r6
  int v58; // r5
  int v59; // r6
  int v60; // r5
  int v61; // r6
  int v62; // r5
  int v63; // r6
  int v64; // r5
  int v65; // r6
  int v66; // r5
  int v67; // r6
  int v68; // r5
  int v69; // r6
  unsigned int v70; // [sp+0h] [bp-4h]

  v3 = a2;
  v4 = (unsigned __int16)a1;
  v5 = HIWORD(a1);
  if ( a3 == 1 )
  {
    v6 = (unsigned __int16)a1 + *a2;
    v7 = v6 - 65521;
    if ( v6 <= 0xFFF0 )
      v7 = v4 + *a2;
    v8 = ((v7 + v5) << 16) + 983040;
    if ( v7 + v5 <= 0xFFF0 )
      v8 = (v7 + v5) << 16;
    return v8 | v7;
  }
  result = 1;
  if ( !a2 )
    return result;
  if ( a3 >= 0x10 )
  {
    if ( a3 > 0x15AF )
    {
      do
      {
        v70 = a3 - 5552;
        for ( i = 0; i != 5552; i += 16 )
        {
          v12 = v4 + v3[i];
          v13 = v12 + v3[i + 1];
          v14 = v13 + v3[i + 2];
          v15 = v12 + v5 + v13 + v14;
          v16 = v14 + v3[i + 3];
          v17 = v15 + v16;
          v18 = v16 + v3[i + 4];
          v19 = v17 + v18;
          v20 = v18 + v3[i + 5];
          v21 = v19 + v20;
          v22 = v20 + v3[i + 6];
          v23 = v21 + v22;
          v24 = v22 + v3[i + 7];
          v25 = v23 + v24;
          v26 = v24 + v3[i + 8];
          v27 = v25 + v26;
          v28 = v26 + v3[i + 9];
          v29 = v27 + v28;
          v30 = v28 + v3[i + 10];
          v31 = v29 + v30;
          v32 = v30 + v3[i + 11];
          v33 = v31 + v32;
          v34 = v32 + v3[i + 12];
          v35 = v33 + v34;
          v36 = v34 + v3[i + 13];
          v37 = v35 + v36;
          v38 = v36 + v3[i + 14];
          v4 = v38 + v3[i + 15];
          v5 = v37 + v38 + v4;
        }
        v3 += 5552;
        v4 %= 0xFFF1u;
        v5 %= 0xFFF1u;
        a3 = v70;
      }
      while ( v70 > 0x15AF );
      if ( !v70 )
        return (v5 << 16) | v4;
      if ( v70 < 0x10 )
        goto LABEL_29;
    }
    v39 = a3 - 16;
    v40 = (a3 - 16) & 0xFFFFFFF0;
    v41 = v3;
    do
    {
      v42 = v4 + *v41;
      v43 = v42 + v41[1];
      v44 = v42 + v5 + v43;
      v45 = v43 + v41[2];
      v46 = v44 + v45;
      v47 = v45 + v41[3];
      v48 = v46 + v47;
      v49 = v47 + v41[4];
      v50 = v48 + v49;
      v51 = v49 + v41[5];
      v52 = v50 + v51;
      v53 = v51 + v41[6];
      v54 = v52 + v53;
      v55 = v53 + v41[7];
      v56 = v54 + v55;
      v57 = v55 + v41[8];
      v58 = v56 + v57;
      v59 = v57 + v41[9];
      v60 = v58 + v59;
      v61 = v59 + v41[10];
      v62 = v60 + v61;
      v63 = v61 + v41[11];
      v64 = v62 + v63;
      v65 = v63 + v41[12];
      v66 = v64 + v65;
      v67 = v65 + v41[13];
      v68 = v66 + v67;
      v69 = v67 + v41[14];
      v4 = v69 + v41[15];
      v5 = v68 + v69 + v4;
      v41 += 16;
      a3 -= 16;
    }
    while ( a3 > 0xF );
    v3 += v40 + 16;
    a3 = v39 - v40;
    if ( v39 != v40 )
    {
LABEL_29:
      do
      {
        v4 += *v3;
        v5 += v4;
        ++v3;
        --a3;
      }
      while ( a3 );
    }
    v4 %= 0xFFF1u;
    v5 %= 0xFFF1u;
    return (v5 << 16) | v4;
  }
  for ( ; a3; --a3 )
  {
    v4 += *v3;
    v5 += v4;
    ++v3;
  }
  v10 = v4 - 65521;
  if ( v4 <= 0xFFF0 )
    v10 = v4;
  return ((v5 % 0xFFF1) << 16) | v10;
}
// 8EA34: too many cbuild loops
