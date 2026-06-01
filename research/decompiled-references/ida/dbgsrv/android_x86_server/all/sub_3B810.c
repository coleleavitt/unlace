/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B810
// Address: 0x0003B810

//----- (0003B810) --------------------------------------------------------
int __usercall sub_3B810@<eax>(int a1@<ebx>, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // esi
  __int16 v5; // cx
  __int16 v6; // ax
  bool v7; // zf
  __int16 v8; // cx
  _DWORD *v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  _QWORD *v18; // ecx
  unsigned int v19; // edi
  __int64 v20; // kr08_8
  _DWORD *v21; // eax
  int v22; // ecx
  unsigned int v23; // edx
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // esi
  int v28; // edi
  unsigned int v29; // ecx
  unsigned __int64 v30; // kr10_8
  int v31; // edx
  _DWORD *v32; // ecx
  __int64 v34; // rdi
  int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // esi
  unsigned int v39; // edx
  unsigned int v40; // esi
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // edi
  int v44; // edx
  unsigned int v45; // esi
  unsigned int v46; // edx
  unsigned int v47; // esi
  int v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // edi
  int v51; // edx
  unsigned int v52; // esi
  unsigned int v53; // edx
  unsigned int v54; // esi
  int v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // edi
  int v58; // edx
  unsigned int v59; // esi
  unsigned int v60; // edx
  unsigned int v61; // esi
  int v62; // eax
  int v63; // ecx
  unsigned int v64; // edi
  int v65; // edi
  int v66; // esi
  int v67; // edx
  int v68; // [esp+0h] [ebp-4Ch]
  int v69; // [esp+0h] [ebp-4Ch]
  int v70; // [esp+0h] [ebp-4Ch]
  int v71; // [esp+0h] [ebp-4Ch]
  int v72; // [esp+0h] [ebp-4Ch]
  unsigned int *v73; // [esp+4h] [ebp-48h]
  int *v74; // [esp+4h] [ebp-48h]
  unsigned int v75; // [esp+4h] [ebp-48h]
  unsigned int v76; // [esp+4h] [ebp-48h]
  unsigned int v77; // [esp+4h] [ebp-48h]
  unsigned int v78; // [esp+4h] [ebp-48h]
  unsigned int v79; // [esp+8h] [ebp-44h]
  int v80; // [esp+8h] [ebp-44h]
  int v81; // [esp+10h] [ebp-3Ch]
  int v82; // [esp+10h] [ebp-3Ch]
  unsigned int v83; // [esp+10h] [ebp-3Ch]
  unsigned int v84; // [esp+10h] [ebp-3Ch]
  unsigned int v85; // [esp+10h] [ebp-3Ch]
  unsigned int v86; // [esp+10h] [ebp-3Ch]
  unsigned int v87; // [esp+14h] [ebp-38h]
  unsigned int v88; // [esp+14h] [ebp-38h]
  int v89; // [esp+14h] [ebp-38h]
  _DWORD v90[4]; // [esp+18h] [ebp-34h] BYREF
  int v91; // [esp+28h] [ebp-24h] BYREF
  int v92; // [esp+2Ch] [ebp-20h]
  unsigned int v93; // [esp+30h] [ebp-1Ch]
  unsigned int v94; // [esp+38h] [ebp-14h]

  v4 = (_DWORD *)a3;
  v94 = __readgsdword(0x14u);
  v5 = *(_WORD *)(a2 + 304);
  *(_WORD *)(a3 + 56) = v5;
  v6 = *(_WORD *)(a2 + 324);
  *(_WORD *)(a3 + 88) = v6;
  v7 = v5 == 0;
  v8 = *(_WORD *)(a2 + 328);
  *(_WORD *)(a3 + 120) = v8;
  if ( v7 || !v6 || !v8 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20037);
    BUG();
  }
  v9 = a4;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  if ( (a4[1] & 0xFFFFFFF) == 0 )
  {
    *(_DWORD *)(a3 + 48) = -1;
    *(_DWORD *)(a3 + 52) = 0;
LABEL_61:
    v4[13] = 0;
    v4[12] = 0;
    v4[60] = -1;
    v4[61] = 0;
LABEL_62:
    v4[61] = 0;
    v4[60] = 0;
    v4[69] = 0;
    v4[68] = 0;
    v4[101] = 0;
    v4[100] = 0;
    v4[109] = 0;
    v4[108] = 0;
    v32 = v4 + 116;
    v4[116] = -1;
    v4[117] = 0;
LABEL_63:
    v32[1] = 0;
    *v32 = 0;
    LOBYTE(a1) = 1;
    goto LABEL_64;
  }
  v90[3] = a3 + 56;
  v90[2] = a3 + 88;
  v90[1] = a3 + 120;
  v73 = (unsigned int *)*a4;
  while ( 1 )
  {
    v10 = *v73;
    v11 = v73[1];
    if ( *(__int64 *)v73 <= 1610612750 )
      break;
    v12 = v10 - 1879048176;
    if ( __PAIR64__(v11, v10) - 1879048176 <= 0xF )
    {
      v14 = 12;
      v4 = (_DWORD *)a3;
      v9 = a4;
      switch ( v12 )
      {
        case 0u:
          a1 = 14;
          goto LABEL_31;
        case 1u:
        case 2u:
        case 3u:
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 9u:
        case 0xAu:
        case 0xBu:
          goto LABEL_49;
        case 0xCu:
          a1 = 12;
          goto LABEL_31;
        case 0xDu:
          goto LABEL_22;
        case 0xEu:
          a1 = 13;
          goto LABEL_31;
        case 0xFu:
          v14 = 13;
LABEL_22:
          *(_DWORD *)(a3 + 32 * v14 + 28) = v73[2];
          break;
      }
      goto LABEL_49;
    }
    if ( __PAIR64__(v11, v10) - 1610612751 <= 3 )
    {
      v4 = (_DWORD *)a3;
      v9 = a4;
      switch ( v10 )
      {
        case 0x6000000Fu:
          v13 = *(unsigned __int16 *)((char *)&off_13AE68 + a2 - 1289430);
          if ( v13 == 40 )
          {
            a1 = 4;
            goto LABEL_31;
          }
          a1 = 4;
          if ( (unsigned __int16)v13 == 183 )
            goto LABEL_31;
          goto LABEL_49;
        case 0x60000010u:
          v16 = 4;
          goto LABEL_28;
        case 0x60000011u:
          v15 = *(unsigned __int16 *)((char *)&off_13AE68 + a2 - 1289430);
          if ( v15 == 183 )
          {
            a1 = 5;
            goto LABEL_31;
          }
          a1 = 5;
          if ( (unsigned __int16)v15 == 40 )
            goto LABEL_31;
          break;
        case 0x60000012u:
          v16 = 5;
LABEL_28:
          *(_QWORD *)(a3 + 32 * v16 + 16) = *((_QWORD *)v73 + 1);
          goto LABEL_49;
      }
      goto LABEL_49;
    }
    v4 = (_DWORD *)a3;
    v9 = a4;
    if ( !(v11 | v10 ^ 0x6FFFFEF5) )
    {
      a1 = 8;
LABEL_31:
      v87 = *(_DWORD *)(a2 + 460);
      if ( v87 )
      {
        v79 = v73[2];
        v17 = v73[3];
        v18 = (_QWORD *)(*(_DWORD *)(a2 + 456) + 16);
        v19 = 0;
        while ( __PAIR64__(v17, v79) < *v18 || __PAIR64__(v17, v79) >= *(v18 - 1) + *v18 )
        {
          ++v19;
          v18 += 3;
          if ( v19 >= v87 )
          {
            v20 = -1;
            goto LABEL_39;
          }
        }
        v20 = v79 - *(_DWORD *)v18 + *(v18 - 2);
LABEL_39:
        v4 = (_DWORD *)a3;
      }
      else
      {
        v20 = -1;
      }
      *(_QWORD *)&v4[8 * a1] = v20;
      v81 = 32 * a1;
      v90[0] = v20;
      v21 = (_DWORD *)v91;
      v22 = v92;
      v23 = v92 + 1;
      if ( v91 > (unsigned int)v90 || v91 + 4 * v93 <= (unsigned int)v90 )
      {
        if ( v93 >= v23 )
          goto LABEL_46;
        v21 = qvector_reserve((int)&v91, (void *)v91, v92 + 1, 4u);
        v9 = a4;
        v4 = (_DWORD *)a3;
        v91 = (int)v21;
        v22 = v92;
        a1 = v90[0];
        v24 = v81;
      }
      else
      {
        if ( v93 < v23 )
        {
          v21 = qvector_reserve((int)&v91, (void *)v91, v92 + 1, 4u);
          v9 = a4;
          v4 = (_DWORD *)a3;
          v91 = (int)v21;
          v22 = v92;
          goto LABEL_47;
        }
LABEL_46:
        v9 = a4;
        v4 = (_DWORD *)a3;
LABEL_47:
        v24 = 32 * a1;
        a1 = v20;
      }
      v21[v22] = a1;
      ++v92;
      *(_QWORD *)((char *)v4 + v24 + 8) = *((_QWORD *)v73 + 1);
    }
LABEL_49:
    v73 += 4;
    if ( v73 == (unsigned int *)(*v9 + 16 * v9[1]) )
      goto LABEL_50;
  }
  if ( __PAIR64__(v11, v10) > 0x21 )
    goto LABEL_49;
  a1 = 0;
