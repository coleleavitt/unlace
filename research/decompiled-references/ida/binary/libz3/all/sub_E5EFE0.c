__int64 __fastcall sub_E5EFE0(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  _OWORD *v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  int v10; // edx
  _QWORD *(__fastcall *v11)(void **, __int64); // rax
  _DWORD *v12; // rdi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  void (__fastcall ***v17)(_QWORD); // rbx
  bool v18; // zf
  __int64 *v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rbx
  unsigned __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 *v27; // rbx
  unsigned __int64 v28; // rbp
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v31; // rbx
  unsigned __int64 v32; // rbp
  __int64 v33; // rsi
  void *v35; // [rsp+0h] [rbp-328h]
  void *v37; // [rsp+10h] [rbp-318h] BYREF
  int v38; // [rsp+18h] [rbp-310h] BYREF
  __int64 v39; // [rsp+20h] [rbp-308h] BYREF
  int v40[2]; // [rsp+28h] [rbp-300h]
  __int64 v41; // [rsp+30h] [rbp-2F8h] BYREF
  void *v42; // [rsp+38h] [rbp-2F0h]
  int v43[2]; // [rsp+40h] [rbp-2E8h]
  int v44; // [rsp+48h] [rbp-2E0h]
  int v45[2]; // [rsp+50h] [rbp-2D8h]
  void *v46; // [rsp+58h] [rbp-2D0h] BYREF
  int v47; // [rsp+60h] [rbp-2C8h]
  int v48; // [rsp+68h] [rbp-2C0h]
  void *v49; // [rsp+70h] [rbp-2B8h]
  __int64 v50; // [rsp+78h] [rbp-2B0h]
  int v51; // [rsp+80h] [rbp-2A8h]
  int v52[2]; // [rsp+88h] [rbp-2A0h]
  void *v53; // [rsp+90h] [rbp-298h] BYREF
  int v54; // [rsp+98h] [rbp-290h]
  int v55; // [rsp+A0h] [rbp-288h] BYREF
  void *v56; // [rsp+A8h] [rbp-280h]
  char v57[16]; // [rsp+B8h] [rbp-270h] BYREF
  char v58[64]; // [rsp+C8h] [rbp-260h] BYREF
  __int64 v59; // [rsp+108h] [rbp-220h] BYREF
  __m128 v60; // [rsp+110h] [rbp-218h]
  int v61; // [rsp+120h] [rbp-208h]
  __int64 *v62; // [rsp+128h] [rbp-200h]
  __int64 v63; // [rsp+130h] [rbp-1F8h]
  int v64; // [rsp+138h] [rbp-1F0h]
  __int64 *v65; // [rsp+140h] [rbp-1E8h]
  __int64 v66; // [rsp+148h] [rbp-1E0h]
  int v67; // [rsp+150h] [rbp-1D8h]
  __int64 v68; // [rsp+158h] [rbp-1D0h]
  __int64 v69; // [rsp+160h] [rbp-1C8h]
  __int64 *v70; // [rsp+168h] [rbp-1C0h]
  __int64 v71; // [rsp+170h] [rbp-1B8h]
  __int64 v72; // [rsp+178h] [rbp-1B0h]
  __int64 v73; // [rsp+180h] [rbp-1A8h]
  __int64 v74; // [rsp+188h] [rbp-1A0h]
  char v75[24]; // [rsp+190h] [rbp-198h] BYREF
  char v76[8]; // [rsp+1A8h] [rbp-180h] BYREF
  void *v77; // [rsp+1B0h] [rbp-178h]
  void *v78; // [rsp+1B8h] [rbp-170h]
  int v79; // [rsp+1C8h] [rbp-160h]
  __int64 v80; // [rsp+1D0h] [rbp-158h]
  int v81; // [rsp+1D8h] [rbp-150h]
  __int64 v82; // [rsp+1E0h] [rbp-148h]
  int v83; // [rsp+1E8h] [rbp-140h]
  __int64 v84; // [rsp+1F0h] [rbp-138h]
  __int64 v85; // [rsp+200h] [rbp-128h]
  void *v86; // [rsp+208h] [rbp-120h]
  __int64 v87; // [rsp+210h] [rbp-118h]
  __int64 *v88; // [rsp+218h] [rbp-110h]
  __int64 v89; // [rsp+220h] [rbp-108h]
  char v90[8]; // [rsp+228h] [rbp-100h] BYREF
  __int64 v91; // [rsp+230h] [rbp-F8h]
  __int64 v92; // [rsp+238h] [rbp-F0h]
  __int64 v93; // [rsp+240h] [rbp-E8h]
  __int64 v94; // [rsp+248h] [rbp-E0h]
  __int64 v95; // [rsp+250h] [rbp-D8h]
  __int64 v96; // [rsp+258h] [rbp-D0h]
  __int64 (__fastcall **v97)(); // [rsp+260h] [rbp-C8h]
  void *v98; // [rsp+278h] [rbp-B0h]
  void *v99; // [rsp+290h] [rbp-98h]
  __int64 v100; // [rsp+298h] [rbp-90h]
  __int64 *v101; // [rsp+2A0h] [rbp-88h]
  __int64 v102; // [rsp+2A8h] [rbp-80h]
  __int64 v103; // [rsp+2E8h] [rbp-40h]

  HIDWORD(v35) = a3;
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  *(_QWORD *)v40 = 0;
  v39 = v5;
  sub_E5ED50((__int64)a1, (__int64)&v39);
  v41 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  v6 = v41;
  v7 = (_OWORD *)sub_186B270(0x40u);
  v42 = v7;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  *(_QWORD *)v43 = 8;
  v44 = 0;
  *(_QWORD *)v45 = qword_1C7A350;
  sub_16511B0(&v46);
  *(_QWORD *)v52 = v6;
  *(_QWORD *)v45 = &off_1C63D10;
  sub_16669D0(&v53, v6);
  sub_16744A0(&v55, v6);
  sub_1684300(v57, v6);
  sub_15C5470(v58, v6);
  v59 = v6;
  sub_180C5A0(&v38, "seq");
  v8 = sub_15DA4C0(v6 + 560, &v38);
  v9 = sub_15D2690(v6, v8);
  v60 = _mm_loadh_ps((const double *)(v9 + 88));
  v10 = *(_DWORD *)(v9 + 16);
  v62 = &v59;
  v63 = v59;
  v66 = v59;
  v69 = v59;
  v61 = v10;
  v64 = v10;
  v65 = &v59;
  v67 = v10;
  v68 = 0;
  v70 = nullptr;
  v71 = 0;
  v72 = 0;
  v73 = 0xFFFFFFFFLL;
  v74 = 0;
  sub_15F01E0(v75, v6);
  sub_1624F90(v76, v6);
  v80 = 0;
  v79 = 0;
  v82 = 0;
  v81 = 0;
  v84 = 0;
  v83 = 0;
  v85 = 0;
  v86 = nullptr;
  v87 = v6;
  v88 = nullptr;
  v89 = 0;
  sub_15C0990(v90, v6);
  v11 = *(_QWORD *(__fastcall **)(void **, __int64))(*a1 + 336LL);
  if ( (char *)v11 == (char *)sub_2B1E10 )
  {
    v12 = (_DWORD *)a1[7];
    v37 = v12;
    if ( v12 )
    {
      ++v12[2];
LABEL_4:
      (*(void (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)v12 + 64LL))(v12, &v41);
    }
  }
  else
  {
    v11(&v37, (__int64)a1);
    v12 = v37;
    if ( v37 )
      goto LABEL_4;
  }
  sub_168AD20(&v41, &v39);
  sub_168ACD0(&v41, HIDWORD(v35), a4);
  sub_168C010(
    (int)&v41,
    a2,
    v13,
    v14,
    v15,
    v16,
    v35,
    a4,
    (int)v37,
    v38,
    v39,
    v40[0],
    v41,
    (int)v42,
    v43[0],
    v44,
    v45[0],
    (int)v46,
    v47,
    v48,
    (int)v49,
    v50,
    v51,
    v52[0],
    v53,
    v54,
    v55,
    v56);
  sub_168BA90(&v41, a2, &v39, 1);
  if ( v37 )
  {
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v37 + 24LL))(v37, a2);
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v37 + 64LL))(v37, 0);
    v17 = (void (__fastcall ***)(_QWORD))v37;
    if ( v37 )
    {
      v18 = (*((_DWORD *)v37 + 2))-- == 1;
      if ( v18 )
      {
        (**v17)(v17);
        sub_186B220(v17);
      }
    }
  }
  if ( v103 )
    sub_186B220((void *)(v103 - 8));
  if ( v102 )
    sub_186B220((void *)(v102 - 8));
  v19 = v101;
  if ( v101 )
  {
    v20 = (unsigned __int64)&v101[*((unsigned int *)v101 - 1)];
    if ( (unsigned __int64)v101 >= v20 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v22 = v100;
          v18 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v19 >= v20 )
          goto LABEL_20;
      }
      sub_15D7BC0(v22, v21);
      ++v19;
    }
    while ( (unsigned __int64)v19 < v20 );
