__int64 __fastcall ClpModel::loadProblem(CoinMessageHandler **this, CoinModel *a2, char a3)
{
  int v3; // r12d
  unsigned int v4; // r13d
  double *v6; // rax
  double *v7; // rcx
  double *v8; // r8
  double *v9; // r9
  double *v11; // rdx
  void *v12; // rsi
  double *v14; // rsi
  double v15; // xmm0_8
  __int64 v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  int *v19; // r14
  unsigned __int64 v20; // rdi
  ClpPlusMinusOneMatrix *v21; // r15
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // r14
  int v27; // esi
  ClpPackedMatrix *v29; // r15
  unsigned int v30; // eax
  CoinMessageHandler *v31; // rax
  __int64 v32; // rax
  void *v33; // [rsp+8h] [rbp-F0h]
  int v34; // [rsp+14h] [rbp-E4h]
  int *v35; // [rsp+18h] [rbp-E0h]
  double *v36; // [rsp+28h] [rbp-D0h] BYREF
  double *v37; // [rsp+30h] [rbp-C8h] BYREF
  double *v38; // [rsp+38h] [rbp-C0h] BYREF
  double *v39; // [rsp+40h] [rbp-B8h] BYREF
  double *v40; // [rsp+48h] [rbp-B0h] BYREF
  void *v41; // [rsp+50h] [rbp-A8h] BYREF
  double *v42; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v43[152]; // [rsp+60h] [rbp-98h] BYREF

  v3 = *((_DWORD *)a2 + 3);
  if ( !v3 )
  {
    v4 = *((_DWORD *)a2 + 2);
    if ( !v4 )
      return v4;
  }
  v6 = *((double **)a2 + 16);
  v7 = *((double **)a2 + 24);
  v8 = *((double **)a2 + 25);
  v9 = *((double **)a2 + 23);
  v11 = *((double **)a2 + 17);
  v12 = *((void **)a2 + 30);
  v4 = *((_DWORD *)a2 + 66);
  v36 = v6;
  v38 = v7;
  v39 = v8;
  v41 = v12;
  v14 = *((double **)a2 + 78);
  v37 = v11;
  v40 = v9;
  v42 = v14;
  if ( v4 )
  {
    v30 = CoinModel::createArrays(a2, &v36, &v37, &v38, &v39, &v40, (int **)&v41, &v42);
    v11 = v37;
    v9 = v40;
    v4 = v30;
    v8 = v39;
    v6 = v36;
    v7 = v38;
    v3 = *((_DWORD *)a2 + 3);
  }
  v34 = *((_DWORD *)a2 + 2);
  ClpModel::gutsOfLoadModel((ClpModel *)this, v34, v3, v7, v8, v9, v6, v11, nullptr);
  v15 = *((double *)a2 + 3);
  ClpModel::setObjectiveOffset((ClpModel *)this, v15);
  v16 = (__int64)*(this + 24);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 480LL))(v16);
  if ( a3 )
  {
    v17 = v3 + 1;
    if ( v17 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_44;
    v18 = 4 * v17;
    v19 = (int *)operator new[](v18);
    if ( (unsigned __int64)v3 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_44;
    v33 = (void *)operator new[](v18 - 4);
    CoinModel::countPlusMinusOne(a2, v19, v33, v42);
    if ( *v19 >= 0 )
    {
      v20 = v19[v18 / 4 - 1];
      if ( v20 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v35 = (int *)operator new[](4 * v20);
        CoinModel::createPlusMinusOne(a2, v19, (int *)v33, v35, v42);
        v21 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
        ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v21);
        ClpPlusMinusOneMatrix::passInCopy(v21, v34, v3, 1, v35, v19, (int *)v33);
        *(this + 24) = v21;
        v22 = *((_DWORD *)a2 + 40);
        if ( !v22 )
          goto LABEL_13;
LABEL_40:
        ClpModel::copyRowNames((ClpModel *)this, *((const char *const **)a2 + 18), 0, v22);
        v23 = *((_DWORD *)a2 + 56);
        if ( !v23 )
          goto LABEL_14;
LABEL_41:
        ClpModel::copyColumnNames((ClpModel *)this, *((const char *const **)a2 + 26), 0, v23);
        goto LABEL_14;
      }
LABEL_44:
      __cxa_throw_bad_array_new_length();
    }
    operator delete[](v19);
    operator delete[](v33);
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v43);
  CoinModel::createPackedMatrix(a2, (CoinPackedMatrix *)v43, v42);
  v29 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v29, (const CoinPackedMatrix *)v43);
  *(this + 24) = v29;
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v43);
  v22 = *((_DWORD *)a2 + 40);
  if ( v22 )
    goto LABEL_40;
LABEL_13:
  v23 = *((_DWORD *)a2 + 56);
  if ( v23 )
    goto LABEL_41;
LABEL_14:
  if ( v3 > 0 )
  {
    v24 = (unsigned int)(v3 - 1);
    v25 = 0;
    v26 = v24 + 1;
    do
    {
      while ( !*((_DWORD *)v41 + v25) )
      {
        if ( v26 == ++v25 )
          goto LABEL_19;
      }
      v27 = v25++;
      ClpModel::setInteger((ClpModel *)this, v27);
    }
    while ( v26 != v25 );
  }
LABEL_19:
  if ( v36 != *((double **)a2 + 16) || v38 != *((double **)a2 + 24) )
  {
    if ( v36 )
      operator delete[](v36);
    if ( v37 )
      operator delete[](v37);
    if ( v38 )
      operator delete[](v38);
    if ( v39 )
      operator delete[](v39);
    if ( v40 )
      operator delete[](v40);
    if ( v41 )
      operator delete[](v41);
    if ( v42 )
      operator delete[](v42);
    if ( v4 )
    {
      v31 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 43), 85, (const CoinMessages *)(this + 52));
      v32 = CoinMessageHandler::operator<<(v31);
      CoinMessageHandler::operator<<(v32, 0, v15);
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*(this + 24) + 192LL))(
    *(this + 24),
    *((unsigned int *)this + 26),
    *((unsigned int *)this + 27));
  return v4;
}

