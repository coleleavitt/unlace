/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50350
// Address: 0x0000000000050350

//----- (0000000000050350) ----------------------------------------------------
__int64 __fastcall sub_50350(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x23
  unsigned __int64 v5; // x26
  __int64 v6; // x20
  unsigned __int64 v7; // x21
  __int64 v8; // x22
  int v9; // w1
  __int64 v10; // x0
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x2
  unsigned int v13; // w22
  unsigned __int64 v14; // x8
  unsigned __int64 *v15; // x20
  void **v16; // x21
  char *v17; // x0
  __int64 v18; // x20
  __int64 v19; // x29
  __int64 v20; // x9
  __int64 v21; // x8
  bool v22; // cf
  __int64 v23; // x8
  __int64 v24; // x28
  int v25; // w24
  int v26; // w24
  size_t v27; // x24
  int v28; // w25
  size_t v29; // x24
  __int64 v30; // x27
  int v31; // w25
  size_t v32; // x24
  int v33; // w25
  size_t v34; // x24
  int v35; // w25
  size_t v36; // x24
  int v37; // w25
  int v38; // w24
  size_t v39; // x24
  int v40; // w25
  int v41; // w8
  __int64 v42; // x8
  unsigned __int64 v43; // x2
  char *v44; // x0
  char *v45; // x8
  unsigned __int64 v46; // x8
  unsigned __int64 v47; // x8
  unsigned __int64 v48; // x12
  unsigned __int64 v49; // x9
  __int64 v50; // x10
  __int64 v51; // x11
  int v52; // w13
  unsigned __int64 v53; // x15
  __int64 v55; // x10
  void (__fastcall *v56)(__int64, __int64, __int64, _QWORD, __int64); // x20
  __int64 v57; // x0
  unsigned __int64 *v58; // x20
  int v59; // w9
  unsigned __int64 v60; // x8
  unsigned __int64 v61; // x21
  pthread_mutex_t *v62; // x0
  void (__fastcall *v63)(__int64, __int64, size_t, _QWORD, __int64); // x20
  __int64 v64; // x0
  void (__fastcall *v65)(__int64, __int64, size_t, _QWORD, __int64); // x20
  __int64 v66; // x0
  void (__fastcall *v67)(__int64, __int64, size_t, _QWORD, __int64); // x20
  __int64 v68; // x0
  void (__fastcall *v69)(__int64, __int64, size_t, _QWORD, __int64); // x20
  __int64 v70; // x0
  void (__fastcall *v71)(__int64, __int64, size_t, _QWORD, __int64); // x20
  __int64 v72; // x0
  void (__fastcall *v73)(__int64, __int64, size_t, _QWORD, __int64); // x20
  __int64 v74; // x0
  void (__fastcall *v75)(__int64, __int64, __int64, _QWORD, __int64); // x20
  __int64 v76; // x0
  pthread_mutex_t *v77; // x0
  void (__fastcall *v78)(__int64, __int64, __int64, _QWORD, __int64); // x20
  __int64 v79; // x0
  char *align; // x0
  pthread_mutex_t *v82; // [xsp+8h] [xbp-D8h]
  void **v83; // [xsp+10h] [xbp-D0h]
  unsigned __int64 *v84; // [xsp+18h] [xbp-C8h]
  _QWORD *v85; // [xsp+20h] [xbp-C0h]
  int v86; // [xsp+38h] [xbp-A8h]
  __int128 v87; // [xsp+40h] [xbp-A0h] BYREF
  __int128 v88; // [xsp+50h] [xbp-90h]
  __int128 v89; // [xsp+60h] [xbp-80h]
  __int64 v90; // [xsp+70h] [xbp-70h]
  __int64 v91; // [xsp+78h] [xbp-68h]
  int8x16x2_t v92; // 0:q0.32

  v91 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_QWORD *)(a1 + 536) )
    return 0;
  v2 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v3 = *(_QWORD *)(a1 + 480);
  v4 = v2 - v3;
  if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 536) + v3, 0) == -1 )
    goto LABEL_117;
  v5 = *(unsigned __int16 *)(a1 + 560);
  v6 = *(_QWORD *)(a1 + 472);
  v7 = *(unsigned __int16 *)(a1 + 558);
  v8 = qlseek(v6, 0, 1);
  v10 = qlsize(v6, v9, v92);
  v11 = v10 - v8;
  if ( ((v10 - v8) | v8) < 0 )
  {
LABEL_126:
    LODWORD(v12) = 0;
LABEL_127:
    sub_5BDE0((__int64)"%s is incorrect, maximum possible value is %u%s", "PHT entries", v12, "");
  }
  if ( (_DWORD)v5 && (_DWORD)v7 )
  {
    if ( v11 < v7 * v5 || 0xFFFFFFFFFFFFFFFFLL / v5 < v7 )
      goto LABEL_8;
  }
  else if ( v11 < v7 * v5 )
  {
LABEL_8:
    v12 = v11 / v7;
    goto LABEL_127;
  }
  v15 = (unsigned __int64 *)(a1 + 40);
  v14 = *(_QWORD *)(a1 + 40);
  v16 = (void **)(a1 + 32);
  if ( v14 >= v5 )
  {
    if ( v14 != v5 )
    {
      v90 = 0;
      v88 = 0u;
      v89 = 0u;
      v87 = 0u;
      sub_5A398((pthread_mutex_t *)(a1 + 32), v5, (unsigned __int64)&v87);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 48) >= v5 )
    {
      v17 = (char *)*v16;
    }
    else
    {
      v17 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 32), *v16, v5, 0x38u);
      *v16 = v17;
      v14 = *v15;
    }
    memset(&v17[56 * v14], 0, 56 * (v5 - v14));
    *v15 = v5;
  }
  v13 = 1;
  *(_BYTE *)(a1 + 72) = 1;
  if ( !(_DWORD)v5 )
    goto LABEL_118;
  v83 = (void **)(a1 + 32);
  v84 = (unsigned __int64 *)(a1 + 40);
  v18 = 0;
  v19 = 48;
  v85 = nullptr;
  v82 = (pthread_mutex_t *)(a1 + 576);
  do
  {
    v20 = *(_QWORD *)(a1 + 536);
    v21 = *(unsigned __int16 *)(a1 + 558) * v18;
    v22 = __CFADD__(v21, v20);
    v23 = v21 + v20;
    if ( v22 || qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v23, 0) == -1 )
      goto LABEL_117;
    v86 = v18;
    if ( !*(_BYTE *)(a1 + 72) )
    {
      if ( !under_debugger )
        interr(20100);
      __break(1u);
      goto LABEL_126;
    }
    v24 = *(_QWORD *)(a1 + 32);
    v25 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 48), 4u, *(_BYTE *)(a1 + 616));
    if ( v25 < 0 )
    {
      v56 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
      v57 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v56(a1, 19, 4, v25, v57);
      v58 = (unsigned __int64 *)(a1 + 40);
      v59 = v86 - 1;
      v60 = *v84;
      if ( (_DWORD)v19 == 48 )
        v59 = 0;
      v61 = v59;
      if ( v60 < v59 )
      {
        v62 = (pthread_mutex_t *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v59 )
          goto LABEL_111;
LABEL_110:
        align = (char *)qvector_reserve(v62, *v83, v61, 0x38u);
        *v83 = align;
        v58 = (unsigned __int64 *)(a1 + 40);
        v60 = *v84;
LABEL_112:
        memset(&align[56 * v60], 0, 56 * (v61 - v60));
        v13 = 0;
        *v58 = v61;
        goto LABEL_118;
      }
      v77 = (pthread_mutex_t *)(a1 + 32);
      if ( v60 == v59 )
        goto LABEL_117;
LABEL_116:
      v90 = 0;
      v88 = 0u;
      v89 = 0u;
      v87 = 0u;
      sub_5A398(v77, v59, (unsigned __int64)&v87);
      goto LABEL_117;
    }
    if ( *(_BYTE *)(a1 + 617) )
    {
      v26 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 44), 4u, *(_BYTE *)(a1 + 616));
      if ( v26 < 0 )
      {
        v75 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
        v76 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
        v75(a1, 19, 4, v26, v76);
        v58 = (unsigned __int64 *)(a1 + 40);
        v59 = v86 - 1;
        v60 = *v84;
        if ( (_DWORD)v19 == 48 )
          v59 = 0;
        v61 = v59;
        if ( v60 < v59 )
        {
          v62 = (pthread_mutex_t *)(a1 + 32);
          if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)v59 )
            goto LABEL_110;
          goto LABEL_111;
        }
        v77 = (pthread_mutex_t *)(a1 + 32);
        if ( v60 != v59 )
          goto LABEL_116;
        goto LABEL_117;
      }
    }
    v27 = *(int *)(a1 + 428);
    v28 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 40), v27, *(_BYTE *)(a1 + 616));
    if ( v28 < 0 )
    {
      v63 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
      v64 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v63(a1, 19, v27, v28, v64);
      v58 = (unsigned __int64 *)(a1 + 40);
      v59 = v86 - 1;
      v60 = *v84;
      if ( (_DWORD)v19 == 48 )
        v59 = 0;
      v61 = v59;
      if ( v60 < v59 )
      {
        v62 = (pthread_mutex_t *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v59 )
          goto LABEL_111;
        goto LABEL_110;
      }
      v77 = (pthread_mutex_t *)(a1 + 32);
      if ( v60 == v59 )
        goto LABEL_117;
      goto LABEL_116;
    }
    v29 = *(int *)(a1 + 424);
    v30 = v24 + v19;
    v31 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 32), v29, *(_BYTE *)(a1 + 616));
    if ( v31 < 0 )
    {
      v65 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
      v66 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v65(a1, 19, v29, v31, v66);
      v58 = (unsigned __int64 *)(a1 + 40);
      v59 = v86 - 1;
      v60 = *v84;
      if ( (_DWORD)v19 == 48 )
        v59 = 0;
      v61 = v59;
      if ( v60 < v59 )
      {
        v62 = (pthread_mutex_t *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v59 )
          goto LABEL_111;
        goto LABEL_110;
      }
      v77 = (pthread_mutex_t *)(a1 + 32);
      if ( v60 == v59 )
        goto LABEL_117;
      goto LABEL_116;
    }
    v32 = *(int *)(a1 + 424);
    v33 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 24), v32, *(_BYTE *)(a1 + 616));
    if ( v33 < 0 )
    {
      v67 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
      v68 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v67(a1, 19, v32, v33, v68);
      v58 = (unsigned __int64 *)(a1 + 40);
      v59 = v86 - 1;
      v60 = *v84;
      if ( (_DWORD)v19 == 48 )
        v59 = 0;
      v61 = v59;
      if ( v60 < v59 )
      {
        v62 = (pthread_mutex_t *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v59 )
          goto LABEL_111;
        goto LABEL_110;
      }
      v77 = (pthread_mutex_t *)(a1 + 32);
      if ( v60 == v59 )
        goto LABEL_117;
      goto LABEL_116;
    }
    v34 = *(int *)(a1 + 432);
    v35 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 16), v34, *(_BYTE *)(a1 + 616));
    if ( v35 < 0 )
    {
      v69 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
      v70 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v69(a1, 19, v34, v35, v70);
      v58 = (unsigned __int64 *)(a1 + 40);
      v59 = v86 - 1;
      v60 = *v84;
      if ( (_DWORD)v19 == 48 )
        v59 = 0;
      v61 = v59;
      if ( v60 < v59 )
      {
        v62 = (pthread_mutex_t *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v59 )
          goto LABEL_111;
        goto LABEL_110;
      }
      v77 = (pthread_mutex_t *)(a1 + 32);
      if ( v60 == v59 )
        goto LABEL_117;
      goto LABEL_116;
    }
    v36 = *(int *)(a1 + 432);
    v37 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 8), v36, *(_BYTE *)(a1 + 616));
    if ( v37 < 0 )
    {
      v71 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
      v72 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v71(a1, 19, v36, v37, v72);
      v58 = (unsigned __int64 *)(a1 + 40);
      v59 = v86 - 1;
      v60 = *v84;
      if ( (_DWORD)v19 == 48 )
        v59 = 0;
      v61 = v59;
      if ( v60 < v59 )
      {
        v62 = (pthread_mutex_t *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v59 )
          goto LABEL_111;
        goto LABEL_110;
      }
      v77 = (pthread_mutex_t *)(a1 + 32);
      if ( v60 == v59 )
        goto LABEL_117;
      goto LABEL_116;
    }
    if ( !*(_BYTE *)(a1 + 617) )
    {
      v38 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19 - 44), 4u, *(_BYTE *)(a1 + 616));
      if ( v38 < 0 )
      {
        v78 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
        v79 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
        v78(a1, 19, 4, v38, v79);
        v58 = (unsigned __int64 *)(a1 + 40);
        v59 = v86 - 1;
        v60 = *v84;
        if ( (_DWORD)v19 == 48 )
          v59 = 0;
        v61 = v59;
        if ( v60 < v59 )
        {
          v62 = (pthread_mutex_t *)(a1 + 32);
          if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)v59 )
            goto LABEL_111;
          goto LABEL_110;
        }
        v77 = (pthread_mutex_t *)(a1 + 32);
        if ( v60 == v59 )
          goto LABEL_117;
        goto LABEL_116;
      }
    }
    v39 = *(int *)(a1 + 432);
    v40 = lreadbytes(*(_QWORD *)(a1 + 472), (void *)(v24 + v19), v39, *(_BYTE *)(a1 + 616));
    if ( v40 < 0 )
    {
      v73 = *(void (__fastcall **)(__int64, __int64, size_t, _QWORD, __int64))(a1 + 496);
      v74 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
      v73(a1, 19, v39, v40, v74);
      v58 = (unsigned __int64 *)(a1 + 40);
      v59 = v86 - 1;
      v60 = *v84;
      if ( (_DWORD)v19 == 48 )
        v59 = 0;
      v61 = v59;
      if ( v60 < v59 )
      {
        v62 = (pthread_mutex_t *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)v59 )
          goto LABEL_110;
LABEL_111:
        align = (char *)v62->__align;
        goto LABEL_112;
      }
      v77 = (pthread_mutex_t *)(a1 + 32);
      if ( v60 != v59 )
        goto LABEL_116;