LABEL_50:
  v25 = v92;
  v4[12] = -1;
  v4[13] = 0;
  v80 = v25;
  if ( !v25 )
    goto LABEL_61;
  v26 = v4[8];
  v27 = v4[9];
  v28 = 0;
  v68 = -1;
  a1 = 0;
  v88 = v26;
  do
  {
    if ( v27 | v26 )
    {
      v29 = *(_DWORD *)(v91 + 4 * v28);
      if ( __SPAIR64__(v27, v26) < v29 )
      {
        v30 = v29 - __PAIR64__(v27, v26);
        v31 = a1;
        if ( __PAIR64__(a1, v68) >= v30 )
        {
          v31 = HIDWORD(v30);
          v68 = v30;
        }
        *(_DWORD *)(a3 + 52) = v31;
        *(_DWORD *)(a3 + 48) = v68;
        a1 = v31;
        v26 = v88;
      }
    }
    ++v28;
  }
  while ( v80 != v28 );
  v4 = (_DWORD *)a3;
  if ( !(a1 | ~v68) )
  {
    *(_DWORD *)(a3 + 52) = 0;
    *(_DWORD *)(a3 + 48) = 0;
  }
  *(_DWORD *)(a3 + 240) = -1;
  *(_DWORD *)(a3 + 244) = 0;
  if ( !v80 )
    goto LABEL_62;
  v89 = -1;
  v74 = (int *)(a3 + 240);
  HIDWORD(v34) = *(_DWORD *)(a3 + 224);
  LODWORD(v34) = *(_UNKNOWN **)((char *)&off_13ADBC + a3 - 1289432);
  v35 = 0;
  v69 = -1;
  v36 = 0;
  v82 = HIDWORD(v34);
  do
  {
    if ( v34 )
    {
      a1 = *(_DWORD *)(v91 + 4 * v35);
      if ( __SPAIR64__(v34, HIDWORD(v34)) < (unsigned int)a1 )
      {
        v37 = ((unsigned int)a1 - __PAIR64__(v34, HIDWORD(v34))) >> 32;
        a1 -= HIDWORD(v34);
        v38 = v36;
        if ( __PAIR64__(v36, v69) >= __PAIR64__(v37, a1) )
        {
          v69 = a1;
          v38 = v37;
        }
        *(_DWORD *)(a3 + 244) = v38;
        *v74 = v69;
        v36 = v38;
        HIDWORD(v34) = v82;
      }
    }
    ++v35;
  }
  while ( v80 != v35 );
  if ( !(v36 | ~v69) )
  {
    *(_DWORD *)(a3 + 244) = 0;
    *v74 = 0;
  }
  *(_DWORD *)(a3 + 272) = -1;
  *(_DWORD *)(a3 + 276) = 0;
  v39 = *(_DWORD *)(a3 + 256);
  v40 = *(_DWORD *)(a3 + 260);
  v41 = 0;
  v70 = -1;
  v42 = 0;
  v75 = v39;
  v83 = v40;
  do
  {
    if ( v40 | v39 )
    {
      a1 = *(_DWORD *)(v91 + 4 * v41);
      if ( __SPAIR64__(v40, v39) < (unsigned int)a1 )
      {
        v43 = ((unsigned int)a1 - __PAIR64__(v40, v39)) >> 32;
        a1 -= v39;
        v44 = v70;
        v45 = v42;
        if ( __PAIR64__(v42, v70) >= __PAIR64__(v43, a1) )
        {
          v44 = a1;
          v45 = v43;
        }
        v70 = v44;
        *(_DWORD *)(a3 + 276) = v45;
        *(_DWORD *)(a3 + 272) = v44;
        v39 = v75;
        v42 = v45;
        v40 = v83;
      }
    }
    ++v41;
  }
  while ( v80 != v41 );
  if ( !(v42 | ~v70) )
  {
    *(_DWORD *)(a3 + 276) = 0;
    *(_DWORD *)(a3 + 272) = 0;
  }
  *(_DWORD *)(a3 + 400) = -1;
  *(_DWORD *)(a3 + 404) = 0;
  v46 = *(_DWORD *)(a3 + 384);
  v47 = *(_DWORD *)(a3 + 388);
  v48 = 0;
  v71 = -1;
  v49 = 0;
  v76 = v46;
  v84 = v47;
  do
  {
    if ( v47 | v46 )
    {
      a1 = *(_DWORD *)(v91 + 4 * v48);
      if ( __SPAIR64__(v47, v46) < (unsigned int)a1 )
      {
        v50 = ((unsigned int)a1 - __PAIR64__(v47, v46)) >> 32;
        a1 -= v46;
        v51 = v71;
        v52 = v49;
        if ( __PAIR64__(v49, v71) >= __PAIR64__(v50, a1) )
        {
          v51 = a1;
          v52 = v50;
        }
        v71 = v51;
        *(_DWORD *)(a3 + 404) = v52;
        *(_DWORD *)(a3 + 400) = v51;
        v46 = v76;
        v49 = v52;
        v47 = v84;
      }
    }
    ++v48;
  }
  while ( v80 != v48 );
  if ( !(v49 | ~v71) )
  {
    *(_DWORD *)(a3 + 404) = 0;
    *(_DWORD *)(a3 + 400) = 0;
  }
  *(_DWORD *)(a3 + 432) = -1;
  *(_DWORD *)(a3 + 436) = 0;
  v53 = *(_DWORD *)(a3 + 416);
  v54 = *(_DWORD *)(a3 + 420);
  v55 = 0;
  v72 = -1;
  v56 = 0;
  v77 = v53;
  v85 = v54;
  do
  {
    if ( v54 | v53 )
    {
      a1 = *(_DWORD *)(v91 + 4 * v55);
      if ( __SPAIR64__(v54, v53) < (unsigned int)a1 )
      {
        v57 = ((unsigned int)a1 - __PAIR64__(v54, v53)) >> 32;
        a1 -= v53;
        v58 = v72;
        v59 = v56;
        if ( __PAIR64__(v56, v72) >= __PAIR64__(v57, a1) )
        {
          v58 = a1;
          v59 = v57;
        }
        v72 = v58;
        *(_DWORD *)(a3 + 436) = v59;
        *(_DWORD *)(a3 + 432) = v58;
        v53 = v77;
        v56 = v59;
        v54 = v85;
      }
    }
    ++v55;
  }
  while ( v80 != v55 );
  if ( !(v56 | ~v72) )
  {
    *(_DWORD *)(a3 + 436) = 0;
    *(_DWORD *)(a3 + 432) = 0;
  }
  *(_DWORD *)(a3 + 464) = -1;
  *(_DWORD *)(a3 + 468) = 0;
  v60 = *(_DWORD *)(a3 + 448);
  v61 = *(_DWORD *)(a3 + 452);
  v62 = 0;
  v63 = 0;
  v78 = v60;
  v86 = v61;
  do
  {
    if ( v61 | v60 )
    {
      v64 = *(_DWORD *)(v91 + 4 * v62);
      a1 = (__PAIR64__(v61, v60) - v64) >> 32;
      if ( __SPAIR64__(v61, v60) < v64 )
      {
        a1 = (v64 - __PAIR64__(v61, v60)) >> 32;
        v65 = v64 - v60;
        v66 = v63;
        v67 = v89;
        if ( __PAIR64__(v63, v89) >= __PAIR64__(a1, v65) )
        {
          v67 = v65;
          v66 = a1;
        }
        *(_DWORD *)(a3 + 468) = v66;
        v89 = v67;
        *(_DWORD *)(a3 + 464) = v67;
        v63 = v66;
        v60 = v78;
        v61 = v86;
      }
    }
    ++v62;
  }
  while ( v80 != v62 );
  LOBYTE(a1) = 1;
  v7 = (v63 | ~v89) == 0;
  v32 = (_DWORD *)(a3 + 464);
  if ( v7 )
    goto LABEL_63;
LABEL_64:
  if ( v91 )
  {
    v92 = 0;
    qfree((void *)v91);
    v91 = 0;
    v93 = 0;
  }
  return a1;
}
// 13ADBC: using guessed type _UNKNOWN *off_13ADBC;
// 13AE68: using guessed type _UNKNOWN *off_13AE68;
// 13E34C: using guessed type int under_debugger;
