__int64 __fastcall sub_9C1DE0(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, _QWORD *a6, __int64 a7)
{
  __int64 *v7; // r13
  unsigned int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  _QWORD *v18; // r13
  char **v19; // r10
  __int64 v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  int v25; // ecx
  char v26; // cl
  unsigned int v27; // r10d
  int v28; // ecx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  char **v31; // r8
  __int64 v32; // r10
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // r10
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r10
  __int64 *v39; // rcx
  __int64 v40; // rdx
  char **v41; // r10
  unsigned __int64 v42; // rdx
  __int64 v43; // rbx
  __m128 v44; // xmm0
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rbp
  __int64 v48; // r14
  int v49; // eax
  unsigned __int64 v50; // rsi
  __int64 *v51; // r13
  unsigned __int64 v52; // rbx
  __int64 v53; // rdx
  unsigned __int64 v54; // rbp
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  unsigned int v57; // r12d
  void *v58; // rdi
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdi
  unsigned int v61; // r13d
  unsigned int v62; // esi
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  void *v67; // rdi
  __int64 v68; // rax
  _QWORD *v69; // rax
  unsigned __int64 v70; // r10
  unsigned int v71; // r11d
  __int64 *v72; // r8
  unsigned int v73; // r11d
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r10
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rsi
  char **v80; // rsi
  void **v81; // rdi
  _QWORD *v82; // r10
  __int64 v83; // rax
  char **v84; // r10
  __int64 v85; // rbx
  int v86; // eax
  unsigned __int64 v88; // rax
  void *v89; // rdi
  unsigned int v90; // ecx
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  unsigned int v93; // eax
  unsigned int v94; // eax
  unsigned int v95; // esi
  __int64 v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // rbx
  size_t v99; // rdx
  unsigned __int64 v100; // rsi
  unsigned __int64 v101; // rax
  int v102; // ecx
  unsigned int v103; // ecx
  int v104; // r13d
  __int64 *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rcx
  unsigned __int64 v108; // rax
  void *v109; // rdi
  _QWORD *v110; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v111; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD *v112; // [rsp+18h] [rbp-C0h]
  __int64 v113; // [rsp+20h] [rbp-B8h]
  __int64 *v114; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v115; // [rsp+30h] [rbp-A8h]
  _QWORD *v116; // [rsp+38h] [rbp-A0h]
  __int64 v117; // [rsp+40h] [rbp-98h]
  _QWORD *v118; // [rsp+48h] [rbp-90h]
  _OWORD v119[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v120; // [rsp+70h] [rbp-68h]
  _QWORD v121[12]; // [rsp+78h] [rbp-60h] BYREF

  v7 = a1;
  v9 = *((_DWORD *)a1 + 12);
  v111 = a2;
  v10 = *a6;
  v112 = a3;
  v113 = a5;
  *(_QWORD *)(v10 + 8LL * (v9 >> 6)) |= 1LL << v9;
  v11 = *(_QWORD *)(a4 + 88);
  if ( (v11 & 1) != 0 )
  {
    *(_QWORD *)(a4 + 88) = v11 & 0xFC00000000000000LL | 1;
  }
  else
  {
    v67 = *(void **)v11;
    v68 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
    if ( (void *)v68 != v67 )
    {
      v110 = a6;
      memset(v67, 0, 8 * ((unsigned __int64)(v68 - (_QWORD)v67 - 8) >> 3) + 8);
      a6 = v110;
    }
  }
  v12 = v7[7];
  v13 = v7[8];
  LOBYTE(v110) = 1;
  if ( v12 != v13 )
  {
    v14 = v13;
    v114 = v7;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)v12 )
          goto LABEL_8;
        v15 = *(unsigned int *)(*(_QWORD *)v12 + 48LL);
        v16 = *(_QWORD *)(*a6 + 8LL * ((unsigned int)v15 >> 6));
        if ( !_bittest64(&v16, v15) )
          goto LABEL_8;
        v17 = *(_QWORD *)(a4 + 88);
        v18 = (_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v15);
        v19 = (char **)*v18;
        v20 = *v18 & 1LL;
        if ( !(_BYTE)v110 )
          break;
        if ( (v17 & 1) != 0 )
        {
          if ( !v20 )
          {
            v115 = (unsigned __int64)a6;
            v110 = v19;
            v83 = operator new(0x48u);
            v84 = (char **)v110;
            a6 = (_QWORD *)v115;
            v85 = v83;
            *(_QWORD *)v83 = v83 + 16;
            *(_QWORD *)(v83 + 8) = 0x600000000LL;
            if ( *((_DWORD *)v84 + 2) )
            {
              sub_99FE40((void **)v83, v84);
              a6 = (_QWORD *)v115;
              v84 = (char **)v110;
            }
            v86 = *((_DWORD *)v84 + 16);
            LOBYTE(v110) = 0;
            *(_QWORD *)(a4 + 88) = v85;
            *(_DWORD *)(v85 + 64) = v86;
            goto LABEL_8;
          }
        }
        else
        {
          if ( !v20 )
          {
            v80 = (char **)*v18;
            v81 = *(void ***)(a4 + 88);
            v115 = (unsigned __int64)a6;
            v110 = v19;
            sub_99FE40(v81, v80);
            v82 = v110;
            a6 = (_QWORD *)v115;
            LOBYTE(v110) = 0;
            *(_DWORD *)(v17 + 64) = *((_DWORD *)v82 + 16);
            goto LABEL_8;
          }
          if ( v17 )
          {
            v58 = *(void **)v17;
            if ( *(_QWORD *)v17 != v17 + 16 )
            {
              v110 = a6;
              free(v58);
              a6 = v110;
            }
            v110 = a6;
            operator delete((void *)v17, 0x48u);
            v19 = (char **)*v18;
            a6 = v110;
          }
        }
        *(_QWORD *)(a4 + 88) = v19;
        LOBYTE(v110) = 0;
LABEL_8:
        v12 += 16;
        if ( v12 == v14 )
          goto LABEL_51;
      }
      v21 = v20 ? (unsigned __int64)v19 >> 58 : *((unsigned int *)v19 + 16);
      if ( (v17 & 1) == 0 )
        break;
      if ( v21 < v17 >> 58 )
        v21 = v17 >> 58;
      if ( v21 <= 0x39 )
      {
        v43 = (v21 << 57) | ~(-1LL << (v17 >> 58)) & (v17 >> 1);
        v29 = 2 * (((unsigned __int64)(2 * v43) >> 58 << 57) | ~(-1LL << ((unsigned __int64)(2 * v43) >> 58)) & v43) + 1;
        *(_QWORD *)(a4 + 88) = v29;
        v31 = (char **)*v18;
        v32 = *v18 & 1LL;
        goto LABEL_49;
      }
      v116 = a6;
      v115 = v21;
      v69 = (_QWORD *)operator new(0x48u);
      v70 = v115;
      a6 = v116;
      v29 = (unsigned __int64)v69;
      v71 = v115 + 63;
      v72 = v69 + 2;
      v69[1] = 0x600000000LL;
      v73 = v71 >> 6;
      *v69 = v69 + 2;
      if ( v73 > 6 )
      {
        v118 = a6;
        v117 = v70;
        LODWORD(v116) = v73;
        v115 = v73;
        sub_22134E0(v69, v72, v73, 8);
        v105 = (__int64 *)memset(*(void **)v29, 0, 8 * v115);
        LODWORD(v70) = v117;
        v72 = v105;
        a6 = v118;
        *(_DWORD *)(v29 + 8) = (_DWORD)v116;
      }
      else
      {
        if ( v73 )
        {
          v91 = v73;
          v92 = (v29 + 24) & 0xFFFFFFFFFFFFFFF8LL;
          *(_QWORD *)(v29 + 16) = 0;
          v72[v91 - 1] = 0;
          v93 = ((_DWORD)v72 - v92 + v91 * 8) & 0xFFFFFFF8;
          if ( v93 >= 8 )
          {
            v94 = v93 & 0xFFFFFFF8;
            v95 = 0;
            do
            {
              v96 = v95;
              v95 += 8;
              *(_QWORD *)(v92 + v96) = 0;
            }
            while ( v95 < v94 );
          }
        }
        *(_DWORD *)(v29 + 8) = v73;
      }
      v74 = *(_QWORD *)(a4 + 88);
      *(_DWORD *)(v29 + 64) = v70;
      v75 = v74 >> 58;
      v76 = (v74 >> 1) & ~(-1LL << (v74 >> 58));
      if ( v74 >> 58 )
      {
        v77 = *v72;
        v78 = 0;
        do
        {
          v79 = (1LL << v78) | v77;
          v77 &= ~(1LL << v78);
          if ( ((v76 >> v78) & 1) != 0 )
            v77 = v79;
          ++v78;
        }
        while ( v78 != v75 );
        *v72 = v77;
      }
      *(_QWORD *)(a4 + 88) = v29;
      v30 = v29 & 1;
