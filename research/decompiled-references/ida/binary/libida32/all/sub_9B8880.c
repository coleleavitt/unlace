void __fastcall sub_9B8880(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
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
  _QWORD *v33; // rbx
  _QWORD *v34; // r12
  void *v35; // rbx
  void *v36; // rdi
  _DWORD *v38; // [rsp+18h] [rbp-2C0h] BYREF
  __m128i v39; // [rsp+20h] [rbp-2B8h] BYREF
  int v40; // [rsp+30h] [rbp-2A8h]
  _DWORD *v41; // [rsp+38h] [rbp-2A0h] BYREF
  __int128 v42; // [rsp+40h] [rbp-298h] BYREF
  void *ptr; // [rsp+50h] [rbp-288h]
  __int64 v44; // [rsp+58h] [rbp-280h]
  _BYTE v45[32]; // [rsp+60h] [rbp-278h] BYREF
  _QWORD *v46; // [rsp+80h] [rbp-258h]
  __int64 v47; // [rsp+88h] [rbp-250h]
  _QWORD v48[4]; // [rsp+90h] [rbp-248h] BYREF
  __int128 v49; // [rsp+B0h] [rbp-228h]
  __int64 v50; // [rsp+C0h] [rbp-218h]
  __int64 v51; // [rsp+C8h] [rbp-210h]
  int v52; // [rsp+D0h] [rbp-208h]
  __int64 v53; // [rsp+D8h] [rbp-200h]
  __int64 v54; // [rsp+E0h] [rbp-1F8h]
  int v55; // [rsp+E8h] [rbp-1F0h]
  void *v56; // [rsp+F0h] [rbp-1E8h]
  __int64 v57; // [rsp+F8h] [rbp-1E0h]
  __int64 v58; // [rsp+100h] [rbp-1D8h]
  void *v59; // [rsp+108h] [rbp-1D0h]
  void **v60; // [rsp+110h] [rbp-1C8h]
  __int64 v61; // [rsp+118h] [rbp-1C0h]
  void *v62; // [rsp+120h] [rbp-1B8h]
  void *v63; // [rsp+128h] [rbp-1B0h]
  __int64 v64; // [rsp+130h] [rbp-1A8h]
  __int64 v65; // [rsp+138h] [rbp-1A0h]
  void *v66; // [rsp+140h] [rbp-198h]
  __int64 v67; // [rsp+148h] [rbp-190h]
  __int64 v68; // [rsp+150h] [rbp-188h]
  void *v69; // [rsp+158h] [rbp-180h]
  __int64 v70; // [rsp+160h] [rbp-178h]
  __int64 v71; // [rsp+168h] [rbp-170h]
  __int64 v72; // [rsp+170h] [rbp-168h]
  __int64 v73; // [rsp+178h] [rbp-160h]
  __int64 v74; // [rsp+180h] [rbp-158h]
  __int64 v75; // [rsp+190h] [rbp-148h]
  __int64 v76; // [rsp+198h] [rbp-140h]
  int v77; // [rsp+1A0h] [rbp-138h]
  unsigned __int64 v78; // [rsp+1A8h] [rbp-130h]
  void *v79; // [rsp+1B0h] [rbp-128h]
  __int64 v80; // [rsp+1B8h] [rbp-120h]
  __int64 v81; // [rsp+1C0h] [rbp-118h]
  void *v82; // [rsp+1C8h] [rbp-110h]
  __int64 v83; // [rsp+1D0h] [rbp-108h]
  __int64 v84; // [rsp+1D8h] [rbp-100h]
  char v85; // [rsp+1E0h] [rbp-F8h]
  void *v86; // [rsp+1E8h] [rbp-F0h] BYREF
  _QWORD *v87; // [rsp+1F0h] [rbp-E8h]
  __int64 v88; // [rsp+1F8h] [rbp-E0h]
  void *v89; // [rsp+200h] [rbp-D8h]
  _QWORD *v90; // [rsp+208h] [rbp-D0h]
  __int64 v91; // [rsp+210h] [rbp-C8h]
  __int64 v92; // [rsp+218h] [rbp-C0h]
  __int64 v93; // [rsp+220h] [rbp-B8h] BYREF
  void *v94; // [rsp+260h] [rbp-78h] BYREF
  __int64 *v95; // [rsp+268h] [rbp-70h]
  __int64 v96; // [rsp+270h] [rbp-68h]
  void *v97; // [rsp+278h] [rbp-60h]
  _QWORD *v98; // [rsp+280h] [rbp-58h]
  __int64 v99; // [rsp+288h] [rbp-50h]
  __int64 v100; // [rsp+290h] [rbp-48h]

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
  v42 = 0;
  ptr = v45;
  v49 = 0;
  v46 = v48;
  v44 = 0x400000000LL;
  v47 = 0;
  v48[1] = 1;
  v48[2] = &v42;
  v48[3] = &v42;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = nullptr;
  v57 = 0;
  v58 = 0;
  v59 = nullptr;
  v60 = nullptr;
  v61 = 0;
  v62 = nullptr;
  v63 = nullptr;
  v64 = 0;
  v65 = 0;
  v66 = nullptr;
  v67 = 0;
  v68 = 0;
  v69 = nullptr;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v48[0] = 48;
  v7 = (_QWORD *)sub_962430((__int64)&v42, 48, 48, 4, a5, a6);
  v7[2] = "_x";
  v8 = v7;
  *v7 = 5;
  v7[1] = 0;
  v7[3] = j__strlen("_x");
  *((_OWORD *)v8 + 2) = 0;
  *(_QWORD *)&v49 = v8;
  *((_WORD *)v8 + 1) = 2;
  v74 = a2;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v9 = (_QWORD *)operator new(0x60u);
  v39 = 0;
  v78 = (unsigned __int64)v9;
  memset(v9, 0, 0x60u);
  v9[3] = 0x400000000LL;
  v9[2] = v9 + 4;
  v9[8] = v9 + 10;
  v9[11] = 1;
  v79 = nullptr;
  v80 = 0;
  v81 = 0;
  v82 = nullptr;
  v83 = 0;
  v84 = 0;
  v85 = 1;
  v86 = nullptr;
  v87 = nullptr;
  v88 = 0;
  v89 = nullptr;
  v90 = nullptr;
  v91 = 0;
  v38 = nullptr;
  v40 = 0;
  v41 = nullptr;
  sub_9AE200((__m128i **)&v86, &v39);
  sub_9AE1E0(&v41);
  sub_9AE1E0(&v38);
  v92 = 1;
  v10 = (void **)&v93;
  do
  {
    *v10 = (void *)-4096LL;
    v10 += 2;
  }
  while ( v10 != &v94 );
  v94 = nullptr;
  v95 = nullptr;
  v96 = 0;
  v97 = nullptr;
  v98 = nullptr;
  v99 = 0;
  v100 = v6;
  sub_9B5B20((__int64 *)&v42, a1);
  v11 = v98;
  v12 = v97;
  if ( v98 != v97 )
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
            sub_9AD7F0(v13);
        }
        v15 = (_DWORD *)v12[8];
        if ( v15 )
        {
          v14 = v15[17]-- == 1;
          if ( v14 )
            sub_9AD7F0(v15);
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
    v12 = v97;
  }
  if ( v12 )
    operator delete(v12);
  v17 = v95;
  v18 = (__int64 *)v94;
  if ( v95 != v94 )
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
    v18 = (__int64 *)v94;
  }
  if ( v18 )
    operator delete(v18);
  if ( (v92 & 1) == 0 )
    operator delete();
  v20 = v90;
  v21 = v89;
  if ( v90 != v89 )
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
      sub_9AD7F0(v22);
      v21 += 2;
    }
    while ( v20 != v21 );
