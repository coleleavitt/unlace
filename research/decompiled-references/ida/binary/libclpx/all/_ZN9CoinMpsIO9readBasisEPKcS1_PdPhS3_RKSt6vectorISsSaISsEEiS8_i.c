__int64 __fastcall CoinMpsIO::readBasis(
        CoinMpsIO *a1,
        const char *a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        unsigned __int64 *a8,
        unsigned int a9,
        __int64 a10,
        unsigned int a11)
{
  int v15; // eax
  void *v16; // r12
  __int64 v17; // rax
  int v18; // edx
  __int64 result; // rax
  bool v20; // zf
  char v21; // r12
  CoinMpsCardReader *v22; // rdi
  __int64 v23; // rax
  int Hash; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  CoinMessageHandler *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  CoinMessageHandler *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  CoinMessageHandler *v39; // rax
  CoinMessageHandler *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int v46; // r15d
  CoinMessageHandler *v47; // r14
  __int64 v48; // rax
  char **v49; // rax
  char **v50; // r13
  char **v51; // r12
  char **v52; // rdi
  int v53; // r8d
  __int64 v54; // rdx
  unsigned int v55; // ecx
  unsigned int v56; // r10d
  __int64 v57; // rax
  char **v58; // r11
  char **v59; // rax
  signed int v60; // r8d
  __int64 v61; // rax
  signed int v62; // r8d
  unsigned __int64 v63; // rdi
  int v64; // r8d
  __int64 v65; // rdx
  unsigned int v66; // ecx
  unsigned int v67; // r10d
  __int64 v68; // rax
  _QWORD *v69; // r11
  char **v70; // rax
  signed int v71; // r8d
  __int64 v72; // rax
  signed int v73; // r8d
  char **v74; // rsi
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  CoinMessageHandler *v78; // rax
  CoinMessageHandler *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // [rsp+0h] [rbp-68h]
  __int64 v88; // [rsp+0h] [rbp-68h]
  char v89; // [rsp+1Bh] [rbp-4Dh] BYREF
  int v90; // [rsp+1Ch] [rbp-4Ch] BYREF
  CoinFileInput *v91; // [rsp+20h] [rbp-48h] BYREF
  __int64 v92[8]; // [rsp+28h] [rbp-40h] BYREF

  v91 = nullptr;
  v15 = CoinMpsIO::dealWithFileName(a1, a2, a3, &v91);
  if ( v15 < 0 )
    return 0xFFFFFFFFLL;
  v16 = *((void **)a1 + 34);
  if ( v15 )
  {
    if ( v16 )
    {
      CoinMpsCardReader::~CoinMpsCardReader(*((CoinMpsCardReader **)a1 + 34));
      operator delete(v16);
    }
    v16 = (void *)operator new(0x5C8u);
    CoinMpsCardReader::CoinMpsCardReader((CoinMpsCardReader *)v16, v91, a1);
    *((_QWORD *)a1 + 34) = v16;
  }
  CoinMpsCardReader::readToNextSection((CoinMpsCardReader *)v16);
  v17 = *((_QWORD *)a1 + 34);
  v18 = *(_DWORD *)(v17 + 1240);
  if ( v18 != 1 )
  {
    if ( v18 == 14 )
    {
      v35 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)a1 + 28),
                                    9,
                                    (CoinMpsIO *)((char *)a1 + 240));
      v39 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                    v35,
                                    *((_QWORD *)a1 + 34) + 8LL,
                                    v36,
                                    *((_QWORD *)a1 + 34),
                                    v37,
                                    v38,
                                    v87);
      v40 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v39);
      v45 = CoinMessageHandler::operator<<(v40, *((_QWORD *)a1 + 21), v41, v42, v43, v44, v88);
      CoinMessageHandler::operator<<(v45, 0, *(double *)si128.m128_u64);
      std::string::string();
      v46 = std::string::compare((std::string *)v92, "plain");
      if ( (_UNKNOWN *)(v92[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1F9DC0(v92[0] - 24);
      result = 4294967294LL;
      if ( v46 )
      {
        v47 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)a1 + 28),
                                      10,
                                      (CoinMpsIO *)((char *)a1 + 240));
        std::string::string();
        v48 = CoinMessageHandler::operator<<(v47);
        CoinMessageHandler::operator<<(v48, 0, *(double *)si128.m128_u64);
        if ( (_UNKNOWN *)(v92[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
          sub_1F9DC0(v92[0] - 24);
        return 4294967294LL;
      }
    }
    else
    {
      result = 4294967292LL;
      if ( v18 == 8 )
      {
        v29 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)a1 + 28),
                                      11,
                                      (CoinMpsIO *)((char *)a1 + 240));
        v34 = CoinMessageHandler::operator<<(v29, *((_QWORD *)a1 + 21), v30, v31, v32, v33, v87);
        CoinMessageHandler::operator<<(v34, 0, *(double *)si128.m128_u64);
        return 4294967293LL;
      }
    }
    return result;
  }
  v20 = *(_BYTE *)(v17 + 1248) == 0;
  *((_DWORD *)a1 + 10) = a11;
  *((_DWORD *)a1 + 11) = a9;
  if ( v20 )
    a4 = 0;
  v21 = 0;
  if ( a11 == (__int64)(*(_QWORD *)(a10 + 8) - *(_QWORD *)a10) >> 3 && a9 == (__int64)(a8[1] - *a8) >> 3 )
  {
    *((_DWORD *)a1 + 44) = a11;
    *((_DWORD *)a1 + 45) = a9;
    v49 = (char **)malloc(8LL * (int)a11);
    *((_QWORD *)a1 + 19) = v49;
    v50 = v49;
    v51 = (char **)malloc(8LL * (int)a9);
    *((_QWORD *)a1 + 20) = v51;
    if ( (int)a11 > 0 )
    {
      v52 = *(char ***)a10;
      if ( ((unsigned __int64)v50 >= *(_QWORD *)a10 + 16LL || *(_QWORD *)a10 >= (unsigned __int64)(v50 + 2))
        && a11 > 0x18 )
      {
        v53 = 0;
        if ( (((unsigned __int64)v52 >> 3) & 1) != 0 )
        {
          v53 = 1;
          *v50 = *v52;
        }
        v54 = 0;
        v55 = 0;
        v56 = a11 - (((unsigned __int64)v52 >> 3) & 1);
        v57 = ((unsigned __int64)v52 >> 3) & 1;
        v58 = &v52[v57];
        v59 = &v50[v57];
        do
        {
          si128 = (__m128)_mm_load_si128((const __m128i *)&v58[v54]);
          ++v55;
          *(__m128 *)&v59[v54] = si128;
          v54 += 2;
        }
        while ( v56 >> 1 > v55 );
        v60 = (v56 & 0xFFFFFFFE) + v53;
        if ( v56 != (v56 & 0xFFFFFFFE) )
        {
          v61 = v60;
          v62 = v60 + 1;
          v50[v61] = v52[v61];
          if ( (int)a11 > v62 )
            v50[v62] = v52[v62];
        }
      }
      else
      {
        v86 = 0;
        do
        {
          v50[v86 / 8] = v52[v86 / 8];
          v86 += 8LL;
        }
        while ( v86 != 8LL * (a11 - 1) + 8 );
      }
    }
    if ( (int)a9 > 0 )
    {
      v63 = *a8;
      if ( (*a8 >= (unsigned __int64)(v51 + 2) || (unsigned __int64)v51 >= *a8 + 16) && a9 > 0x18 )
      {
        v64 = 0;
        if ( ((v63 >> 3) & 1) != 0 )
        {
          v64 = 1;
          *v51 = *(char **)v63;
        }
        v65 = 0;
        v66 = 0;
        v67 = a9 - ((v63 >> 3) & 1);
        v68 = (v63 >> 3) & 1;
        v69 = (_QWORD *)(v63 + v68 * 8);
        v70 = &v51[v68];
        do
        {
          si128 = (__m128)_mm_load_si128((const __m128i *)&v69[v65]);
          ++v66;
          *(__m128 *)&v70[v65] = si128;
          v65 += 2;
        }
        while ( v66 < v67 >> 1 );
        v71 = (v67 & 0xFFFFFFFE) + v64;
        if ( v67 != (v67 & 0xFFFFFFFE) )
        {
          v72 = v71;
          v73 = v71 + 1;
          v51[v72] = *(char **)(v63 + 8 * v72);
          if ( (int)a9 > v73 )
            v51[v73] = *(char **)(v63 + 8LL * v73);
        }
      }
      else
      {
        v85 = 0;
        do
        {
          v51[v85 / 8] = *(char **)(v63 + v85);
          v85 += 8LL;
        }
        while ( v85 != 8LL * (a9 - 1) + 8 );
      }
    }
    CoinMpsIO::startHash(a1, v50, a11, 0);
    v74 = v51;
    v21 = 1;
    CoinMpsIO::startHash(a1, v74, a9, 1);
    v17 = *((_QWORD *)a1 + 34);
  }
  *(_DWORD *)(v17 + 1240) = 13;
  *(_BYTE *)(*((_QWORD *)a1 + 34) + 1248LL) = 1;
  v22 = *((CoinMpsCardReader **)a1 + 34);