LABEL_24:
      v31 = (char **)*v18;
      v32 = *v18 & 1LL;
      if ( !v30 )
      {
        if ( !v32 )
        {
          v61 = *((_DWORD *)v31 + 16);
          if ( *(_DWORD *)(v29 + 64) < v61 )
          {
            v100 = *(unsigned int *)(v29 + 8);
            v101 = v100;
            v102 = *(_DWORD *)(v29 + 64) & 0x3F;
            if ( v102 )
              *(_QWORD *)(*(_QWORD *)v29 + 8 * v100 - 8) &= ~(-1LL << v102);
            *(_DWORD *)(v29 + 64) = v61;
            v103 = (v61 + 63) >> 6;
            if ( v103 != v100 )
            {
              if ( v103 >= v100 )
              {
                v108 = v103 - v100;
                if ( v103 > (unsigned __int64)*(unsigned int *)(v29 + 12) )
                {
                  v118 = a6;
                  v117 = 0;
                  v116 = v31;
                  v115 = v103 - v100;
                  sub_22134E0(v29, v29 + 16, v103, 8);
                  v100 = *(unsigned int *)(v29 + 8);
                  v108 = v115;
                  v61 = *(_DWORD *)(v29 + 64);
                  a6 = v118;
                  v103 = v115 + v100;
                  v32 = 0;
                  v31 = (char **)v116;
                }
                v109 = (void *)(*(_QWORD *)v29 + 8 * v100);
                if ( v108 )
                {
                  v118 = a6;
                  v117 = v32;
                  v116 = v31;
                  LODWORD(v115) = v103;
                  memset(v109, 0, 8 * v108);
                  v103 = v115;
                  v31 = (char **)v116;
                  v32 = v117;
                  a6 = v118;
                }
              }
              *(_DWORD *)(v29 + 8) = v103;
              v101 = v103;
            }
            v104 = v61 & 0x3F;
            if ( v104 )
              *(_QWORD *)(*(_QWORD *)v29 + 8 * v101 - 8) &= ~(-1LL << v104);
          }
          v62 = *((_DWORD *)v31 + 2);
          if ( v62 )
          {
            v63 = (__int64)*v31;
            v64 = *(_QWORD **)v29;
            v65 = v62 - 1;
            if ( ((unsigned __int64)*v31 >= *(_QWORD *)v29 + 16LL || *(_QWORD *)v29 >= (unsigned __int64)(*v31 + 16))
              && (unsigned int)v65 > 1 )
            {
              do
              {
                *(__m128i *)((char *)v64 + v32) = _mm_or_si128(
                                                    _mm_loadu_si128((const __m128i *)((char *)v64 + v32)),
                                                    _mm_loadu_si128((const __m128i *)(v63 + v32)));
                v32 += 16;
              }
              while ( 16LL * (v62 >> 1) != v32 );
              v66 = v62 & 0xFFFFFFFE;
              if ( v62 != (_DWORD)v66 )
                v64[v66] |= *(_QWORD *)(v63 + 8 * v66);
            }
            else
            {
              while ( 1 )
              {
                v64[v32] |= *(_QWORD *)(v63 + 8 * v32);
                if ( v32 == v65 )
                  break;
                ++v32;
              }
            }
          }
          goto LABEL_8;
        }
        v33 = (unsigned __int64)v31 >> 58;
        goto LABEL_27;
      }
