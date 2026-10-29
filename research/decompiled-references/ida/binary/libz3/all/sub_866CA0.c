__int64 __fastcall sub_866CA0(__int64 *a1, unsigned int a2, __int64 a3, unsigned int *a4, _QWORD *a5)
{
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **exception; // rbp
  char **v9; // rbp
  char v11; // dl
  __int64 v12; // r15
  unsigned int *v14; // rbx
  int v15; // eax
  unsigned int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // r14
  char v21; // al
  unsigned int v22; // edx
  unsigned int v23; // r12d
  __int64 v24; // r13
  __int16 v25; // ax
  char v26; // al
  __int64 v27; // rax
  unsigned int *v28; // r14
  unsigned int v29; // edx
  unsigned int *v30; // r13
  __int64 v31; // rax
  _QWORD *v32; // rsi
  int v33; // edx
  _QWORD *v34; // r15
  unsigned int *v35; // rcx
  int v36; // edx
  _QWORD *v37; // r15
  _BYTE *v38; // rdi
  __int64 v39; // rdi
  __int64 (*v40)(void); // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 (*v43)(void); // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r13
  _QWORD *v47; // rcx
  unsigned int v48; // r12d
  __int64 v49; // r14
  __int64 v50; // r14
  char v51; // al
  unsigned int v52; // r12d
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // r12
  char *v58; // rax
  char *v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r12
  char *v63; // rax
  _QWORD *v64; // rdi
  unsigned __int64 v65; // rax
  __int64 v66; // rsi
  __int16 v67; // ax
  _QWORD *v68; // rax
  unsigned int v69; // edx
  size_t v70; // rsi
  unsigned int v71; // r15d
  unsigned int *v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned int v76; // r12d
  unsigned int v77; // edx
  size_t v78; // rsi
  unsigned int v79; // r15d
  unsigned int *v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // r8
  unsigned __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 (*v91)(void); // rax
  __int64 v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rdi
  int v95; // eax
  __m128i *v96; // rdi
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // r14
  _QWORD *v99; // r13
  unsigned int v100; // eax
  unsigned int v101; // r12d
  size_t v102; // rdi
  unsigned int *v103; // rsi
  _QWORD *v104; // rdi
  __int64 v105; // r8
  unsigned __int64 v106; // rax
  __int64 v107; // r8
  unsigned int v108; // esi
  _QWORD *v109; // rax
  _QWORD *v110; // rdx
  unsigned int v111; // eax
  __int64 v112; // rcx
  int v113; // eax
  __int64 *v114; // rcx
  _QWORD *v115; // rcx
  unsigned int v116; // r13d
  unsigned int v117; // eax
  char v118; // al
  unsigned int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  unsigned int v122; // r12d
  unsigned int v123; // edx
  size_t v124; // rsi
  unsigned int v125; // r14d
  unsigned int *v126; // rax
  unsigned int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 j; // rax
  __int64 v131; // rax
  __int64 i; // rax
  unsigned int v133; // r12d
  unsigned int v134; // ecx
  unsigned int *v135; // rax
  __int64 v136; // rcx
  _QWORD *v137; // rax
  _QWORD *v138; // rdx
  __int64 k; // rax
  _QWORD *v141; // [rsp+10h] [rbp-1C8h]
  __int64 v142; // [rsp+10h] [rbp-1C8h]
  _QWORD *v143; // [rsp+10h] [rbp-1C8h]
  unsigned int *v144; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v145; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v146; // [rsp+10h] [rbp-1C8h]
  unsigned int v147; // [rsp+10h] [rbp-1C8h]
  _QWORD *v148; // [rsp+10h] [rbp-1C8h]
  unsigned int v151; // [rsp+34h] [rbp-1A4h]
  _QWORD *v153; // [rsp+40h] [rbp-198h]
  _QWORD *v154; // [rsp+40h] [rbp-198h]
  __int64 v155; // [rsp+40h] [rbp-198h]
  __int64 v156; // [rsp+40h] [rbp-198h]
  __int64 v157[4]; // [rsp+60h] [rbp-178h] BYREF
  void *v158; // [rsp+80h] [rbp-158h]
  __int64 v159; // [rsp+88h] [rbp-150h]
  _QWORD v160[16]; // [rsp+90h] [rbp-148h] BYREF
  void *ptr; // [rsp+110h] [rbp-C8h]
  __int64 v162; // [rsp+118h] [rbp-C0h]
  _BYTE v163[184]; // [rsp+120h] [rbp-B8h] BYREF

  v11 = *((_BYTE *)a4 + 6);
  if ( (v11 & 1) != 0 )
    return *(_QWORD *)(a1[20] + 8LL * *a4);
  if ( !*((_WORD *)a4 + 2) && (*((_BYTE *)a4 + 30) & 1) != 0 )
  {
    v39 = *a1;
    v40 = *(__int64 (**)(void))(*(_QWORD *)v39 + 440LL);
    if ( (char *)v40 == (char *)sub_79F010 )
      v41 = v39 + 1592;
    else
      v41 = v40();
    v12 = *(_QWORD *)(v41 + 128);
    if ( v12 )
    {
      v42 = *a4;
      if ( (unsigned int)v42 >= *(_DWORD *)(v12 - 4) )
        return 0;
      else
        return *(_QWORD *)(v12 + 8 * v42);
    }
    return v12;
  }
  v14 = a4;
  v158 = v160;
  ptr = v163;
  v160[0] = a4;
  v162 = 0x1000000000LL;
  v151 = a2 - 1;
  v159 = 0x1000000001LL;
  v15 = 1;
  while ( 1 )
  {
    if ( (v11 & 1) != 0 )
      goto LABEL_18;
    v25 = *((_WORD *)v14 + 2);
    if ( v25 )
    {
      if ( v25 == 2 )
        goto LABEL_93;
      if ( v25 != 1 )
        break;
LABEL_8:
      v16 = v14[4];
      if ( v16 >= a2 )
        break;
      v17 = (_QWORD *)a1[20];
      v18 = *v14;
      v141 = (_QWORD *)(a3 + 8LL * (v151 - v16));
      if ( v17 )
      {
        v19 = *((unsigned int *)v17 - 1);
        if ( (unsigned int)v18 < (unsigned int)v19 )
        {
          v20 = (unsigned int)v18;
          goto LABEL_12;
        }
        v76 = v18 + 1;
        if ( (unsigned int)v19 >= (int)v18 + 1 )
        {
          *((_DWORD *)v17 - 1) = v76;
          v20 = *v14;
          goto LABEL_12;
        }
      }
      else
      {
        v76 = v18 + 1;
        if ( (_DWORD)v18 == -1 )
        {
          v20 = 0xFFFFFFFFLL;
          goto LABEL_12;
        }
        v84 = (_QWORD *)sub_186B270(0x18u);
        v17 = v84 + 1;
        v19 = 0;
        a1[20] = (__int64)(v84 + 1);
        *v84 = 2;
      }
      while ( 1 )
      {
        v81 = *((_DWORD *)v17 - 2);
        if ( v81 >= v76 )
          break;
        v77 = (3 * v81 + 1) >> 1;
        v78 = 8 * v77 + 8;
        v79 = v77;
        if ( 8 * v81 + 8 >= (unsigned int)v78 || v81 >= v77 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v157, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v157);
          sub_233E40((__int64)v157);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v80 = (unsigned int *)sub_186B300(v17 - 1, v78);
        v17 = v80 + 2;
        *v80 = v79;
        a1[20] = (__int64)(v80 + 2);
      }
      v82 = 8 * v19;
      *((_DWORD *)v17 - 1) = v76;
      v20 = *v14;
      v83 = 8LL * v76;
      if ( v82 != v83 )
      {
        v154 = v17;
        memset(&v17[(unsigned __int64)v82 / 8], 0, v83 - v82);
        v17 = v154;
      }
LABEL_12:
      v17[v18] = *v141;
      v12 = v17[v20];
      if ( !v12 )
        goto LABEL_37;
      v21 = *((_BYTE *)v14 + 6);
      if ( (v21 & 1) != 0 )
        goto LABEL_17;
      *((_BYTE *)v14 + 6) = v21 | 1;
      v22 = *((_DWORD *)a1 + 6);
      v23 = *((_DWORD *)a1 + 7);
      if ( v22 >= v23 )
      {
        v53 = 2 * v23;
        v89 = sub_186B270(8 * v53);
        v22 = *((_DWORD *)a1 + 6);
        v55 = (__int64 *)a1[2];
        v24 = v89;
        if ( v22 )
        {
          if ( v22 - 1 <= 2 || (__int64 *)v89 == v55 + 1 )
          {
            for ( i = 0; i != v22; ++i )
              *(_QWORD *)(v24 + i * 8) = v55[i];
          }
          else
          {
            v90 = 0;
            do
            {
              *(__m128i *)(v24 + v90 * 8) = _mm_loadu_si128((const __m128i *)&v55[v90]);
              v90 += 2;
            }
            while ( v90 != 2LL * (v22 >> 1) );
            if ( (v22 & 1) != 0 )
              *(_QWORD *)(v24 + 8LL * (v22 & 0xFFFFFFFE)) = v55[v22 & 0xFFFFFFFE];
          }
        }
        if ( !v55 || v55 == a1 + 4 )
          goto LABEL_70;
LABEL_69:
        sub_186B220(v55);
        v22 = *((_DWORD *)a1 + 6);
LABEL_70:
        a1[2] = v24;
        *((_DWORD *)a1 + 7) = v53;
        goto LABEL_16;
      }
      goto LABEL_15;
    }
    v26 = *((_BYTE *)v14 + 30);
    if ( (v26 & 1) != 0 )
      goto LABEL_50;
    if ( (v26 & 2) == 0 )
      goto LABEL_24;
LABEL_93:
    if ( !(unsigned __int8)sub_1622630(a1 + 25, v14) )
    {
LABEL_50:
      v43 = *(__int64 (**)(void))(*(_QWORD *)*a1 + 440LL);
      if ( (char *)v43 == (char *)sub_79F010 )
        v44 = *a1 + 1592;
      else
        v44 = v43();
      v45 = *(_QWORD *)(v44 + 128);
      v46 = *v14;
      v47 = (_QWORD *)a1[20];
      if ( v45 && (unsigned int)v46 < *(_DWORD *)(v45 - 4) )
      {
        v48 = v46 + 1;
        v142 = *(_QWORD *)(v45 + 8LL * (unsigned int)v46);
        if ( v47 )
          goto LABEL_55;
      }
      else
      {
        v142 = 0;
        if ( v47 )
        {
LABEL_55:
          v49 = *((unsigned int *)v47 - 1);
          if ( (unsigned int)v46 < (unsigned int)v49 )
          {
            v50 = (unsigned int)v46;
            goto LABEL_57;
          }
          v48 = v46 + 1;
          if ( (unsigned int)v49 >= (int)v46 + 1 )
          {
            *((_DWORD *)v47 - 1) = v48;
            v50 = *v14;
            goto LABEL_57;
          }
LABEL_103:
          while ( 1 )
          {
            v73 = *((_DWORD *)v47 - 2);
            if ( v73 >= v48 )
              break;
            v69 = (3 * v73 + 1) >> 1;
            v70 = 8 * v69 + 8;
            v71 = v69;
            if ( 8 * v73 + 8 >= (unsigned int)v70 || v73 >= v69 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v157, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v157);
              sub_233E40((__int64)v157);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v72 = (unsigned int *)sub_186B300(v47 - 1, v70);
            v47 = v72 + 2;
            *v72 = v71;
            a1[20] = (__int64)(v72 + 2);
          }
          v74 = 8 * v49;
          *((_DWORD *)v47 - 1) = v48;
          v50 = *v14;
          v75 = 8LL * v48;
          if ( v74 != v75 )
          {
            v153 = v47;
            memset(&v47[(unsigned __int64)v74 / 8], 0, v75 - v74);
            v47 = v153;
          }
LABEL_57:
          v47[v46] = v142;
          v12 = v47[v50];
          if ( !v12 )
            goto LABEL_37;
          v51 = *((_BYTE *)v14 + 6);
          if ( (v51 & 1) != 0 )
            goto LABEL_17;
          *((_BYTE *)v14 + 6) = v51 | 1;
          v22 = *((_DWORD *)a1 + 6);
          v52 = *((_DWORD *)a1 + 7);
          if ( v22 >= v52 )
          {
            v53 = 2 * v52;
            v54 = sub_186B270(8 * v53);
            v22 = *((_DWORD *)a1 + 6);
            v55 = (__int64 *)a1[2];
            v24 = v54;
            if ( !v22 )
              goto LABEL_67;
            if ( v22 - 1 <= 2 || (__int64 *)v54 == v55 + 1 )
            {
              for ( j = 0; j != v22; ++j )
                *(_QWORD *)(v24 + j * 8) = v55[j];
              goto LABEL_67;
            }
            v56 = 0;
            do
            {
              *(__m128i *)(v24 + v56 * 8) = _mm_loadu_si128((const __m128i *)&v55[v56]);
              v56 += 2;
            }
            while ( v56 != 2LL * (v22 >> 1) );
LABEL_65:
            if ( (v22 & 1) != 0 )
              *(_QWORD *)(v24 + 8LL * (v22 & 0xFFFFFFFE)) = v55[v22 & 0xFFFFFFFE];
LABEL_67:
            if ( v55 == a1 + 4 || !v55 )
              goto LABEL_70;
            goto LABEL_69;
          }
LABEL_15:
          v24 = a1[2];
LABEL_16:
          *(_QWORD *)(v24 + 8LL * v22) = v14;
          *((_DWORD *)a1 + 6) = v22 + 1;
LABEL_17:
          v15 = v159;
LABEL_18:
          LODWORD(v159) = --v15;
          if ( !v15 )
            goto LABEL_36;
          goto LABEL_19;
        }
        v50 = 0xFFFFFFFFLL;
        v48 = v46 + 1;
        if ( (_DWORD)v46 == -1 )
          goto LABEL_57;
      }
      v68 = (_QWORD *)sub_186B270(0x18u);
      v47 = v68 + 1;
      v49 = 0;
      a1[20] = (__int64)(v68 + 1);
      *v68 = 2;
      goto LABEL_103;
    }
    v67 = *((_WORD *)v14 + 2);
    if ( v67 == 1 )
      goto LABEL_8;
    if ( v67 )
      break;
LABEL_24:
    v27 = v14[6];
    v28 = v14 + 8;
    LODWORD(v162) = 0;
    v29 = v27;
    v27 *= 8;
    v30 = (unsigned int *)((char *)v14 + v27 + 32);
    if ( v27 )
    {
      do
      {
        while ( 1 )
        {
          v35 = *(unsigned int **)v28;
          if ( (*(_BYTE *)(*(_QWORD *)v28 + 6LL) & 1) != 0 )
            break;
          v36 = v159;
          if ( (unsigned int)v159 >= HIDWORD(v159) )
          {
            v144 = *(unsigned int **)v28;
            v62 = (unsigned int)(2 * HIDWORD(v159));
            v63 = (char *)sub_186B270(8 * v62);
            v36 = v159;
            v64 = v158;
            v37 = v63;
            v35 = v144;
            if ( (_DWORD)v159 )
            {
              if ( (unsigned int)(v159 - 1) <= 2 || v63 == (char *)v158 + 8 )
              {
                v87 = 0;
                v88 = 8LL * (unsigned int)v159;
                do
                {
                  v37[v87 / 8] = v64[v87 / 8];
                  v87 += 8LL;
                }
                while ( v88 != v87 );
              }
              else
              {
                v65 = 0;
                v66 = 16LL * ((unsigned int)v159 >> 1);
                do
                {
                  *(__m128i *)&v37[v65 / 8] = _mm_loadu_si128((const __m128i *)&v64[v65 / 8]);
                  v65 += 16LL;
                }
                while ( v66 != v65 );
                if ( (v36 & 1) != 0 )
                  v37[v36 & 0xFFFFFFFE] = v64[v36 & 0xFFFFFFFE];
              }
            }
            if ( v64 != v160 && v64 )
            {
              sub_186B220(v64);
              v36 = v159;
              v35 = v144;
            }
            v158 = v37;
            HIDWORD(v159) = v62;
          }
          else
          {
            v37 = v158;
          }
          v28 += 2;
          v37[v36] = v35;
          LODWORD(v159) = v36 + 1;
          if ( v30 == v28 )
            goto LABEL_33;
        }
        v31 = a1[20];
        v32 = (_QWORD *)(v31 + 8LL * *v35);
        v33 = v162;
        if ( (unsigned int)v162 >= HIDWORD(v162) )
        {
          v143 = (_QWORD *)(v31 + 8LL * *v35);
          v57 = (unsigned int)(2 * HIDWORD(v162));
          v58 = (char *)sub_186B270(8 * v57);
          v33 = v162;
          v59 = (char *)ptr;
          v34 = v58;
          v32 = v143;
          if ( (_DWORD)v162 )
          {
            if ( (unsigned int)(v162 - 1) <= 2 || v58 == (char *)ptr + 8 )
            {
              v85 = 0;
              v86 = 8LL * (unsigned int)v162;
              do
              {
                v34[v85 / 8] = *(_QWORD *)&v59[v85];
                v85 += 8LL;
              }
              while ( v85 != v86 );
            }
            else
            {
              v60 = 0;
              v61 = 16LL * ((unsigned int)v162 >> 1);
              do
              {
                *(__m128i *)&v34[v60 / 8] = _mm_loadu_si128((const __m128i *)&v59[v60]);
                v60 += 16LL;
              }
              while ( v60 != v61 );
              if ( (v33 & 1) != 0 )
                v34[v33 & 0xFFFFFFFE] = *(_QWORD *)&v59[8 * (v33 & 0xFFFFFFFE)];
            }
          }
          if ( v59 != v163 && v59 )
          {
            sub_186B220(v59);
            v33 = v162;
          }
          ptr = v34;
          HIDWORD(v162) = v57;
        }
        else
        {
          v34 = ptr;
        }
        v28 += 2;
        v34[v33] = *v32;
        LODWORD(v162) = v33 + 1;
      }
      while ( v30 != v28 );
LABEL_33:
      v29 = v14[6];
      v108 = v162;
    }
    else
    {
      v108 = 0;
    }
    if ( v29 == v108 )
    {
      v91 = *(__int64 (**)(void))(*(_QWORD *)*a1 + 440LL);
      if ( (char *)v91 == (char *)sub_79F010 )
      {
        v92 = *a1 + 1592;
      }
      else
      {
        v131 = v91();
        v108 = v162;
        v92 = v131;
      }
      v12 = sub_13D3600(v92, v14, v108, ptr);
      if ( !v12 )
        goto LABEL_37;
      v93 = 8LL * (unsigned int)(v162 - 1);
      if ( (_DWORD)v162 )
      {
        do
        {
          v38 = ptr;
          v97 = *(_QWORD *)(v12 + v93 + 176);
          v98 = *(_QWORD *)((char *)ptr + v93);
          if ( v98 != v97 )
          {
            if ( *(_QWORD *)(v97 + 64) != *(_QWORD *)(v98 + 64) )
            {
              v12 = 0;
              goto LABEL_38;
            }
            v99 = (_QWORD *)*a5;
            if ( *a5 )
            {
              v100 = *((_DWORD *)v99 - 1);
              if ( v100 == *((_DWORD *)v99 - 2) )
              {
                v101 = (3 * v100 + 1) >> 1;
                v102 = 16 * v101 + 8;
                if ( 16 * v100 + 8 >= (unsigned int)v102 || v100 >= v101 )
                {
                  v5 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v157, "Overflow encountered when expanding vector");
                  *v5 = (char *)off_1C63128;
                  sub_2333C0(v5 + 1, v157);
                  sub_233E40((__int64)v157);
                  __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v155 = v93;
                v145 = *(_QWORD *)(v12 + v93 + 176);
                v103 = (unsigned int *)sub_186B270(v102);
                v97 = v145;
                v93 = v155;
                v99 = v103 + 2;
                v104 = (_QWORD *)*a5;
                if ( *a5 )
                {
                  v105 = *((unsigned int *)v104 - 1);
                  v106 = 0;
                  v103[1] = v105;
                  v107 = 16 * v105;
                  if ( v107 )
                  {
                    do
                    {
                      *(__m128i *)&v103[v106 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v104[v106 / 8]);
                      v106 += 16LL;
                    }
                    while ( v107 != v106 );
                  }
                  sub_186B220(v104 - 1);
                  v97 = v145;
                  v93 = v155;
                  v96 = (__m128i *)&v99[2 * v103[1]];
                  v95 = v103[1] + 1;
                }
                else
                {
                  v103[1] = 0;
                  v96 = (__m128i *)(v103 + 2);
                  v95 = 1;
                }
                *v103 = v101;
                *a5 = v99;
              }
              else
              {
                v94 = v100;
                v95 = v100 + 1;
                v96 = (__m128i *)&v99[2 * v94];
              }
            }
            else
            {
              v156 = v93;
              v146 = *(_QWORD *)(v12 + v93 + 176);
              v109 = (_QWORD *)sub_186B270(0x28u);
              v99 = v109 + 1;
              v97 = v146;
              v93 = v156;
              *v109 = 2;
              v96 = (__m128i *)(v109 + 1);
              *a5 = v109 + 1;
              v95 = 1;
            }
            *v96 = _mm_unpacklo_epi64((__m128i)v98, (__m128i)v97);
            *((_DWORD *)v99 - 1) = v95;
          }
          v93 -= 8;
        }
        while ( v93 != -8 );
      }
      v110 = (_QWORD *)a1[21];
      if ( v110 )
      {
        v111 = *((_DWORD *)v110 - 1);
        if ( v111 == *((_DWORD *)v110 - 2) )
        {
          v133 = (3 * v111 + 1) >> 1;
          v134 = 8 * v133 + 8;
          if ( 8 * v111 + 8 >= v134 || v111 >= v133 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v157, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v157);
            sub_233E40((__int64)v157);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v135 = (unsigned int *)sub_186B300(v110 - 1, v134);
          v136 = v135[1];
          v110 = v135 + 2;
          *v135 = v133;
          a1[21] = (__int64)(v135 + 2);
          LODWORD(v135) = v136;
          v114 = &v110[v136];
          v113 = (_DWORD)v135 + 1;
        }
        else
        {
          v112 = v111;
          v113 = v111 + 1;
          v114 = &v110[v112];
        }
      }
      else
      {
        v138 = (_QWORD *)sub_186B270(0x18u);
        *v138 = 2;
        v113 = 1;
        v110 = v138 + 1;
        a1[21] = (__int64)v110;
        v114 = v110;
      }
      *v114 = v12;
      v115 = (_QWORD *)a1[20];
      *((_DWORD *)v110 - 1) = v113;
      v116 = *v14;
      if ( v115 )
      {
        v117 = *((_DWORD *)v115 - 1);
        v147 = v117;
        if ( v116 < v117 )
          goto LABEL_160;
        v122 = v116 + 1;
        if ( v117 >= v116 + 1 )
        {
          *((_DWORD *)v115 - 1) = v122;
          goto LABEL_160;
        }
      }
      else
      {
        v122 = v116 + 1;
        if ( v116 == -1 )
          goto LABEL_160;
        v137 = (_QWORD *)sub_186B270(0x18u);
        v115 = v137 + 1;
        *v137 = 2;
        a1[20] = (__int64)(v137 + 1);
        v147 = 0;
      }
      while ( 1 )
      {
        v127 = *((_DWORD *)v115 - 2);
        if ( v127 >= v122 )
          break;
        v123 = (3 * v127 + 1) >> 1;
        v124 = 8 * v123 + 8;
        v125 = v123;
        if ( 8 * v127 + 8 >= (unsigned int)v124 || v127 >= v123 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v157, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v157);
          sub_233E40((__int64)v157);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v126 = (unsigned int *)sub_186B300(v115 - 1, v124);
        v115 = v126 + 2;
        *v126 = v125;
        a1[20] = (__int64)(v126 + 2);
      }
      *((_DWORD *)v115 - 1) = v122;
      v128 = 8LL * v122;
      v129 = 8LL * v147;
      if ( v129 != v128 )
      {
        v148 = v115;
        memset(&v115[(unsigned __int64)v129 / 8], 0, v128 - v129);
        v115 = v148;
      }
LABEL_160:
      v115[v116] = v12;
      v118 = *((_BYTE *)v14 + 6);
      if ( (v118 & 1) != 0 )
        goto LABEL_17;
      *((_BYTE *)v14 + 6) = v118 | 1;
      v22 = *((_DWORD *)a1 + 6);
      v119 = *((_DWORD *)a1 + 7);
      if ( v22 >= v119 )
      {
        v53 = 2 * v119;
        v120 = sub_186B270(8 * v53);
        v22 = *((_DWORD *)a1 + 6);
        v55 = (__int64 *)a1[2];
        v24 = v120;
        if ( !v22 )
          goto LABEL_67;
        if ( v22 - 1 <= 2 || (__int64 *)v120 == v55 + 1 )
        {
          for ( k = 0; k != v22; ++k )
            *(_QWORD *)(v24 + k * 8) = v55[k];
          goto LABEL_67;
        }
        v121 = 0;
        do
        {
          *(__m128i *)(v24 + v121 * 8) = _mm_loadu_si128((const __m128i *)&v55[v121]);
          v121 += 2;
        }
        while ( v121 != 2LL * (v22 >> 1) );
        goto LABEL_65;
      }
      goto LABEL_15;
    }
    v15 = v159;
    if ( !(_DWORD)v159 )
    {
LABEL_36:
      v12 = *(_QWORD *)(a1[20] + 8LL * *a4);
LABEL_37:
      v38 = ptr;
      goto LABEL_38;
    }
LABEL_19:
    v14 = *((unsigned int **)v158 + (unsigned int)(v15 - 1));
    v11 = *((_BYTE *)v14 + 6);
  }
  v38 = ptr;
  v12 = 0;
LABEL_38:
  if ( v38 && v38 != v163 )
    sub_186B220(v38);
  if ( v158 != v160 && v158 )
    sub_186B220(v158);
  return v12;
}

