__int64 __fastcall sub_1DDCCE0(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __m128 a7)
{
  unsigned int v7; // ebp
  __int64 v12; // r15
  __m128 v13; // xmm0
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // zf
  __m128 v24; // xmm0
  void **v25; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int16 *v34; // r15
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // edx
  unsigned __int64 v39; // r15
  __int64 v40; // rax
  void (*v41)(); // rdx
  char *v42; // rdi
  __int64 v43; // r13
  __int64 v44; // r12
  void **v45; // r15
  unsigned __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rdx
  __int64 *v49; // rbx
  unsigned __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // rax^4
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r13
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r13
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  unsigned __int64 v76; // [rsp+18h] [rbp-1C0h] BYREF
  _QWORD *v77; // [rsp+20h] [rbp-1B8h]
  __int64 v78; // [rsp+28h] [rbp-1B0h]
  int v79; // [rsp+30h] [rbp-1A8h]
  int v80; // [rsp+34h] [rbp-1A4h]
  unsigned __int64 v81; // [rsp+38h] [rbp-1A0h] BYREF
  char v82[8]; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int8 v83; // [rsp+48h] [rbp-190h]
  unsigned __int8 v84; // [rsp+49h] [rbp-18Fh]
  __int64 v85[7]; // [rsp+50h] [rbp-188h] BYREF
  __int64 v86; // [rsp+88h] [rbp-150h]
  _QWORD v87[2]; // [rsp+A0h] [rbp-138h] BYREF
  __m128 v88; // [rsp+B0h] [rbp-128h]
  int v89; // [rsp+C0h] [rbp-118h]
  const char *v90; // [rsp+C8h] [rbp-110h]
  __int64 v91; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-100h]
  __int64 v93; // [rsp+E0h] [rbp-F8h]
  unsigned int v94; // [rsp+E8h] [rbp-F0h]
  __int64 v95; // [rsp+F0h] [rbp-E8h]
  int v96; // [rsp+F8h] [rbp-E0h]
  __int64 v97; // [rsp+100h] [rbp-D8h]
  __int16 v98; // [rsp+108h] [rbp-D0h]
  char v99; // [rsp+10Ah] [rbp-CEh]
  __int64 v100; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v101; // [rsp+118h] [rbp-C0h]
  __int64 v102; // [rsp+120h] [rbp-B8h] BYREF
  unsigned int v103; // [rsp+128h] [rbp-B0h]
  unsigned __int8 *v104[6]; // [rsp+130h] [rbp-A8h] BYREF
  void *ptr; // [rsp+160h] [rbp-78h] BYREF
  __int64 v106; // [rsp+168h] [rbp-70h]
  __int64 v107; // [rsp+170h] [rbp-68h] BYREF
  __int64 v108; // [rsp+178h] [rbp-60h]
  __int16 v109; // [rsp+180h] [rbp-58h]
  char v110; // [rsp+182h] [rbp-56h]
  __int64 v111; // [rsp+188h] [rbp-50h]
  unsigned int v112; // [rsp+190h] [rbp-48h]
  char v113; // [rsp+194h] [rbp-44h]

  v7 = 0;
  if ( (*(_BYTE *)(a4 + 68) & 0xC) == 0xC || (*(_BYTE *)(a4 + 68) & 0xC) == 0 )
    return v7;
  v12 = sub_B780B0(a4);
  if ( !v12 )
  {
    v46 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
      v46 = *(_QWORD *)v46;
    v47 = *(_BYTE *)(v46 + 8);
    v48 = v46 - 64;
    if ( (v47 & 0x7Fu) - 58 < 4 )
      v12 = v48;
    v49 = (__int64 *)(a1 + 8);
    v50 = sub_B8EE90(v12 + 64);
    sub_168B9F0((__int64)&v100, (__int64 *)(a1 + 8), a2, 0xE2Fu, 0);
    if ( (_BYTE)v111 )
    {
      sub_1DB86A0(v104, v50);
    }
    else
    {
      if ( !v113 )
      {
LABEL_49:
        sub_15F7200(&v100);
        v51 = *(_QWORD *)a4;
        v52 = a4;
        v7 = 1;
        v53 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v51 + 16))(v52) >> 32;
        sub_168B9F0((__int64)&v100, v49, v53, 0x16FBu, 0);
        sub_15F7200(&v100);
        sub_B88650(a3, 1);
        return v7;
      }
      v58 = sub_168B9E0(&v100);
      v59 = v102;
      if ( v102 )
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
      v91 = v59;
      v60 = sub_1587BC0(v58, &v91, v54, v55, v56, v57);
      sub_1DB86A0((unsigned __int8 **)(*v60 + 32LL * v112 + 8), v50);
    }
    if ( (_BYTE)v111 )
    {
      sub_1DB86A0(v104, a4);
    }
    else if ( v113 )
    {
      v65 = sub_168B9E0(&v100);
      v66 = v102;
      if ( v102 )
        v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
      v91 = v66;
      v67 = sub_1587BC0(v65, &v91, v61, v62, v63, v64);
      sub_1DB86A0((unsigned __int8 **)(*v67 + 32LL * v112 + 8), a4);
    }
    goto LABEL_49;
  }
  sub_1DC3470((__int64)v82, a1, 0, a2, 0, a3, 0, 0, 0, 0);
  v7 = v83;
  if ( !v83 )
  {
    v7 = v84;
    if ( v84 )
    {
      sub_168B9F0((__int64)&v100, (__int64 *)(a1 + 8), a2, 0xE2Eu, 0);
      if ( (_BYTE)v111 )
      {
        sub_1DB86A0(v104, a3);
      }
      else if ( v113 )
      {
        v70 = sub_168B9E0(&v100);
        v73 = v102;
        if ( v102 )
          v73 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v102 + 32LL))(v102);
        v91 = v73;
        v74 = sub_1587BC0(v70, &v91, v68, v69, v71, v72);
        sub_1DB86A0((unsigned __int8 **)(*v74 + 32LL * v112 + 8), a3);
      }
      sub_15F7200(&v100);
    }
    else
    {
      v77 = v87;
      sub_2233820(v87);
      v76 = a3;
      v89 = 0;
      v87[0] = &off_2B4A628;
      v13 = _mm_loadh_ps((const double *)&v76);
      v90 = "instantiating default member init";
      v14 = *(_QWORD *)(a3 + 16);
      v88 = v13;
      if ( (v14 & 4) != 0 )
        v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      v16 = 0;
      if ( (*(_BYTE *)(v15 + 8) & 0x7Fu) - 58 <= 3 )
      {
        v16 = v15 - 64;
        if ( v15 != 64 )
          v16 = v15;
      }
      v17 = *(_QWORD *)(a1 + 544);
      *(_QWORD *)(a1 + 544) = v16;
      v76 = v17;
      v18 = *(_QWORD *)(a1 + 512);
      *(_QWORD *)(a1 + 512) = 0;
      v78 = v18;
      v19 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 9944) = 0;
      v86 = v19;
      v79 = *(_DWORD *)(a1 + 80);
      v80 = *(_DWORD *)(a1 + 2632);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
      sub_18C74E0(a1, 6, 0, 4);
      v20 = *(unsigned int *)(a1 + 4624);
      v81 = a3;
      v21 = *(_QWORD *)(a1 + 4616);
      v81 = *(_QWORD *)(a1 + 544);
      v22 = v21 + 640 * v20 - 640;
      v23 = *(_BYTE *)(v22 + 632) == 0;
      *(_DWORD *)(v22 + 608) = a2;
      v24 = _mm_loadh_ps((const double *)&v81);
      *(__m128 *)(v22 + 616) = v24;
      if ( v23 )
        *(_BYTE *)(v22 + 632) = 1;
      v100 = a1;
      v101 = 1;
      v25 = (void **)&v102;
      do
      {
        *v25 = (void *)-4096LL;
        v25 += 2;
      }
      while ( &ptr != v25 );
      v110 = 0;
      ptr = &v107;
      v106 = 0x100000000LL;
      v26 = *(_QWORD *)(a1 + 11280);
      *(_QWORD *)(a1 + 11280) = &v100;
      v108 = v26;
      v109 = 256;
      v111 = 0;
      sub_183C090(a1);
      v28 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v28 = *(_QWORD *)v28;
      v29 = *(_BYTE *)(v28 + 8);
      v30 = v28 - 64;
      if ( (v29 & 0x7Fu) - 58 >= 4 )
        v30 = 0;
      sub_19A2CD0((__int64)v85, a1, v30, 0, 1, v27);
      v91 = a1;
      v95 = a5;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 1;
      v99 = 0;
      v34 = sub_1DDC230(&v91, v12, 0, v24, a7, v31, v32, v33);
      v35 = 16LL * v94;
      operator delete(v92, v35, 8);
      v38 = 0;
      v39 = (unsigned __int64)v34 & 0xFFFFFFFFFFFFFFFELL;
      if ( v39 )
        v38 = sub_EEB7E0(v39, v35, *(double *)v24.m128_u64);
      sub_183C370(a1, a3, v38, v39, *(double *)v24.m128_u64, v36, v37);
      v40 = sub_15F1120(a1);
      if ( v40 )
      {
        v41 = *(void (**)())(*(_QWORD *)v40 + 128LL);
        if ( v41 != nullsub_443 )
          ((void (__fastcall *)(__int64, unsigned __int64))v41)(v40, a3);
      }
      LOBYTE(v7) = sub_B780B0(a3) == 0;
      sub_19A2DA0(v85);
      v42 = (char *)ptr;
      if ( !(_BYTE)v109 )
      {
        v42 = (char *)ptr;
        if ( (_DWORD)v106 )
        {
          v43 = 0;
          v44 = 8LL * (unsigned int)(v106 - 1) + 8;
          do
          {
            v45 = *(void ***)&v42[v43];
            if ( v45 )
            {
              if ( *v45 != v45 + 2 )
                free(*v45);
              operator delete(v45, 0x30u);
              v42 = (char *)ptr;
            }
            v43 += 8;
          }
          while ( v43 != v44 );
        }
        *(_QWORD *)(v100 + 11280) = v108;
        LOBYTE(v109) = 1;
      }
      if ( v42 != (char *)&v107 )
        free(v42);
      if ( (v101 & 1) == 0 )
        operator delete(v102, 16LL * v103, 8);
      sub_190D5E0(a1, v24);
      if ( v76 )
      {
        *(_QWORD *)(a1 + 544) = v76;
        *(_QWORD *)(a1 + 512) = v78;
        *(_QWORD *)(a1 + 9944) = v86;
        *(_DWORD *)(a1 + 80) = v79;
        *(_DWORD *)(a1 + 2632) = v80;
      }
      v87[0] = &off_2B4A628;
      sub_22338A0(v77);
    }
    if ( !v83 )
      sub_1DBAC30(v82);
  }
  return v7;
}