LABEL_49:
      if ( !v32 )
      {
        v33 = *((unsigned int *)v31 + 16);
LABEL_27:
        if ( v33 )
        {
          v34 = 0;
          while ( 1 )
          {
            if ( (v29 & 1) != 0 )
            {
              v35 = v29 >> 58;
              v36 = ~(-1LL << (v29 >> 58));
              v37 = v36 & (v29 >> 1);
              if ( _bittest64((const __int64 *)&v37, v34) )
                goto LABEL_30;
            }
            else
            {
              v38 = v34 & 0x3F;
              v39 = (__int64 *)(*(_QWORD *)v29 + 8LL * ((unsigned int)v34 >> 6));
              v40 = *v39;
              if ( _bittest64(&v40, v38) )
                goto LABEL_35;
            }
            v41 = (char **)*v18;
            if ( (*v18 & 1) != 0 )
              v42 = ((((unsigned __int64)v41 >> 1) & ~(-1LL << (*v18 >> 58))) >> v34) & 1;
            else
              v42 = (*(_QWORD *)&(*v41)[8 * ((unsigned int)v34 >> 6)] >> v34) & 1LL;
            if ( (_BYTE)v42 )
            {
              if ( (v29 & 1) != 0 )
              {
                v35 = v29 >> 58;
                v36 = ~(-1LL << (v29 >> 58));
                v37 = v36 & (v29 >> 1);
LABEL_30:
                *(_QWORD *)(a4 + 88) = 2 * ((v35 << 57) | v36 & (v37 | (1LL << v34))) + 1;
                goto LABEL_31;
              }
              LOBYTE(v38) = v34 & 0x3F;
              v39 = (__int64 *)(*(_QWORD *)v29 + 8LL * ((unsigned int)v34 >> 6));
              v40 = *v39;
LABEL_35:
              *v39 = v40 | (1LL << v38);
              goto LABEL_31;
            }
            if ( (v29 & 1) != 0 )
              *(_QWORD *)(a4 + 88) = 2 * ((v29 >> 58 << 57) | ~((-1LL << (v29 >> 58)) | (1LL << v34)) & (v29 >> 1)) + 1;
            else
              *(_QWORD *)(*(_QWORD *)v29 + 8LL * ((unsigned int)v34 >> 6)) &= ~(1LL << v34);
LABEL_31:
            if ( v33 == ++v34 )
              goto LABEL_8;
            v29 = *(_QWORD *)(a4 + 88);
          }
        }
        goto LABEL_8;
      }
      v12 += 16;
      *(_QWORD *)(a4 + 88) = 2
                           * ((v29 >> 58 << 57)
                            | ~(-1LL << (v29 >> 58))
                            & (~(-1LL << ((unsigned __int64)v31 >> 58)) & ((unsigned __int64)v31 >> 1)
                             | ~(-1LL << (v29 >> 58)) & (v29 >> 1)))
                           + 1;
      if ( v12 == v14 )
      {
LABEL_51:
        v7 = v114;
        goto LABEL_52;
      }
    }
    v22 = *(unsigned int *)(v17 + 64);
    v23 = *(unsigned int *)(v17 + 8);
    v24 = v23;
    v25 = *(_DWORD *)(v17 + 64) & 0x3F;
    if ( v25 )
      *(_QWORD *)(*(_QWORD *)v17 + 8 * v23 - 8) &= ~(-1LL << v25);
    if ( v22 >= v21 )
      LODWORD(v21) = v22;
    v26 = v21;
    *(_DWORD *)(v17 + 64) = v21;
    v27 = (unsigned int)(v21 + 63) >> 6;
    if ( v27 != v23 )
    {
      if ( v27 >= v23 )
      {
        v88 = v27 - v23;
        if ( v27 > (unsigned __int64)*(unsigned int *)(v17 + 12) )
        {
          v116 = a6;
          v115 = v27 - v23;
          sub_22134E0(v17, v17 + 16, v27, 8);
          v23 = *(unsigned int *)(v17 + 8);
          v88 = v115;
          a6 = v116;
          v27 = v115 + v23;
        }
        v89 = (void *)(*(_QWORD *)v17 + 8 * v23);
        if ( v88 )
        {
          v116 = a6;
          LODWORD(v115) = v27;
          memset(v89, 0, 8 * v88);
          v27 = v115;
          a6 = v116;
        }
        v90 = *(_DWORD *)(v17 + 64);
        *(_DWORD *)(v17 + 8) = v27;
        v24 = v27;
        v28 = v90 & 0x3F;
        if ( !v28 )
          goto LABEL_23;
        goto LABEL_85;
      }
      *(_DWORD *)(v17 + 8) = v27;
      v24 = v27;
    }
    v28 = v26 & 0x3F;
    if ( !v28 )
    {
LABEL_23:
      v29 = *(_QWORD *)(a4 + 88);
      v30 = v29 & 1;
      goto LABEL_24;
    }
