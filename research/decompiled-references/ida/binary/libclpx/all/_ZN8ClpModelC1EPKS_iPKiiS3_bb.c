// Alternative name is '_ZN8ClpModelC2EPKS_iPKiiS3_bb'
void __fastcall ClpModel::ClpModel(
        ClpModel *this,
        const ClpModel *a2,
        unsigned int a3,
        const int *a4,
        int a5,
        const int *a6,
        bool a7,
        CoinMessages *a8)
{
  int v10; // eax
  char v11; // al
  __int64 *v12; // r14
  __int64 *v13; // r13
  int v14; // eax
  __int64 v15; // rax
  __int64 *v16; // r12
  char *v17; // rdx
  __int64 *v18; // rdx
  __int64 *v19; // r14
  __int64 *v20; // r13
  char *v21; // rcx
  int v22; // r14d
  __int64 v23; // r13
  unsigned int v24; // r12d
  std::string *v25; // rdi
  unsigned int v26; // eax
  __int64 *v27; // r12
  char *v28; // rdx
  __int64 *v29; // rdx
  __int64 *v30; // r14
  __int64 *v31; // r13
  char *v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // r12
  int v37; // ecx
  __int64 v38; // r14
  _BYTE *v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // rdi
  int v42; // r14d
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // r14d
  __int64 v51; // r13
  std::string *v52; // rdi
  unsigned int v53; // eax
  CoinMessageHandler *v54; // r13
  __int64 v55; // rax
  char *v56; // rcx
  __int64 v57; // rax
  char *v58; // r8
  __int64 v59; // rax
  char *v60; // rcx
  __int64 v61; // rax
  char *v62; // r8
  __int64 v63; // rax
  int v64; // edx
  int v65; // edx
  int v66; // ecx
  int v67; // ecx
  char *v71; // [rsp+28h] [rbp-A0h]
  int v72; // [rsp+30h] [rbp-98h]
  void *v73; // [rsp+30h] [rbp-98h]
  char *v74; // [rsp+50h] [rbp-78h]
  char *v75; // [rsp+50h] [rbp-78h]
  char *v76; // [rsp+50h] [rbp-78h]
  char *v77; // [rsp+50h] [rbp-78h]
  char *v78; // [rsp+50h] [rbp-78h]
  char *v79; // [rsp+50h] [rbp-78h]
  char *v80; // [rsp+50h] [rbp-78h]
  char *v81; // [rsp+50h] [rbp-78h]
  __int64 *v82; // [rsp+58h] [rbp-70h]
  __int64 *v83; // [rsp+58h] [rbp-70h]
  __int64 *v84; // [rsp+58h] [rbp-70h]
  __int64 *v85; // [rsp+58h] [rbp-70h]
  char v86; // [rsp+6Fh] [rbp-59h] BYREF
  __int64 v87; // [rsp+70h] [rbp-58h] BYREF
  __int64 v88; // [rsp+78h] [rbp-50h]
  __int64 v89; // [rsp+80h] [rbp-48h]

  v10 = *((_DWORD *)a2 + 84);
  *((_DWORD *)this + 89) = 12345678;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 47) = 0;
  *((_QWORD *)this + 48) = 0;
  *((_DWORD *)this + 84) = v10;
  *((_QWORD *)this + 49) = 0;
  *((_QWORD *)this + 50) = 0;
  *((_QWORD *)this + 51) = 0;
  v71 = (char *)this + 392;
  CoinMessages::CoinMessages((ClpModel *)((char *)this + 416), 0);
  CoinMessages::CoinMessages((ClpModel *)((char *)this + 448), 0);
  *((_OWORD *)this + 30) = -1;
  CoinPackedMatrix::CoinPackedMatrix((ClpModel *)((char *)this + 496));
  CoinPackedMatrix::CoinPackedMatrix((ClpModel *)((char *)this + 584));
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 85) = 0;
  *((_QWORD *)this + 86) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  v11 = *((_BYTE *)a2 + 352);
  *((_BYTE *)this + 352) = v11;
  if ( v11 )
  {
    v54 = (CoinMessageHandler *)operator new(0x640u);
    CoinMessageHandler::CoinMessageHandler(v54, *((const CoinMessageHandler **)a2 + 43));
    *((_QWORD *)this + 43) = v54;
  }
  else
  {
    *((_QWORD *)this + 43) = *((_QWORD *)a2 + 43);
  }
  *((_QWORD *)this + 45) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 45) + 32LL))(*((_QWORD *)a2 + 45));
  if ( this != a2 )
    *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
  CoinMessages::operator=((char *)this + 416, (char *)a2 + 416);
  CoinMessages::operator=((char *)this + 448, (char *)a2 + 448);
  *((_OWORD *)this + 30) = -1;
  *((_OWORD *)this + 42) = 0;
  *((_DWORD *)this + 74) = *((_DWORD *)a2 + 74);
  *((_DWORD *)this + 75) = *((_DWORD *)a2 + 75);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 76);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 8);
  std::string::assign((ClpModel *)((char *)this + 688), (const ClpModel *)((char *)a2 + 688));
  v12 = *((__int64 **)this + 46);
  v13 = *((__int64 **)this + 47);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 9);
  *((_QWORD *)this + 10) = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 11);
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  v14 = *((_DWORD *)a2 + 78);
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 78) = v14;
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 81);
  *((_DWORD *)this + 26) = a3;
  *((_DWORD *)this + 27) = a5;
  *((_QWORD *)this + 35) = *((_QWORD *)a2 + 35);
  v15 = *((_QWORD *)a2 + 36);
  *((_DWORD *)this + 83) = 0;
  *((_QWORD *)this + 36) = v15;
  if ( a7 )
  {
    *((_DWORD *)this + 82) = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0;
    *((_QWORD *)this + 46) = 0;
    *((_QWORD *)this + 47) = 0;
    *((_QWORD *)this + 48) = 0;
    if ( v13 != v12 )
    {
      v27 = v12;
      v28 = &v86;
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*v27 - 24) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*v27 - 8), 0xFFFFFFFF) <= 0 )
          {
            v77 = v28;
            std::string::_Rep::_M_destroy();
            v28 = v77;
          }
          ++v27;
        }
        while ( v27 != v13 );
      }
      else
      {
        v56 = &v86;
        do
        {
          v57 = *v27;
          if ( (_UNKNOWN *)(*v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v64 = *(_DWORD *)(v57 - 8);
            *(_DWORD *)(v57 - 8) = v64 - 1;
            if ( v64 <= 0 )
            {
              v78 = v56;
              std::string::_Rep::_M_destroy();
              v56 = v78;
            }
          }
          ++v27;
        }
        while ( v27 != v13 );
      }
    }
    if ( v12 )
      operator delete(v12);
    std::vector<std::string>::~vector(&v87);
    v29 = *((__int64 **)this + 49);
    v30 = *((__int64 **)this + 50);
    v87 = 0;
    v88 = 0;
    v89 = 0;
    *((_QWORD *)this + 49) = 0;
    *((_QWORD *)this + 50) = 0;
    *((_QWORD *)this + 51) = 0;
    if ( v29 != v30 )
    {
      v31 = v29;
      v32 = &v86;
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*v31 - 24) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*v31 - 8), 0xFFFFFFFF) <= 0 )
          {
            v83 = v29;
            v76 = v32;
            std::string::_Rep::_M_destroy();
            v29 = v83;
            v32 = v76;
          }
          ++v31;
        }
        while ( v30 != v31 );
      }
      else
      {
        v62 = &v86;
        do
        {
          v63 = *v31;
          if ( (_UNKNOWN *)(*v31 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v67 = *(_DWORD *)(v63 - 8);
            *(_DWORD *)(v63 - 8) = v67 - 1;
            if ( v67 <= 0 )
            {
              v85 = v29;
              v81 = v62;
              std::string::_Rep::_M_destroy();
              v62 = v81;
              v29 = v85;
            }
          }
          ++v31;
        }
        while ( v30 != v31 );
      }
    }
    if ( v29 )
      operator delete(v29);
    std::vector<std::string>::~vector(&v87);
  }
  else
  {
    v87 = 0;
    v88 = 0;
    v89 = 0;
    *((_QWORD *)this + 46) = 0;
    *((_QWORD *)this + 47) = 0;
    *((_QWORD *)this + 48) = 0;
    if ( v13 != v12 )
    {
      v16 = v12;
      v17 = &v86;
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*v16 - 24) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*v16 - 8), 0xFFFFFFFF) <= 0 )
          {
            v75 = v17;
            std::string::_Rep::_M_destroy();
            v17 = v75;
          }
          ++v16;
        }
        while ( v16 != v13 );
      }
      else
      {
        v60 = &v86;
        do
        {
          v61 = *v16;
          if ( (_UNKNOWN *)(*v16 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v65 = *(_DWORD *)(v61 - 8);
            *(_DWORD *)(v61 - 8) = v65 - 1;
            if ( v65 <= 0 )
            {
              v79 = v60;
              std::string::_Rep::_M_destroy();
              v60 = v79;
            }
          }
          ++v16;
        }
        while ( v13 != v16 );
      }
    }
    if ( v12 )
      operator delete(v12);
    std::vector<std::string>::~vector(&v87);
    v18 = *((__int64 **)this + 49);
    v19 = *((__int64 **)this + 50);
    v87 = 0;
    v88 = 0;
    v89 = 0;
    *((_QWORD *)this + 49) = 0;
    *((_QWORD *)this + 50) = 0;
    *((_QWORD *)this + 51) = 0;
    if ( v18 != v19 )
    {
      v20 = v18;
      v21 = &v86;
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*v20 - 24) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*v20 - 8), 0xFFFFFFFF) <= 0 )
          {
            v82 = v18;
            v74 = v21;
            std::string::_Rep::_M_destroy();
            v18 = v82;
            v21 = v74;
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
      else
      {
        v58 = &v86;
        do
        {
          v59 = *v20;
          if ( (_UNKNOWN *)(*v20 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v66 = *(_DWORD *)(v59 - 8);
            *(_DWORD *)(v59 - 8) = v66 - 1;
            if ( v66 <= 0 )
            {
              v84 = v18;
              v80 = v58;
              std::string::_Rep::_M_destroy();
              v58 = v80;
              v18 = v84;
            }
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
    }
    if ( v18 )
      operator delete(v18);
    std::vector<std::string>::~vector(&v87);
    std::vector<std::string>::reserve((char *)this + 368, *((int *)this + 26));
    v22 = *((_DWORD *)this + 26);
    if ( v22 <= 0 )
    {
      v24 = 0;
    }
    else
    {
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = *((std::string **)this + 47);
        if ( v25 == *((std::string **)this + 48) )
        {
          std::vector<std::string>::_M_realloc_insert<std::string const&>();
          v22 = *((_DWORD *)this + 26);
        }
        else
        {
          if ( v25 )
          {
            std::string::string(v25, (const std::string *)(*((_QWORD *)a2 + 46) + 8LL * a4[v23]));
            v25 = *((std::string **)this + 47);
            v22 = *((_DWORD *)this + 26);
          }
          *((_QWORD *)this + 47) = (char *)v25 + 8;
        }
        v26 = strlen(*(const char **)(*((_QWORD *)this + 46) + 8 * v23));
        if ( v24 < v26 )
          v24 = v26;
        ++v23;
      }
      while ( (int)v23 < v22 );
    }
    std::vector<std::string>::reserve(v71, *((int *)this + 27));
    v50 = *((_DWORD *)this + 27);
    if ( v50 > 0 )
    {
      v51 = 0;
      do
      {
        v52 = *((std::string **)this + 50);
        if ( v52 == *((std::string **)this + 51) )
        {
          std::vector<std::string>::_M_realloc_insert<std::string const&>();
          v50 = *((_DWORD *)this + 27);
        }
        else
        {
          if ( v52 )
          {
            std::string::string(v52, (const std::string *)(*((_QWORD *)a2 + 49) + 8LL * a6[v51]));
            v52 = *((std::string **)this + 50);
            v50 = *((_DWORD *)this + 27);
          }
          *((_QWORD *)this + 50) = (char *)v52 + 8;
        }
        v53 = strlen(*(const char **)(*((_QWORD *)this + 49) + 8 * v51));
        if ( v24 < v53 )
          v24 = v53;
        ++v51;
      }
      while ( (int)v51 < v50 );
    }
    *((_DWORD *)this + 82) = v24;
  }
  v33 = *((_QWORD *)a2 + 34);
  if ( v33 && !(_BYTE)a8 )
  {
    if ( a5 )
    {
      v48 = operator new[](a5);
      if ( a5 > 0 )
      {
        v49 = 0;
        do
        {
          *(_BYTE *)(v48 + v49) = *(_BYTE *)(v33 + a6[v49]);
          ++v49;
        }
        while ( v49 != (unsigned int)(a5 - 1) + 1LL );
      }
    }
    else
    {
      v48 = 0;
    }
    *((_QWORD *)this + 34) = v48;
    v34 = *((_QWORD *)a2 + 14);
    if ( v34 )
      goto LABEL_44;
  }
  else
  {
    *((_QWORD *)this + 34) = 0;
    v34 = *((_QWORD *)a2 + 14);
    if ( v34 )
    {
LABEL_44:
      *((_QWORD *)this + 14) = sub_8F5D0(v34, a3, (__int64)a4);
      *((_QWORD *)this + 16) = sub_8F5D0(*((_QWORD *)a2 + 16), a3, (__int64)a4);
      *((_QWORD *)this + 15) = sub_8F5D0(*((_QWORD *)a2 + 15), a5, (__int64)a6);
      *((_QWORD *)this + 17) = sub_8F5D0(*((_QWORD *)a2 + 17), a5, (__int64)a6);
      goto LABEL_45;
    }
  }
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
LABEL_45:
  *((_QWORD *)this + 18) = sub_8F5D0(*((_QWORD *)a2 + 18), a3, (__int64)a4);
  *((_QWORD *)this + 19) = sub_8F5D0(*((_QWORD *)a2 + 19), a3, (__int64)a4);
  *((_QWORD *)this + 22) = sub_8F5D0(*((_QWORD *)a2 + 22), a5, (__int64)a6);
  *((_QWORD *)this + 23) = sub_8F5D0(*((_QWORD *)a2 + 23), a5, (__int64)a6);
  v35 = *((_QWORD *)a2 + 20);
  if ( v35 )
    *((_QWORD *)this + 20) = (*(__int64 (__fastcall **)(__int64, _QWORD, const int *))(*(_QWORD *)v35 + 96LL))(
                               v35,
                               (unsigned int)a5,
                               a6);
  else
    *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = sub_8F5D0(*((_QWORD *)a2 + 21), a3, (__int64)a4);
  if ( !*((_QWORD *)a2 + 33) )
  {
    *((_QWORD *)this + 33) = 0;
    goto LABEL_61;
  }
  *((_QWORD *)this + 33) = operator new[](*((_DWORD *)this + 27) + *((_DWORD *)this + 26));
  v36 = *((_QWORD *)a2 + 33);
  v37 = *((_DWORD *)this + 26);
  v38 = v36 + *((int *)a2 + 27);
  v72 = v37;
  if ( v38 && v37 )
  {
    v39 = (_BYTE *)operator new[](v37);
    v36 = *((_QWORD *)a2 + 33);
    if ( v72 > 0 )
    {
      v40 = 0;
      do
      {
        v39[v40] = *(_BYTE *)(v38 + a4[v40]);
        ++v40;
      }
      while ( v40 != (unsigned int)(v72 - 1) + 1LL );
    }
    v41 = *((int *)this + 27);
    v42 = *((_DWORD *)this + 27);
    if ( !v36 || !(_DWORD)v41 )
    {
      CoinMemcpyN<unsigned char>(v39, *((unsigned int *)this + 26), v41 + *((_QWORD *)this + 33));
      operator delete[](v39);
      CoinMemcpyN<unsigned char>(0, *((unsigned int *)this + 27), *((_QWORD *)this + 33));
      goto LABEL_61;
    }
  }
  else
  {
    v41 = *((int *)this + 27);
    v42 = *((_DWORD *)this + 27);
    if ( !v36 || !(_DWORD)v41 )
    {
      CoinMemcpyN<unsigned char>(0, (unsigned int)v37, v41 + *((_QWORD *)this + 33));
      CoinMemcpyN<unsigned char>(0, *((unsigned int *)this + 27), *((_QWORD *)this + 33));
      goto LABEL_61;
    }
    v39 = nullptr;
  }
  v43 = operator new[](v41);
  if ( v42 > 0 )
  {
    v44 = 0;
    do
    {
      *(_BYTE *)(v43 + v44) = *(_BYTE *)(v36 + a6[v44]);
      ++v44;
    }
    while ( v44 != (unsigned int)(v42 - 1) + 1LL );
  }
  v73 = (void *)v43;
  CoinMemcpyN<unsigned char>(v39, *((unsigned int *)this + 26), *((_QWORD *)this + 33) + *((int *)this + 27));
  if ( v39 )
    operator delete[](v39);
  CoinMemcpyN<unsigned char>(v73, *((unsigned int *)this + 27), *((_QWORD *)this + 33));
  operator delete[](v73);
LABEL_61:
  v45 = *((_DWORD *)this + 80);
  *((_QWORD *)this + 27) = 0;
  if ( v45 == 1 )
  {
    v55 = sub_8F5D0(*((_QWORD *)a2 + 27), a3, (__int64)a4);
  }
  else
  {
    if ( v45 != 2 )
      goto LABEL_63;
    v55 = sub_8F5D0(*((_QWORD *)a2 + 27), a5, (__int64)a6);
  }
  *((_QWORD *)this + 27) = v55;
LABEL_63:
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  v46 = *((_DWORD *)a2 + 64);
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_DWORD *)this + 64) = v46;
  v47 = *((_QWORD *)a2 + 24);
  if ( v47 )
    *((_QWORD *)this + 24) = (*(__int64 (__fastcall **)(__int64, _QWORD, const int *, _QWORD, const int *))(*(_QWORD *)v47 + 448LL))(
                               v47,
                               a3,
                               a4,
                               (unsigned int)a5,
                               a6);
  if ( this != a2 )
    *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
}

