__int64 __fastcall ClpModel::writeMps(ClpModel *this, const char *a2, int a3, int a4, double a5)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  const char *const *v11; // r14
  const char *const *v12; // r15
  const double *v13; // r13
  const CoinPackedMatrix *v14; // rax
  const char *v15; // rsi
  void *v16; // rdi
  CoinPackedMatrix *v17; // r12
  const void *v18; // rdi
  void *v19; // rax
  unsigned int v20; // r12d
  int v22; // edi
  __int64 v23; // rax
  int v24; // esi
  int v25; // r8d
  double *v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // r9d
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int128 v31; // xmm0
  unsigned int v32; // eax
  double *v33; // rdx
  int v34; // eax
  double *v38; // [rsp+10h] [rbp-1A0h]
  double *v39; // [rsp+18h] [rbp-198h]
  double *v40; // [rsp+20h] [rbp-190h]
  _BYTE v41[32]; // [rsp+30h] [rbp-180h] BYREF
  _BYTE v42[136]; // [rsp+50h] [rbp-160h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-D8h]
  __int64 v44; // [rsp+140h] [rbp-70h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 24) + 192LL))(
    *((_QWORD *)this + 24),
    *((unsigned int *)this + 26),
    *((unsigned int *)this + 27));
  v6 = *((int *)this + 27);
  if ( v6 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v7 = operator new[](8 * v6);
  v8 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  v9 = v7;
  v10 = *((_DWORD *)this + 27);
  if ( v8 )
    v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))(**v8)(v8, 0, 0, v42, 0, 2);
  CoinMemcpyN<double>(v8, v10, v9);
  if ( a5 * *(double *)this < 0.0 )
  {
    v22 = *((_DWORD *)this + 27);
    if ( v22 > 0 )
    {
      v23 = (v9 >> 3) & 1;
      if ( v22 - 1 < 2 - (unsigned int)((_DWORD)v23 == 0) )
      {
        v32 = 0;
LABEL_19:
        v33 = (double *)(v9 + 8LL * (int)v32);
        v34 = v32 + 1;
        *v33 = -*v33;
        if ( v34 < v22 )
          *(double *)(v9 + 8LL * v34) = -*(double *)(v9 + 8LL * v34);
        goto LABEL_5;
      }
      v24 = 0;
      if ( (_DWORD)v23 )
      {
        v24 = 1;
        *(double *)v9 = -*(double *)v9;
      }
      v25 = v22 - v23;
      v26 = (double *)(v9 + 8 * v23);
      v27 = 0;
      v28 = v22 - v23;
      v29 = 0;
      v30 = v28 >> 1;
      do
      {
        ++v27;
        *(double *)&v31 = -v26[v29];
        *((double *)&v31 + 1) = -v26[v29 + 1];
        *(_OWORD *)&v26[v29] = v31;
        v29 += 2;
      }
      while ( v27 < v30 );
      v32 = (v25 & 0xFFFFFFFE) + v24;
      if ( v25 != (v25 & 0xFFFFFFFE) )
        goto LABEL_19;
    }
  }
LABEL_5:
  v11 = (const char *const *)ClpModel::rowNamesAsChar(this);
  v12 = (const char *const *)ClpModel::columnNamesAsChar(this);
  CoinMpsIO::CoinMpsIO((CoinMpsIO *)v42);
  CoinMpsIO::passInMessageHandler((CoinMpsIO *)v42, *((CoinMessageHandler **)this + 43));
  CoinMessages::CoinMessages((CoinMessages *)v41, (ClpModel *)((char *)this + 448));
  CoinMessages::operator=(&v44, v41);
  CoinMessages::~CoinMessages((CoinMessages *)v41);
  v13 = *((const double **)this + 19);
  v40 = *((double **)this + 18);
  v38 = *((double **)this + 23);
  v39 = *((double **)this + 22);
  v14 = (const CoinPackedMatrix *)(***((__int64 (__fastcall ****)(_QWORD))this + 24))(*((_QWORD *)this + 24));
  CoinMpsIO::setMpsData(
    (CoinMpsIO *)v42,
    v14,
    1.797693134862316e308,
    v39,
    v38,
    (const double *)v9,
    nullptr,
    v40,
    v13,
    v12,
    v11);
  CoinMpsIO::copyInIntegerInformation((CoinMpsIO *)v42, *((const char **)this + 34));
  v15 = *((const char **)this + 86);
  v43 = *((_QWORD *)this + 5);
  CoinMpsIO::setProblemName((CoinMpsIO *)v42, v15);
  v16 = (void *)v9;
  v17 = nullptr;
  operator delete[](v16);
  v18 = *((const void **)this + 20);
  if ( v18 )
  {
    v19 = __dynamic_cast(
            v18,
            (const struct __class_type_info *)&`typeinfo for'ClpObjective,
            (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
            0);
    if ( v19 )
      v17 = *((CoinPackedMatrix **)v19 + 3);
  }
  v20 = CoinMpsIO::writeMps((CoinMpsIO *)v42, a2, 0, a3, a4, v17, 0, nullptr);
  if ( v11 )
  {
    ClpModel::deleteNamesAsChar(this, v11, *((_DWORD *)this + 26) + 1);
    ClpModel::deleteNamesAsChar(this, v12, *((_DWORD *)this + 27));
  }
  CoinMpsIO::~CoinMpsIO((CoinMpsIO *)v42);
  return v20;
}