LABEL_85:
    *(_QWORD *)(*(_QWORD *)v17 + 8 * v24 - 8) &= ~(-1LL << v28);
    goto LABEL_23;
  }
LABEL_52:
  v110 = v7;
  v44 = _mm_loadh_ps((const double *)&v111);
  v120 = v113;
  v45 = v112[1];
  v119[0] = v44;
  v110 = v112;
  v119[1] = _mm_loadh_ps((const double *)&v110);
  v46 = sub_B685F0(v45);
  sub_9A02D0(v121, v46);
  v47 = v7[1];
  v48 = *v7;
  for ( v121[4] = a7; v48 != v47; v47 -= 16 )
  {
    v49 = *(_DWORD *)(v47 - 16) & 3 | (4 * (*(_QWORD *)(v47 - 8) & 3));
    if ( v49 <= 8 && (unsigned int)v49 > 5 )
      sub_9C12C0((__int64)v119, *(_QWORD *)(v47 - 16) & 0xFFFFFFFFFFFFFFFCLL);
  }
  v50 = v7[4] & 0xFFFFFFFFFFFFFFF8LL;
  if ( v50 && (*(_WORD *)v50 & 0x1FF) == 0x100 && *(_DWORD *)(v50 + 80) )
    sub_9C12C0((__int64)v119, v50);
  v51 = (__int64 *)(*(_QWORD *)(a4 + 8) + 8LL * *((unsigned int *)v7 + 12));
  v52 = *v51;
  v53 = *v51 & 1;
  if ( (*v51 & 1) != 0 )
  {
    v54 = *(_QWORD *)(a4 + 88);
    v55 = v52 >> 58;
    v56 = v54 & 1;
    if ( (v54 & 1) != 0 )
    {
LABEL_63:
      if ( v55 != v54 >> 58 )
        goto LABEL_64;
      goto LABEL_76;
    }
  }
  else
  {
    v54 = *(_QWORD *)(a4 + 88);
    v55 = *(unsigned int *)(v52 + 64);
    v56 = v54 & 1;
    if ( (v54 & 1) != 0 )
      goto LABEL_63;
  }
  if ( v55 != *(_DWORD *)(v54 + 64) )
  {
LABEL_64:
    if ( v53 )
    {
      if ( v56 )
      {
LABEL_66:
        *v51 = v54;
        return 1;
      }
      goto LABEL_130;
    }
    if ( v56 )
    {
LABEL_145:
      if ( v52 )
      {
        if ( *(_QWORD *)v52 != v52 + 16 )
          free(*(void **)v52);
        operator delete((void *)v52, 0x48u);
        v54 = *(_QWORD *)(a4 + 88);
      }
      goto LABEL_66;
    }
    goto LABEL_84;
  }