LABEL_33:
    v21 = v89;
  }
  if ( v21 )
    operator delete(v21);
  v23 = v87;
  v24 = v86;
  if ( v87 != v86 )
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
      sub_9AD7F0(v25);
      v24 += 4;
    }
    while ( v23 != v24 );
LABEL_42:
    v24 = v86;
  }
  if ( v24 )
    operator delete(v24);
  if ( (v78 & 1) == 0 )
  {
    v35 = (void *)(v78 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v78 & 0xFFFFFFFFFFFFFFFELL) != 0 )
    {
      sub_993350(v78 & 0xFFFFFFFFFFFFFFFELL);
      operator delete(v35, 0x60u);
    }
  }
  if ( v82 )
    operator delete(v82);
  if ( v79 )
    operator delete(v79);
  operator delete();
  if ( v69 )
    operator delete(v69);
  if ( v66 )
    operator delete(v66);
  if ( v63 )
    operator delete(v63);
  v26 = v62;
  if ( v62 )
  {
    if ( *(_DWORD *)v62 <= 1u )
    {
      v36 = *((void **)v62 + 1);
      if ( v36 )
        operator delete(v36);
      operator delete(v26, 0x20u);
    }
    else
    {
      --*(_DWORD *)v62;
    }
  }
  v27 = v60;
  v28 = (void **)v59;
  if ( v60 != v59 )
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
          v28 = (void **)v59;
          break;
        }
      }
    }
  }
  if ( v28 )
    operator delete(v28);
  if ( v56 )
    operator delete(v56);
  operator delete();
  operator delete();
  v31 = (char *)ptr;
  v32 = (char *)ptr + 8 * (unsigned int)v44;
  if ( ptr != v32 )
  {
    do
    {
      v31 += 8;
      operator delete();
    }
    while ( v32 != v31 );
  }
  v33 = v46;
  v34 = &v46[2 * (unsigned int)v47];
  if ( v46 != v34 )
  {
    do
    {
      v33 += 2;
      operator delete();
    }
    while ( v34 != v33 );
    v34 = v46;
  }
  if ( v34 != v48 )
    free(v34);
  if ( ptr != v45 )
    free(ptr);
}

