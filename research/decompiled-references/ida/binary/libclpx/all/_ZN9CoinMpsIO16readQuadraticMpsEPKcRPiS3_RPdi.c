__int64 __fastcall CoinMpsIO::readQuadraticMps(
        CoinMpsIO *this,
        const char *a2,
        int **a3,
        int **a4,
        double **a5,
        int a6,
        double a7)
{
  int v9; // eax
  _DWORD *v10; // rbp
  int v11; // eax
  CoinMpsCardReader *v12; // rdi
  int v13; // eax
  CoinMessageHandler *v14; // rdi
  const CoinMessages *v15; // rdx
  unsigned int v16; // r15d
  CoinMessageHandler *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  CoinMessageHandler *v21; // rax
  CoinMessageHandler *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v29; // rbp
  size_t v30; // rdi
  char *v31; // r14
  int v32; // ebp
  __int64 v33; // rdx
  int Hash; // r12d
  int v35; // eax
  CoinMpsCardReader *v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  CoinMessageHandler *v39; // rax
  CoinMessageHandler *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  CoinMessageHandler *v47; // rax
  CoinMessageHandler *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rax
  CoinMessageHandler *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  void *v59; // rax
  CoinMessageHandler *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  CoinMessageHandler *v64; // rax
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rdi
  char *v67; // r12
  _DWORD *v68; // rdx
  char *v69; // rax
  int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdi
  __int64 v75; // rax
  int v76; // edx
  int v77; // esi
  double *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rdx
  int v82; // r11d
  double v83; // xmm0_8
  char *v84; // rsi
  __int64 v85; // rdi
  int v86; // eax
  __int64 v87; // r14
  int v88; // ebp
  int v89; // r9d
  int *v90; // r15
  int *v91; // r10
  int v92; // esi
  __int64 v93; // r11
  __int64 v94; // rax
  __int64 v95; // r8
  int *v96; // rdi
  double *v97; // rcx
  char *v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  double v101; // xmm0_8
  __int64 v102; // rdx
  __int64 v103; // rsi
  int v104; // eax
  __int64 v105; // rax
  int v106; // edx
  int v107; // ecx
  unsigned __int64 v108; // [rsp+0h] [rbp-88h]
  __int64 v109; // [rsp+0h] [rbp-88h]
  unsigned __int64 v110; // [rsp+0h] [rbp-88h]
  char *ptr; // [rsp+10h] [rbp-78h]
  unsigned int ptra; // [rsp+10h] [rbp-78h]
  void *v114; // [rsp+18h] [rbp-70h]
  __int64 v117; // [rsp+38h] [rbp-50h]
  CoinFileInput *v118; // [rsp+48h] [rbp-40h] BYREF

  v118 = nullptr;
  v9 = CoinMpsIO::dealWithFileName(this, a2, "", &v118);
  if ( v9 < 0 )
    return (unsigned int)-1;
  v10 = *((_DWORD **)this + 34);
  if ( v9 )
  {
    if ( v10 )
    {
      CoinMpsCardReader::~CoinMpsCardReader(*((CoinMpsCardReader **)this + 34));
      operator delete(v10);
    }
    v10 = (_DWORD *)operator new(0x5C8u);
    CoinMpsCardReader::CoinMpsCardReader((CoinMpsCardReader *)v10, v118, this);
    *((_QWORD *)this + 34) = v10;
  }
  v11 = v10[310];
  if ( !a2 && v11 == 11 )
    goto LABEL_16;
  if ( v11 == 10 )
    return (unsigned int)-3;
  CoinMpsCardReader::readToNextSection((CoinMpsCardReader *)v10);
  v12 = *((CoinMpsCardReader **)this + 34);
  v13 = *((_DWORD *)v12 + 310);
  if ( v13 == 1 )
  {
    CoinMpsCardReader::readToNextSection(v12);
    v13 = *(_DWORD *)(*((_QWORD *)this + 34) + 1240LL);
    if ( v13 != 11 )
      goto LABEL_10;
  }
  else if ( v13 != 11 )
  {
LABEL_10:
    v14 = *((CoinMessageHandler **)this + 28);
    v15 = (CoinMpsIO *)((char *)this + 240);
    if ( v13 == 8 )
    {
      v16 = -3;
      v22 = (CoinMessageHandler *)CoinMessageHandler::message(v14, 11, v15);
    }
    else
    {
      v16 = -2;
      v17 = (CoinMessageHandler *)CoinMessageHandler::message(v14, 9, v15);
      v21 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                    v17,
                                    *((_QWORD *)this + 34) + 8LL,
                                    v18,
                                    *((_QWORD *)this + 34),
                                    v19,
                                    v20,
                                    v108);
      v22 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v21);
    }
    v27 = CoinMessageHandler::operator<<(v22, *((_QWORD *)this + 21), v23, v24, v25, v26, v108);
    CoinMessageHandler::operator<<(v27, 0, a7);
    return v16;
  }
  free(*(void **)this);
  *(_QWORD *)this = CoinStrdup((const char *)(*((_QWORD *)this + 34) + 1068LL));