LABEL_117:
      v13 = 0;
      goto LABEL_118;
    }
    v41 = *(_DWORD *)(v24 + v19 - 48);
    if ( v41 == 2 )
    {
      v85 = (_QWORD *)(v24 + v19 - 48);
    }
    else if ( v41 == 1 )
    {
      v42 = *(_QWORD *)(a1 + 584);
      v43 = v42 + 1;
      if ( *(_QWORD *)(a1 + 592) >= (unsigned __int64)(v42 + 1) )
      {
        v44 = (char *)v82->__align;
      }
      else
      {
        v44 = (char *)qvector_reserve(v82, (void *)v82->__align, v43, 0x18u);
        v42 = *(_QWORD *)(a1 + 584);
        *(_QWORD *)(a1 + 576) = v44;
        v43 = v42 + 1;
      }
      *(_QWORD *)(a1 + 584) = v43;
      v45 = &v44[24 * v42];
      *(_QWORD *)v45 = *(_QWORD *)(v24 + v19 - 40);
      *((_QWORD *)v45 + 1) = *(_QWORD *)(v24 + v19 - 16);
      *((_QWORD *)v45 + 2) = *(_QWORD *)(v30 - 32);
      v46 = *(_QWORD *)(v30 - 32);
      if ( v46 < *(_QWORD *)(a1 + 56) )
        *(_QWORD *)(a1 + 56) = v46 & 0xFFFFFFFFFFFFF000LL;
    }
    v19 += 56;
    ++v18;
  }
  while ( v86 + 1 < (unsigned int)v5 );
  if ( v85 )
  {
    v47 = v85[4];
    v48 = *(_QWORD *)(a1 + 584);
    v49 = v85[2];
    if ( v47 <= v85[5] )
      v47 = v85[5];
    if ( v48 )
    {
      v50 = *(_QWORD *)(a1 + 576);
      v51 = 0;
      v52 = 1;
      while ( 1 )
      {
        v53 = *(_QWORD *)(v50 + 24 * v51 + 16);
        if ( v49 >= v53 && *(_QWORD *)(v50 + 24 * v51 + 8) + v53 > v49 )
          break;
        v51 = v52;
        if ( v48 <= v52++ )
          goto LABEL_51;
      }
      v55 = *(_QWORD *)(v50 + 24 * v51) + (unsigned int)(v49 - v53);
    }
    else
    {
LABEL_51:
      v55 = -1;
    }
    *(_QWORD *)(a1 + 16) = v47;
    *(_QWORD *)a1 = v55;
    *(_QWORD *)(a1 + 8) = v49;
    *(_DWORD *)(a1 + 24) = -1;
  }
  v13 = 1;
LABEL_118:
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v4, 0);
  return v13;
}
// 503DC: variable 'v9' is possibly undefined
// 503DC: variable 'v92' is possibly undefined
// 168DF0: using guessed type char under_debugger;
