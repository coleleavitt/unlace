unsigned __int64 __fastcall CoinMpsIO::gutsOfCopy(CoinMpsIO *this, const CoinMpsIO *a2)
{
  CoinPackedMatrix *v4; // r12
  __int64 v5; // r12
  size_t v6; // r13
  size_t v7; // r12
  void *v8; // rax
  void *v9; // r15
  void *v10; // rax
  void *v11; // r14
  void *v12; // rax
  void *v13; // rax
  void *v14; // r15
  void *v15; // rax
  void *v16; // r14
  void *v17; // rax
  char *v18; // r12
  int v19; // r13d
  char *v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  char *v25; // rcx
  char *v26; // rdx
  signed int v27; // esi
  __int64 v28; // rcx
  char *v29; // rcx
  char *v30; // r12
  int v31; // r13d
  char *v32; // rax
  unsigned int v33; // esi
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  char *v37; // rcx
  char *v38; // rdx
  signed int v39; // esi
  __int64 v40; // rcx
  char *v41; // rcx
  char *v42; // r12
  int v43; // r13d
  char *v44; // rax
  unsigned int v45; // esi
  __int64 v46; // rdx
  unsigned int v47; // ecx
  __int64 v48; // rdx
  char *v49; // rcx
  char *v50; // rdx
  signed int v51; // esi
  __int64 v52; // rcx
  char *v53; // rcx
  char *v54; // r12
  int v55; // r13d
  char *v56; // rax
  unsigned int v57; // esi
  __int64 v58; // rdx
  unsigned int v59; // ecx
  __int64 v60; // rdx
  char *v61; // rcx
  char *v62; // rdx
  signed int v63; // esi
  __int64 v64; // rcx
  char *v65; // rcx
  char *v66; // r12
  int v67; // r13d
  char *v68; // rax
  unsigned int v69; // esi
  __int64 v70; // rdx
  unsigned int v71; // ecx
  __int64 v72; // rdx
  char *v73; // rcx
  char *v74; // rdx
  signed int v75; // esi
  __int64 v76; // rcx
  char *v77; // rcx
  char *v78; // r12
  int v79; // r13d
  char *v80; // rax
  unsigned int v81; // esi
  __int64 v82; // rdx
  unsigned int v83; // ecx
  __int64 v84; // rdx
  char *v85; // rcx
  char *v86; // rdx
  signed int v87; // esi
  __int64 v88; // rcx
  char *v89; // rcx
  __int64 v90; // r12
  int v91; // r13d
  unsigned __int64 result; // rax
  int v93; // edx
  __int64 v94; // r12
  int v95; // r13d
  int v96; // edx
  __int64 v97; // rdx
  char *v98; // r14
  int v99; // r15d
  unsigned int v100; // esi
  __int64 v101; // rdx
  unsigned int v102; // ecx
  __int64 v103; // rdx
  char *v104; // rcx
  char *v105; // rdx
  unsigned int v106; // esi
  __int64 v107; // rcx
  _BYTE *v108; // rcx
  unsigned __int64 *v109; // r14
  _QWORD *v110; // rax
  _QWORD *v111; // r9
  unsigned __int64 *v112; // rsi
  __int64 v113; // r13
  unsigned __int64 v114; // r14
  int v115; // r15d
  _BYTE *v116; // rax
  unsigned int v117; // edi
  __int64 v118; // rdx
  unsigned int v119; // ecx
  __int64 v120; // rdx
  _BYTE *v121; // rcx
  _BYTE *v122; // rdx
  unsigned int v123; // edi
  __int64 v124; // rcx
  _BYTE *v125; // rcx
  char *v126; // rcx
  unsigned __int64 v127; // rdx
  char v128; // di
  _BYTE *v129; // rcx
  char *v130; // rdx
  char v131; // r10
  char *v132; // rcx
  char *v133; // rdx
  char v134; // di
  char *v135; // rcx
  char *v136; // rdx
  char v137; // di
  char *v138; // rcx
  char *v139; // rdx
  char v140; // di
  char *v141; // rcx
  char *v142; // rdx
  char v143; // di
  char *v144; // rcx
  char *v145; // rdx
  char v146; // di
  char *v147; // rcx
  char *v148; // rdx
  char v149; // di
  void *desta; // [rsp+0h] [rbp-48h]
  unsigned __int64 *dest; // [rsp+0h] [rbp-48h]
  _QWORD *v152; // [rsp+8h] [rbp-40h]

  *((_BYTE *)this + 232) = *((_BYTE *)a2 + 232);
  if ( *((_QWORD *)a2 + 11) )
  {
    v4 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v4, *((const CoinPackedMatrix **)a2 + 11));
    *((_QWORD *)this + 11) = v4;
  }
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  v5 = *((int *)a2 + 10);
  *((_DWORD *)this + 10) = v5;
  v6 = *((int *)a2 + 11);
  *((_DWORD *)this + 11) = v6;
  *((_BYTE *)this + 280) = *((_BYTE *)a2 + 280);
  if ( *((_QWORD *)a2 + 12) )
  {
    v7 = 8 * v5;
    v8 = malloc(v7);
    *((_QWORD *)this + 12) = v8;
    v9 = v8;
    v10 = malloc(v7);
    *((_QWORD *)this + 13) = v10;
    v11 = v10;
    memcpy(v9, *((const void **)a2 + 12), v7);
    memcpy(v11, *((const void **)a2 + 13), v7);
  }
  if ( *((_QWORD *)a2 + 14) )
  {
    v12 = malloc(8LL * (int)v6);
    *((_QWORD *)this + 14) = v12;
    desta = v12;
    v13 = malloc(8LL * (int)v6);
    *((_QWORD *)this + 15) = v13;
    v14 = v13;
    v15 = malloc(8LL * (int)v6);
    *((_QWORD *)this + 16) = v15;
    v16 = v15;
    memcpy(desta, *((const void **)a2 + 14), 8LL * (int)v6);
    memcpy(v14, *((const void **)a2 + 15), 8LL * (int)v6);
    memcpy(v16, *((const void **)a2 + 16), 8LL * (int)v6);
  }
  if ( *((_QWORD *)a2 + 18) )
  {
    v17 = malloc(v6);
    *((_QWORD *)this + 18) = v17;
    memcpy(v17, *((const void **)a2 + 18), v6);
  }
  free(*((void **)this + 21));
  free(*(void **)this);
  free(*((void **)this + 1));
  free(*((void **)this + 2));
  free(*((void **)this + 3));
  free(*((void **)this + 4));
  v18 = *((char **)a2 + 21);
  if ( v18 )
  {
    v19 = strlen(*((const char **)a2 + 21));
    v20 = (char *)malloc(v19 + 1);
    if ( v19 && v18 != v20 )
    {
      v21 = v19 >> 3;
      if ( v19 >> 3 <= 0 )
      {
        v29 = v20;
      }
      else
      {
        if ( (v18 >= v20 + 16 || v20 >= v18 + 16) && v21 > 1 )
        {
          v22 = 0;
          v23 = 0;
          do
          {
            ++v23;
            *(__m128i *)&v20[v22] = _mm_loadu_si128((const __m128i *)&v18[v22]);
            v22 += 16;
          }
          while ( v23 < v21 >> 1 );
          v24 = 8LL * (v21 & 0xFFFFFFFE);
          v25 = &v18[v24];
          v26 = &v20[v24];
          if ( v21 != (v21 & 0xFFFFFFFE) )
          {
            *v26 = *v25;
            v26[1] = v25[1];
            v26[2] = v25[2];
            v26[3] = v25[3];
            v26[4] = v25[4];
            v26[5] = v25[5];
            v26[6] = v25[6];
            v26[7] = v25[7];
          }
          v27 = v21 - 1;
        }
        else
        {
          v27 = v21 - 1;
          v132 = v20;
          v133 = v18;
          do
          {
            v134 = *v133;
            v133 += 8;
            v132 += 8;
            *(v132 - 8) = v134;
            *(v132 - 7) = *(v133 - 7);
            *(v132 - 6) = *(v133 - 6);
            *(v132 - 5) = *(v133 - 5);
            *(v132 - 4) = *(v133 - 4);
            *(v132 - 3) = *(v133 - 3);
            *(v132 - 2) = *(v133 - 2);
            *(v132 - 1) = *(v133 - 1);
          }
          while ( &v18[8 * v27 + 8] != v133 );
        }
        v28 = 8LL * v27 + 8;
        v18 += v28;
        v29 = &v20[v28];
      }
      switch ( v19 % 8 )
      {
        case 1:
          goto LABEL_28;
        case 2:
          goto LABEL_27;
        case 3:
          goto LABEL_26;
        case 4:
          goto LABEL_25;
        case 5:
          goto LABEL_24;
        case 6:
          goto LABEL_23;
        case 7:
          v29[6] = v18[6];
LABEL_23:
          v29[5] = v18[5];
LABEL_24:
          v29[4] = v18[4];
LABEL_25:
          v29[3] = v18[3];
LABEL_26:
          v29[2] = v18[2];
LABEL_27:
          v29[1] = v18[1];
LABEL_28:
          *v29 = *v18;
          break;
        default:
          break;
      }
    }
    v20[v19] = 0;
  }
  else
  {
    v20 = nullptr;
  }
  *((_QWORD *)this + 21) = v20;
  v30 = *(char **)a2;
  if ( *(_QWORD *)a2 )
  {
    v31 = strlen(*(const char **)a2);
    v32 = (char *)malloc(v31 + 1);
    if ( v31 && v30 != v32 )
    {
      v33 = v31 >> 3;
      if ( v31 >> 3 <= 0 )
      {
        v41 = v32;
      }
      else
      {
        if ( (v30 >= v32 + 16 || v32 >= v30 + 16) && v33 > 1 )
        {
          v34 = 0;
          v35 = 0;
          do
          {
            ++v35;
            *(__m128i *)&v32[v34] = _mm_loadu_si128((const __m128i *)&v30[v34]);
            v34 += 16;
          }
          while ( v35 < v33 >> 1 );
          v36 = 8LL * (v33 & 0xFFFFFFFE);
          v37 = &v30[v36];
          v38 = &v32[v36];
          if ( v33 != (v33 & 0xFFFFFFFE) )
          {
            *v38 = *v37;
            v38[1] = v37[1];
            v38[2] = v37[2];
            v38[3] = v37[3];
            v38[4] = v37[4];
            v38[5] = v37[5];
            v38[6] = v37[6];
            v38[7] = v37[7];
          }
          v39 = v33 - 1;
        }
        else
        {
          v39 = v33 - 1;
          v138 = v32;
          v139 = v30;
          do
          {
            v140 = *v139;
            v139 += 8;
            v138 += 8;
            *(v138 - 8) = v140;
            *(v138 - 7) = *(v139 - 7);
            *(v138 - 6) = *(v139 - 6);
            *(v138 - 5) = *(v139 - 5);
            *(v138 - 4) = *(v139 - 4);
            *(v138 - 3) = *(v139 - 3);
            *(v138 - 2) = *(v139 - 2);
            *(v138 - 1) = *(v139 - 1);
          }
          while ( &v30[8 * v39 + 8] != v139 );
        }
        v40 = 8LL * v39 + 8;
        v30 += v40;
        v41 = &v32[v40];
      }
      switch ( v31 % 8 )
      {
        case 1:
          goto LABEL_49;
        case 2:
          goto LABEL_48;
        case 3:
          goto LABEL_47;
        case 4:
          goto LABEL_46;
        case 5:
          goto LABEL_45;
        case 6:
          goto LABEL_44;
        case 7:
          v41[6] = v30[6];
LABEL_44:
          v41[5] = v30[5];
LABEL_45:
          v41[4] = v30[4];
LABEL_46:
          v41[3] = v30[3];
LABEL_47:
          v41[2] = v30[2];
LABEL_48:
          v41[1] = v30[1];
LABEL_49:
          *v41 = *v30;
          break;
        default:
          break;
      }
    }
    v32[v31] = 0;
  }
  else
  {
    v32 = nullptr;
  }
  *(_QWORD *)this = v32;
  v42 = *((char **)a2 + 1);
  if ( v42 )
  {
    v43 = strlen(*((const char **)a2 + 1));
    v44 = (char *)malloc(v43 + 1);
    if ( v43 && v42 != v44 )
    {
      v45 = v43 >> 3;
      if ( v43 >> 3 <= 0 )
      {
        v53 = v44;
      }
      else
      {
        if ( (v42 >= v44 + 16 || v44 >= v42 + 16) && v45 > 1 )
        {
          v46 = 0;
          v47 = 0;
          do
          {
            ++v47;
            *(__m128i *)&v44[v46] = _mm_loadu_si128((const __m128i *)&v42[v46]);
            v46 += 16;
          }
          while ( v47 < v45 >> 1 );
          v48 = 8LL * (v45 & 0xFFFFFFFE);
          v49 = &v42[v48];
          v50 = &v44[v48];
          if ( v45 != (v45 & 0xFFFFFFFE) )
          {
            *v50 = *v49;
            v50[1] = v49[1];
            v50[2] = v49[2];
            v50[3] = v49[3];
            v50[4] = v49[4];
            v50[5] = v49[5];
            v50[6] = v49[6];
            v50[7] = v49[7];
          }
          v51 = v45 - 1;
        }
        else
        {
          v51 = v45 - 1;
          v135 = v44;
          v136 = v42;
          do
          {
            v137 = *v136;
            v136 += 8;
            v135 += 8;
            *(v135 - 8) = v137;
            *(v135 - 7) = *(v136 - 7);
            *(v135 - 6) = *(v136 - 6);
            *(v135 - 5) = *(v136 - 5);
            *(v135 - 4) = *(v136 - 4);
            *(v135 - 3) = *(v136 - 3);
            *(v135 - 2) = *(v136 - 2);
            *(v135 - 1) = *(v136 - 1);
          }
          while ( &v42[8 * v51 + 8] != v136 );
        }
        v52 = 8LL * v51 + 8;
        v42 += v52;
        v53 = &v44[v52];
      }
      switch ( v43 % 8 )
      {
        case 1:
          goto LABEL_70;
        case 2:
          goto LABEL_69;
        case 3:
          goto LABEL_68;
        case 4:
          goto LABEL_67;
        case 5:
          goto LABEL_66;
        case 6:
          goto LABEL_65;
        case 7:
          v53[6] = v42[6];
LABEL_65:
          v53[5] = v42[5];
LABEL_66:
          v53[4] = v42[4];
LABEL_67:
          v53[3] = v42[3];
LABEL_68:
          v53[2] = v42[2];
LABEL_69:
          v53[1] = v42[1];
LABEL_70:
          *v53 = *v42;
          break;
        default:
          break;
      }
    }
    v44[v43] = 0;
  }
  else
  {
    v44 = nullptr;
  }
  *((_QWORD *)this + 1) = v44;
  v54 = *((char **)a2 + 2);
  if ( v54 )
  {
    v55 = strlen(*((const char **)a2 + 2));
    v56 = (char *)malloc(v55 + 1);
    if ( v55 && v54 != v56 )
    {
      v57 = v55 >> 3;
      if ( v55 >> 3 <= 0 )
      {
        v65 = v56;
      }
      else
      {
        if ( (v54 >= v56 + 16 || v56 >= v54 + 16) && v57 > 1 )
        {
          v58 = 0;
          v59 = 0;
          do
          {
            ++v59;
            *(__m128i *)&v56[v58] = _mm_loadu_si128((const __m128i *)&v54[v58]);
            v58 += 16;
          }
          while ( v59 < v57 >> 1 );
          v60 = 8LL * (v57 & 0xFFFFFFFE);
          v61 = &v54[v60];
          v62 = &v56[v60];
          if ( v57 != (v57 & 0xFFFFFFFE) )
          {
            *v62 = *v61;
            v62[1] = v61[1];
            v62[2] = v61[2];
            v62[3] = v61[3];
            v62[4] = v61[4];
            v62[5] = v61[5];
            v62[6] = v61[6];
            v62[7] = v61[7];
          }
          v63 = v57 - 1;
        }
        else
        {
          v63 = v57 - 1;
          v141 = v56;
          v142 = v54;
          do
          {
            v143 = *v142;
            v142 += 8;
            v141 += 8;
            *(v141 - 8) = v143;
            *(v141 - 7) = *(v142 - 7);
            *(v141 - 6) = *(v142 - 6);
            *(v141 - 5) = *(v142 - 5);
            *(v141 - 4) = *(v142 - 4);
            *(v141 - 3) = *(v142 - 3);
            *(v141 - 2) = *(v142 - 2);
            *(v141 - 1) = *(v142 - 1);
          }
          while ( &v54[8 * v63 + 8] != v142 );
        }
        v64 = 8LL * v63 + 8;
        v54 += v64;
        v65 = &v56[v64];
      }
      switch ( v55 % 8 )
      {
        case 1:
          goto LABEL_91;
        case 2:
          goto LABEL_90;
        case 3:
          goto LABEL_89;
        case 4:
          goto LABEL_88;
        case 5:
          goto LABEL_87;
        case 6:
          goto LABEL_86;
        case 7:
          v65[6] = v54[6];
LABEL_86:
          v65[5] = v54[5];
LABEL_87:
          v65[4] = v54[4];
LABEL_88:
          v65[3] = v54[3];
LABEL_89:
          v65[2] = v54[2];
LABEL_90:
          v65[1] = v54[1];
LABEL_91:
          *v65 = *v54;
          break;
        default:
          break;
      }
    }
    v56[v55] = 0;
  }
  else
  {
    v56 = nullptr;
  }
  *((_QWORD *)this + 2) = v56;
  v66 = *((char **)a2 + 3);
  if ( v66 )
  {
    v67 = strlen(*((const char **)a2 + 3));
    v68 = (char *)malloc(v67 + 1);
    if ( v67 && v66 != v68 )
    {
      v69 = v67 >> 3;
      if ( v67 >> 3 <= 0 )
      {
        v77 = v68;
      }
      else
      {
        if ( (v66 >= v68 + 16 || v68 >= v66 + 16) && v69 > 1 )
        {
          v70 = 0;
          v71 = 0;
          do
          {
            ++v71;
            *(__m128i *)&v68[v70] = _mm_loadu_si128((const __m128i *)&v66[v70]);
            v70 += 16;
          }
          while ( v69 >> 1 > v71 );
          v72 = 8LL * (v69 & 0xFFFFFFFE);
          v73 = &v66[v72];
          v74 = &v68[v72];
          if ( v69 != (v69 & 0xFFFFFFFE) )
          {
            *v74 = *v73;
            v74[1] = v73[1];
            v74[2] = v73[2];
            v74[3] = v73[3];
            v74[4] = v73[4];
            v74[5] = v73[5];
            v74[6] = v73[6];
            v74[7] = v73[7];
          }
          v75 = v69 - 1;
        }
        else
        {
          v75 = v69 - 1;
          v144 = v68;
          v145 = v66;
          do
          {
            v146 = *v145;
            v145 += 8;
            v144 += 8;
            *(v144 - 8) = v146;
            *(v144 - 7) = *(v145 - 7);
            *(v144 - 6) = *(v145 - 6);
            *(v144 - 5) = *(v145 - 5);
            *(v144 - 4) = *(v145 - 4);
            *(v144 - 3) = *(v145 - 3);
            *(v144 - 2) = *(v145 - 2);
            *(v144 - 1) = *(v145 - 1);
          }
          while ( &v66[8 * v75 + 8] != v145 );
        }
        v76 = 8LL * v75 + 8;
        v66 += v76;
        v77 = &v68[v76];
      }
      switch ( v67 % 8 )
      {
        case 1:
          goto LABEL_112;
        case 2:
          goto LABEL_111;
        case 3:
          goto LABEL_110;
        case 4:
          goto LABEL_109;
        case 5:
          goto LABEL_108;
        case 6:
          goto LABEL_107;
        case 7:
          v77[6] = v66[6];
LABEL_107:
          v77[5] = v66[5];
LABEL_108:
          v77[4] = v66[4];
LABEL_109:
          v77[3] = v66[3];
LABEL_110:
          v77[2] = v66[2];
LABEL_111:
          v77[1] = v66[1];
LABEL_112:
          *v77 = *v66;
          break;
        default:
          break;
      }
    }
    v68[v67] = 0;
  }
  else
  {
    v68 = nullptr;
  }
  *((_QWORD *)this + 3) = v68;
  v78 = *((char **)a2 + 4);
  if ( v78 )
  {
    v79 = strlen(*((const char **)a2 + 4));
    v80 = (char *)malloc(v79 + 1);
    if ( v79 && v78 != v80 )
    {
      v81 = v79 >> 3;
      if ( v79 >> 3 <= 0 )
      {
        v89 = v80;
      }
      else
      {
        if ( (v78 >= v80 + 16 || v80 >= v78 + 16) && v81 > 1 )
        {
          v82 = 0;
          v83 = 0;
          do
          {
            ++v83;
            *(__m128i *)&v80[v82] = _mm_loadu_si128((const __m128i *)&v78[v82]);
            v82 += 16;
          }
          while ( v83 < v81 >> 1 );
          v84 = 8LL * (v81 & 0xFFFFFFFE);
          v85 = &v78[v84];
          v86 = &v80[v84];
          if ( v81 != (v81 & 0xFFFFFFFE) )
          {
            *v86 = *v85;
            v86[1] = v85[1];
            v86[2] = v85[2];
            v86[3] = v85[3];
            v86[4] = v85[4];
            v86[5] = v85[5];
            v86[6] = v85[6];
            v86[7] = v85[7];
          }
          v87 = v81 - 1;
        }
        else
        {
          v87 = v81 - 1;
          v147 = v80;
          v148 = v78;
          do
          {
            v149 = *v148;
            v148 += 8;
            v147 += 8;
            *(v147 - 8) = v149;
            *(v147 - 7) = *(v148 - 7);
            *(v147 - 6) = *(v148 - 6);
            *(v147 - 5) = *(v148 - 5);
            *(v147 - 4) = *(v148 - 4);
            *(v147 - 3) = *(v148 - 3);
            *(v147 - 2) = *(v148 - 2);
            *(v147 - 1) = *(v148 - 1);
          }
          while ( v148 != &v78[8 * v87 + 8] );
        }
        v88 = 8LL * v87 + 8;
        v78 += v88;
        v89 = &v80[v88];
      }
      switch ( v79 % 8 )
      {
        case 1:
          goto LABEL_133;
        case 2:
          goto LABEL_132;
        case 3:
          goto LABEL_131;
        case 4:
          goto LABEL_130;
        case 5:
          goto LABEL_129;
        case 6:
          goto LABEL_128;
        case 7:
          v89[6] = v78[6];
LABEL_128:
          v89[5] = v78[5];
LABEL_129:
          v89[4] = v78[4];
LABEL_130:
          v89[3] = v78[3];
LABEL_131:
          v89[2] = v78[2];
LABEL_132:
          v89[1] = v78[1];
LABEL_133:
          *v89 = *v78;
          break;
        default:
          break;
      }
    }
    v80[v79] = 0;
  }
  else
  {
    v80 = nullptr;
  }
  *((_QWORD *)this + 4) = v80;
  v90 = 0;
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_QWORD *)this + 26) = *((_QWORD *)a2 + 26);
  *((_QWORD *)this + 27) = *((_QWORD *)a2 + 27);
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 17);
  do
  {
    v91 = *(_DWORD *)((char *)this + v90 + 176);
    if ( v91 )
    {
      v109 = *(unsigned __int64 **)((char *)a2 + 2 * v90 + 152);
      v110 = malloc(8LL * v91);
      *(_QWORD *)((char *)this + 2 * v90 + 152) = v110;
      if ( v91 > 0 )
      {
        v111 = v110;
        v112 = v109;
        v113 = (__int64)&v109[(unsigned int)(v91 - 1) + 1];
        v114 = *v109;
        if ( v114 )
        {
LABEL_168:
          v152 = v111;
          v115 = strlen((const char *)v114);
          v116 = malloc(v115 + 1);
          v111 = v152;
          if ( v115 && (_BYTE *)v114 != v116 )
          {
            v117 = v115 >> 3;
            if ( v115 >> 3 <= 0 )
            {
              v125 = v116;
            }
            else
            {
              if ( (v114 >= (unsigned __int64)(v116 + 16) || (unsigned __int64)v116 >= v114 + 16) && v117 > 1 )
              {
                v118 = 0;
                v119 = 0;
                do
                {
                  ++v119;
                  *(__m128i *)&v116[v118] = _mm_loadu_si128((const __m128i *)(v114 + v118));
                  v118 += 16;
                }
                while ( v117 >> 1 > v119 );
                v120 = 8LL * (v117 & 0xFFFFFFFE);
                v121 = (_BYTE *)(v114 + v120);
                v122 = &v116[v120];
                if ( v117 != (v117 & 0xFFFFFFFE) )
                {
                  *v122 = *v121;
                  v122[1] = v121[1];
                  v122[2] = v121[2];
                  v122[3] = v121[3];
                  v122[4] = v121[4];
                  v122[5] = v121[5];
                  v122[6] = v121[6];
                  v122[7] = v121[7];
                }
                v123 = v117 - 1;
              }
              else
              {
                v123 = v117 - 1;
                v129 = v116;
                v130 = (char *)v114;
                do
                {
                  v131 = *v130;
                  v130 += 8;
                  v129 += 8;
                  *(v129 - 8) = v131;
                  *(v129 - 7) = *(v130 - 7);
                  *(v129 - 6) = *(v130 - 6);
                  *(v129 - 5) = *(v130 - 5);
                  *(v129 - 4) = *(v130 - 4);
                  *(v129 - 3) = *(v130 - 3);
                  *(v129 - 2) = *(v130 - 2);
                  *(v129 - 1) = *(v130 - 1);
                }
                while ( v130 != (char *)(v114 + 8LL * v123 + 8) );
              }
              v124 = 8LL * (int)v123 + 8;
              v114 += v124;
              v125 = &v116[v124];
            }
            switch ( v115 % 8 )
            {
              case 1:
                goto LABEL_186;
              case 2:
                goto LABEL_185;
              case 3:
                goto LABEL_184;
              case 4:
                goto LABEL_183;
              case 5:
                goto LABEL_182;
              case 6:
                goto LABEL_181;
              case 7:
                v125[6] = *(_BYTE *)(v114 + 6);
LABEL_181:
                v125[5] = *(_BYTE *)(v114 + 5);
LABEL_182:
                v125[4] = *(_BYTE *)(v114 + 4);
LABEL_183:
                v125[3] = *(_BYTE *)(v114 + 3);
LABEL_184:
                v125[2] = *(_BYTE *)(v114 + 2);
LABEL_185:
                v125[1] = *(_BYTE *)(v114 + 1);
LABEL_186:
                *v125 = *(_BYTE *)v114;
                break;
              default:
                break;
            }
          }
          v116[v115] = 0;
          goto LABEL_188;
        }
        while ( 1 )
        {
          v116 = nullptr;
LABEL_188:
          ++v112;
          *v111++ = v116;
          if ( (unsigned __int64 *)v113 == v112 )
            break;
          v114 = *v112;
          if ( *v112 )
            goto LABEL_168;
        }
      }
    }
    v90 += 4;
  }
  while ( v90 != 8 );
  *((_DWORD *)this + 71) = *((_DWORD *)a2 + 71);
  result = *((int *)a2 + 72);
  *((_DWORD *)this + 72) = result;
  v93 = *((_DWORD *)a2 + 73);
  *((_DWORD *)this + 73) = v93;
  if ( v93 )
  {
    if ( result > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v94 = 0;
    v95 = 0;
    result = operator new[](8 * result);
    v96 = *((_DWORD *)this + 73);
    *((_QWORD *)this + 37) = result;
    if ( v96 > 0 )
    {
      while ( 1 )
      {
        v97 = *((_QWORD *)a2 + 37);
        dest = (unsigned __int64 *)(v94 + result);
        v98 = *(char **)(v97 + v94);
        if ( v98 )
        {
          v99 = strlen(*(const char **)(v97 + v94));
          result = (unsigned __int64)malloc(v99 + 1);
          if ( v99 && v98 != (char *)result )
          {
            v100 = v99 >> 3;
            if ( v99 >> 3 <= 0 )
            {
              v108 = (_BYTE *)result;
            }
            else
            {
              if ( (result >= (unsigned __int64)(v98 + 16) || (unsigned __int64)v98 >= result + 16) && v100 > 1 )
              {
                v101 = 0;
                v102 = 0;
                do
                {
                  ++v102;
                  *(__m128i *)(result + v101) = _mm_loadu_si128((const __m128i *)&v98[v101]);
                  v101 += 16;
                }
                while ( v100 >> 1 > v102 );
                v103 = 8LL * (v100 & 0xFFFFFFFE);
                v104 = &v98[v103];
                v105 = (char *)(result + v103);
                if ( v100 != (v100 & 0xFFFFFFFE) )
                {
                  *v105 = *v104;
                  v105[1] = v104[1];
                  v105[2] = v104[2];
                  v105[3] = v104[3];
                  v105[4] = v104[4];
                  v105[5] = v104[5];
                  v105[6] = v104[6];
                  v105[7] = v104[7];
                }
                v106 = v100 - 1;
              }
              else
              {
                v106 = v100 - 1;
                v126 = v98;
                v127 = result;
                do
                {
                  v128 = *v126;
                  v127 += 8LL;
                  v126 += 8;
                  *(_BYTE *)(v127 - 8) = v128;
                  *(_BYTE *)(v127 - 7) = *(v126 - 7);
                  *(_BYTE *)(v127 - 6) = *(v126 - 6);
                  *(_BYTE *)(v127 - 5) = *(v126 - 5);
                  *(_BYTE *)(v127 - 4) = *(v126 - 4);
                  *(_BYTE *)(v127 - 3) = *(v126 - 3);
                  *(_BYTE *)(v127 - 2) = *(v126 - 2);
                  *(_BYTE *)(v127 - 1) = *(v126 - 1);
                }
                while ( v127 != result + 8LL * v106 + 8 );
              }
              v107 = 8LL * (int)v106 + 8;
              v98 += v107;
              v108 = (_BYTE *)(result + v107);
            }
            switch ( v99 % 8 )
            {
              case 1:
                goto LABEL_160;
              case 2:
                goto LABEL_159;
              case 3:
                goto LABEL_158;
              case 4:
                goto LABEL_157;
              case 5:
                goto LABEL_156;
              case 6:
                goto LABEL_155;
              case 7:
                v108[6] = v98[6];
LABEL_155:
                v108[5] = v98[5];
LABEL_156:
                v108[4] = v98[4];
LABEL_157:
                v108[3] = v98[3];
LABEL_158:
                v108[2] = v98[2];
LABEL_159:
                v108[1] = v98[1];
LABEL_160:
                *v108 = *v98;
                break;
              default:
                break;
            }
          }
          *(_BYTE *)(result + v99) = 0;
        }
        else
        {
          result = 0;
        }
        ++v95;
        v94 += 8;
        *dest = result;
        if ( *((_DWORD *)this + 73) <= v95 )
          break;
        result = *((_QWORD *)this + 37);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 37) = 0;
  }
  return result;
}