LABEL_14:
  if ( (unsigned int)CoinMpsCardReader::nextField(v22) == 13 )
  {
    while ( 1 )
    {
      v23 = *((_QWORD *)a1 + 34);
      if ( v21 )
      {
        Hash = CoinMpsIO::findHash(a1, (const char *)(v23 + 1068), 1);
        v90 = Hash;
      }
      else
      {
        sscanf((const char *)(v23 + 1068), "%c%d", v92, &v90);
        Hash = v90;
        if ( *((_DWORD *)a1 + 11) <= v90 )
          goto LABEL_23;
      }
      v22 = *((CoinMpsCardReader **)a1 + 34);
      if ( Hash < 0 )
        goto LABEL_14;
      if ( a4 )
      {
        si128.m128_u64[0] = *(_QWORD *)v22;
        if ( *(double *)v22 > -1.0e50 )
        {
          *(_QWORD *)(a4 + 8LL * Hash) = si128.m128_u64[0];
          v22 = *((CoinMpsCardReader **)a1 + 34);
        }
      }
      LODWORD(v92[0]) = -1;
      switch ( *((_DWORD *)v22 + 226) )
      {
        case 0x19:
          *(_BYTE *)(a6 + Hash) = 1;
          v22 = *((CoinMpsCardReader **)a1 + 34);
          goto LABEL_14;
        case 0x1A:
          *(_BYTE *)(a6 + Hash) = 1;
          v27 = *((_QWORD *)a1 + 34);
          if ( v21 )
          {
            v28 = CoinMpsIO::findHash(a1, (const char *)(v27 + 908), 0);
            LODWORD(v92[0]) = v28;
          }
          else
          {
            sscanf((const char *)(v27 + 908), "%c%d", &v89, v92);
            v28 = v92[0];
            if ( *((_DWORD *)a1 + 10) <= SLODWORD(v92[0]) )
              goto LABEL_23;
          }
          if ( v28 >= 0 )
          {
            *(_BYTE *)(a5 + v28) = 3;
            v22 = *((CoinMpsCardReader **)a1 + 34);
            goto LABEL_14;
          }
LABEL_23:
          if ( (unsigned int)CoinMpsCardReader::nextField(*((CoinMpsCardReader **)a1 + 34)) != 13 )
            goto LABEL_24;
          break;
        case 0x1B:
          *(_BYTE *)(a6 + Hash) = 1;
          v25 = *((_QWORD *)a1 + 34);
          if ( v21 )
          {
            v26 = CoinMpsIO::findHash(a1, (const char *)(v25 + 908), 0);
            LODWORD(v92[0]) = v26;
          }
          else
          {
            sscanf((const char *)(v25 + 908), "%c%d", &v89, v92);
            v26 = v92[0];
            if ( *((_DWORD *)a1 + 10) <= SLODWORD(v92[0]) )
              goto LABEL_23;
          }
          if ( v26 >= 0 )
          {
            *(_BYTE *)(a5 + v26) = 2;
            v22 = *((CoinMpsCardReader **)a1 + 34);
            goto LABEL_14;
          }
          goto LABEL_23;
        case 0x1C:
          *(_BYTE *)(a6 + Hash) = 3;
          goto LABEL_23;
        case 0x1D:
          *(_BYTE *)(a6 + Hash) = 2;
          v22 = *((CoinMpsCardReader **)a1 + 34);
          goto LABEL_14;
        default:
          goto LABEL_14;
      }
    }
  }