LABEL_16:
  v16 = 0;
  v29 = 5 * *((_DWORD *)this + 11);
  LODWORD(v108) = 5 * *((_DWORD *)this + 11);
  ptr = (char *)malloc(4 * v29);
  v30 = 8 * v29;
  v31 = (char *)malloc(4 * v29);
  v32 = 0;
  v114 = malloc(v30);
  CoinMpsIO::startHash(this, 1);
  v33 = *((_QWORD *)this + 34);
LABEL_17:
  while ( (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v33) == 11 )
  {
    while ( 1 )
    {
      v33 = *((_QWORD *)this + 34);
      if ( *(_DWORD *)(v33 + 904) != 4 )
      {
        if ( (int)++v16 <= 99 )
        {
          v47 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 28),
                                        3,
                                        (CoinMpsIO *)((char *)this + 240));
LABEL_32:
          v48 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v47);
          v53 = *((_QWORD *)this + 34) + 8LL;
          goto LABEL_33;
        }
        if ( (int)v16 <= (int)&stru_186A0 )
          goto LABEL_17;
LABEL_30:
        v46 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 28), 12, (CoinMpsIO *)((char *)this + 240));
        CoinMessageHandler::operator<<(v46, 0, a7);
        return v16;
      }
      a7 = fabs(*(double *)v33);
      if ( a7 <= *((double *)this + 27) )
        goto LABEL_17;
      if ( (_DWORD)v108 == v32 )
      {
        v117 = *((_QWORD *)this + 34);
        LODWORD(v108) = ((3 * (int)v108) >> 1) + 1000;
        ptr = (char *)realloc(ptr, 4LL * (int)v108);
        v31 = (char *)realloc(v31, 4LL * (int)v108);
        v59 = realloc(v114, 8LL * (int)v108);
        v33 = v117;
        v114 = v59;
      }
      Hash = CoinMpsIO::findHash(this, (const char *)(v33 + 1068), 1);
      v35 = CoinMpsIO::findHash(this, (const char *)(*((_QWORD *)this + 34) + 908LL), 1);
      if ( Hash < 0 )
        break;
      if ( v35 < 0 )
      {
        if ( (int)++v16 <= 99 )
        {
          v55 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 28),
                                        6,
                                        (CoinMpsIO *)((char *)this + 240));
          v47 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                        v55,
                                        *((_QWORD *)this + 34) + 908LL,
                                        v56,
                                        *((_QWORD *)this + 34),
                                        v57,
                                        v58,
                                        v108);
          goto LABEL_32;
        }
