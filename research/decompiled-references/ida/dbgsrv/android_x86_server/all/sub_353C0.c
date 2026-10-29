/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_353C0
// Address: 0x000353C0

//----- (000353C0) --------------------------------------------------------
unsigned int __cdecl sub_353C0(int a1)
{
  int v1; // esi
  __int64 v2; // rax
  unsigned int v3; // edi
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  unsigned int v8; // edx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // kr08_8
  unsigned int v12; // edx
  void **v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // ecx
  char *v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // rax
  bool v20; // cf
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // edx
  int v26; // esi
  size_t v27; // edi
  int v28; // esi
  size_t v29; // edi
  int v30; // esi
  size_t v31; // edi
  int v32; // esi
  size_t v33; // edi
  int v34; // esi
  size_t v35; // edi
  int v36; // esi
  int v37; // edx
  int v38; // esi
  size_t v39; // edi
  int v40; // esi
  _QWORD *v41; // edi
  int v42; // edx
  int v43; // ecx
  _QWORD *v44; // eax
  int v45; // ecx
  int v46; // edi
  int v47; // ecx
  unsigned int v48; // ebx
  _QWORD *v49; // edi
  unsigned int v50; // eax
  void (__cdecl *v51)(int, int, int, int, int, int); // edi
  int v52; // eax
  int v53; // edx
  unsigned int v54; // edx
  unsigned int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // edx
  int v62; // eax
  int v63; // edx
  int v64; // eax
  int v65; // edx
  int v66; // eax
  int v67; // edx
  void (__cdecl *v68)(int, int, int, int, int, int); // edi
  int v69; // eax
  int v70; // edx
  void (__cdecl *v71)(int, int, int, int, int, int); // edi
  int v72; // eax
  int v73; // edx
  unsigned int v74; // edi
  char *v75; // eax
  __int64 v77; // rax
  __int64 v78; // [esp-10h] [ebp-9Ch]
  __int64 v79; // [esp-10h] [ebp-9Ch]
  __int64 v80; // [esp-10h] [ebp-9Ch]
  __int64 v81; // [esp-10h] [ebp-9Ch]
  __int64 v82; // [esp-10h] [ebp-9Ch]
  __int64 v83; // [esp-10h] [ebp-9Ch]
  __int64 v84; // [esp-10h] [ebp-9Ch]
  __int64 v85; // [esp-10h] [ebp-9Ch]
  __int64 v86; // [esp-10h] [ebp-9Ch]
  void **v87; // [esp+Ch] [ebp-80h]
  unsigned int v88; // [esp+10h] [ebp-7Ch]
  unsigned int v89; // [esp+14h] [ebp-78h]
  unsigned int v90; // [esp+18h] [ebp-74h]
  unsigned int *v91; // [esp+1Ch] [ebp-70h]
  unsigned int v92; // [esp+20h] [ebp-6Ch]
  unsigned int v93; // [esp+20h] [ebp-6Ch]
  unsigned int v94; // [esp+20h] [ebp-6Ch]
  int v95; // [esp+24h] [ebp-68h]
  int v96; // [esp+24h] [ebp-68h]
  unsigned int v97; // [esp+24h] [ebp-68h]
  void (__cdecl *v98)(int, int, size_t, int, int, int); // [esp+24h] [ebp-68h]
  void (__cdecl *v99)(int, int, size_t, int, int, int); // [esp+24h] [ebp-68h]
  void (__cdecl *v100)(int, int, size_t, int, int, int); // [esp+24h] [ebp-68h]
  void (__cdecl *v101)(int, int, size_t, int, int, int); // [esp+24h] [ebp-68h]
  void (__cdecl *v102)(int, int, size_t, int, int, int); // [esp+24h] [ebp-68h]
  void (__cdecl *v103)(int, int, size_t, int, int, int); // [esp+24h] [ebp-68h]
  unsigned int v104; // [esp+28h] [ebp-64h]
  int v105; // [esp+28h] [ebp-64h]
  unsigned int v106; // [esp+2Ch] [ebp-60h]
  _DWORD *v107; // [esp+30h] [ebp-5Ch]
  void **v108; // [esp+34h] [ebp-58h]
  _DWORD *v109; // [esp+38h] [ebp-54h]
  int v110; // [esp+3Ch] [ebp-50h]
  __int128 v111; // [esp+40h] [ebp-4Ch] BYREF
  __int128 v112; // [esp+50h] [ebp-3Ch]
  __int128 v113; // [esp+60h] [ebp-2Ch]
  int v114; // [esp+70h] [ebp-1Ch]
  int v115; // [esp+74h] [ebp-18h]
  unsigned int v116; // [esp+78h] [ebp-14h]

  v1 = a1;
  v116 = __readgsdword(0x14u);
  if ( !*(_QWORD *)(a1 + 416) )
    return 0;
  LODWORD(v2) = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v3 = *(_DWORD *)(a1 + 368);
  v4 = *(_DWORD *)(a1 + 364);
  v89 = v2 - v4;
  v88 = (v2 - __PAIR64__(v3, v4)) >> 32;
  v5 = qlseek(*(_DWORD *)(a1 + 360), *(_QWORD *)(a1 + 416) + __PAIR64__(v3, v4), 0);
  if ( (v6 & v5) == 0xFFFFFFFF )
  {
LABEL_50:
    v90 = 0;
    goto LABEL_120;
  }
  v106 = *(unsigned __int16 *)(a1 + 440);
  v7 = *(_DWORD *)(a1 + 360);
  v92 = *(unsigned __int16 *)(a1 + 438);
  v95 = qlseek(v7, 0, 1);
  v9 = v8;
  LODWORD(v10) = qlsize(v7);
  v11 = v10 - __PAIR64__(v9, v95);
  if ( ((((v10 - __PAIR64__(v9, v95)) >> 32) | v9) & 0x80000000) != 0LL )
  {
    LODWORD(v77) = 0;
LABEL_127:
    sub_43A00((int)"%s is incorrect, maximum possible value is %u%s", "PHT entries", (_DWORD)v77, &byte_DCEE2);
  }
  v12 = v106;
  if ( (_WORD)v106 && (_WORD)v92 && (v12 = v106, 0xFFFFFFFF / v106 < v92) || v11 < v12 * v92 )
  {
    v77 = v11 / v92;
    goto LABEL_127;
  }
  v1 = a1;
  v13 = (void **)(a1 + 16);
  v14 = a1 + 20;
  v91 = (unsigned int *)(a1 + 20);
  v15 = *(_DWORD *)(a1 + 20);
  v87 = (void **)(a1 + 16);
  if ( v15 >= v12 )
  {
    if ( v15 != v12 )
    {
      v113 = 0;
      v112 = 0;
      v111 = 0;
      v115 = 0;
      v114 = 0;
      v14 = sub_41A40((int *)(a1 + 16), v12, (char *)&v111);
      v1 = a1;
      LOWORD(v12) = v106;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) >= v12 )
    {
      v16 = (char *)*v13;
    }
    else
    {
      v16 = (char *)qvector_reserve(a1 + 16, *v13, v12, 0x38u);
      *v13 = v16;
      v15 = *v91;
      v1 = a1;
    }
    memset(&v16[56 * v15], 0, 56 * (v106 - v15));
    LOWORD(v12) = v106;
    v14 = a1 + 20;
    *v91 = v106;
  }
  *(_BYTE *)(v1 + 36) = 1;
  LOBYTE(v14) = 1;
  v90 = v14;
  if ( !(_WORD)v12 )
    goto LABEL_120;
  v108 = (void **)(v1 + 456);
  v93 = 0;
  v17 = -1;
  v107 = nullptr;
  do
  {
    v104 = v17;
    v18 = v17 + 1;
    v19 = (unsigned int)(v17 + 1) * (unsigned __int64)*(unsigned __int16 *)(v1 + 438);
    v20 = __CFADD__(*(_QWORD *)(v1 + 416), v19);
    v21 = *(_QWORD *)(v1 + 416) + v19;
    if ( v20 )
      goto LABEL_50;
    v110 = v18;
    v22 = qlseek(*(_DWORD *)(v1 + 360), *(_QWORD *)(v1 + 364) + v21, 0);
    if ( (v23 & v22) == 0xFFFFFFFF )
      goto LABEL_50;
    if ( !*(_BYTE *)(v1 + 36) )
    {
      if ( !(_BYTE)under_debugger )
        interr(20100);
      BUG();
    }
    v96 = *(_DWORD *)(v1 + 16);
    v109 = (_DWORD *)(v96 + v93);
    HIDWORD(v78) = v96 + v93;
    LODWORD(v78) = *(_DWORD *)(v1 + 360);
    v24 = lreadbytes(v78, 4u, *(_BYTE *)(v1 + 476));
    if ( v24 < 0 )
    {
      v51 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
      v52 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v51(a1, 19, 4, v24, v52, v53);
      v54 = v104;
      if ( !v93 )
        v54 = 0;
      v55 = *v91;
      if ( *v91 < v54 )
      {
        v1 = a1;
        if ( *(_DWORD *)(a1 + 24) >= v54 )
          goto LABEL_110;
LABEL_109:
        v74 = v54;
        v75 = (char *)qvector_reserve((int)v87, *v87, v54, 0x38u);
        *v87 = v75;
        v55 = *v91;
        v1 = a1;
LABEL_111:
        memset(&v75[56 * v55], 0, 56 * (v74 - v55));
        *v91 = v74;
        v90 = 0;
        goto LABEL_120;
      }
      if ( v55 == v54 )
        goto LABEL_115;
LABEL_118:
      v113 = 0;
      v112 = 0;
      v111 = 0;
      v115 = 0;
      v114 = 0;
      sub_41A40((int *)v87, v54, (char *)&v111);
      v90 = 0;
      goto LABEL_119;
    }
    v25 = a1;
    if ( *(_BYTE *)(a1 + 477) )
    {
      HIDWORD(v79) = v96 + v93 + 4;
      LODWORD(v79) = *(_DWORD *)(a1 + 360);
      v26 = lreadbytes(v79, 4u, *(_BYTE *)(a1 + 476));
      v25 = a1;
      if ( v26 < 0 )
      {
        v68 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
        v69 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
        v68(a1, 19, 4, v26, v69, v70);
        v54 = v104;
        if ( !v93 )
          v54 = 0;
        v55 = *v91;
        if ( *v91 < v54 )
        {
          v1 = a1;
          if ( *(_DWORD *)(a1 + 24) < v54 )
            goto LABEL_109;
          goto LABEL_110;
        }
        if ( v55 != v54 )
          goto LABEL_118;
        goto LABEL_115;
      }
    }
    v27 = *(_DWORD *)(v25 + 336);
    HIDWORD(v80) = v96 + v93 + 8;
    LODWORD(v80) = *(_DWORD *)(v25 + 360);
    v28 = lreadbytes(v80, v27, *(_BYTE *)(v25 + 476));
    if ( v28 < 0 )
    {
      v98 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
      v56 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v98(a1, 19, v27, v28, v56, v57);
      v54 = v104;
      if ( !v93 )
        v54 = 0;
      v55 = *v91;
      if ( *v91 < v54 )
      {
        v1 = a1;
        if ( *(_DWORD *)(a1 + 24) >= v54 )
          goto LABEL_110;
        goto LABEL_109;
      }
      if ( v55 == v54 )
        goto LABEL_115;
      goto LABEL_118;
    }
    v29 = *(_DWORD *)(a1 + 332);
    HIDWORD(v81) = v96 + v93 + 16;
    LODWORD(v81) = *(_DWORD *)(a1 + 360);
    v30 = lreadbytes(v81, v29, *(_BYTE *)(a1 + 476));
    if ( v30 < 0 )
    {
      v99 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
      v58 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v99(a1, 19, v29, v30, v58, v59);
      v54 = v104;
      if ( !v93 )
        v54 = 0;
      v55 = *v91;
      if ( *v91 < v54 )
      {
        v1 = a1;
        if ( *(_DWORD *)(a1 + 24) >= v54 )
          goto LABEL_110;
        goto LABEL_109;
      }
      if ( v55 == v54 )
        goto LABEL_115;
      goto LABEL_118;
    }
    v31 = *(_DWORD *)(a1 + 332);
    HIDWORD(v82) = v96 + v93 + 24;
    LODWORD(v82) = *(_DWORD *)(a1 + 360);
    v32 = lreadbytes(v82, v31, *(_BYTE *)(a1 + 476));
    if ( v32 < 0 )
    {
      v100 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
      v60 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v100(a1, 19, v31, v32, v60, v61);
      v54 = v104;
      if ( !v93 )
        v54 = 0;
      v55 = *v91;
      if ( *v91 < v54 )
      {
        v1 = a1;
        if ( *(_DWORD *)(a1 + 24) >= v54 )
          goto LABEL_110;
        goto LABEL_109;
      }
      if ( v55 == v54 )
        goto LABEL_115;
      goto LABEL_118;
    }
    v33 = *(_DWORD *)(a1 + 340);
    HIDWORD(v83) = v96 + v93 + 32;
    LODWORD(v83) = *(_DWORD *)(a1 + 360);
    v34 = lreadbytes(v83, v33, *(_BYTE *)(a1 + 476));
    if ( v34 < 0 )
    {
      v101 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
      v62 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v101(a1, 19, v33, v34, v62, v63);
      v54 = v104;
      if ( !v93 )
        v54 = 0;
      v55 = *v91;
      if ( *v91 < v54 )
      {
        v1 = a1;
        if ( *(_DWORD *)(a1 + 24) >= v54 )
          goto LABEL_110;
        goto LABEL_109;
      }
      if ( v55 == v54 )
        goto LABEL_115;
      goto LABEL_118;
    }
    v35 = *(_DWORD *)(a1 + 340);
    HIDWORD(v84) = v96 + v93 + 40;
    LODWORD(v84) = *(_DWORD *)(a1 + 360);
    v36 = lreadbytes(v84, v35, *(_BYTE *)(a1 + 476));
    if ( v36 < 0 )
    {
      v102 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
      v64 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v102(a1, 19, v35, v36, v64, v65);
      v54 = v104;
      if ( !v93 )
        v54 = 0;
      v55 = *v91;
      if ( *v91 < v54 )
      {
        v1 = a1;
        if ( *(_DWORD *)(a1 + 24) >= v54 )
          goto LABEL_110;
        goto LABEL_109;
      }
      if ( v55 == v54 )
        goto LABEL_115;
      goto LABEL_118;
    }
    v37 = a1;
    if ( !*(_BYTE *)(a1 + 477) )
    {
      HIDWORD(v85) = v96 + v93 + 4;
      LODWORD(v85) = *(_DWORD *)(a1 + 360);
      v38 = lreadbytes(v85, 4u, *(_BYTE *)(a1 + 476));
      v37 = a1;
      if ( v38 < 0 )
      {
        v71 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
        v72 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
        v71(a1, 19, 4, v38, v72, v73);
        v54 = v104;
        if ( !v93 )
          v54 = 0;
        v55 = *v91;
        if ( *v91 < v54 )
        {
          v1 = a1;
          if ( *(_DWORD *)(a1 + 24) >= v54 )
            goto LABEL_110;
          goto LABEL_109;
        }
        if ( v55 == v54 )
          goto LABEL_115;
        goto LABEL_118;
      }
    }
    v39 = *(_DWORD *)(v37 + 340);
    HIDWORD(v86) = v96 + v93 + 48;
    LODWORD(v86) = *(_DWORD *)(v37 + 360);
    v40 = lreadbytes(v86, v39, *(_BYTE *)(v37 + 476));
    if ( v40 < 0 )
    {
      v103 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
      v66 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v103(a1, 19, v39, v40, v66, v67);
      v54 = v104;
      if ( !v93 )
        v54 = 0;
      v55 = *v91;
      if ( *v91 < v54 )
      {
        v1 = a1;
        if ( *(_DWORD *)(a1 + 24) < v54 )
          goto LABEL_109;
LABEL_110:
        v74 = v54;
        v75 = (char *)*v87;
        goto LABEL_111;
      }
      if ( v55 != v54 )
        goto LABEL_118;
LABEL_115:
      v90 = 0;
LABEL_119:
      v1 = a1;
      goto LABEL_120;
    }
    v41 = (_QWORD *)(v96 + v93);
    if ( *v109 == 2 )
    {
      v107 = (_DWORD *)(v96 + v93);
      v1 = a1;
    }
    else
    {
      v1 = a1;
      if ( *v109 == 1 )
      {
        v42 = *(_DWORD *)(a1 + 460);
        v43 = v42 + 1;
        if ( *(_DWORD *)(a1 + 464) >= (unsigned int)(v42 + 1) )
        {
          v44 = *v108;
        }
        else
        {
          v44 = qvector_reserve((int)v108, *v108, v42 + 1, 0x18u);
          v1 = a1;
          *(_DWORD *)(a1 + 456) = v44;
          v42 = *(_DWORD *)(a1 + 460);
          v43 = v42 + 1;
          v41 = (_QWORD *)(v96 + v93);
        }
        *(_DWORD *)(v1 + 460) = v43;
        v45 = 3 * v42;
        v44[v45] = v41[1];
        v44[v45 + 1] = v41[4];
        v44[v45 + 2] = v41[2];
        if ( v41[2] < (unsigned __int64)*(unsigned int *)(v1 + 28) )
          *(_DWORD *)(v1 + 28) = v41[2] & 0xFFFFF000;
      }
    }
    v93 += 56;
    v17 = v110;
  }
  while ( v104 + 2 < v106 );
  if ( v107 )
  {
    v46 = v107[10];
    if ( *((_QWORD *)v107 + 5) < *((_QWORD *)v107 + 4) )
      v46 = v107[8];
    v94 = v107[4];
    v47 = -1;
    v97 = *(_DWORD *)(v1 + 460);
    if ( v97 )
    {
      v105 = v46;
      v48 = v107[5];
      v49 = (_QWORD *)(*(_DWORD *)(v1 + 456) + 16);
      v50 = 0;
      while ( __PAIR64__(v48, v94) < *v49 || __PAIR64__(v48, v94) >= *(v49 - 1) + *v49 )
      {
        ++v50;
        v49 += 3;
        if ( v50 >= v97 )
        {
          v1 = a1;
          v46 = v105;
          v47 = -1;
          goto LABEL_117;
        }
      }
      v47 = *((_DWORD *)v49 - 4) + v94 - *(_DWORD *)v49;
      v1 = a1;
      v46 = v105;
    }
LABEL_117:
    *(_DWORD *)v1 = v47;
    *(_DWORD *)(v1 + 4) = v94;
    *(_DWORD *)(v1 + 8) = v46;
    *(_DWORD *)(v1 + 12) = -1;
  }
LABEL_120:
  qlseek(*(_DWORD *)(v1 + 360), *(_QWORD *)(v1 + 364) + __PAIR64__(v88, v89), 0);
  return v90;
}
// 3541C: variable 'v2' is possibly undefined
// 35448: variable 'v6' is possibly undefined
// 35484: variable 'v8' is possibly undefined
// 3549E: variable 'v10' is possibly undefined
// 35612: variable 'v23' is possibly undefined
// 359FF: variable 'v53' is possibly undefined
// 35A7B: variable 'v57' is possibly undefined
// 35AF9: variable 'v59' is possibly undefined
// 35B77: variable 'v61' is possibly undefined
// 35BF5: variable 'v63' is possibly undefined
// 35C73: variable 'v65' is possibly undefined
// 35CF1: variable 'v67' is possibly undefined
// 35D69: variable 'v70' is possibly undefined
// 35FE5: variable 'v73' is possibly undefined
// DCEE2: using guessed type char byte_DCEE2;
// 13E34C: using guessed type int under_debugger;
