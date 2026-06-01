/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414B68
// Address: 0x0000000000414B68

//----- (0000000000414B68) ----------------------------------------------------
__int64 __fastcall sub_414B68(__int64 a1, const char *a2, __int64 a3, const char *a4, const char *a5, double a6)
{
  int v11; // w19
  size_t v14; // x0
  size_t v15; // x27
  int v16; // w0
  const char *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  int v20; // w0
  int v21; // w0
  bool v22; // zf
  __int64 v24; // x25
  size_t v25; // x0
  signed __int64 v26; // x24
  size_t v27; // x19
  signed __int64 v28; // x19
  size_t v29; // x19
  size_t v30; // x19
  size_t v31; // x19
  int *v32; // x0
  int *i; // x2
  int *j; // x2
  size_t v35; // x24
  size_t v36; // x24
  unsigned __int64 v38; // x19
  void *v39; // x0
  size_t v40; // x19
  void *v41; // [xsp+50h] [xbp-1C0h] BYREF
  signed __int64 v42; // [xsp+58h] [xbp-1B8h]
  __int64 v43; // [xsp+60h] [xbp-1B0h]
  char *v44; // [xsp+68h] [xbp-1A8h] BYREF
  __int64 v45; // [xsp+70h] [xbp-1A0h]
  void *v46; // [xsp+78h] [xbp-198h]
  signed __int64 v47; // [xsp+80h] [xbp-190h]
  signed __int64 v48; // [xsp+88h] [xbp-188h]
  void *v49; // [xsp+90h] [xbp-180h]
  size_t v50; // [xsp+98h] [xbp-178h]
  size_t v51; // [xsp+A0h] [xbp-170h]
  __int64 v52; // [xsp+A8h] [xbp-168h] BYREF
  int v53; // [xsp+B0h] [xbp-160h] BYREF
  _QWORD *v54; // [xsp+B8h] [xbp-158h]
  int *v55; // [xsp+C0h] [xbp-150h]
  int *v56; // [xsp+C8h] [xbp-148h]
  __int64 v57; // [xsp+D0h] [xbp-140h]
  void *v58; // [xsp+D8h] [xbp-138h]
  size_t v59; // [xsp+E0h] [xbp-130h]
  __int64 v60; // [xsp+E8h] [xbp-128h]
  void *src; // [xsp+F0h] [xbp-120h]
  size_t v62; // [xsp+F8h] [xbp-118h]
  __int64 v63; // [xsp+100h] [xbp-110h]
  int v64; // [xsp+108h] [xbp-108h]
  void *ptr; // [xsp+110h] [xbp-100h] BYREF
  signed __int64 v66; // [xsp+118h] [xbp-F8h]
  __int64 v67; // [xsp+120h] [xbp-F0h]
  void *v68; // [xsp+128h] [xbp-E8h]
  size_t v69; // [xsp+130h] [xbp-E0h]
  size_t v70; // [xsp+138h] [xbp-D8h]
  void *v71; // [xsp+140h] [xbp-D0h]
  size_t v72; // [xsp+148h] [xbp-C8h]
  size_t v73; // [xsp+150h] [xbp-C0h]
  __int64 v74; // [xsp+158h] [xbp-B8h] BYREF
  int v75; // [xsp+160h] [xbp-B0h] BYREF
  int *v76; // [xsp+168h] [xbp-A8h]
  int *v77; // [xsp+170h] [xbp-A0h]
  int *v78; // [xsp+178h] [xbp-98h]
  __int64 v79; // [xsp+180h] [xbp-90h]
  void *v80; // [xsp+188h] [xbp-88h]
  size_t v81; // [xsp+190h] [xbp-80h]
  size_t v82; // [xsp+198h] [xbp-78h]
  void *v83; // [xsp+1A0h] [xbp-70h]
  size_t v84; // [xsp+1A8h] [xbp-68h]
  size_t v85; // [xsp+1B0h] [xbp-60h]
  int v86; // [xsp+1B8h] [xbp-58h]
  __int64 v87; // [xsp+1C0h] [xbp-50h] BYREF
  __int64 v88; // [xsp+1C8h] [xbp-48h]
  char v89; // [xsp+1D0h] [xbp-40h]
  int v90; // [xsp+1D4h] [xbp-3Ch]
  void *dest; // [xsp+1D8h] [xbp-38h] BYREF
  unsigned __int64 v92; // [xsp+1E0h] [xbp-30h]
  unsigned __int64 v93; // [xsp+1E8h] [xbp-28h]
  const char *v94; // [xsp+1F0h] [xbp-20h]
  __int64 v95; // [xsp+1F8h] [xbp-18h]
  __int64 v96; // [xsp+200h] [xbp-10h]
  __int64 v97; // [xsp+208h] [xbp-8h]

  sub_45CDF8(a1, (__int64)"%a: new dll %s (soname=%s)\n", a6, a2, a4);
  v89 = 0;
  v87 = 0xFFFFFFFFLL;
  v88 = -1;
  v90 = 0;
  dest = nullptr;
  v92 = 0;
  v93 = 0;
  v94 = nullptr;
  v95 = 0;
  v96 = 0;
  sub_482FB0((__int64)&v87, 8u);
  v11 = v90 & 0xFFFFFFF;
  if ( (v90 & 0xFFFFFFF) != 0xB && v11 != 1 && v11 != 8 )
  {
    while ( 1 )
    {
      if ( !under_debugger )
        sub_492270(3295);
LABEL_73:
      __break(0x3E8u);
    }
  }
  LODWORD(v87) = *(_DWORD *)(a1 + 2044);
  HIDWORD(v87) = v87;
  v88 = (__int64)a2;
  v89 = 1;
  if ( a4 && (v14 = strlen(a4), (v15 = v14) != 0) )
  {
    v38 = v14 + 1;
    v39 = dest;
    if ( v38 > v93 )
    {
      v39 = sub_491288((__int64)&dest, dest, v38, 1u);
      dest = v39;
    }
    v92 = v38;
    memmove(v39, a4, v15);
    *((_BYTE *)dest + v15) = 0;
    v11 = v90 & 0xFFFFFFF;
  }
  else
  {
    v92 = 0;
  }
  v16 = *(unsigned __int8 *)(a1 + 861);
  v94 = a2;
  v95 = a3;
  v96 = -1;
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 592) ? *(const char **)(a1 + 584) : (const char *)&qword_4B2D48;
    if ( !strcmp(v17, a4) )
      v96 = (__int64)a2;
  }
  if ( !v11 )
    goto LABEL_72;
  v18 = *(_QWORD *)(a1 + 136);
  if ( v18 == *(_QWORD *)(a1 + 144) )
  {
    sub_410CC8((_QWORD *)(a1 + 120), (__int64)&v87);
  }
  else
  {
    *(_QWORD *)(v18 - 72) = 0xFFFFFFFFLL;
    v19 = v18 - 72;
    *(_QWORD *)(v19 + 8) = -1;
    *(_BYTE *)(v19 + 16) = 0;
    *(_DWORD *)(v19 + 20) = 0;
    sub_483128(v19, (__int64)&v87);
    *(_QWORD *)(a1 + 136) -= 72LL;
  }
  v20 = v90;
  *(_BYTE *)(a1 + 2116) = 0;
  v21 = v20 & 0xFFFFFFF;
  v22 = v21 == 1 || v21 == 11;
  if ( !v22 && v21 != 8 )
  {
LABEL_72:
    if ( !under_debugger )
      sub_492270(3295);
    goto LABEL_73;
  }
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  v24 = v95;
  if ( !a4 )
  {
    ptr = nullptr;
    v66 = 0;
    v67 = 0;
    if ( !a5 )
    {
      v44 = (char *)a2;
      v45 = v95;
      v46 = nullptr;
      v47 = 0;
      v48 = 0;
      goto LABEL_33;
    }
    goto LABEL_30;
  }
  v40 = strlen(a4);
  v41 = sub_491288((__int64)&v41, nullptr, v40 + 1, 1u);
  v42 = v40 + 1;
  memmove(v41, a4, v40);
  *((_BYTE *)v41 + v40) = 0;
  ptr = nullptr;
  v66 = 0;
  v67 = 0;
  if ( a5 )
  {
LABEL_30:
    v25 = strlen(a5);
    v26 = v25 + 1;
    v27 = v25;
    ptr = sub_491288((__int64)&ptr, nullptr, v25 + 1, 1u);
    v66 = v26;
    memmove(ptr, a5, v27);
    *((_BYTE *)ptr + v27) = 0;
    v28 = v42;
    goto LABEL_31;
  }
  v28 = v42;