LABEL_20:
    v19 = v101;
    if ( v101 )
LABEL_21:
      sub_186B220(v19 - 1);
  }
  v97 = &off_1C62200;
  if ( v99 )
    sub_186B220(v99);
  if ( v98 )
    sub_186B220(v98);
  if ( v96 )
    sub_186B220((void *)(v96 - 8));
  if ( v95 )
    sub_186B220((void *)(v95 - 8));
  if ( v94 )
    sub_186B220((void *)(v94 - 8));
  if ( v93 )
    sub_186B220((void *)(v93 - 8));
  if ( v92 )
    sub_186B220((void *)(v92 - 8));
  if ( v91 )
    sub_186B220((void *)(v91 - 8));
  if ( v89 )
    sub_186B220((void *)(v89 - 8));
  v23 = v88;
  if ( v88 )
  {
    v24 = (unsigned __int64)&v88[*((unsigned int *)v88 - 1)];
    if ( (unsigned __int64)v88 >= v24 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v25 = *v23;
        if ( *v23 )
        {
          v26 = v87;
          v18 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v23 >= v24 )
          goto LABEL_47;
      }
      sub_15D7BC0(v26, v25);
      ++v23;
    }
    while ( (unsigned __int64)v23 < v24 );
LABEL_47:
    v23 = v88;
    if ( v88 )
