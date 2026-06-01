/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CBA8C
// Address: 0x00000000000CBA8C

//----- (00000000000CBA8C) ----------------------------------------------------
__int64 __fastcall sub_CBA8C(__int64 a1, int a2)
{
  unsigned int v4; // w8
  __int64 v5; // x8
  __int64 v6; // x10
  __int64 v7; // x11
  __int64 v8; // x9
  __int64 v9; // x12
  __int64 v10; // x1
  unsigned int v11; // w0
  unsigned __int8 v12; // w8
  __int64 v13; // x13
  __int64 v14; // x14
  unsigned __int8 v15; // w9
  unsigned int v16; // w11
  __int64 v17; // x10
  unsigned int v18; // w9
  unsigned __int16 v19; // w11
  __int64 v20; // x13
  __int64 v21; // x12
  __int64 v22; // x9
  __int64 v23; // x12
  __int64 v24; // x11
  unsigned int v25; // w9
  _BOOL4 v26; // w8
  int v27; // w9
  __int64 v28; // x12
  int v29; // w10
  __int64 v30; // x13
  int v31; // w9
  __int64 v32; // x10
  __int64 v33; // x11
  __int64 v34; // x9
  __int64 v35; // x12
  unsigned int v36; // w9
  __int64 v37; // x8
  const void *v38; // x1
  int v39; // w10
  __int64 v40; // x11
  int v41; // w10
  unsigned int v42; // w0
  __int64 v43; // x10
  __int64 v44; // x11
  __int64 v45; // x8
  __int64 v46; // x9
  __int64 v47; // x10
  __int64 v48; // x9
  __int64 v49; // x10
  __int64 v50; // x25
  __int64 v51; // x21
  unsigned int v52; // w26
  unsigned int v53; // w9
  __int64 v54; // x8
  __int64 v56; // x8
  int v57; // w9
  __int64 v58; // x9
  const void *v59; // x1
  __int64 v60; // x9
  const void *v61; // x1
  __int64 v62; // x22
  __int64 v63; // x20
  unsigned int v64; // w23
  unsigned int v65; // w9
  __int64 v66; // x8
  __int64 v67; // x22
  __int64 v68; // x20
  unsigned int v69; // w23
  unsigned int v70; // w9
  __int64 v71; // x8

  while ( *(_DWORD *)(a1 + 180) > 0x105u )
  {
LABEL_6:
    v5 = *(unsigned int *)(a1 + 172);
    v6 = *(_QWORD *)(a1 + 112);
    v7 = *(_QWORD *)(a1 + 120);
    v8 = ((*(_DWORD *)(a1 + 128) << *(_DWORD *)(a1 + 144))
        ^ (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + (unsigned int)(v5 + 2)))
       & *(_DWORD *)(a1 + 140);
    v9 = *(unsigned int *)(a1 + 88);
    *(_DWORD *)(a1 + 128) = v8;
    v10 = *(unsigned __int16 *)(v7 + 2 * v8);
    *(_WORD *)(v6 + 2 * (v9 & v5)) = v10;
    *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
    if ( (_DWORD)v10 && *(_DWORD *)(a1 + 172) - (int)v10 <= (unsigned int)(*(_DWORD *)(a1 + 80) - 262) )
    {
      v42 = sub_CC734(a1, v10);
      *(_DWORD *)(a1 + 160) = v42;
      v12 = v42 - 3;
      if ( v42 >= 3 )
        goto LABEL_9;
LABEL_21:
      v43 = *(unsigned int *)(a1 + 5900);
      v44 = *(_QWORD *)(a1 + 5888);
      v45 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + *(unsigned int *)(a1 + 172));
      *(_DWORD *)(a1 + 5900) = v43 + 1;
      *(_BYTE *)(v44 + v43) = 0;
      v46 = *(unsigned int *)(a1 + 5900);
      v47 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v46 + 1;
      *(_BYTE *)(v47 + v46) = 0;
      v48 = *(unsigned int *)(a1 + 5900);
      v49 = *(_QWORD *)(a1 + 5888);
      *(_DWORD *)(a1 + 5900) = v48 + 1;
      *(_BYTE *)(v49 + v48) = v45;
      ++*(_WORD *)(a1 + 4 * v45 + 212);
      v36 = *(_DWORD *)(a1 + 172) + 1;
      LODWORD(v45) = *(_DWORD *)(a1 + 5900) == *(_DWORD *)(a1 + 5904);
      --*(_DWORD *)(a1 + 180);
      *(_DWORD *)(a1 + 172) = v36;
      if ( (_DWORD)v45 )
        goto LABEL_16;
    }
    else
    {
LABEL_8:
      v11 = *(_DWORD *)(a1 + 160);
      v12 = v11 - 3;
      if ( v11 < 3 )
        goto LABEL_21;
LABEL_9:
      v13 = *(unsigned int *)(a1 + 5900);
      v14 = *(_QWORD *)(a1 + 5888);
      v15 = *((_BYTE *)qword_11F760 + v12);
      v16 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 5900) = v13 + 1;
      *(_BYTE *)(v14 + v13) = v16;
      v17 = (4LL * v15) | 0x400;
      v18 = v16 >> 8;
      v19 = v16 - 1;
      v20 = *(unsigned int *)(a1 + 5900);
      v21 = *(_QWORD *)(a1 + 5888);
      if ( v19 >= 0x100u )
        v19 = (v19 >> 7) + 256;
      *(_DWORD *)(a1 + 5900) = v20 + 1;
      *(_BYTE *)(v21 + v20) = v18;
      v22 = *(unsigned int *)(a1 + 5900);
      v23 = *(_QWORD *)(a1 + 5888);
      v24 = (unsigned __int8)byte_11F560[v19];
      *(_DWORD *)(a1 + 5900) = v22 + 1;
      *(_BYTE *)(v23 + v22) = v12;
      ++*(_WORD *)(a1 + v17 + 216);
      ++*(_WORD *)(a1 + 4 * v24 + 2504);
      v25 = *(_DWORD *)(a1 + 160);
      LODWORD(v24) = *(_DWORD *)(a1 + 180);
      v26 = *(_DWORD *)(a1 + 5900) == *(_DWORD *)(a1 + 5904);
      *(_DWORD *)(a1 + 180) = v24 - v25;
      if ( (unsigned int)v24 - v25 < 3 || v25 > *(_DWORD *)(a1 + 192) )
      {
        v39 = *(_DWORD *)(a1 + 172);
        v40 = *(_QWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 160) = 0;
        v36 = v39 + v25;
        *(_DWORD *)(a1 + 172) = v36;
        v41 = *(unsigned __int8 *)(v40 + v36);
        *(_DWORD *)(a1 + 128) = v41;
        *(_DWORD *)(a1 + 128) = ((v41 << *(_DWORD *)(a1 + 144))
                               ^ *(unsigned __int8 *)(v40 + v36 + 1))
                              & *(_DWORD *)(a1 + 140);
        if ( v26 )
          goto LABEL_16;
      }
      else
      {
        *(_DWORD *)(a1 + 160) = v25 - 1;
        do
        {
          v27 = *(_DWORD *)(a1 + 172);
          v28 = *(_QWORD *)(a1 + 96);
          v29 = *(_DWORD *)(a1 + 128);
          v30 = (unsigned int)(v27 + 1);
          *(_DWORD *)(a1 + 172) = v30;
          v31 = (v29 << *(_DWORD *)(a1 + 144)) ^ *(unsigned __int8 *)(v28 + (unsigned int)(v27 + 3));
          v32 = *(_QWORD *)(a1 + 112);
          v33 = *(_QWORD *)(a1 + 120);
          v34 = (unsigned int)v31 & *(_DWORD *)(a1 + 140);
          v35 = *(unsigned int *)(a1 + 88);
          *(_DWORD *)(a1 + 128) = v34;
          *(_WORD *)(v32 + 2 * (v35 & v30)) = *(_WORD *)(v33 + 2 * v34);
          *(_WORD *)(*(_QWORD *)(a1 + 120) + 2LL * *(unsigned int *)(a1 + 128)) = *(_DWORD *)(a1 + 172);
          LODWORD(v34) = *(_DWORD *)(a1 + 160) - 1;
          *(_DWORD *)(a1 + 160) = v34;
        }
        while ( (_DWORD)v34 );
        v36 = *(_DWORD *)(a1 + 172) + 1;
        *(_DWORD *)(a1 + 172) = v36;
        if ( v26 )
        {
LABEL_16:
          v37 = *(_QWORD *)(a1 + 152);
          if ( v37 < 0 )
            v38 = nullptr;
          else
            v38 = (const void *)(*(_QWORD *)(a1 + 96) + (unsigned int)v37);
          sub_CFDF0(a1, v38, v36 - v37, 0);
          v50 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
          v51 = *(_QWORD *)(v50 + 56);
          sub_CFC1C(v51);
          if ( *(_DWORD *)(v50 + 32) >= *(_DWORD *)(v51 + 40) )
            v52 = *(_DWORD *)(v51 + 40);
          else
            v52 = *(_DWORD *)(v50 + 32);
          if ( v52 )
          {
            memcpy(*(void **)(v50 + 24), *(const void **)(v51 + 32), v52);
            *(_QWORD *)(v50 + 24) += v52;
            *(_QWORD *)(v51 + 32) += v52;
            v53 = *(_DWORD *)(v50 + 32) - v52;
            *(_QWORD *)(v50 + 40) += v52;
            *(_DWORD *)(v50 + 32) = v53;
            v54 = *(_QWORD *)(v51 + 40) - v52;
            *(_QWORD *)(v51 + 40) = v54;
            if ( !v54 )
              *(_QWORD *)(v51 + 32) = *(_QWORD *)(v51 + 16);
          }
          if ( !*(_DWORD *)(*(_QWORD *)a1 + 32LL) )
            return 0;
        }
      }
    }
  }
  sub_C8CB8(a1);
  v4 = *(_DWORD *)(a1 + 180);
  if ( !a2 && v4 < 0x106 )
    return 0;
  if ( v4 )
  {
    if ( v4 < 3 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v56 = *(unsigned int *)(a1 + 172);
  if ( (unsigned int)v56 >= 2 )
    v57 = 2;
  else
    v57 = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(a1 + 5932) = v57;
  if ( a2 == 4 )
  {
    v58 = *(_QWORD *)(a1 + 152);
    if ( v58 < 0 )
      v59 = nullptr;
    else
      v59 = (const void *)(*(_QWORD *)(a1 + 96) + (unsigned int)v58);
    sub_CFDF0(a1, v59, v56 - v58, 1);
    v62 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
    v63 = *(_QWORD *)(v62 + 56);
    sub_CFC1C(v63);
    if ( *(_DWORD *)(v62 + 32) >= *(_DWORD *)(v63 + 40) )
      v64 = *(_DWORD *)(v63 + 40);
    else
      v64 = *(_DWORD *)(v62 + 32);
    if ( v64 )
    {
      memcpy(*(void **)(v62 + 24), *(const void **)(v63 + 32), v64);
      *(_QWORD *)(v62 + 24) += v64;
      *(_QWORD *)(v63 + 32) += v64;
      v65 = *(_DWORD *)(v62 + 32) - v64;
      *(_QWORD *)(v62 + 40) += v64;
      *(_DWORD *)(v62 + 32) = v65;
      v66 = *(_QWORD *)(v63 + 40) - v64;
      *(_QWORD *)(v63 + 40) = v66;
      if ( !v66 )
        *(_QWORD *)(v63 + 32) = *(_QWORD *)(v63 + 16);
    }
    if ( *(_DWORD *)(*(_QWORD *)a1 + 32LL) )
      return 3;
    else
      return 2;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 5900) )
    {
      v60 = *(_QWORD *)(a1 + 152);
      if ( v60 < 0 )
        v61 = nullptr;
      else
        v61 = (const void *)(*(_QWORD *)(a1 + 96) + (unsigned int)v60);
      sub_CFDF0(a1, v61, v56 - v60, 0);
      v67 = *(_QWORD *)a1;
      *(_QWORD *)(a1 + 152) = *(unsigned int *)(a1 + 172);
      v68 = *(_QWORD *)(v67 + 56);
      sub_CFC1C(v68);
      if ( *(_DWORD *)(v67 + 32) >= *(_DWORD *)(v68 + 40) )
        v69 = *(_DWORD *)(v68 + 40);
      else
        v69 = *(_DWORD *)(v67 + 32);
      if ( v69 )
      {
        memcpy(*(void **)(v67 + 24), *(const void **)(v68 + 32), v69);
        *(_QWORD *)(v67 + 24) += v69;
        *(_QWORD *)(v68 + 32) += v69;
        v70 = *(_DWORD *)(v67 + 32) - v69;
        *(_QWORD *)(v67 + 40) += v69;
        *(_DWORD *)(v67 + 32) = v70;
        v71 = *(_QWORD *)(v68 + 40) - v69;
        *(_QWORD *)(v68 + 40) = v71;
        if ( !v71 )
          *(_QWORD *)(v68 + 32) = *(_QWORD *)(v68 + 16);
      }
      if ( !*(_DWORD *)(*(_QWORD *)a1 + 32LL) )
        return 0;
    }
    return 1;
  }
}
// 11F760: using guessed type __int64 qword_11F760[32];