LABEL_24:
  if ( v21 )
  {
    CoinMpsIO::stopHash(a1, 0);
    CoinMpsIO::stopHash(a1, 1);
    free(*((void **)a1 + 19));
    v75 = *((void **)a1 + 20);
    *((_QWORD *)a1 + 19) = 0;
    *((_DWORD *)a1 + 44) = 0;
    free(v75);
    v76 = *((void **)a1 + 23);
    *((_QWORD *)a1 + 20) = 0;
    *((_DWORD *)a1 + 45) = 0;
    if ( v76 )
      operator delete[](v76);
    v77 = *((void **)a1 + 24);
    if ( v77 )
      operator delete[](v77);
    *((_QWORD *)a1 + 23) = 0;
    *((_QWORD *)a1 + 24) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)a1 + 34) + 1240LL) == 7 )
    return a4 != 0;
  v78 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)a1 + 28),
                                3,
                                (CoinMpsIO *)((char *)a1 + 240));
  v79 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v78);
  v83 = CoinMessageHandler::operator<<(
          v79,
          *((_QWORD *)a1 + 34) + 8LL,
          v80,
          *((_QWORD *)a1 + 34),
          v81,
          v82,
          (__int64)v92);
  CoinMessageHandler::operator<<(v83, 0, *(double *)si128.m128_u64);
  v84 = CoinMessageHandler::message(*((CoinMessageHandler **)a1 + 28), 12, (CoinMpsIO *)((char *)a1 + 240));
  CoinMessageHandler::operator<<(v84, 0, *(double *)si128.m128_u64);
  return 0xFFFFFFFFLL;
}

