void __fastcall sub_9DC5C0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rdx
  void **v10; // rax
  _QWORD *v11; // r12
  _QWORD *v12; // rbx
  _DWORD *v13; // rdi
  bool v14; // zf
  _DWORD *v15; // rdi
  char *v16; // rdi
  __int64 *v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // rdi
  _QWORD *v20; // r12
  _QWORD *v21; // rbx
  _DWORD *v22; // rdi
  _QWORD *v23; // r12
  _QWORD *v24; // rbx
  _DWORD *v25; // rdi
  void *v26; // rbx
  void **v27; // r13
  void **v28; // rbx
  _QWORD *v29; // r12
  void *v30; // rdi
  char *v31; // rbx
  char *v32; // r12
  _BYTE *i; // rax
  __int64 v34; // rsi
  unsigned int v35; // ecx
  __int64 v36; // rdi
  __int64 *v37; // rbx
  __int64 *v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  void *v41; // rbx
  void *v42; // rdi
  _DWORD *v44; // [rsp+18h] [rbp-2C0h] BYREF
  __m128i v45; // [rsp+20h] [rbp-2B8h] BYREF
  int v46; // [rsp+30h] [rbp-2A8h]
  _DWORD *v47; // [rsp+38h] [rbp-2A0h] BYREF
  __int128 v48; // [rsp+40h] [rbp-298h] BYREF
  void *ptr; // [rsp+50h] [rbp-288h]
  __int64 v50; // [rsp+58h] [rbp-280h]
  _BYTE v51[32]; // [rsp+60h] [rbp-278h] BYREF
  __int64 *v52; // [rsp+80h] [rbp-258h]
  __int64 v53; // [rsp+88h] [rbp-250h]
  _QWORD v54[4]; // [rsp+90h] [rbp-248h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-228h]
  __int64 v56; // [rsp+C0h] [rbp-218h]
  __int64 v57; // [rsp+C8h] [rbp-210h]
  unsigned int v58; // [rsp+D0h] [rbp-208h]
  __int64 v59; // [rsp+D8h] [rbp-200h]
  __int64 v60; // [rsp+E0h] [rbp-1F8h]
  unsigned int v61; // [rsp+E8h] [rbp-1F0h]
  void *v62; // [rsp+F0h] [rbp-1E8h]
  __int64 v63; // [rsp+F8h] [rbp-1E0h]
  __int64 v64; // [rsp+100h] [rbp-1D8h]
  void *v65; // [rsp+108h] [rbp-1D0h]
  void **v66; // [rsp+110h] [rbp-1C8h]
  __int64 v67; // [rsp+118h] [rbp-1C0h]
  void *v68; // [rsp+120h] [rbp-1B8h]
  void *v69; // [rsp+128h] [rbp-1B0h]
  __int64 v70; // [rsp+130h] [rbp-1A8h]
  __int64 v71; // [rsp+138h] [rbp-1A0h]
  void *v72; // [rsp+140h] [rbp-198h]
  __int64 v73; // [rsp+148h] [rbp-190h]
  __int64 v74; // [rsp+150h] [rbp-188h]
  void *v75; // [rsp+158h] [rbp-180h]
  __int64 v76; // [rsp+160h] [rbp-178h]
  __int64 v77; // [rsp+168h] [rbp-170h]
  __int64 v78; // [rsp+170h] [rbp-168h]
  __int64 v79; // [rsp+178h] [rbp-160h]
  __int64 v80; // [rsp+180h] [rbp-158h]
  __int64 v81; // [rsp+190h] [rbp-148h]
  __int64 v82; // [rsp+198h] [rbp-140h]
  unsigned int v83; // [rsp+1A0h] [rbp-138h]
  unsigned __int64 v84; // [rsp+1A8h] [rbp-130h]
  void *v85; // [rsp+1B0h] [rbp-128h]
  __int64 v86; // [rsp+1B8h] [rbp-120h]
  __int64 v87; // [rsp+1C0h] [rbp-118h]
  void *v88; // [rsp+1C8h] [rbp-110h]
  __int64 v89; // [rsp+1D0h] [rbp-108h]
  __int64 v90; // [rsp+1D8h] [rbp-100h]
  char v91; // [rsp+1E0h] [rbp-F8h]
  void *v92; // [rsp+1E8h] [rbp-F0h] BYREF
  _QWORD *v93; // [rsp+1F0h] [rbp-E8h]
  __int64 v94; // [rsp+1F8h] [rbp-E0h]
  void *v95; // [rsp+200h] [rbp-D8h]
  _QWORD *v96; // [rsp+208h] [rbp-D0h]
  __int64 v97; // [rsp+210h] [rbp-C8h]
  __int64 v98; // [rsp+218h] [rbp-C0h]
  __int64 v99; // [rsp+220h] [rbp-B8h] BYREF
  unsigned int v100; // [rsp+228h] [rbp-B0h]
  void *v101; // [rsp+260h] [rbp-78h] BYREF
  __int64 *v102; // [rsp+268h] [rbp-70h]
  __int64 v103; // [rsp+270h] [rbp-68h]
  void *v104; // [rsp+278h] [rbp-60h]
  _QWORD *v105; // [rsp+280h] [rbp-58h]
  __int64 v106; // [rsp+288h] [rbp-50h]
  __int64 v107; // [rsp+290h] [rbp-48h]

  v6 = *a3;
  if ( !*a3 )
  {
    v6 = operator new(0x30u);
    *(_QWORD *)v6 = 0;
    *(_QWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 32) = 0;
    *(_DWORD *)(v6 + 40) = 0;
    *a3 = v6;
  }
  v48 = 0;
  ptr = v51;
  v55 = 0;
  v52 = v54;
  v50 = 0x400000000LL;
  v53 = 0;
  v54[1] = 1;
  v54[2] = &v48;
  v54[3] = &v48;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = nullptr;
  v63 = 0;
  v64 = 0;
  v65 = nullptr;
  v66 = nullptr;
  v67 = 0;
  v68 = nullptr;
  v69 = nullptr;
  v70 = 0;
  v71 = 0;
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  v75 = nullptr;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v54[0] = 48;
  v7 = (_QWORD *)sub_986170((__int64)&v48, 48, 48, 4, a5, a6);
  v7[2] = "_x";
  v8 = v7;
  *v7 = 5;
  v7[1] = 0;
  v7[3] = j__strlen("_x");
  *((_OWORD *)v8 + 2) = 0;
  *(_QWORD *)&v55 = v8;
  *((_WORD *)v8 + 1) = 2;
  v80 = a2;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v9 = (_QWORD *)operator new(0x60u);
  v45 = 0;
  v84 = (unsigned __int64)v9;
  memset(v9, 0, 0x60u);
  v9[3] = 0x400000000LL;
  v9[2] = v9 + 4;
  v9[8] = v9 + 10;
  v9[11] = 1;
  v85 = nullptr;
  v86 = 0;
  v87 = 0;
  v88 = nullptr;
  v89 = 0;
  v90 = 0;
  v91 = 1;
  v92 = nullptr;
  v93 = nullptr;
  v94 = 0;
  v95 = nullptr;
  v96 = nullptr;
  v97 = 0;
  v44 = nullptr;
  v46 = 0;
  v47 = nullptr;
  sub_9D1F40((__m128i **)&v92, &v45);
  sub_9D1F20(&v47);
  sub_9D1F20(&v44);
  v98 = 1;
  v10 = (void **)&v99;
  do
  {
    *v10 = (void *)-4096LL;
    v10 += 2;
  }
  while ( v10 != &v101 );
  v101 = nullptr;
  v102 = nullptr;
  v103 = 0;
  v104 = nullptr;
  v105 = nullptr;
  v106 = 0;
  v107 = v6;
  sub_9D9860((__int64 *)&v48, a1);
  v11 = v105;
  v12 = v104;
  if ( v105 != v104 )
  {
    do
    {
      while ( 1 )
      {
        v13 = (_DWORD *)v12[9];
        if ( v13 )
        {
          v14 = v13[17]-- == 1;
          if ( v14 )
            sub_9D1530(v13);
        }
        v15 = (_DWORD *)v12[8];
        if ( v15 )
        {
          v14 = v15[17]-- == 1;
          if ( v14 )
            sub_9D1530(v15);
        }
        v16 = (char *)v12[4];
        if ( v16 != (char *)(v12 + 7) )
          free(v16);
        if ( (_QWORD *)*v12 == v12 + 3 )
          break;
        free((void *)*v12);
        v12 += 12;
        if ( v11 == v12 )
          goto LABEL_16;
      }
      v12 += 12;
    }
    while ( v11 != v12 );
LABEL_16:
    v12 = v104;
  }
  if ( v12 )
    operator delete(v12);
  v17 = v102;
  v18 = (__int64 *)v101;
  if ( v102 != v101 )
  {
    do
    {
      while ( 1 )
      {
        v19 = *v18;
        if ( !*v18 )
          break;
        ++v18;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        if ( v17 == v18 )
          goto LABEL_22;
      }
      ++v18;
    }
    while ( v17 != v18 );
LABEL_22:
    v18 = (__int64 *)v101;
  }
  if ( v18 )
    operator delete(v18);
  if ( (v98 & 1) == 0 )
    operator delete(v99, 16LL * v100, 8);
  v20 = v96;
  v21 = v95;
  if ( v96 != v95 )
  {
    do
    {
      while ( 1 )
      {
        v22 = (_DWORD *)v21[1];
        if ( v22 )
        {
          v14 = v22[17]-- == 1;
          if ( v14 )
            break;
        }
        v21 += 2;
        if ( v20 == v21 )
          goto LABEL_33;
      }
      sub_9D1530(v22);
      v21 += 2;
    }
    while ( v20 != v21 );
LABEL_33:
    v21 = v95;
  }
  if ( v21 )
    operator delete(v21);
  v23 = v93;
  v24 = v92;
  if ( v93 != v92 )
  {
    do
    {
      while ( 1 )
      {
        v25 = (_DWORD *)v24[3];
        if ( v25 )
        {
          v14 = v25[17]-- == 1;
          if ( v14 )
            break;
        }
        v24 += 4;
        if ( v23 == v24 )
          goto LABEL_42;
      }
      sub_9D1530(v25);
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_42:
    v24 = v92;
  }
  if ( v24 )
    operator delete(v24);
  if ( (v84 & 1) == 0 )
  {
    v41 = (void *)(v84 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v84 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    {
      sub_9B7090(v84 & 0xFFFFFFFFFFFFFFFELL);
      operator delete(v41, 0x60u);
    }
  }
  if ( v88 )
    operator delete(v88);
  if ( v85 )
    operator delete(v85);
  operator delete(v81, 16LL * v83, 8);
  if ( v75 )
    operator delete(v75);
  if ( v72 )
    operator delete(v72);
  if ( v69 )
    operator delete(v69);
  v26 = v68;
  if ( v68 )
  {
    if ( *(_DWORD *)v68 <= 1u )
    {
      v42 = *((void **)v68 + 1);
      if ( v42 )
        operator delete(v42);
      operator delete(v26, 0x20u);
    }
    else
    {
      --*(_DWORD *)v68;
    }
  }
  v27 = v66;
  v28 = (void **)v65;
  if ( v66 != v65 )
  {
    while ( 1 )
    {
      v29 = *v28;
      if ( !*v28 )
        goto LABEL_62;
      if ( *(_DWORD *)v29 > 1u )
      {
        --*(_DWORD *)v29;
LABEL_62:
        v28 += 3;
        if ( v27 == v28 )
          goto LABEL_68;
      }
      else
      {
        v30 = (void *)v29[1];
        if ( v30 )
          operator delete(v30);
        v28 += 3;
        operator delete(v29, 0x20u);
        if ( v27 == v28 )
        {
LABEL_68:
          v28 = (void **)v65;
          break;
        }
      }
    }
  }
  if ( v28 )
    operator delete(v28);
  if ( v62 )
    operator delete(v62);
  operator delete(v59, 16LL * v61, 8);
  operator delete(v56, 16LL * v58, 8);
  v31 = (char *)ptr;
  v32 = (char *)ptr + 8 * (unsigned int)v50;
  if ( ptr != v32 )
  {
    for ( i = ptr; ; i = ptr )
    {
      v34 = 0x40000000000LL;
      v35 = (unsigned int)((v31 - i) >> 3) >> 7;
      if ( v35 <= 0x1D )
        v34 = 4096LL << v35;
      v36 = *(_QWORD *)v31;
      v31 += 8;
      operator delete(v36, v34, 16);
      if ( v32 == v31 )
        break;
    }
  }
  v37 = v52;
  v38 = &v52[2 * (unsigned int)v53];
  if ( v52 != v38 )
  {
    do
    {
      v39 = v37[1];
      v40 = *v37;
      v37 += 2;
      operator delete(v40, v39, 16);
    }
    while ( v38 != v37 );
    v38 = v52;
  }
  if ( v38 != v54 )
    free(v38);
  if ( ptr != v51 )
    free(ptr);
}