LABEL_31:
  v44 = (char *)a2;
  v45 = v24;
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  if ( v28 )
  {
    v46 = sub_491248(v28);
    v48 = v28;
    memcpy(v46, v41, v28);
    v47 = v28;
  }
LABEL_33:
  v29 = v66;
  v49 = nullptr;
  v50 = 0;
  v51 = 0;
  if ( v66 )
  {
    v49 = sub_491248(v66);
    v51 = v29;
    memcpy(v49, ptr, v29);
    v50 = v29;
  }
  v53 = 0;
  v54 = nullptr;
  v55 = &v53;
  v56 = &v53;
  v57 = 0;
  v58 = nullptr;
  v59 = 0;
  v60 = 0;
  src = nullptr;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  if ( ptr )
  {
    v66 = 0;
    j__free(ptr);
  }
  if ( v41 )
  {
    v42 = 0;
    j__free(v41);
  }
  v30 = v47;
  ptr = v44;
  v66 = (signed __int64)v44;
  v67 = v45;
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  if ( v47 )
  {
    v68 = sub_491248(v47);
    v70 = v30;
    memcpy(v68, v46, v30);
    v69 = v30;
  }
  v31 = v50;
  v71 = nullptr;
  v72 = 0;
  v73 = 0;
  if ( v50 )
  {
    v71 = sub_491248(v50);
    v73 = v31;
    memcpy(v71, v49, v31);
    v72 = v31;
  }
  v75 = 0;
  v76 = nullptr;
  v77 = &v75;
  v78 = &v75;
  v79 = 0;
  if ( v54 )
  {
    v41 = &v74;
    v32 = (int *)sub_414990((__int64)&v74, (__int64)v54, (__int64)&v75, (__int64)&v41);
    for ( i = v32; *((_QWORD *)i + 2); i = *((int **)i + 2) )
      ;
    v77 = i;
    for ( j = v32; *((_QWORD *)j + 3); j = *((int **)j + 3) )
      ;
    v76 = v32;
    v78 = j;
    v79 = v57;
  }
  v35 = v59;
  v80 = nullptr;
  v81 = 0;
  v82 = 0;
  if ( v59 )
  {
    v80 = sub_491248(v59);
    v82 = v35;
    memcpy(v80, v58, v35);
    v81 = v35;
  }
  v36 = v62;
  v83 = nullptr;
  v84 = 0;
  v85 = 0;
  if ( v62 )
  {
    v83 = sub_491248(v62);
    v85 = v36;
    memcpy(v83, src, v36);
    v84 = v36;
  }
  v86 = v64;
  sub_40F188((_QWORD *)(a1 + 1864), (__int64 *)&ptr);
  if ( v83 )
  {
    v84 = 0;
    j__free(v83);
  }
  if ( v80 )
  {
    v81 = 0;
    j__free(v80);
  }
  sub_40D410((__int64)&v74, v76);
  if ( v71 )
  {
    v72 = 0;
    j__free(v71);
  }
  if ( v68 )
  {
    v69 = 0;
    j__free(v68);
  }
  sub_40F3A0((_QWORD *)(a1 + 1816), (unsigned __int64 *)&v44);
  if ( src )
  {
    v62 = 0;
    j__free(src);
  }
  if ( v58 )
  {
    v59 = 0;
    j__free(v58);
  }
  sub_40D410((__int64)&v52, v54);
  if ( v49 )
  {
    v50 = 0;
    j__free(v49);
  }
  if ( v46 )
  {
    v47 = 0;
    j__free(v46);
  }
  sub_482ED0((__int64)&v87);
  return v97 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
