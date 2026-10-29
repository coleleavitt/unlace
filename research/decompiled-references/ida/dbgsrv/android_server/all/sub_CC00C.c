/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CC00C
// Address: 0x00000000000CC00C

//----- (00000000000CC00C) ----------------------------------------------------
__int64 __fastcall sub_CC00C(__int64 a1, int a2)
{
  int v4; // w8
  int v5; // w9
  unsigned int v6; // w8
  __int64 v7; // x8
  unsigned int v8; // w0
  __int64 v9; // x10
  __int64 v10; // x11
  __int64 v11; // x9
  __int64 v12; // x12
  __int64 v13; // x1
  unsigned int v14; // w9
  unsigned __int8 v15; // w8
  int v16; // w11
  __int64 v17; // x14
  __int64 v18; // x15
  __int64 v19; // x10
  int v20; // w9
  int v21; // w12
  unsigned __int16 v22; // w13
  __int64 v23; // x15
  __int64 v24; // x14
  __int64 v25; // x9
  __int64 v26; // x14
  __int64 v27; // x13
  unsigned int v28; // w10
  int v29; // w12
  int v30; // w8
  int v31; // w9
  int v32; // w12
  int v33; // w13
  unsigned int v34; // w11
  __int64 v35; // x14
  __int64 v36; // x15
  __int64 v37; // x12
  int v38; // w13
  int v39; // w10
  unsigned int v40; // w10
  __int64 v41; // x8
  const void *v42; // x1
  int v43; // w8
  __int64 v44; // x10
  __int64 v45; // x11
  __int64 v46; // x8
  __int64 v47; // x9
  __int64 v48; // x10
  __int64 v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  const void *v52; // x1
  __int64 v53; // x27
  __int64 v54; // x21
  unsigned int v55; // w28
  unsigned int v56; // w9
  __int64 v57; // x8
  __int64 v58; // x27
  __int64 v59; // x21
  unsigned int v60; // w28
  unsigned int v61; // w9
  __int64 v62; // x8
  __int64 v63; // x10
  int v64; // w9
  __int64 v65; // x10
  __int64 v66; // x11
  __int64 v67; // x8
  __int64 v68; // x9
  __int64 v69; // x10
  __int64 v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  int v73; // w9
  __int64 v74; // x9
  const void *v75; // x1
  __int64 v76; // x9
  const void *v77; // x1
  __int64 v78; // x22
  __int64 v79; // x20
  unsigned int v80; // w23
  unsigned int v81; // w9
  __int64 v82; // x8
  __int64 v84; // x22
  __int64 v85; // x20
  unsigned int v86; // w23
  unsigned int v87; // w9
  __int64 v88; // x8

  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 180) > 0x105u )
      goto LABEL_8;
    sub_C8CB8(a1);
    v6 = *(_DWORD *)(a1 + 180);
    if ( !a2 && v6 < 0x106 )
      return 0;
    if ( !v6 )
      break;
    if ( v6 <= 2 )
    {
      v14 = *(_DWORD *)(a1 + 160);
      v43 = *(_DWORD *)(a1 + 176);
      v8 = 2;
      *(_DWORD *)(a1 + 184) = v14;
      *(_DWORD *)(a1 + 160) = 2;
      *(_DWORD *)(a1 + 164) = v43;
LABEL_24:
      v15 = v14 - 3;
      if ( v14 < 3 )
        goto LABEL_25;
LABEL_13:
      if ( v8 > v14 )
        goto LABEL_25;
      v16 = *(_DWORD *)(a1 + 172);
      v17 = *(unsigned int *)(a1 + 5900);
      v18 = *(_QWORD *)(a1 + 5888);
      v19 = (4LL * *((unsigned __int8 *)qword_11F760 + v15)) | 0x400;
      v20 = (*(_DWORD *)(a1 + 164) ^ 0xFFFF) + v16;
      v21 = *(_DWORD *)(a1 + 180);
      *(_DWORD *)(a1 + 5900) = v17 + 1;
      *(_BYTE *)(v18 + v17) = v20;
      v22 = v20 - 1;
      v23 = *(unsigned int *)(a1 + 5900);
      v24 = *(_QWORD *)(a1 + 5888);
      if ( (unsigned __int16)(v20 - 1) >= 0x100u )
        v22 = ((unsigned __int16)(v20 - 1) >> 7) + 256;
      *(_DWORD *)(a1 + 5900) = v23 + 1;
      *(_BYTE *)(v24 + v23) = BYTE1(v20);
      v25 = *(unsigned int *)(a1 + 5900);
      v26 = *(_QWORD *)(a1 + 5888);
      v27 = (unsigned __int8)byte_11F560[v22];
      *(_DWORD *)(a1 + 5900) = v25 + 1;
      *(_BYTE *)(v26 + v25) = v15;
      ++*(_WORD *)(a1 + v19 + 216);
      v28 = v16 + v21 - 3;
      ++*(_WORD *)(a1 + 4 * v27 + 2504);
      v29 = *(_DWORD *)(a1 + 184);
      v30 = *(_DWORD *)(a1 + 5900);
      v31 = *(_DWORD *)(a1 + 5904);
      LODWORD(v27) = 1 - v29;
      v32 = v29 - 2;
      *(_DWORD *)(a1 + 180) += v27;
      *(_DWORD *)(a1 + 184) = v32;
      do
      {
        v33 = *(_DWORD *)(a1 + 172);
        v34 = v33 + 1;
        *(_DWORD *)(a1 + 172) = v33 + 1;
        if ( v33 + 1 <= v28 )
        {
          v35 = *(_QWORD *)(a1 + 112);
          v36 = *(_QWORD *)(a1 + 120);
          v37 = ((*(_DWORD *)(a1 + 128) << *(_DWORD *)(a1 + 144))
               ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + (unsigned int)(v33 + 3)))
              & *(_DWORD *)(a1 + 140);
          v38 = *(_DWORD *)(a1 + 88);
          *(_DWORD *)(a1 + 128) = v37;
          *(_WORD *)(v35 + 2LL * (v38 & v34)) = *(_WORD *)(v36 + 2 * v37);
          *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
          v32 = *(_DWORD *)(a1 + 184);
        }
        *(_DWORD *)(a1 + 184) = --v32;
      }
      while ( v32 );
      v39 = *(_DWORD *)(a1 + 172);
      *(_DWORD *)(a1 + 160) = 2;
      v40 = v39 + 1;
      *(_DWORD *)(a1 + 168) = 0;
      *(_DWORD *)(a1 + 172) = v40;
      if ( v30 == v31 )
      {
        v41 = *(_QWORD *)(a1 + 152);
        v42 = v41 < 0 ? nullptr : (const void *)(*(_QWORD *)(a1 + 96) + (unsigned int)v41);
        sub_CFDF0(a1, v42, v40 - v41, 0);
        v53 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
        v54 = *(_QWORD *)(v53 + 56);
        sub_CFC1C(v54);
        v55 = *(_DWORD *)(v53 + 32) >= *(_DWORD *)(v54 + 40) ? *(_DWORD *)(v54 + 40) : *(_DWORD *)(v53 + 32);
        if ( v55 )
        {
          memcpy(*(void **)(v53 + 24), *(const void **)(v54 + 32), v55);
          *(_QWORD *)(v53 + 24) += v55;
          *(_QWORD *)(v54 + 32) += v55;
          v56 = *(_DWORD *)(v53 + 32) - v55;
          *(_QWORD *)(v53 + 40) += v55;
          *(_DWORD *)(v53 + 32) = v56;
          v57 = *(_QWORD *)(v54 + 40) - v55;
          *(_QWORD *)(v54 + 40) = v57;
          if ( !v57 )
            *(_QWORD *)(v54 + 32) = *(_QWORD *)(v54 + 16);
        }
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 32LL) )
          return 0;
      }
    }
    else
    {
LABEL_8:
      v7 = *(unsigned int *)(a1 + 172);
      v8 = 2;
      v9 = *(_QWORD *)(a1 + 112);
      v10 = *(_QWORD *)(a1 + 120);
      v11 = ((*(_DWORD *)(a1 + 128) << *(_DWORD *)(a1 + 144))
           ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + (unsigned int)(v7 + 2)))
          & *(_DWORD *)(a1 + 140);
      v12 = *(unsigned int *)(a1 + 88);
      *(_DWORD *)(a1 + 128) = v11;
      v13 = *(unsigned __int16 *)(v10 + 2 * v11);
      *(_WORD *)(v9 + 2 * (v12 & v7)) = v13;
      *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
      v14 = *(_DWORD *)(a1 + 160);
      LODWORD(v7) = *(_DWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 184) = v14;
      *(_DWORD *)(a1 + 160) = 2;
      *(_DWORD *)(a1 + 164) = v7;
      if ( !(_DWORD)v13 )
        goto LABEL_24;
      if ( v14 >= *(_DWORD *)(a1 + 192) || *(_DWORD *)(a1 + 172) - (int)v13 > (unsigned int)(*(_DWORD *)(a1 + 80) - 262) )
      {
        v8 = 2;
        goto LABEL_12;
      }
      v8 = sub_CC734(a1, v13);
      *(_DWORD *)(a1 + 160) = v8;
      if ( v8 <= 5 )
      {
        if ( *(_DWORD *)(a1 + 200) == 1 )
          goto LABEL_31;
        if ( v8 == 3 )
        {
          if ( (unsigned int)(*(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 176)) > 0x1000 )
          {
LABEL_31:
            v8 = 2;
            *(_DWORD *)(a1 + 160) = 2;
            goto LABEL_12;
          }
          v8 = 3;
        }
      }