LABEL_36:
        if ( (int)v16 <= (int)&stru_186A0 )
          goto LABEL_34;
        goto LABEL_30;
      }
      v36 = *((CoinMpsCardReader **)this + 34);
      v37 = v32;
      *(_DWORD *)&v31[4 * v32++] = v35;
      a7 = *(double *)v36;
      *(_DWORD *)&ptr[4 * v37] = Hash;
      *((double *)v114 + v37) = a7;
      if ( (unsigned int)CoinMpsCardReader::nextField(v36) != 11 )
        goto LABEL_25;
    }
    if ( (int)++v16 > 99 )
      goto LABEL_36;
    v60 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 28),
                                  7,
                                  (CoinMpsIO *)((char *)this + 240));
    v64 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                  v60,
                                  *((_QWORD *)this + 34) + 1068LL,
                                  v61,
                                  *((_QWORD *)this + 34),
                                  v62,
                                  v63,
                                  v108);
    v48 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v64);
    v50 = *((_QWORD *)this + 34);
    v53 = v50 + 8;
LABEL_33:
    v54 = CoinMessageHandler::operator<<(v48, v53, v49, v50, v51, v52, v108);
    CoinMessageHandler::operator<<(v54, 0, a7);
LABEL_34:
    v33 = *((_QWORD *)this + 34);
  }
