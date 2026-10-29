__int64 __fastcall CoinMpsIO::readConicMps(
        CoinMpsIO *this,
        const char *a2,
        int **a3,
        int **a4,
        void **a5,
        int *a6,
        double a7)
{
  int v10; // eax
  _DWORD *v11; // r12
  CoinMpsCardReader *v12; // rdi
  int v13; // eax
  CoinMessageHandler *v14; // rdi
  const CoinMessages *v15; // rdx
  unsigned int v16; // r12d
  CoinMessageHandler *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  CoinMessageHandler *v21; // rax
  CoinMessageHandler *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  int *v32; // rax
  int *v33; // r13
  const char *v34; // r12
  const char *v35; // rdx
  int v36; // eax
  int v37; // r13d
  __int64 v38; // rax
  bool v39; // zf
  const char *v40; // rax
  int v41; // edx
  __int64 v42; // rsi
  int *v43; // rcx
  __int64 v44; // rax
  int Hash; // eax
  __int64 v46; // rcx
  CoinMessageHandler *v47; // rax
  CoinMessageHandler *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  int *v53; // rdx
  int v54; // eax
  CoinMessageHandler *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  CoinMessageHandler *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  CoinMessageHandler *v63; // rax
  CoinMessageHandler *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  CoinMessageHandler *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  int **v76; // [rsp+0h] [rbp-58h]
  __int64 v77; // [rsp+0h] [rbp-58h]
  void **v78; // [rsp+0h] [rbp-58h]
  void **v79; // [rsp+0h] [rbp-58h]
  CoinFileInput *v81; // [rsp+18h] [rbp-40h] BYREF

  v76 = a3;
  v81 = nullptr;
  v10 = CoinMpsIO::dealWithFileName(this, a2, "", &v81);
  if ( v10 < 0 )
    return (unsigned int)-1;
  v11 = *((_DWORD **)this + 34);
  if ( v10 )
  {
    if ( v11 )
    {
      CoinMpsCardReader::~CoinMpsCardReader(*((CoinMpsCardReader **)this + 34));
      operator delete(v11);
    }
    v11 = (_DWORD *)operator new(0x5C8u);
    CoinMpsCardReader::CoinMpsCardReader((CoinMpsCardReader *)v11, v81, this);
    *((_QWORD *)this + 34) = v11;
  }
  if ( a2 || v11[310] != 10 )
  {
    CoinMpsCardReader::readToNextSection((CoinMpsCardReader *)v11);
    v12 = *((CoinMpsCardReader **)this + 34);
    v13 = *((_DWORD *)v12 + 310);
    if ( v13 == 1 )
    {
      CoinMpsCardReader::readToNextSection(v12);
      v13 = *(_DWORD *)(*((_QWORD *)this + 34) + 1240LL);
    }
    if ( v13 != 10 )
    {
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
                                      *((_QWORD *)this + 34),
                                      v18,
                                      v19,
                                      v20,
                                      (__int64)v76);
        v22 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v21);
      }
      v27 = CoinMessageHandler::operator<<(v22, *((_QWORD *)this + 21), v23, v24, v25, v26, (__int64)v76);
      CoinMessageHandler::operator<<(v27, 0, a7);
      return v16;
    }
  }
  *a6 = 0;
  v29 = *((_DWORD *)this + 11) + 1;
  if ( v29 > 0x1FFFFFFFFFFFFFFELL
    || (*v76 = (int *)operator new[](4 * v29), v30 = *((int *)this + 11), v30 > 0x1FFFFFFFFFFFFFFELL)
    || (*a4 = (int *)operator new[](4 * v30), v31 = *((int *)this + 11), v31 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v32 = (int *)operator new[](4 * v31);
  *a5 = v32;
  v33 = v32;
  v34 = (const char *)(*((_QWORD *)this + 34) + 8LL);
  v35 = &v34[strlen(v34) - 4];
  v36 = 1;
  if ( !strcmp(v35, "QUAD") )
    v36 = (*(v35 - 1) == 82) + 1;
  *v33 = v36;
  v37 = 0;
  v16 = 0;
  **v76 = 0;
  CoinMpsIO::startHash(this, 1);
  v38 = *((_QWORD *)this + 34);
  while ( 1 )
  {
    v39 = (unsigned int)CoinMpsCardReader::nextField((CoinMpsCardReader *)v38) == 10;
    v38 = *((_QWORD *)this + 34);
    if ( !v39 )
      break;
    if ( !memcmp((const void *)(v38 + 8), "CSECTION", 8u) )
    {
      v40 = (const char *)(v38 + 8 + strlen((const char *)(v38 + 8)) - 4);
      v41 = 1;
      if ( !strcmp(v40, "QUAD") )
        v41 = (*(v40 - 1) == 82) + 1;
      v42 = *a6;
      v43 = *v76;
      if ( (*v76)[v42] == v37 )
      {
        puts("Cone must have at least one column");
        abort();
      }
      ++*a6;
      v43[v42 + 1] = v37;
      *((_DWORD *)*a5 + *a6) = v41;
      v38 = *((_QWORD *)this + 34);
    }
    else if ( *(_DWORD *)(v38 + 904) == 4 )
    {
      Hash = CoinMpsIO::findHash(this, (const char *)(v38 + 1068), 1);
      if ( Hash < 0 )
      {
        if ( (int)++v16 <= 99 )
        {
          v55 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 28),
                                        7,
                                        (CoinMpsIO *)((char *)this + 240));
          v47 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                        v55,
                                        *((_QWORD *)this + 34) + 1068LL,
                                        *((_QWORD *)this + 34),
                                        v56,
                                        v57,
                                        v58,
                                        (__int64)v76);
LABEL_34:
          v48 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v47);
          v52 = CoinMessageHandler::operator<<(
                  v48,
                  *((_QWORD *)this + 34) + 8LL,
                  *((_QWORD *)this + 34),
                  v49,
                  v50,
                  v51,
                  (__int64)v76);
          CoinMessageHandler::operator<<(v52, 0, a7);
          v38 = *((_QWORD *)this + 34);
        }
        else
        {
          if ( (int)v16 > (int)&stru_186A0 )
          {
LABEL_30:
            v44 = CoinMessageHandler::message(
                    *((CoinMessageHandler **)this + 28),
                    12,
                    (CoinMpsIO *)((char *)this + 240));
            CoinMessageHandler::operator<<(v44, 0, a7);
            return v16;
          }
          v38 = *((_QWORD *)this + 34);
        }
      }
      else
      {
        v46 = v37++;
        (*a4)[v46] = Hash;
        v38 = *((_QWORD *)this + 34);
      }
    }
    else
    {
      if ( (int)++v16 <= 99 )
      {
        v47 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 28),
                                      3,
                                      (CoinMpsIO *)((char *)this + 240));
        goto LABEL_34;
      }
      if ( (int)v16 > (int)&stru_186A0 )
        goto LABEL_30;
    }
  }
  if ( *(_DWORD *)(v38 + 1240) == 7 )
  {
    if ( v37 )
    {
      v53 = *v76;
      v54 = *a6 + 1;
      *a6 = v54;
      v53[v54] = v37;
      CoinMpsIO::stopHash(this, 1);
    }
    else
    {
      v70 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 28),
                                    11,
                                    (CoinMpsIO *)((char *)this + 240));
      v75 = CoinMessageHandler::operator<<(v70, *((_QWORD *)this + 21), v71, v72, v73, v74, (__int64)v76);
      CoinMessageHandler::operator<<(v75, 0, a7);
      if ( *v79 )
        operator delete[](*v79);
      if ( *a4 )
        operator delete[](*a4);
      if ( *a5 )
        operator delete[](*a5);
      v16 = -3;
      *v79 = nullptr;
      *a4 = nullptr;
      *a5 = nullptr;
    }
  }
  else
  {
    v59 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 28),
                                  9,
                                  (CoinMpsIO *)((char *)this + 240));
    v63 = (CoinMessageHandler *)CoinMessageHandler::operator<<(
                                  v59,
                                  *((_QWORD *)this + 34) + 8LL,
                                  *((_QWORD *)this + 34),
                                  v60,
                                  v61,
                                  v62,
                                  (__int64)v76);
    v64 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v63);
    v69 = CoinMessageHandler::operator<<(v64, *((_QWORD *)this + 21), v65, v66, v67, v68, v77);
    CoinMessageHandler::operator<<(v69, 0, a7);
    if ( *v78 )
      operator delete[](*v78);
    if ( *a4 )
      operator delete[](*a4);
    if ( *a5 )
      operator delete[](*a5);
    v16 = -2;
    *v78 = nullptr;
    *a4 = nullptr;
    *a5 = nullptr;
  }
  return v16;
}

