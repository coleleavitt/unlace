double __fastcall ___ZNK5dyld313MachOAnalyzer17getLinkeditLayoutER11DiagnosticsyPKhRN6mach_o14LinkeditLayoutE_block_invoke(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // w8
  __int64 v5; // x8
  _QWORD *v6; // x9
  __int64 v7; // x10
  int v8; // w11
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  int v13; // w11
  __int64 v14; // x8
  dyld3::MachOFile *v15; // x0
  double result; // d0
  int v17; // w8
  __int64 v18; // x9
  __int64 *v19; // x10
  __int64 v20; // x11
  int v21; // w12
  __int64 v22; // x10
  _QWORD *v23; // x13
  __int64 v24; // x9
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 *v28; // x10
  __int64 v29; // x8
  int v30; // w11
  __int64 v31; // x10
  _QWORD *v32; // x12
  __int64 v33; // x8
  __int64 v34; // x11
  int v35; // w13
  __int64 v36; // x8
  __int64 v37; // x11
  int v38; // w13
  __int64 v39; // x8
  __int64 v40; // x11
  int v41; // w13
  __int64 v42; // x11
  __int64 v43; // x8
  __int64 v44; // x11
  int v45; // w13
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  int v49; // w11
  __int64 v50; // x8
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  int v54; // w11
  __int64 v55; // x8
  __int64 v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  int v59; // w11
  __int64 v60; // x8
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  int v64; // w11
  __int64 v65; // x8
  __int64 v66; // x9
  __int64 *v67; // x10
  __int64 v68; // x11
  __int64 v69; // x10
  _QWORD *v70; // x12
  __int64 v71; // x9
  __int64 v72; // x11
  __int64 v73; // x9
  __int64 v74; // x11
  __int64 v75; // x9
  __int64 v76; // x9
  __int64 v77; // x9
  __int64 v78; // x9

  v4 = *(_DWORD *)a2;
  if ( *(int *)a2 > 10 )
  {
    if ( (unsigned int)(v4 - 29) > 9 )
    {
      if ( v4 == 11 )
      {
        v66 = a1[5];
        v67 = (__int64 *)a1[6];
        *(_BYTE *)(v66 + 589) = 1;
        v68 = *(unsigned int *)(a2 + 72);
        *(_DWORD *)v66 = v68;
        v69 = *v67;
        v70 = (_QWORD *)a1[7];
        *(_QWORD *)(v66 + 8) = *v70 + v68 - v69;
        v71 = a1[5];
        *(_QWORD *)(v71 + 16) = 0;
        *(_DWORD *)(v71 + 24) = *(_DWORD *)(a2 + 76);
        *(_BYTE *)(v71 + 28) = 1;
        v72 = *(unsigned int *)(a2 + 64);
        *(_DWORD *)(v71 + 32) = v72;
        *(_QWORD *)(v71 + 40) = *v70 + v72 - v69;
        v73 = a1[5];
        *(_QWORD *)(v73 + 48) = 0;
        *(_DWORD *)(v73 + 56) = *(_DWORD *)(a2 + 68);
        *(_BYTE *)(v73 + 60) = 1;
        v74 = *(unsigned int *)(a2 + 56);
        *(_DWORD *)(v73 + 64) = v74;
        *(_QWORD *)(v73 + 72) = *v70 + v74 - v69;
        v75 = a1[5];
        *(_QWORD *)(v75 + 80) = 0;
        *(_DWORD *)(v75 + 88) = *(_DWORD *)(a2 + 60);
        *(_BYTE *)(v75 + 92) = 1;
        *(_DWORD *)(v75 + 96) = 0;
        *(_QWORD *)(v75 + 104) = 0;
        v76 = a1[5];
        *(_DWORD *)(v76 + 112) = 0;
        *(_QWORD *)(v76 + 116) = *(_QWORD *)(a2 + 8);
        *(_BYTE *)(v76 + 124) = 1;
        *(_DWORD *)(v76 + 128) = 0;
        *(_QWORD *)(v76 + 136) = 0;
        v77 = a1[5];
        *(_DWORD *)(v77 + 144) = 0;
        *(_QWORD *)(v77 + 148) = *(_QWORD *)(a2 + 16);
        *(_BYTE *)(v77 + 156) = 1;
        *(_DWORD *)(v77 + 160) = 0;
        *(_QWORD *)(v77 + 168) = 0;
        v78 = a1[5];
        *(_DWORD *)(v78 + 176) = 0;
        result = *(double *)(a2 + 24);
        *(double *)(v78 + 180) = result;
        *(_BYTE *)(v78 + 188) = 1;
      }
      else if ( v4 == 41 )
      {
        v46 = a1[5];
        v47 = (_QWORD *)a1[6];
        v48 = *(unsigned int *)(a2 + 8);
        v49 = *(_DWORD *)(a2 + 12);
        *(_DWORD *)(v46 + 520) = v48;
        *(_QWORD *)(v46 + 528) = *(_QWORD *)a1[7] + v48 - *v47;
        v50 = a1[5];
        *(_DWORD *)(v50 + 536) = v49;
        *(_DWORD *)(v50 + 544) = 0;
        *(_BYTE *)(v50 + 548) = 1;
      }
    }
    else
    {
      switch ( v4 )
      {
        case 29:
          v10 = a1[5];
          v11 = (_QWORD *)a1[6];
          v12 = *(unsigned int *)(a2 + 8);
          v13 = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(v10 + 552) = v12;
          *(_QWORD *)(v10 + 560) = *(_QWORD *)a1[7] + v12 - *v11;
          v14 = a1[5];
          *(_DWORD *)(v14 + 568) = v13;
          *(_DWORD *)(v14 + 576) = 0;
          *(_BYTE *)(v14 + 580) = 1;
          break;
        case 30:
          v56 = a1[5];
          v57 = (_QWORD *)a1[6];
          v58 = *(unsigned int *)(a2 + 8);
          v59 = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(v56 + 456) = v58;
          *(_QWORD *)(v56 + 464) = *(_QWORD *)a1[7] + v58 - *v57;
          v60 = a1[5];
          *(_DWORD *)(v60 + 472) = v59;
          *(_DWORD *)(v60 + 480) = 0;
          *(_BYTE *)(v60 + 484) = 1;
          break;
        case 31:
        case 32:
        case 33:
        case 35:
        case 36:
        case 37:
          return result;
        case 34:
          goto LABEL_15;
        case 38:
          v61 = a1[5];
          v62 = (_QWORD *)a1[6];
          v63 = *(unsigned int *)(a2 + 8);
          v64 = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(v61 + 488) = v63;
          *(_QWORD *)(v61 + 496) = *(_QWORD *)a1[7] + v63 - *v62;
          v65 = a1[5];
          *(_DWORD *)(v65 + 504) = v64;
          *(_DWORD *)(v65 + 512) = 0;
          *(_BYTE *)(v65 + 516) = 1;
          break;
      }
    }
  }
  else if ( v4 > -2147483597 )
  {
    if ( v4 == -2147483596 )
    {
      v51 = a1[5];
      v52 = (_QWORD *)a1[6];
      v53 = *(unsigned int *)(a2 + 8);
      v54 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(v51 + 384) = v53;
      *(_QWORD *)(v51 + 392) = *(_QWORD *)a1[7] + v53 - *v52;
      v55 = a1[5];
      *(_DWORD *)(v55 + 400) = v54;
      *(_DWORD *)(v55 + 408) = 0;
      *(_BYTE *)(v55 + 412) = 1;
      *(_QWORD *)(v55 + 416) = a2;
    }
    else if ( v4 == 2 )
    {
      v15 = (dyld3::MachOFile *)a1[4];
      *(_BYTE *)(a1[5] + 588LL) = 1;
      if ( dyld3::MachOFile::is64(v15) )
        v17 = 16;
      else
        v17 = 12;
      v18 = a1[5];
      v19 = (__int64 *)a1[6];
      v20 = *(unsigned int *)(a2 + 8);
      v21 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(v18 + 192) = v20;
      v22 = *v19;
      v23 = (_QWORD *)a1[7];
      *(_QWORD *)(v18 + 200) = *v23 + v20 - v22;
      v24 = a1[5];
      *(_DWORD *)(v24 + 208) = v21 * v17;
      *(_DWORD *)(v24 + 216) = v21;
      *(_BYTE *)(v24 + 220) = 1;
      v25 = *(unsigned int *)(a2 + 16);
      LODWORD(v20) = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(v24 + 224) = v25;
      *(_QWORD *)(v24 + 232) = *v23 + v25 - v22;
      v26 = a1[5];
      *(_DWORD *)(v26 + 240) = v20;
      *(_BYTE *)(v26 + 252) = 1;
    }
  }
  else
  {
    if ( v4 == -2147483614 )
    {
LABEL_15:
      v27 = a1[5];
      v28 = (__int64 *)a1[6];
      *(_DWORD *)(v27 + 584) = v4;
      v29 = *(unsigned int *)(a2 + 8);
      v30 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(v27 + 256) = v29;
      v31 = *v28;
      v32 = (_QWORD *)a1[7];
      *(_QWORD *)(v27 + 264) = *v32 + v29 - v31;
      v33 = a1[5];
      *(_DWORD *)(v33 + 272) = v30;
      *(_BYTE *)(v33 + 284) = 1;
      v34 = *(unsigned int *)(a2 + 16);
      v35 = *(_DWORD *)(a2 + 20);
      *(_DWORD *)(v33 + 288) = v34;
      *(_QWORD *)(v33 + 296) = *v32 + v34 - v31;
      v36 = a1[5];
      *(_DWORD *)(v36 + 304) = v35;
      *(_BYTE *)(v36 + 316) = 1;
      v37 = *(unsigned int *)(a2 + 32);
      v38 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(v36 + 352) = v37;
      *(_QWORD *)(v36 + 360) = *v32 + v37 - v31;
      v39 = a1[5];
      *(_DWORD *)(v39 + 368) = v38;
      v40 = *(unsigned int *)(a2 + 24);
      v41 = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(v39 + 320) = v40;
      v42 = *v32 + v40 - v31;
      *(_BYTE *)(v39 + 380) = 1;
      *(_QWORD *)(v39 + 328) = v42;
      v43 = a1[5];
      *(_DWORD *)(v43 + 336) = v41;
      *(_BYTE *)(v43 + 348) = 1;
      v44 = *(unsigned int *)(a2 + 40);
      v45 = *(_DWORD *)(a2 + 44);
      *(_DWORD *)(v43 + 424) = v44;
      *(_QWORD *)(v43 + 432) = *v32 + v44 - v31;
      v9 = a1[5];
      *(_DWORD *)(v9 + 440) = v45;
    }
    else
    {
      if ( v4 != -2147483597 )
        return result;
      v5 = a1[5];
      v6 = (_QWORD *)a1[6];
      v7 = *(unsigned int *)(a2 + 8);
      v8 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(v5 + 424) = v7;
      *(_QWORD *)(v5 + 432) = *(_QWORD *)a1[7] + v7 - *v6;
      v9 = a1[5];
      *(_DWORD *)(v9 + 440) = v8;
      *(_DWORD *)(v9 + 448) = 0;
    }
    *(_BYTE *)(v9 + 452) = 1;
  }
  return result;
}