LABEL_12:
      v14 = *(_DWORD *)(a1 + 184);
      v15 = v14 - 3;
      if ( v14 >= 3 )
        goto LABEL_13;
LABEL_25:
      if ( *(_DWORD *)(a1 + 168) )
      {
        v44 = *(unsigned int *)(a1 + 5900);
        v45 = *(_QWORD *)(a1 + 5888);
        v46 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + (unsigned int)(*(_DWORD *)(a1 + 172) - 1));
        *(_DWORD *)(a1 + 5900) = v44 + 1;
        *(_BYTE *)(v45 + v44) = 0;
        v47 = *(unsigned int *)(a1 + 5900);
        v48 = *(_QWORD *)(a1 + 5888);
        *(_DWORD *)(a1 + 5900) = v47 + 1;
        *(_BYTE *)(v48 + v47) = 0;
        v49 = *(unsigned int *)(a1 + 5900);
        v50 = *(_QWORD *)(a1 + 5888);
        *(_DWORD *)(a1 + 5900) = v49 + 1;
        *(_BYTE *)(v50 + v49) = v46;
        ++*(_WORD *)(a1 + 4 * v46 + 212);
        if ( *(_DWORD *)(a1 + 5900) == *(_DWORD *)(a1 + 5904) )
        {
          v51 = *(_QWORD *)(a1 + 152);
          v52 = v51 < 0 ? nullptr : (const void *)(*(_QWORD *)(a1 + 96) + (unsigned int)v51);
          sub_CFDF0(a1, v52, *(unsigned int *)(a1 + 172) - v51, 0);
          v58 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
          v59 = *(_QWORD *)(v58 + 56);
          sub_CFC1C(v59);
          v60 = *(_DWORD *)(v58 + 32) >= *(_DWORD *)(v59 + 40) ? *(_DWORD *)(v59 + 40) : *(_DWORD *)(v58 + 32);
          if ( v60 )
          {
            memcpy(*(void **)(v58 + 24), *(const void **)(v59 + 32), v60);
            *(_QWORD *)(v58 + 24) += v60;
            *(_QWORD *)(v59 + 32) += v60;
            v61 = *(_DWORD *)(v58 + 32) - v60;
            *(_QWORD *)(v58 + 40) += v60;
            *(_DWORD *)(v58 + 32) = v61;
            v62 = *(_QWORD *)(v59 + 40) - v60;
            *(_QWORD *)(v59 + 40) = v62;
            if ( !v62 )
              *(_QWORD *)(v59 + 32) = *(_QWORD *)(v59 + 16);
          }
        }
        v63 = *(_QWORD *)a1;
        v64 = *(_DWORD *)(a1 + 180) - 1;
        ++*(_DWORD *)(a1 + 172);
        *(_DWORD *)(a1 + 180) = v64;
        if ( !*(_DWORD *)(v63 + 32) )
          return 0;
      }
      else
      {
        v4 = *(_DWORD *)(a1 + 172) + 1;
        v5 = *(_DWORD *)(a1 + 180) - 1;
        *(_DWORD *)(a1 + 168) = 1;
        *(_DWORD *)(a1 + 172) = v4;
        *(_DWORD *)(a1 + 180) = v5;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 168) )
  {
    v65 = *(unsigned int *)(a1 + 5900);
    v66 = *(_QWORD *)(a1 + 5888);
    v67 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + (unsigned int)(*(_DWORD *)(a1 + 172) - 1));
    *(_DWORD *)(a1 + 5900) = v65 + 1;
    *(_BYTE *)(v66 + v65) = 0;
    v68 = *(unsigned int *)(a1 + 5900);
    v69 = *(_QWORD *)(a1 + 5888);
    *(_DWORD *)(a1 + 5900) = v68 + 1;
    *(_BYTE *)(v69 + v68) = 0;
    v70 = *(unsigned int *)(a1 + 5900);
    v71 = *(_QWORD *)(a1 + 5888);
    *(_DWORD *)(a1 + 5900) = v70 + 1;
    *(_BYTE *)(v71 + v70) = v67;
    ++*(_WORD *)(a1 + 4 * v67 + 212);
    *(_DWORD *)(a1 + 168) = 0;
  }
  v72 = *(unsigned int *)(a1 + 172);
  if ( (unsigned int)v72 >= 2 )
    v73 = 2;
  else
    v73 = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(a1 + 5932) = v73;
  if ( a2 != 4 )
  {
    if ( !*(_DWORD *)(a1 + 5900) )
      return 1;
    v76 = *(_QWORD *)(a1 + 152);
    if ( v76 < 0 )
      v77 = nullptr;
    else
      v77 = (const void *)(*(_QWORD *)(a1 + 96) + (unsigned int)v76);
    sub_CFDF0(a1, v77, v72 - v76, 0);
    v84 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
    v85 = *(_QWORD *)(v84 + 56);
    sub_CFC1C(v85);
    if ( *(_DWORD *)(v84 + 32) >= *(_DWORD *)(v85 + 40) )
      v86 = *(_DWORD *)(v85 + 40);
    else
      v86 = *(_DWORD *)(v84 + 32);
    if ( v86 )
    {
      memcpy(*(void **)(v84 + 24), *(const void **)(v85 + 32), v86);
      *(_QWORD *)(v84 + 24) += v86;
      *(_QWORD *)(v85 + 32) += v86;
      v87 = *(_DWORD *)(v84 + 32) - v86;
      *(_QWORD *)(v84 + 40) += v86;
      *(_DWORD *)(v84 + 32) = v87;
      v88 = *(_QWORD *)(v85 + 40) - v86;
      *(_QWORD *)(v85 + 40) = v88;
      if ( !v88 )
        *(_QWORD *)(v85 + 32) = *(_QWORD *)(v85 + 16);
    }
    return *(_DWORD *)(*(_QWORD *)a1 + 32LL) != 0;
  }
  v74 = *(_QWORD *)(a1 + 152);
  if ( v74 < 0 )
    v75 = nullptr;
  else
    v75 = (const void *)(*(_QWORD *)(a1 + 96) + (unsigned int)v74);
  sub_CFDF0(a1, v75, v72 - v74, 1);
  v78 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
  v79 = *(_QWORD *)(v78 + 56);
  sub_CFC1C(v79);
  if ( *(_DWORD *)(v78 + 32) >= *(_DWORD *)(v79 + 40) )
    v80 = *(_DWORD *)(v79 + 40);
  else
    v80 = *(_DWORD *)(v78 + 32);
  if ( v80 )
  {
    memcpy(*(void **)(v78 + 24), *(const void **)(v79 + 32), v80);
    *(_QWORD *)(v78 + 24) += v80;
    *(_QWORD *)(v79 + 32) += v80;
    v81 = *(_DWORD *)(v78 + 32) - v80;
    *(_QWORD *)(v78 + 40) += v80;
    *(_DWORD *)(v78 + 32) = v81;
    v82 = *(_QWORD *)(v79 + 40) - v80;
    *(_QWORD *)(v79 + 40) = v82;
    if ( !v82 )
      *(_QWORD *)(v79 + 32) = *(_QWORD *)(v79 + 16);
  }
  if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
    return 3;
  else
    return 2;
}
// 11F760: using guessed type __int64 qword_11F760[32];