LABEL_48:
      sub_186B220(v23 - 1);
  }
  if ( v86 )
    sub_186B220(v86);
  if ( v84 )
    sub_186B220((void *)(v84 - 8));
  if ( v82 )
    sub_186B220((void *)(v82 - 8));
  if ( v80 )
    sub_186B220((void *)(v80 - 8));
  *(_QWORD *)v45 = &off_1C63D10;
  if ( v78 )
    sub_186B220(v78);
  if ( v77 )
    sub_186B220(v77);
  v27 = v70;
  if ( v70 )
  {
    v28 = (unsigned __int64)&v70[*((unsigned int *)v70 - 1)];
    if ( (unsigned __int64)v70 >= v28 )
      goto LABEL_69;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = v69;
          v18 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v27 >= v28 )
          goto LABEL_68;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( (unsigned __int64)v27 < v28 );
LABEL_68:
    v27 = v70;
    if ( v70 )
LABEL_69:
      sub_186B220(v27 - 1);
  }
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  *(_QWORD *)v45 = qword_1C7A350;
  if ( v49 )
    sub_186B220(v49);
  if ( v46 )
    sub_186B220(v46);
  if ( v42 )
    sub_186B220(v42);
  v31 = *(__int64 **)v40;
  if ( *(_QWORD *)v40 )
  {
    v32 = *(_QWORD *)v40 + 8LL * *(unsigned int *)(*(_QWORD *)v40 - 4LL);
    if ( *(_QWORD *)v40 >= v32 )
      goto LABEL_86;
    do
    {
      while ( 1 )
      {
        v33 = *v31;
        if ( *v31 )
        {
          v18 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v31 >= v32 )
          goto LABEL_85;
      }
      sub_15D7BC0(v39, v33);
      ++v31;
    }
    while ( (unsigned __int64)v31 < v32 );
LABEL_85:
    v31 = *(__int64 **)v40;
    if ( *(_QWORD *)v40 )
LABEL_86:
      sub_186B220(v31 - 1);
  }
  return a2;
}

