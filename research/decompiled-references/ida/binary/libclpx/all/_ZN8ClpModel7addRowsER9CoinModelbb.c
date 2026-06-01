__int64 __fastcall ClpModel::addRows(ClpModel *this, CoinModel *a2, char a3, char a4, double a5)
{
  __int64 (__fastcall *v9)(CoinModel *__hidden); // rax
  double *v10; // rcx
  double *v11; // r8
  __int64 v12; // rdi
  _DWORD *v13; // rsi
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  char v18; // dl
  double *v19; // rax
  int v20; // edi
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  int *v24; // r13
  unsigned __int64 v25; // rdi
  int *v26; // r15
  ClpPlusMinusOneMatrix *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  unsigned int v32; // ecx
  CoinMessageHandler *v33; // rax
  __int64 v34; // rax
  __int64 v36; // rdi
  ClpPackedMatrix *v37; // r15
  CoinMessageHandler *v38; // rax
  CoinMessageHandler *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // [rsp-10h] [rbp-100h]
  void *v44; // [rsp+8h] [rbp-E8h]
  void *v45; // [rsp+8h] [rbp-E8h]
  int v46; // [rsp+10h] [rbp-E0h]
  int v47[2]; // [rsp+10h] [rbp-E0h]
  int v48; // [rsp+18h] [rbp-D8h]
  unsigned int v49; // [rsp+1Ch] [rbp-D4h]
  double *v50; // [rsp+28h] [rbp-C8h] BYREF
  double *v51; // [rsp+30h] [rbp-C0h] BYREF
  double *v52; // [rsp+38h] [rbp-B8h] BYREF
  double *v53; // [rsp+40h] [rbp-B0h] BYREF
  double *v54; // [rsp+48h] [rbp-A8h] BYREF
  void *v55; // [rsp+50h] [rbp-A0h] BYREF
  double *v56; // [rsp+58h] [rbp-98h] BYREF
  _BYTE v57[32]; // [rsp+60h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-70h]
  __int64 v59; // [rsp+88h] [rbp-68h]
  void *v60; // [rsp+90h] [rbp-60h]

  v9 = *(__int64 (__fastcall **)(CoinModel *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v9 == CoinModel::numberElements )
    v49 = *((_DWORD *)a2 + 27);
  else
    v49 = v9(a2);
  if ( v49 )
  {
    v10 = *((double **)a2 + 24);
    v11 = *((double **)a2 + 25);
    v12 = *((_QWORD *)a2 + 23);
    v13 = *((_DWORD **)a2 + 30);
    if ( v10 )
    {
      v14 = *((_DWORD *)a2 + 3);
      if ( v14 > 0 )
      {
        v15 = (unsigned int)(v14 - 1);
        a5 = 0.0;
        v16 = 0;
        v17 = v15 + 1;
        v18 = 1;
        do
        {
          if ( v10[v16] != 0.0 )
            v18 = 0;
          if ( v11[v16] != 1.797693134862316e308 )
            v18 = 0;
          if ( *(double *)(v12 + 8 * v16) != 0.0 )
            v18 = 0;
          if ( v13[v16] )
            v18 = 0;
          ++v16;
        }
        while ( v17 != v16 );
        if ( !v18 )
        {
          v38 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)this + 43),
                                        84,
                                        (ClpModel *)((char *)this + 416));
          v39 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v38);
          v40 = CoinMessageHandler::operator<<(v39);
          CoinMessageHandler::operator<<(v40, 0, 0.0);
          return (unsigned int)-1;
        }
      }
    }
    v19 = *((double **)a2 + 16);
    v54 = *((double **)a2 + 23);
    v20 = *((_DWORD *)a2 + 66);
    v52 = v10;
    v53 = v11;
    v55 = v13;
    v50 = v19;
    v51 = *((double **)a2 + 17);
    v56 = *((double **)a2 + 78);
    if ( v20 )
    {
      v32 = CoinModel::createArrays(a2, &v50, &v51, &v52, &v53, &v54, (int **)&v55, &v56);
      v49 = v32;
      if ( !*((_DWORD *)a2 + 2) || v32 )
      {
LABEL_35:
        if ( v50 != *((double **)a2 + 16) )
        {
          if ( v50 )
            operator delete[](v50);
          if ( v51 )
            operator delete[](v51);
          if ( v52 )
            operator delete[](v52);
          if ( v53 )
            operator delete[](v53);
          if ( v54 )
            operator delete[](v54);
          if ( v55 )
            operator delete[](v55);
          if ( v56 )
            operator delete[](v56);
          if ( v49 )
          {
            v33 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          *((CoinMessageHandler **)this + 43),
                                          85,
                                          (ClpModel *)((char *)this + 416));
            v34 = CoinMessageHandler::operator<<(v33);
            CoinMessageHandler::operator<<(v34, 0, a5);
          }
        }
        goto LABEL_52;
      }
      v49 = *((_DWORD *)a2 + 2);
      v48 = *((_DWORD *)this + 26);
    }
    else
    {
      v49 = *((_DWORD *)a2 + 2);
      if ( !v49 )
      {
LABEL_52:
        ClpModel::synchronizeMatrix(this);
        return v49;
      }
      v48 = *((_DWORD *)this + 26);
    }
    v21 = *((_QWORD *)this + 24);
    v46 = *((_DWORD *)a2 + 3);
    if ( (!v21 || !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21)) && !v48 && a3 )
    {
      v22 = v46 + 1;
      if ( v22 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_66;
      v23 = 4 * v22;
      v24 = (int *)operator new[](v23);
      if ( (unsigned __int64)v46 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_66;
      v44 = (void *)operator new[](v23 - 4);
      CoinModel::countPlusMinusOne(a2, v24, v44, v56);
      if ( *v24 >= 0 )
      {
        ClpModel::addRows(this, v49, v50, v51, nullptr, nullptr, nullptr);
        v25 = v24[v23 / 4 - 1];
        if ( v25 <= 0x1FFFFFFFFFFFFFFELL )
        {
          v26 = (int *)operator new[](4 * v25);
          CoinModel::createPlusMinusOne(a2, v24, (int *)v44, v26, v56);
          v27 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
          ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v27);
          ClpPlusMinusOneMatrix::passInCopy(v27, v49, v46, 1, v26, v24, (int *)v44);
          v31 = *((_QWORD *)this + 24);
          if ( v31 )
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD *)v31 + 480LL))(
              v31,
              v49,
              v28,
              v29,
              v30,
              v43);
          *((_QWORD *)this + 24) = v27;
          v49 = 0;
LABEL_31:
          if ( *((_DWORD *)a2 + 40) )
            ClpModel::copyRowNames(this, *((const char *const **)a2 + 18), v48, *((_DWORD *)this + 26));
          goto LABEL_35;
        }
