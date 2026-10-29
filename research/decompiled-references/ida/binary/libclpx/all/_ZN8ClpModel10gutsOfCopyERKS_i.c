void __fastcall ClpModel::gutsOfCopy(ClpModel *this, const ClpModel *a2, int a3)
{
  char v6; // al
  int v7; // eax
  const void *v8; // r13
  size_t v9; // r12
  void *v10; // rax
  void *v11; // rcx
  const void *v12; // r13
  unsigned __int64 v13; // rdx
  size_t v14; // r12
  void *v15; // rax
  void *v16; // rcx
  const void *v17; // r13
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r12
  void *v20; // rax
  void *v21; // rcx
  const void *v22; // r13
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r12
  void *v25; // rax
  void *v26; // rcx
  const void *v27; // r13
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r12
  void *v30; // rax
  void *v31; // rcx
  const void *v32; // r13
  unsigned __int64 v33; // rdx
  size_t v34; // r12
  void *v35; // rax
  void *v36; // rax
  void *v37; // rcx
  const void *v38; // r13
  size_t v39; // r12
  void *v40; // rax
  void *v41; // rcx
  const void *v42; // r13
  unsigned __int64 v43; // rdx
  size_t v44; // r12
  void *v45; // rax
  void *v46; // rax
  void *v47; // rcx
  const void *v48; // r13
  size_t v49; // r12
  void *v50; // rax
  void *v51; // rcx
  const void *v52; // r13
  int v53; // r12d
  unsigned __int64 v54; // r12
  void *v55; // rax
  void *v56; // rcx
  const void *v57; // r13
  int v58; // edx
  unsigned __int64 v59; // r12
  void *v60; // rax
  void *v61; // rcx
  __int64 v62; // rdi
  const void *v63; // r13
  unsigned __int64 v64; // rdx
  size_t v65; // r12
  void *v66; // rax
  void *v67; // rax
  void *v68; // rcx
  const void *v69; // r13
  int v70; // edx
  size_t v71; // r12
  void *v72; // rax
  void *v73; // rcx
  int v74; // eax
  __int64 v75; // rdi
  ClpPackedMatrix *v76; // r12
  __int64 v77; // rdi
  CoinMessageHandler *v78; // r13
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 *v82; // r15
  __int64 *v83; // r14
  __int64 *v84; // r13
  char *v85; // rcx
  __int64 *v86; // rdx
  __int64 *v87; // r15
  __int64 *v88; // r13
  char *v89; // r8
  __int64 v90; // rax
  char *v91; // r8
  __int64 v92; // rax
  int v93; // ecx
  int v94; // edx
  const void *v95; // rsi
  const void *v96; // rsi
  __int64 v97; // rax
  char *v98; // [rsp+0h] [rbp-78h]
  char *v99; // [rsp+0h] [rbp-78h]
  char *v100; // [rsp+0h] [rbp-78h]
  char *v101; // [rsp+0h] [rbp-78h]
  __int64 *v102; // [rsp+8h] [rbp-70h]
  __int64 *v103; // [rsp+8h] [rbp-70h]
  char v104; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v105; // [rsp+20h] [rbp-58h] BYREF
  __int64 v106; // [rsp+28h] [rbp-50h]
  __int64 v107; // [rsp+30h] [rbp-48h]

  v6 = *((_BYTE *)a2 + 352);
  *((_BYTE *)this + 352) = v6;
  if ( a2 != this )
    *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
  if ( a3 < 0 )
  {
    if ( !*((_QWORD *)this + 45) )
    {
      v79 = *((_QWORD *)a2 + 45);
      if ( v79 )
        *((_QWORD *)this + 45) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 32LL))(v79);
    }
  }
  else
  {
    if ( v6 )
    {
      v78 = (CoinMessageHandler *)operator new(0x640u);
      CoinMessageHandler::CoinMessageHandler(v78, *((const CoinMessageHandler **)a2 + 43));
      *((_QWORD *)this + 43) = v78;
    }
    else
    {
      *((_QWORD *)this + 43) = *((_QWORD *)a2 + 43);
    }
    *((_QWORD *)this + 45) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 45) + 32LL))(*((_QWORD *)a2 + 45));
    CoinMessages::operator=((char *)this + 416, (char *)a2 + 416);
    CoinMessages::operator=((char *)this + 448, (char *)a2 + 448);
  }
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
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 9);
  *((_QWORD *)this + 10) = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 11);
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
  *((_DWORD *)this + 79) = *((_DWORD *)a2 + 79);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 81);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_QWORD *)this + 35) = *((_QWORD *)a2 + 35);
  *((_QWORD *)this + 36) = *((_QWORD *)a2 + 36);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
  if ( !a3 )
  {
    *((_QWORD *)this + 84) = *((_QWORD *)a2 + 84);
    *((_QWORD *)this + 85) = *((_QWORD *)a2 + 85);
    *((_QWORD *)this + 14) = *((_QWORD *)a2 + 14);
    *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
    *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
    *((_QWORD *)this + 17) = *((_QWORD *)a2 + 17);
    *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
    *((_QWORD *)this + 19) = *((_QWORD *)a2 + 19);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 20);
    *((_QWORD *)this + 21) = *((_QWORD *)a2 + 21);
    *((_QWORD *)this + 22) = *((_QWORD *)a2 + 22);
    *((_QWORD *)this + 23) = *((_QWORD *)a2 + 23);
    v80 = *((_QWORD *)a2 + 24);
    *((_QWORD *)this + 25) = 0;
    *((_QWORD *)this + 26) = 0;
    *((_QWORD *)this + 24) = v80;
    v81 = *((_QWORD *)a2 + 27);
    *((_DWORD *)this + 82) = 0;
    *((_QWORD *)this + 27) = v81;
    *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
    v82 = *((__int64 **)this + 46);
    v83 = *((__int64 **)this + 47);
    v105 = 0;
    v106 = 0;
    v107 = 0;
    *((_QWORD *)this + 46) = 0;
    *((_QWORD *)this + 47) = 0;
    *((_QWORD *)this + 48) = 0;
    if ( v82 != v83 )
    {
      v84 = v82;
      v85 = &v104;
      if ( !&_pthread_key_create )
      {
        v91 = &v104;
        do
        {
          v92 = *v84;
          if ( (_UNKNOWN *)(*v84 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          {
            v94 = *(_DWORD *)(v92 - 8);
            *(_DWORD *)(v92 - 8) = v94 - 1;
            if ( v94 <= 0 )
            {
              v101 = v91;
              std::string::_Rep::_M_destroy();
              v91 = v101;
            }
          }
          ++v84;
        }
        while ( v84 != v83 );
        if ( !v82 )
        {
LABEL_70:
          std::vector<std::string>::~vector(&v105);
          v86 = *((__int64 **)this + 49);
          v87 = *((__int64 **)this + 50);
          v105 = 0;
          v106 = 0;
          v107 = 0;
          *((_QWORD *)this + 49) = 0;
          *((_QWORD *)this + 50) = 0;
          *((_QWORD *)this + 51) = 0;
          if ( v86 != v87 )
          {
            v88 = v86;
            v89 = &v104;
            if ( !&_pthread_key_create )
            {
              do
              {
                v90 = *v88;
                if ( (_UNKNOWN *)(*v88 - 24) != &std::string::_Rep::_S_empty_rep_storage )
                {
                  v93 = *(_DWORD *)(v90 - 8);
                  *(_DWORD *)(v90 - 8) = v93 - 1;
                  if ( v93 <= 0 )
                  {
                    v103 = v86;
                    v100 = v89;
                    std::string::_Rep::_M_destroy();
                    v89 = v100;
                    v86 = v103;
                  }
                }
                ++v88;
              }
              while ( v87 != v88 );
              if ( !v86 )
                goto LABEL_76;
              goto LABEL_75;
            }
            do
            {
              if ( (_UNKNOWN *)(*v88 - 24) != &std::string::_Rep::_S_empty_rep_storage
                && _InterlockedExchangeAdd((volatile signed __int32 *)(*v88 - 8), 0xFFFFFFFF) <= 0 )
              {
                v102 = v86;
                v98 = v89;
                std::string::_Rep::_M_destroy();
                v86 = v102;
                v89 = v98;
              }
              ++v88;
            }
            while ( v87 != v88 );
          }
          if ( !v86 )
          {
LABEL_76:
            std::vector<std::string>::~vector(&v105);
            *((_QWORD *)this + 34) = 0;
            *((_QWORD *)this + 33) = *((_QWORD *)a2 + 33);
            goto LABEL_59;
          }
LABEL_75:
          operator delete(v86);
          goto LABEL_76;
        }
LABEL_69:
        operator delete(v82);
        goto LABEL_70;
      }
      do
      {
        if ( (_UNKNOWN *)(*v84 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v84 - 8), 0xFFFFFFFF) <= 0 )
        {
          v99 = v85;
          std::string::_Rep::_M_destroy();
          v85 = v99;
        }
        ++v84;
      }
      while ( v83 != v84 );
    }
    if ( !v82 )
      goto LABEL_70;
    goto LABEL_69;
  }
  v7 = *((_DWORD *)a2 + 82);
  *((_DWORD *)this + 82) = v7;
  if ( v7 )
  {
    std::vector<std::string>::operator=((char *)this + 368, (char *)a2 + 368);
    std::vector<std::string>::operator=((char *)this + 392, (char *)a2 + 392);
  }
  *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
  if ( *((int *)this + 121) >= 0 )
  {
    *((_QWORD *)this + 84) = 0;
    *((_QWORD *)this + 85) = 0;
    ClpModel::startPermanentArrays(this);
    v95 = *((const void **)a2 + 34);
    if ( v95 )
      memcpy(*((void **)this + 34), v95, *((int *)this + 27));
    else
      *((_QWORD *)this + 34) = 0;
    v96 = *((const void **)a2 + 14);
    v97 = *((int *)this + 26);
    if ( v96 )
    {
      memcpy(*((void **)this + 14), v96, 8 * v97);
      memcpy(*((void **)this + 15), *((const void **)a2 + 15), 8LL * *((int *)this + 27));
      memcpy(*((void **)this + 16), *((const void **)a2 + 16), 8LL * *((int *)this + 26));
      memcpy(*((void **)this + 17), *((const void **)a2 + 17), 8LL * *((int *)this + 27));
      v97 = *((int *)this + 26);
    }
    else
    {
      *((_QWORD *)this + 14) = 0;
      *((_QWORD *)this + 15) = 0;
      *((_QWORD *)this + 16) = 0;
      *((_QWORD *)this + 17) = 0;
    }
    memcpy(*((void **)this + 18), *((const void **)a2 + 18), 8 * v97);
    memcpy(*((void **)this + 19), *((const void **)a2 + 19), 8LL * *((int *)this + 26));
    memcpy(*((void **)this + 22), *((const void **)a2 + 22), 8LL * *((int *)this + 27));
    abort();
  }
  *((_DWORD *)this + 84) &= ~0x10000u;
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 85) = 0;
  v8 = *((const void **)a2 + 34);
  v9 = *((int *)this + 27);
  if ( v8 )
  {
    v10 = (void *)operator new[](*((int *)this + 27));
    v11 = memcpy(v10, v8, v9);
  }
  else
  {
    v11 = nullptr;
  }
  *((_QWORD *)this + 34) = v11;
  v12 = *((const void **)a2 + 14);
  v13 = *((int *)this + 26);
  if ( v12 )
  {
    if ( v13 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v14 = 8 * v13;
    v15 = (void *)operator new[](8 * v13);
    v16 = memcpy(v15, v12, v14);
  }
  else
  {
    v16 = nullptr;
  }
  *((_QWORD *)this + 14) = v16;
  v17 = *((const void **)a2 + 15);
  v18 = *((int *)this + 27);
  if ( v17 )
  {
    if ( v18 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v19 = 8 * v18;
    v20 = (void *)operator new[](v19);
    v21 = memcpy(v20, v17, v19);
  }
  else
  {
    v21 = nullptr;
  }
  *((_QWORD *)this + 15) = v21;
  v22 = *((const void **)a2 + 16);
  v23 = *((int *)this + 26);
  if ( v22 )
  {
    if ( v23 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v24 = 8 * v23;
    v25 = (void *)operator new[](v24);
    v26 = memcpy(v25, v22, v24);
  }
  else
  {
    v26 = nullptr;
  }
  *((_QWORD *)this + 16) = v26;
  v27 = *((const void **)a2 + 17);
  v28 = *((int *)this + 27);
  if ( v27 )
  {
    if ( v28 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v29 = 8 * v28;
    v30 = (void *)operator new[](v29);
    v31 = memcpy(v30, v27, v29);
  }
  else
  {
    v31 = nullptr;
  }
  *((_QWORD *)this + 17) = v31;
  v32 = *((const void **)a2 + 18);
  v33 = *((int *)this + 26);
  if ( v32 )
  {
    if ( v33 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v34 = 8 * v33;
    v35 = (void *)operator new[](8 * v33);
    v36 = memcpy(v35, v32, v34);
    v33 = *((int *)this + 26);
    v37 = v36;
  }
  else
  {
    v37 = nullptr;
  }
  *((_QWORD *)this + 18) = v37;
  v38 = *((const void **)a2 + 19);
  if ( v38 )
  {
    if ( v33 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v39 = 8 * v33;
    v40 = (void *)operator new[](8 * v33);
    v41 = memcpy(v40, v38, v39);
  }
  else
  {
    v41 = nullptr;
  }
  *((_QWORD *)this + 19) = v41;
  v42 = *((const void **)a2 + 22);
  v43 = *((int *)this + 27);
  if ( v42 )
  {
    if ( v43 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v44 = 8 * v43;
    v45 = (void *)operator new[](8 * v43);
    v46 = memcpy(v45, v42, v44);
    v43 = *((int *)this + 27);
    v47 = v46;
  }
  else
  {
    v47 = nullptr;
  }
  *((_QWORD *)this + 22) = v47;
  v48 = *((const void **)a2 + 23);
  if ( v48 )
  {
    if ( v43 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v49 = 8 * v43;
    v50 = (void *)operator new[](8 * v43);
    v51 = memcpy(v50, v48, v49);
  }
  else
  {
    v51 = nullptr;
  }
  *((_QWORD *)this + 23) = v51;
  v52 = *((const void **)a2 + 28);
  v53 = 2 * *((_DWORD *)this + 26);
  if ( v52 )
  {
    if ( (unsigned __int64)v53 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v54 = 8LL * v53;
    v55 = (void *)operator new[](v54);
    v56 = memcpy(v55, v52, v54);
  }
  else
  {
    v56 = nullptr;
  }
  *((_QWORD *)this + 28) = v56;
  v57 = *((const void **)a2 + 29);
  v58 = 2 * *((_DWORD *)this + 27);
  if ( v57 )
  {
    if ( (unsigned __int64)v58 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_111;
    v59 = 8LL * v58;
    v60 = (void *)operator new[](v59);
    v61 = memcpy(v60, v57, v59);
  }
  else
  {
    v61 = nullptr;
  }
  *((_QWORD *)this + 29) = v61;
  v62 = *((_QWORD *)a2 + 20);
  if ( v62 )
    *((_QWORD *)this + 20) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 88LL))(v62);
  else
    *((_QWORD *)this + 20) = 0;
  v63 = *((const void **)a2 + 21);
  v64 = *((int *)this + 26);
  if ( !v63 )
  {
    v68 = nullptr;
    goto LABEL_48;
  }
  if ( v64 > 0xFFFFFFFFFFFFFFFLL )
LABEL_111:
    __cxa_throw_bad_array_new_length();
  v65 = 8 * v64;
  v66 = (void *)operator new[](8 * v64);
  v67 = memcpy(v66, v63, v65);
  LODWORD(v64) = *((_DWORD *)this + 26);
  v68 = v67;
LABEL_48:
  *((_QWORD *)this + 21) = v68;
  v69 = *((const void **)a2 + 33);
  v70 = *((_DWORD *)this + 27) + v64;
  if ( v69 )
  {
    v71 = v70;
    v72 = (void *)operator new[](v70);
    v73 = memcpy(v72, v69, v71);
  }
  else
  {
    v73 = nullptr;
  }
  v74 = *((_DWORD *)this + 80);
  *((_QWORD *)this + 33) = v73;
  *((_QWORD *)this + 27) = 0;
  if ( v74 == 1 || v74 == 2 )
    *((_QWORD *)this + 27) = ClpCopyOfArray<double>(*((void **)a2 + 27));
  v75 = *((_QWORD *)a2 + 25);
  if ( v75 )
    *((_QWORD *)this + 25) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v75 + 440LL))(v75);
  else
    *((_QWORD *)this + 25) = 0;
  if ( *((_QWORD *)a2 + 26) )
  {
    v76 = (ClpPackedMatrix *)operator new(0x78u);
    ClpPackedMatrix::ClpPackedMatrix(v76, *((const ClpPackedMatrix **)a2 + 26));
    *((_QWORD *)this + 26) = v76;
  }
  else
  {
    *((_QWORD *)this + 26) = 0;
  }
  *((_QWORD *)this + 24) = 0;
  v77 = *((_QWORD *)a2 + 24);
  if ( v77 )
    *((_QWORD *)this + 24) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 440LL))(v77);
LABEL_59:
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
}

