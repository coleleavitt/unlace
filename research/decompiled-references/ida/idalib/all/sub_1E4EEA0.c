unsigned __int64 __fastcall sub_1E4EEA0(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        __int32 a5,
        unsigned int a6)
{
  __m128 v6; // xmm0
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int8 *v13; // rax
  void **v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  void **v17; // rbp
  unsigned __int64 v18; // rax
  void **v19; // rcx
  void **v20; // rax
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rax
  void **v24; // r15
  void **v25; // rbp
  unsigned __int64 v26; // rax
  void **v27; // rcx
  void **v28; // rax
  void **v29; // rdi
  void **v30; // rdi
  void **v31; // rax
  void **v32; // r15
  unsigned __int8 v33; // al
  unsigned __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int8 v39; // al
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int8 *v42; // rbp
  unsigned __int8 *v43; // rdx
  __int64 v44; // rax
  unsigned __int64 *v45; // rbp
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rdi
  void *v51; // rdi
  void **v52; // rax
  void **v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbp
  __int64 v58; // r8
  __int64 v59; // r9
  void *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // r12
  unsigned __int8 *v63; // rbp
  _BYTE *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // eax
  unsigned __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 v76; // r15
  __int64 v77; // r12
  void *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rdx
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // rdx
  __int64 v87; // r15
  void *v88; // rdi
  __int64 v89; // [rsp-8h] [rbp-210h]
  void **v90; // [rsp+0h] [rbp-208h]
  void **v91; // [rsp+0h] [rbp-208h]
  void **v92; // [rsp+0h] [rbp-208h]
  void **v93; // [rsp+0h] [rbp-208h]
  _QWORD *v94; // [rsp+0h] [rbp-208h]
  void **v95; // [rsp+0h] [rbp-208h]
  unsigned __int8 *v96; // [rsp+0h] [rbp-208h]
  __int64 v97; // [rsp+0h] [rbp-208h]
  void **v98; // [rsp+8h] [rbp-200h]
  void **v99; // [rsp+8h] [rbp-200h]
  _QWORD *v100; // [rsp+8h] [rbp-200h]
  void **v101; // [rsp+8h] [rbp-200h]
  __int64 v102; // [rsp+8h] [rbp-200h]
  __int64 v103; // [rsp+10h] [rbp-1F8h]
  __int64 v104; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 *v106; // [rsp+20h] [rbp-1E8h]
  void **v107; // [rsp+20h] [rbp-1E8h]
  void *v110; // [rsp+30h] [rbp-1D8h] BYREF
  unsigned __int64 v111; // [rsp+38h] [rbp-1D0h]
  void *v112; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned __int64 v113; // [rsp+58h] [rbp-1B0h]
  __int64 v114[2]; // [rsp+70h] [rbp-198h] BYREF
  __int128 v115; // [rsp+80h] [rbp-188h]
  _QWORD v116[2]; // [rsp+90h] [rbp-178h] BYREF
  void *v117; // [rsp+A0h] [rbp-168h]
  int v118; // [rsp+A8h] [rbp-160h]
  unsigned __int8 *v119; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v120; // [rsp+B8h] [rbp-150h]
  void *v121; // [rsp+D0h] [rbp-138h]
  unsigned __int64 *v122; // [rsp+D8h] [rbp-130h]
  char v123; // [rsp+108h] [rbp-100h]
  unsigned int v124; // [rsp+110h] [rbp-F8h]
  char v125; // [rsp+114h] [rbp-F4h]
  __int64 v126; // [rsp+120h] [rbp-E8h] BYREF
  void *ptr; // [rsp+128h] [rbp-E0h]
  __int64 v128; // [rsp+130h] [rbp-D8h]
  _BYTE v129[64]; // [rsp+138h] [rbp-D0h] BYREF
  void *v130[2]; // [rsp+178h] [rbp-90h]
  __int64 v131; // [rsp+188h] [rbp-80h]
  _QWORD *v132; // [rsp+190h] [rbp-78h]
  __m128i v133; // [rsp+198h] [rbp-70h] BYREF
  __int64 v134; // [rsp+1A8h] [rbp-60h] BYREF
  __int128 v135; // [rsp+1B0h] [rbp-58h]
  __int64 v136; // [rsp+1C0h] [rbp-48h]

  v6 = 0;
  v132 = (_QWORD *)a1;
  ptr = v129;
  *(_OWORD *)v130 = 0;
  v133.m128i_i64[0] = a4;
  v133.m128i_i32[2] = a5;
  v128 = 0x800000000LL;
  v126 = 0;
  v131 = 0;
  sub_B85890(&v134, a4);
  v135 = 0;
  v136 = 0x101010000LL;
  sub_1A395A0((__int64)&v126);
  sub_1A49A10(a1, (__int64)&v126, a2, 0, 0, v9, 0.0, 0.0);
  if ( (_DWORD)v126 == 2 )
  {
    v103 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
    v39 = *(_BYTE *)(v103 + 28) & 0x7F;
    if ( (unsigned int)v39 - 53 > 1 && ((v39 + 52) & 0x7Fu) > 1 )
      goto LABEL_60;
    v103 = sub_B72ED0(v103);
  }
  else
  {
    if ( (int)v126 > 2 )
    {
      if ( (_DWORD)v126 != 5 )
        goto LABEL_61;
      v34 = 1;
      sub_1A445B0(a1, (__int64)&v126, v10, v11, v12);
LABEL_43:
      if ( BYTE3(v136) )
        goto LABEL_44;
LABEL_53:
      if ( !BYTE4(v136) || (_DWORD)v126 != 5 )
        goto LABEL_47;
LABEL_55:
      sub_1A445B0((__int64)v132, (__int64)&v126, v35, v36, v37);
      goto LABEL_47;
    }
    v6 = 0;
    if ( (int)v126 < 0 )
      goto LABEL_61;
    v115 = 0;
    v114[1] = 0x101010101LL;
    v114[0] = (__int64)off_2BE4438;
    sub_1A6BD60(v116, a1, &v133, DWORD2(v135), (unsigned __int64)a2, nullptr, 0.0, 0.0, (__int64)v114, 1, 0, 0, 0, 1u);
    if ( !v116[0] )
      goto LABEL_68;
    sub_168B9B0((__int64)&v112, a1 + 8, 6261);
    sub_168B9B0((__int64)&v110, a1 + 8, 4989);
    v13 = (unsigned __int8 *)v110;
    v14 = &v112;
    if ( !v110 )
    {
      v70 = v111;
      v71 = *(_DWORD *)(v111 + 14976);
      if ( v71 )
      {
        v79 = (unsigned int)(v71 - 1);
        *(_DWORD *)(v111 + 14976) = v79;
        v13 = *(unsigned __int8 **)(v70 + 8 * v79 + 14848);
        v80 = *((unsigned int *)v13 + 134);
        *v13 = 0;
        v81 = *((_QWORD *)v13 + 66);
        *((_DWORD *)v13 + 106) = 0;
        v82 = v81 + (v80 << 6);
        while ( v81 != v82 )
        {
          while ( 1 )
          {
            v82 -= 64;
            v83 = *(void **)(v82 + 24);
            if ( v83 == (void *)(v82 + 40) )
              break;
            v107 = v14;
            v104 = v82;
            v102 = v81;
            v96 = v13;
            operator delete(v83);
            v81 = v102;
            v82 = v104;
            v13 = v96;
            v14 = v107;
            if ( v102 == v104 )
              goto LABEL_133;
          }
        }
LABEL_133:
        *((_DWORD *)v13 + 134) = 0;
      }
      else
      {
        v13 = (unsigned __int8 *)operator new(0x3A0u);
        *v13 = 0;
        *((_QWORD *)v13 + 12) = v13 + 112;
        *((_QWORD *)v13 + 16) = v13 + 144;
        *((_QWORD *)v13 + 20) = v13 + 176;
        *((_QWORD *)v13 + 24) = v13 + 208;
        *((_QWORD *)v13 + 28) = v13 + 240;
        *((_QWORD *)v13 + 32) = v13 + 272;
        *((_QWORD *)v13 + 36) = v13 + 304;
        *((_QWORD *)v13 + 40) = v13 + 336;
        *((_QWORD *)v13 + 44) = v13 + 368;
        *((_QWORD *)v13 + 48) = v13 + 400;
        *((_QWORD *)v13 + 52) = v13 + 432;
        *((_QWORD *)v13 + 13) = 0;
        v13[112] = 0;
        *((_QWORD *)v13 + 17) = 0;
        v13[144] = 0;
        *((_QWORD *)v13 + 21) = 0;
        v13[176] = 0;
        *((_QWORD *)v13 + 25) = 0;
        v13[208] = 0;
        *((_QWORD *)v13 + 29) = 0;
        v13[240] = 0;
        *((_QWORD *)v13 + 33) = 0;
        v13[272] = 0;
        *((_QWORD *)v13 + 37) = 0;
        v13[304] = 0;
        *((_QWORD *)v13 + 41) = 0;
        v13[336] = 0;
        *((_QWORD *)v13 + 45) = 0;
        v13[368] = 0;
        *((_QWORD *)v13 + 49) = 0;
        v13[400] = 0;
        *((_QWORD *)v13 + 53) = 0x800000000LL;
        v14 = &v112;
        *((_QWORD *)v13 + 66) = v13 + 544;
        *((_QWORD *)v13 + 67) = 0x600000000LL;
      }
      v110 = v13;
    }
    v13[*v13 + 1] = 5;
    v15 = v110;
    v16 = *(unsigned __int8 *)v110;
    *(_BYTE *)v110 = v16 + 1;
    v15[v16 + 2] = a4;
    sub_1A5FC70(a1, (__int64)v116, &v110, (__int64)v14, 1);
    v17 = (void **)v110;
    if ( v110 )
    {
      v18 = v111;
      if ( v111 )
      {
        if ( (unsigned __int64)v110 < v111 || (unsigned __int64)v110 > v111 + 14848 )
        {
          v19 = *((void ***)v110 + 66);
          v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v110 + 134)];
          if ( v19 != v20 )
          {
            do
            {
              while ( 1 )
              {
                v20 -= 8;
                v21 = (void **)v20[3];
                if ( v21 == v20 + 5 )
                  break;
                v98 = v20;
                v90 = v19;
                operator delete(v21);
                v19 = v90;
                v20 = v98;
                if ( v90 == v98 )
                  goto LABEL_12;
              }
            }
            while ( v19 != v20 );
LABEL_12:
            v20 = (void **)v17[66];
          }
          if ( v20 != v17 + 68 )
            free(v20);
          v22 = (void **)v17[52];
          if ( v22 != v17 + 54 )
            free(v22);
          v23 = v17 + 48;
          v24 = v17 + 8;
          do
          {
            while ( *v23 != v23 + 2 )
            {
              v91 = v23;
              operator delete(*v23);
              v23 = v91 - 4;
              if ( v24 == v91 - 4 )
                goto LABEL_20;
            }
            v23 -= 4;
          }
          while ( v23 != v24 );
LABEL_20:
          operator delete(v17, 0x3A0u);
        }
        else
        {
          v67 = *(unsigned int *)(v111 + 14976);
          *(_DWORD *)(v111 + 14976) = v67 + 1;
          *(_QWORD *)(v18 + 8 * v67 + 14848) = v17;
        }
      }
    }
    v25 = (void **)v112;
    if ( v112 )
    {
      v26 = v113;
      if ( v113 )
      {
        if ( (unsigned __int64)v112 < v113 || (unsigned __int64)v112 > v113 + 14848 )
        {
          v27 = *((void ***)v112 + 66);
          v28 = &v27[8 * (unsigned __int64)*((unsigned int *)v112 + 134)];
          if ( v27 != v28 )
          {
            do
            {
              while ( 1 )
              {
                v28 -= 8;
                v29 = (void **)v28[3];
                if ( v29 == v28 + 5 )
                  break;
                v99 = v28;
                v92 = v27;
                operator delete(v29);
                v27 = v92;
                v28 = v99;
                if ( v92 == v99 )
                  goto LABEL_27;
              }
            }
            while ( v27 != v28 );
LABEL_27:
            v28 = (void **)v25[66];
          }
          if ( v28 != v25 + 68 )
            free(v28);
          v30 = (void **)v25[52];
          if ( v30 != v25 + 54 )
            free(v30);
          v31 = v25 + 48;
          v32 = v25 + 8;
          do
          {
            while ( *v31 != v31 + 2 )
            {
              v93 = v31;
              operator delete(*v31);
              v31 = v93 - 4;
              if ( v93 - 4 == v32 )
                goto LABEL_35;
            }
            v31 -= 4;
          }
          while ( v32 != v31 );
LABEL_35:
          operator delete(v25, 0x3A0u);
        }
        else
        {
          v66 = *(unsigned int *)(v113 + 14976);
          *(_DWORD *)(v113 + 14976) = v66 + 1;
          *(_QWORD *)(v26 + 8 * v66 + 14848) = v25;
        }
      }
    }
    if ( v118 && (v103 = *(_QWORD *)v117) != 0 )
    {
      v33 = *(_BYTE *)(*(_QWORD *)v117 + 28LL) & 0x7F;
      if ( (unsigned int)v33 - 53 <= 1 || ((v33 + 52) & 0x7Fu) <= 1 )
        v103 = sub_B72ED0(v103);
    }
    else
    {
LABEL_68:
      v103 = 0;
    }
    v45 = (unsigned __int64 *)v121;
    v106 = v122;
    if ( v122 != v121 )
    {
      do
      {
        v46 = *v45;
        if ( *v45 )
        {
          v47 = v45[1];
          if ( v47 )
          {
            if ( v46 < v47 || v46 > v47 + 14848 )
            {
              v48 = *(_QWORD **)(v46 + 528);
              v49 = &v48[8 * (unsigned __int64)*(unsigned int *)(v46 + 536)];
              if ( v48 != v49 )
              {
                do
                {
                  while ( 1 )
                  {
                    v49 -= 8;
                    v50 = (_QWORD *)v49[3];
                    if ( v50 == v49 + 5 )
                      break;
                    v100 = v49;
                    v94 = v48;
                    operator delete(v50);
                    v48 = v94;
                    v49 = v100;
                    if ( v94 == v100 )
                      goto LABEL_76;
                  }
                }
                while ( v48 != v49 );
LABEL_76:
                v49 = *(_QWORD **)(v46 + 528);
              }
              if ( v49 != (_QWORD *)(v46 + 544) )
                free(v49);
              v51 = *(void **)(v46 + 416);
              if ( v51 != (void *)(v46 + 432) )
                free(v51);
              v52 = (void **)(v46 + 384);
              v53 = (void **)(v46 + 64);
              do
              {
                while ( *v52 != v52 + 2 )
                {
                  v101 = v53;
                  v95 = v52;
                  operator delete(*v52);
                  v53 = v101;
                  v52 = v95 - 4;
                  if ( v101 == v95 - 4 )
                    goto LABEL_84;
                }
                v52 -= 4;
              }
              while ( v52 != v53 );
LABEL_84:
              operator delete((void *)v46, 0x3A0u);
            }
            else
            {
              v54 = *(unsigned int *)(v47 + 14976);
              *(_DWORD *)(v47 + 14976) = v54 + 1;
              *(_QWORD *)(v47 + 8 * v54 + 14848) = v46;
            }
          }
        }
        v45 += 3;
      }
      while ( v106 != v45 );
      v45 = (unsigned __int64 *)v121;
    }
    if ( v45 )
      operator delete(v45);
    if ( v117 != &v119 )
      free(v117);
  }
  if ( !v103 )
    goto LABEL_61;