LABEL_76:
  if ( v53 )
  {
    if ( v56 )
    {
      if ( (~(-1LL << (v52 >> 58)) & (v52 >> 1)) != ((v54 >> 1) & ~(-1LL << (v54 >> 58))) )
        goto LABEL_66;
      return 0;
    }
  }
  else if ( !v56 )
  {
    if ( *(_DWORD *)(v52 + 64) == *(_DWORD *)(v54 + 64) )
    {
      v57 = 0;
      v99 = 8LL * *(unsigned int *)(v52 + 8);
      if ( !v99 || !memcmp(*(const void **)v52, *(const void **)v54, v99) )
        return v57;
    }
    goto LABEL_84;
  }
  if ( !v55 )
    return 0;
  v59 = (v52 >> 1) & ~(-1LL << (v52 >> 58));
  v60 = (v54 >> 1) & ~(-1LL << (v54 >> 58));
  if ( !v53 )
  {
    if ( v56 )
    {
      v107 = *v51 & 1;
      while ( ((v60 >> v107) & 1) == ((*(_QWORD *)(*(_QWORD *)v52 + 8LL * ((unsigned int)v107 >> 6)) >> v107) & 1) )
      {
        if ( v55 == ++v107 )
          return 0;
      }
      goto LABEL_145;
    }
    while ( ((*(_QWORD *)(*(_QWORD *)v54 + 8LL * ((unsigned int)v56 >> 6)) >> (v56 & 0x3F)) & 1) == ((*(_QWORD *)(*(_QWORD *)v52 + 8LL * ((unsigned int)v56 >> 6)) >> (v56 & 0x3F)) & 1) )
    {
      if ( v55 == ++v56 )
        return 0;
    }
LABEL_84:
    v57 = 1;
    sub_99FE40((void **)v52, (char **)v54);
    *(_DWORD *)(v52 + 64) = *(_DWORD *)(v54 + 64);
    return v57;
  }
  if ( v56 )
  {
    v106 = 0;
    while ( ((v60 >> v106) & 1) == ((v59 >> v106) & 1) )
    {
      if ( v55 == ++v106 )
        return 0;
    }
    goto LABEL_66;
  }
  v97 = 0;
  while ( ((*(_QWORD *)(*(_QWORD *)v54 + 8LL * ((unsigned int)v97 >> 6)) >> v97) & 1) == ((v59 >> v97) & 1) )
  {
    if ( v55 == ++v97 )
      return 0;
  }
LABEL_130:
  v98 = operator new(0x48u);
  *(_QWORD *)v98 = v98 + 16;
  *(_QWORD *)(v98 + 8) = 0x600000000LL;
  if ( *(_DWORD *)(v54 + 8) )
    sub_99FE40((void **)v98, (char **)v54);
  v57 = 1;
  *(_DWORD *)(v98 + 64) = *(_DWORD *)(v54 + 64);
  *v51 = v98;
  return v57;
}

