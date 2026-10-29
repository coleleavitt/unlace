__int64 __fastcall ClpModel::addColumns(ClpModel *this, CoinModel *a2, char a3, double a4)
{
  __int64 (__fastcall *v7)(CoinModel *__hidden); // rax
  __int64 v8; // rdx
  double *v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  char v12; // si
  unsigned __int64 v13; // rax
  double *v14; // rax
  int v15; // edi
  int v16; // r13d
  __int64 v17; // rdi
  double *v18; // r15
  __int64 v19; // r15
  __int64 v20; // r14
  bool v21; // zf
  int v22; // edx
  CoinMessageHandler *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r15
  int *v28; // r14
  unsigned __int64 v29; // rdi
  ClpPlusMinusOneMatrix *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  CoinMessageHandler *v34; // rax
  CoinMessageHandler *v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp-10h] [rbp-100h]
  __int64 v38; // [rsp-8h] [rbp-F8h]
  int *v39; // [rsp+8h] [rbp-E8h]
  int *v40; // [rsp+8h] [rbp-E8h]
  const int *v41; // [rsp+10h] [rbp-E0h]
  void *v42; // [rsp+10h] [rbp-E0h]
  int v43; // [rsp+1Ch] [rbp-D4h]
  double *v44; // [rsp+28h] [rbp-C8h] BYREF
  double *v45; // [rsp+30h] [rbp-C0h] BYREF
  double *v46; // [rsp+38h] [rbp-B8h] BYREF
  double *v47; // [rsp+40h] [rbp-B0h] BYREF
  double *v48; // [rsp+48h] [rbp-A8h] BYREF
  void *v49; // [rsp+50h] [rbp-A0h] BYREF
  double *v50; // [rsp+58h] [rbp-98h] BYREF
  _BYTE v51[32]; // [rsp+60h] [rbp-90h] BYREF
  double *v52; // [rsp+80h] [rbp-70h]
  const int *v53; // [rsp+88h] [rbp-68h]
  int *v54; // [rsp+90h] [rbp-60h]

  v7 = *(__int64 (__fastcall **)(CoinModel *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v7 == CoinModel::numberElements )
    v43 = *((_DWORD *)a2 + 27);
  else
    v43 = v7(a2);
  if ( v43 )
  {
    v8 = *((_QWORD *)a2 + 16);
    v9 = *((double **)a2 + 17);
    if ( v8 )
    {
      v10 = *((_DWORD *)a2 + 2);
      if ( v10 > 0 )
      {
        a4 = 1.797693134862316e308;
        v11 = 8LL * (unsigned int)(v10 - 1) + 8;
        v12 = 1;
        v13 = 0;
        do
        {
          if ( *(double *)(v8 + v13) != -1.797693134862316e308 )
            v12 = 0;
          if ( v9[v13 / 8] != 1.797693134862316e308 )
            v12 = 0;
          v13 += 8LL;
        }
        while ( v13 != v11 );
        if ( !v12 )
        {
          v34 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 43),
                                        84,
                                        (ClpModel *)((char *)this + 416));
          v35 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v34);
          v36 = CoinMessageHandler::operator<<(v35);
          CoinMessageHandler::operator<<(v36, 0, 1.797693134862316e308);
          return (unsigned int)-1;
        }
      }
    }
    v14 = *((double **)a2 + 24);
    v15 = *((_DWORD *)a2 + 66);
    v44 = *((double **)a2 + 16);
    v45 = v9;
    v46 = v14;
    v47 = *((double **)a2 + 25);
    v48 = *((double **)a2 + 23);
    v49 = *((void **)a2 + 30);
    v50 = *((double **)a2 + 78);
    if ( v15 )
    {
      v22 = CoinModel::createArrays(a2, &v44, &v45, &v46, &v47, &v48, (int **)&v49, &v50);
      v43 = v22;
      if ( !*((_DWORD *)a2 + 3) || v22 )
      {
LABEL_29:
        if ( v46 != *((double **)a2 + 24) )
        {
          if ( v44 )
            operator delete[](v44);
          if ( v45 )
            operator delete[](v45);
          if ( v46 )
            operator delete[](v46);
          if ( v47 )
            operator delete[](v47);
          if ( v48 )
            operator delete[](v48);
          if ( v49 )
            operator delete[](v49);
          if ( v50 )
            operator delete[](v50);
          if ( v43 )
          {
            v23 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          *((CoinMessageHandler **)this + 43),
                                          85,
                                          (ClpModel *)((char *)this + 416));
            v24 = CoinMessageHandler::operator<<(v23);
            CoinMessageHandler::operator<<(v24, 0, a4);
          }
        }
        goto LABEL_46;
      }
      v16 = *((_DWORD *)this + 27);
      v43 = *((_DWORD *)a2 + 3);
    }
    else
    {
      v43 = *((_DWORD *)a2 + 3);
      if ( !v43 )
      {
LABEL_46:
        ClpModel::synchronizeMatrix(this);
        return (unsigned int)v43;
      }
      v16 = *((_DWORD *)this + 27);
    }
    v17 = *((_QWORD *)this + 24);
    if ( (!v17 || !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17)) && !v16 && a3 )
    {
      v26 = v43 + 1;
      if ( v26 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_61;
      v27 = 4 * v26;
      v28 = (int *)operator new[](v27);
      if ( (unsigned __int64)v43 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_61;
      v42 = (void *)operator new[](v27 - 4);
      CoinModel::countPlusMinusOne(a2, v28, v42, v50);
      if ( *v28 >= 0 )
      {
        ClpModel::addColumns(this, v43, v46, v47, v48, nullptr, nullptr, nullptr);
        v29 = v28[v27 / 4 - 1];
        if ( v29 <= 0x1FFFFFFFFFFFFFFELL )
        {
          v40 = (int *)operator new[](4 * v29);
          CoinModel::createPlusMinusOne(a2, v28, (int *)v42, v40, v50);
          v30 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
          ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v30);
          ClpPlusMinusOneMatrix::passInCopy(v30, *((_DWORD *)this + 26), v43, 1, v40, v28, (int *)v42);
          v33 = *((_QWORD *)this + 24);
          if ( v33 )
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v33 + 480LL))(
              v33,
              v37,
              v31,
              v32,
              v38);
          *((_QWORD *)this + 24) = v30;
          goto LABEL_19;
        }
LABEL_61:
        __cxa_throw_bad_array_new_length();
      }
      operator delete[](v28);
      operator delete[](v42);
    }
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v51);
    CoinModel::createPackedMatrix(a2, (CoinPackedMatrix *)v51, v50);
    v18 = v52;
    v41 = v53;
    v39 = v54;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 24) + 192LL))(
      *((_QWORD *)this + 24),
      *((unsigned int *)this + 26),
      0xFFFFFFFFLL);
    ClpModel::addColumns(this, v43, v46, v47, v48, v39, v41, v18);
    CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v51);
LABEL_19:
    if ( *((_DWORD *)a2 + 56) )
      ClpModel::copyColumnNames(this, *((const char *const **)a2 + 26), v16, *((_DWORD *)this + 27));
    if ( v43 > 0 )
    {
      v19 = 0;
      v20 = (unsigned int)(v43 - 1) + 1LL;
      do
      {
        while ( !*((_DWORD *)v49 + v19) )
        {
          v21 = v20 == ++v19;
          if ( v21 )
            goto LABEL_26;
        }
        ClpModel::setInteger(this, v16 + v19);
        v21 = v20 == ++v19;
      }
      while ( !v21 );
    }
LABEL_26:
    v43 = 0;
    goto LABEL_29;
  }
  return (unsigned int)v43;
}