LABEL_60:
  if ( sub_B8BED0(v103) )
  {
    sub_19116A0((__m128 *)a1, a3, v103, 1u, v40, v41, v6, (__m128)0LL);
    v34 = sub_C98D20(*(_QWORD **)(a1 + 248), a3, v103, a5, a6, 0, nullptr, 0);
    v35 = v89;
    goto LABEL_43;
  }
LABEL_61:
  sub_168B9F0((__int64)v116, (__int64 *)(a1 + 8), a5, 0xEA5u, 0);
  if ( v123 )
  {
    v42 = v119;
    if ( !v119 )
    {
      v68 = v120;
      v69 = *(_DWORD *)(v120 + 14976);
      if ( v69 )
      {
        v74 = (unsigned int)(v69 - 1);
        *(_DWORD *)(v120 + 14976) = v74;
        v42 = *(unsigned __int8 **)(v68 + 8 * v74 + 14848);
        v75 = *((unsigned int *)v42 + 134);
        *v42 = 0;
        v76 = *((_QWORD *)v42 + 66);
        *((_DWORD *)v42 + 106) = 0;
        v77 = v76 + (v75 << 6);
        while ( v76 != v77 )
        {
          while ( 1 )
          {
            v77 -= 64;
            v78 = *(void **)(v77 + 24);
            if ( v78 == (void *)(v77 + 40) )
              break;
            operator delete(v78);
            if ( v76 == v77 )
              goto LABEL_128;
          }
        }
LABEL_128:
        *((_DWORD *)v42 + 134) = 0;
      }
      else
      {
        v42 = (unsigned __int8 *)operator new(0x3A0u);
        *v42 = 0;
        *((_QWORD *)v42 + 12) = v42 + 112;
        *((_QWORD *)v42 + 16) = v42 + 144;
        *((_QWORD *)v42 + 20) = v42 + 176;
        *((_QWORD *)v42 + 24) = v42 + 208;
        *((_QWORD *)v42 + 28) = v42 + 240;
        *((_QWORD *)v42 + 32) = v42 + 272;
        *((_QWORD *)v42 + 36) = v42 + 304;
        *((_QWORD *)v42 + 40) = v42 + 336;
        *((_QWORD *)v42 + 44) = v42 + 368;
        *((_QWORD *)v42 + 48) = v42 + 400;
        *((_QWORD *)v42 + 52) = v42 + 432;
        *((_QWORD *)v42 + 13) = 0;
        v42[112] = 0;
        *((_QWORD *)v42 + 17) = 0;
        v42[144] = 0;
        *((_QWORD *)v42 + 21) = 0;
        v42[176] = 0;
        *((_QWORD *)v42 + 25) = 0;
        v42[208] = 0;
        *((_QWORD *)v42 + 29) = 0;
        v42[240] = 0;
        *((_QWORD *)v42 + 33) = 0;
        v42[272] = 0;
        *((_QWORD *)v42 + 37) = 0;
        v42[304] = 0;
        *((_QWORD *)v42 + 41) = 0;
        v42[336] = 0;
        *((_QWORD *)v42 + 45) = 0;
        v42[368] = 0;
        *((_QWORD *)v42 + 49) = 0;
        v42[400] = 0;
        *((_QWORD *)v42 + 53) = 0x800000000LL;
        *((_QWORD *)v42 + 66) = v42 + 544;
        *((_QWORD *)v42 + 67) = 0x600000000LL;
      }
      v119 = v42;
    }
    v42[*v42 + 1] = 5;
    v43 = v119;
    v44 = *v119;
    *v119 = v44 + 1;
    *(_QWORD *)&v43[8 * v44 + 16] = a4;
  }
  else if ( v125 )
  {
    v57 = sub_168B9E0(v116);
    v60 = v117;
    if ( v117 )
      v60 = (void *)(*(__int64 (__fastcall **)(void *, double))(*(_QWORD *)v117 + 32LL))(v117, *(double *)v6.m128_u64);
    v114[0] = (__int64)v60;
    v61 = sub_1587BC0(v57, v114, v55, v56, v58, v59);
    v62 = *v61 + 32LL * v124;
    v63 = *(unsigned __int8 **)(v62 + 8);
    if ( !v63 )
    {
      v72 = *(_QWORD *)(v62 + 16);
      v73 = *(_DWORD *)(v72 + 14976);
      if ( v73 )
      {
        v84 = (unsigned int)(v73 - 1);
        *(_DWORD *)(v72 + 14976) = v84;
        v63 = *(unsigned __int8 **)(v72 + 8 * v84 + 14848);
        v85 = *((unsigned int *)v63 + 134);
        *v63 = 0;
        v86 = *((_QWORD *)v63 + 66);
        *((_DWORD *)v63 + 106) = 0;
        v87 = v86 + (v85 << 6);
        while ( v86 != v87 )
        {
          while ( 1 )
          {
            v87 -= 64;
            v88 = *(void **)(v87 + 24);
            if ( v88 == (void *)(v87 + 40) )
              break;
            v97 = v86;
            operator delete(v88);
            v86 = v97;
            if ( v97 == v87 )
              goto LABEL_138;
          }
        }
LABEL_138:
        *((_DWORD *)v63 + 134) = 0;
      }
      else
      {
        v63 = (unsigned __int8 *)operator new(0x3A0u);
        *v63 = 0;
        *((_QWORD *)v63 + 12) = v63 + 112;
        *((_QWORD *)v63 + 16) = v63 + 144;
        *((_QWORD *)v63 + 20) = v63 + 176;
        *((_QWORD *)v63 + 24) = v63 + 208;
        *((_QWORD *)v63 + 28) = v63 + 240;
        *((_QWORD *)v63 + 32) = v63 + 272;
        *((_QWORD *)v63 + 36) = v63 + 304;
        *((_QWORD *)v63 + 40) = v63 + 336;
        *((_QWORD *)v63 + 44) = v63 + 368;
        *((_QWORD *)v63 + 48) = v63 + 400;
        *((_QWORD *)v63 + 52) = v63 + 432;
        *((_QWORD *)v63 + 13) = 0;
        v63[112] = 0;
        *((_QWORD *)v63 + 17) = 0;
        v63[144] = 0;
        *((_QWORD *)v63 + 21) = 0;
        v63[176] = 0;
        *((_QWORD *)v63 + 25) = 0;
        v63[208] = 0;
        *((_QWORD *)v63 + 29) = 0;
        v63[240] = 0;
        *((_QWORD *)v63 + 33) = 0;
        v63[272] = 0;
        *((_QWORD *)v63 + 37) = 0;
        v63[304] = 0;
        *((_QWORD *)v63 + 41) = 0;
        v63[336] = 0;
        *((_QWORD *)v63 + 45) = 0;
        v63[368] = 0;
        *((_QWORD *)v63 + 49) = 0;
        v63[400] = 0;
        *((_QWORD *)v63 + 53) = 0x800000000LL;
        *((_QWORD *)v63 + 66) = v63 + 544;
        *((_QWORD *)v63 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v62 + 8) = v63;
    }
    v63[*v63 + 1] = 5;
    v64 = *(_BYTE **)(v62 + 8);
    v65 = (unsigned __int8)*v64;
    *v64 = v65 + 1;
    *(_QWORD *)&v64[8 * v65 + 16] = a4;
  }
  v34 = 1;
  sub_15F7200(v116);
  if ( !BYTE3(v136) )
    goto LABEL_53;
LABEL_44:
  if ( (_DWORD)v126 == 5 )
  {
    if ( !BYTE4(v136) )
      goto LABEL_47;
    goto LABEL_55;
  }
  if ( v130[1] && (*(_BYTE *)(v132[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v132, (__int64)&v126);
    goto LABEL_53;
  }
LABEL_47:
  if ( v130[0] )
    sub_1A39780((char *)v130[0]);
  if ( ptr != v129 )
    free(ptr);
  return v34;
}