LABEL_25:
  v38 = *(_DWORD *)(*((_QWORD *)this + 34) + 1240LL);
  if ( v38 != 7 && v38 != 10 )
  {
    v16 += 100000;
    v39 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 28),
                                  3,
                                  (CoinMpsIO *)((char *)this + 240));
    v40 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v39);
    v44 = CoinMessageHandler::operator<<(v40, *((_QWORD *)this + 34) + 8LL, v41, *((_QWORD *)this + 34), v42, v43, v108);
    CoinMessageHandler::operator<<(v44, 0, a7);
    v45 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 28), 12, (CoinMpsIO *)((char *)this + 240));
    CoinMessageHandler::operator<<(v45, 0, a7);
    return v16;
  }
  CoinMpsIO::stopHash(this, 1);
  v65 = *((_DWORD *)this + 11) + 1;
  if ( v65 > 0x1FFFFFFFFFFFFFFELL
    || (*a3 = (int *)operator new[](4 * v65), v66 = *((int *)this + 11), v66 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v67 = (char *)operator new[](4 * v66);
  memset(v67, 0, 4LL * *((int *)this + 11));
  if ( a6 && v16 )
    goto LABEL_47;
  if ( !a6 )
  {
    if ( v32 )
      goto LABEL_52;
    goto LABEL_86;
  }
  if ( a6 != 1 )
  {
LABEL_47:
    if ( v32 )
    {
      v68 = v31;
      v69 = ptr;
      do
      {
        v70 = *(_DWORD *)v69;
        if ( *(_DWORD *)v69 > *v68 )
        {
          *(_DWORD *)v69 = *v68;
          *v68 = v70;
        }
        v69 += 4;
        ++v68;
      }
      while ( &ptr[4 * (v32 - 1) + 4] != v69 );
      goto LABEL_52;
    }
  }
  else if ( v32 )
  {
    v105 = 0;
    do
    {
      v106 = *(_DWORD *)&ptr[v105];
      v107 = *(_DWORD *)&v31[v105];
      if ( v106 > v107 )
      {
        *(_DWORD *)&ptr[v105] = v107;
        *(_DWORD *)&v31[v105] = v106;
        v16 = -4;
      }
      v105 += 4;
    }
    while ( 4LL * (unsigned int)(v32 - 1) + 4 != v105 );
LABEL_52:
    v71 = 0;
    do
    {
      v72 = *(int *)&ptr[4 * v71++];
      ++*(_DWORD *)&v67[4 * v72];
    }
    while ( v32 > (int)v71 );
    v73 = (unsigned __int64)*a3;
    v74 = 4LL * v32;
    v109 = 8LL * v32;
    **a3 = 0;
    if ( *((int *)this + 11) <= 0 )
    {
      *a4 = (int *)operator new[](v74);
      v78 = (double *)operator new[](v109);
      *a5 = v78;
LABEL_58:
      v79 = 0;
      v80 = (__int64)*a4;
      do
      {
        v81 = *(int *)&ptr[4 * v79];
        v82 = *(_DWORD *)&v31[4 * v79];
        v83 = *((double *)v114 + v79++);
        v84 = &v67[4 * v81];
        v85 = *(int *)v84;
        LODWORD(v81) = *(_DWORD *)v84;
        v78[v85] = v83;
        *(_DWORD *)(v80 + 4 * v85) = v82;
        *(_DWORD *)v84 = v81 + 1;
      }
      while ( v32 > (int)v79 );
      goto LABEL_60;
    }
LABEL_55:
    v75 = 1;
    v76 = 0;
    do
    {
      v76 += *(_DWORD *)&v67[4 * v75 - 4];
      *(_DWORD *)&v67[4 * v75 - 4] = *(_DWORD *)(v73 + 4 * v75 - 4);
      v77 = v75;
      *(_DWORD *)(v73 + 4 * v75++) = v76;
    }
    while ( *((_DWORD *)this + 11) > v77 );
    *a4 = (int *)operator new[](v74);
    v78 = (double *)operator new[](v109);
    *a5 = v78;
    if ( !v32 )
      goto LABEL_60;
    goto LABEL_58;
  }
LABEL_86:
  v73 = (unsigned __int64)*a3;
  **a3 = 0;
  if ( *((int *)this + 11) > 0 )
  {
    v109 = 0;
    v74 = 0;
    goto LABEL_55;
  }
  *a4 = (int *)operator new[](0);
  *a5 = (double *)operator new[](0);
LABEL_60:
  free(ptr);
  free(v31);
  free(v114);
  v86 = *((_DWORD *)this + 11);
  if ( v86 > 0 )
  {
    v87 = 1;
    v88 = 0;
    memset(v67, 255, 4LL * (unsigned int)(v86 - 1) + 4);
    ptra = v16;
    v89 = 0;
    v110 = (unsigned __int64)*a3;
    v90 = *a3 + 1;
    do
    {
      v91 = v90;
      if ( *v90 <= v89 )
      {
        v89 = *v90;
      }
      else
      {
        v92 = v89;
        v93 = (__int64)*a4;
        v91 = (int *)(v110 + 4 * v87);
        v94 = v89;
        v95 = v89;
        v96 = &(*a4)[v89];
        do
        {
          v98 = &v67[4 * *v96];
          v99 = *(int *)v98;
          if ( (int)v99 >= 0 )
          {
            v97 = &(*a5)[v95];
            (*a5)[v99] = (*a5)[v99] + *v97;
            *v97 = 0.0;
          }
          else
          {
            *(_DWORD *)v98 = v92;
          }
          ++v92;
          ++v96;
          ++v95;
        }
        while ( *v91 > v92 );
        if ( v89 >= *v91 )
        {
          v89 = *v91;
        }
        else
        {
          v100 = (__int64)*a5;
          do
          {
            v101 = *(double *)(v100 + 8 * v94);
            v102 = *(int *)(v93 + 4 * v94);
            *(_DWORD *)&v67[4 * v102] = -1;
            if ( v101 != 0.0 )
            {
              v103 = v88++;
              *(_DWORD *)(v93 + 4 * v103) = v102;
              *(double *)(v100 + 8 * v103) = v101;
            }
            v89 = *v91;
            ++v94;
          }
          while ( (int)v94 < *v91 );
        }
      }
      v104 = v87;
      *v91 = v88;
      ++v87;
      ++v90;
    }
    while ( *((_DWORD *)this + 11) > v104 );
    v16 = ptra;
  }
  operator delete[](v67);
  return v16;
}