LABEL_66:
        __cxa_throw_bad_array_new_length();
      }
      operator delete[](v24);
      operator delete[](v44);
    }
    ClpModel::addRows(this, v49, v50, v51, nullptr, nullptr, nullptr);
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v57);
    CoinModel::createPackedMatrix(a2, (CoinPackedMatrix *)v57, v56);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24)) )
    {
      CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v57);
      v41 = v58;
      *(_QWORD *)v47 = v59;
      v45 = v60;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 24) + 192LL))(
        *((_QWORD *)this + 24),
        0xFFFFFFFFLL,
        *((unsigned int *)this + 27));
      v42 = 0xFFFFFFFFLL;
      if ( a4 )
        v42 = *((unsigned int *)this + 27);
      v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, int *, __int64, __int64))(**((_QWORD **)this + 24)
                                                                                               + 120LL))(
              *((_QWORD *)this + 24),
              v49,
              0,
              v45,
              *(int **)v47,
              v41,
              v42);
    }
    else
    {
      v36 = *((_QWORD *)this + 24);
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 480LL))(v36);
      v37 = (ClpPackedMatrix *)operator new(0x78u);
      ClpPackedMatrix::ClpPackedMatrix(v37, (const CoinPackedMatrix *)v57);
      *((_QWORD *)this + 24) = v37;
      v49 = 0;
    }
    CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v57);
    goto LABEL_31;
  }
  return v49;
}

