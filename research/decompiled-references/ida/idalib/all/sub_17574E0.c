__int64 __fastcall sub_17574E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v9; // r14d
  unsigned int v12; // edx
  int v13; // eax
  char v14; // dl
  __int64 *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r15
  __m128i si128; // xmm0
  __m128i *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i v29; // xmm0
  __m128i *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // al
  __int64 v35; // rax
  int v36; // edx
  __int64 v38; // rsi
  _QWORD *v39; // r12
  _QWORD *v40; // r14
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // rsi
  _QWORD *v46; // r12
  _QWORD *v47; // r14
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // r12
  __int64 v52; // rsi
  __int64 v53; // rax
  int v54; // edx
  unsigned __int64 v55; // rdi
  __int64 *v56; // rbx
  unsigned int v57; // eax
  unsigned int v58; // eax
  char v60; // [rsp+0h] [rbp-228h]
  char v61; // [rsp+8h] [rbp-220h]
  int v62; // [rsp+14h] [rbp-214h]
  int v63; // [rsp+18h] [rbp-210h]
  char v64; // [rsp+1Dh] [rbp-20Bh]
  char v65; // [rsp+1Eh] [rbp-20Ah]
  char v66; // [rsp+1Fh] [rbp-209h]
  unsigned __int64 v67; // [rsp+20h] [rbp-208h] BYREF
  unsigned __int64 v68; // [rsp+28h] [rbp-200h] BYREF
  _QWORD v69[4]; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v70[3]; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-1C0h]
  __int64 v72; // [rsp+70h] [rbp-1B8h]
  unsigned int v73; // [rsp+78h] [rbp-1B0h]
  _QWORD *v74; // [rsp+80h] [rbp-1A8h]
  __int64 v75; // [rsp+88h] [rbp-1A0h]
  unsigned int v76; // [rsp+90h] [rbp-198h]
  __int64 v77; // [rsp+98h] [rbp-190h]
  __int64 v78; // [rsp+A0h] [rbp-188h]
  unsigned int v79; // [rsp+A8h] [rbp-180h]
  __int64 v80; // [rsp+B0h] [rbp-178h]
  __int64 v81; // [rsp+B8h] [rbp-170h] BYREF
  unsigned int v82; // [rsp+C0h] [rbp-168h]
  __int16 v83; // [rsp+118h] [rbp-110h] BYREF
  __int64 v84[3]; // [rsp+120h] [rbp-108h] BYREF
  __int64 v85; // [rsp+138h] [rbp-F0h]
  __int64 v86; // [rsp+140h] [rbp-E8h]
  unsigned int v87; // [rsp+148h] [rbp-E0h]
  _QWORD *v88; // [rsp+150h] [rbp-D8h]
  __int64 v89; // [rsp+158h] [rbp-D0h]
  unsigned int v90; // [rsp+160h] [rbp-C8h]
  __int64 v91; // [rsp+168h] [rbp-C0h]
  __int64 v92; // [rsp+170h] [rbp-B8h]
  unsigned int v93; // [rsp+178h] [rbp-B0h]
  __int64 v94; // [rsp+180h] [rbp-A8h]
  __int64 v95; // [rsp+188h] [rbp-A0h] BYREF
  unsigned int v96; // [rsp+190h] [rbp-98h]
  __int16 v97; // [rsp+1E8h] [rbp-40h] BYREF

  v9 = 0;
  sub_1DBADC0(a1);
  if ( (_BYTE)v12 )
    return v9;
  v9 = v12;
  if ( !a4 || !a8 )
    return v9;
  v67 = 0;
  v69[1] = &v67;
  v69[2] = &v68;
  v13 = *(_DWORD *)(a1 + 11200);
  v68 = 0;
  v63 = v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 12592);
  v69[0] = a1;
  v64 = v13;
  v65 = *(_BYTE *)(a1 + 11248);
  v62 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
  sub_1DBADC0(a1);
  if ( !v14 )
    *(_BYTE *)(a1 + 12592) = 1;
  *(_BYTE *)(a1 + 11248) = 0;
  v15 = (__int64 *)sub_1748570(a1, a2, a3, a4);
  if ( !v15 )
    goto LABEL_15;
  v19 = (__int64 *)sub_1748570(a1, a5, a7, a8);
  if ( !v19 )
    goto LABEL_15;
  v70[0] = a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
  v70[1] = 0;
  v21 = (__m128i *)&v81;
  v70[2] = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = nullptr;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 1;
  do
  {
    *v21 = si128;
    v21 = (__m128i *)((char *)v21 + 24);
  }
  while ( &v83 != (__int16 *)v21 );
  v83 = 1;
  v60 = sub_17565E0(v70, v15, v19, v16, v17, v18);
  v25 = sub_17565E0(v70, v19, v15, v22, v23, v24);
  v84[0] = a1;
  v29 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
  v66 = v25;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = nullptr;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 1;
  v84[1] = (__int64)sub_1740E90;
  v84[2] = (__int64)v69;
  v30 = (__m128i *)&v95;
  do
  {
    *v30 = v29;
    v30 = (__m128i *)((char *)v30 + 24);
  }
  while ( v30 != (__m128i *)&v97 );
  v97 = 1;
  v61 = sub_17565E0(v84, v15, v19, v26, v27, v28);
  v34 = sub_17565E0(v84, v19, v15, v31, v32, v33);
  if ( v60 == v61 && v66 == v34 )
  {
    sub_1748030((__int64)v84);
    sub_1748030((__int64)v70);
LABEL_15:
    *(_DWORD *)(a1 + 11200) = v63;
    *(_BYTE *)(a1 + 12592) = v64;
    *(_BYTE *)(a1 + 11248) = v65;
    v35 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v35 + 204) == 5 )
      *(_BYTE *)(v35 + 194) = 1;
    v36 = 3;
    if ( !v62 )
      v36 = 0;
    *(_DWORD *)(v35 + 204) = v36;
    return v9;
  }
  if ( (v94 & 1) == 0 )
    operator delete(v95, 24LL * v96, 8);
  operator delete(v91, 16LL * v93, 8);
  v38 = v90;
  if ( v90 )
  {
    v39 = v88;
    v40 = &v88[4 * v90];
    do
    {
      if ( *v39 != -4096 && *v39 != -8192 )
      {
        v41 = (void *)v39[1];
        if ( v41 )
          operator delete(v41);
      }
      v39 += 4;
    }
    while ( v40 != v39 );
    v38 = v90;
  }
  operator delete(v88, 32 * v38, 8);
  v42 = v87;
  if ( v87 )
  {
    v43 = v85;
    v44 = v85 + 656LL * v87;
    do
    {
      if ( *(_QWORD *)v43 != -8192 && *(_QWORD *)v43 != -4096 )
      {
        sub_1747E80(v43 + 8);
        if ( (*(_BYTE *)(v43 + 8) & 1) == 0 )
          operator delete(*(_QWORD *)(v43 + 16), 160LL * *(unsigned int *)(v43 + 24), 8);
      }
      v43 += 656;
    }
    while ( v44 != v43 );
    v42 = v87;
  }
  operator delete(v85, 656 * v42, 8);
  if ( (v80 & 1) == 0 )
    operator delete(v81, 24LL * v82, 8);
  operator delete(v77, 16LL * v79, 8);
  v45 = v76;
  if ( v76 )
  {
    v46 = v74;
    v47 = &v74[4 * v76];
    do
    {
      if ( *v46 != -4096 && *v46 != -8192 )
      {
        v48 = (void *)v46[1];
        if ( v48 )
          operator delete(v48);
      }
      v46 += 4;
    }
    while ( v47 != v46 );
    v45 = v76;
  }
  operator delete(v74, 32 * v45, 8);
  v49 = v73;
  if ( v73 )
  {
    v50 = v71;
    v51 = v71 + 656LL * v73;
    do
    {
      if ( *(_QWORD *)v50 != -4096 && *(_QWORD *)v50 != -8192 )
      {
        sub_1747E80(v50 + 8);
        if ( (*(_BYTE *)(v50 + 8) & 1) == 0 )
          operator delete(*(_QWORD *)(v50 + 16), 160LL * *(unsigned int *)(v50 + 24), 8);
      }
      v50 += 656;
    }
    while ( v51 != v50 );
    v49 = v73;
  }
  v52 = 656 * v49;
  operator delete(v71, 656 * v49, 8);
  *(_DWORD *)(a1 + 11200) = v63;
  *(_BYTE *)(a1 + 12592) = v64;
  *(_BYTE *)(a1 + 11248) = v65;
  v53 = *(_QWORD *)(a1 + 264);
  if ( *(_DWORD *)(v53 + 204) == 5 )
    *(_BYTE *)(v53 + 194) = 1;
  v54 = 3;
  v55 = v67;
  v9 = 1;
  if ( !v62 )
    v54 = 0;
  v56 = (__int64 *)(a1 + 8);
  *(_DWORD *)(v53 + 204) = v54;
  v57 = sub_EEB7E0(v55, v52, *(double *)v29.m128i_i64);
  sub_168B9F0((__int64)v84, v56, v57, 0x1685u, 0);
  v70[0] = sub_EEC8C0(v67, (__int64)v56, *(double *)v29.m128i_i64);
  sub_1587DB0((__int64)v84, v70);
  sub_15F7200(v84);
  v58 = sub_EEB7E0(v68, (__int64)v70, *(double *)v29.m128i_i64);
  sub_168B9F0((__int64)v84, v56, v58, 0x1686u, 0);
  v70[0] = sub_EEC8C0(v68, (__int64)v56, *(double *)v29.m128i_i64);
  sub_1587DB0((__int64)v84, v70);
  sub_15F7200(v84);
  return v9;
}
