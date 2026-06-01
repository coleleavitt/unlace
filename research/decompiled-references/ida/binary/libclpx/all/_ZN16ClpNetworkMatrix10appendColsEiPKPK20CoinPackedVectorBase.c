void __fastcall ClpNetworkMatrix::appendCols(ClpNetworkMatrix *this, int a2, const CoinPackedVectorBase *const *a3)
{
  const CoinPackedVectorBase *const *v5; // rbx
  int v6; // r14d
  const CoinPackedVectorBase *const *v7; // r15
  int v8; // r12d
  double *v9; // rax
  void *v10; // rdi
  __int64 v11; // rdi
  int v12; // edi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r8d
  unsigned __int64 v16; // rbx
  char *v17; // rdi
  int v18; // esi
  unsigned int v19; // eax
  unsigned __int64 v20; // rdx
  const __m128i *v21; // rcx
  __int64 v22; // r9
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rdx
  char *v26; // r9
  _DWORD *v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // r12
  char *v30; // r15
  _DWORD *v31; // r14
  double *v32; // rax
  __int64 v33; // rdx
  bool v34; // zf
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  int *v37; // rcx
  int v38; // r10d
  void *exception; // r13
  __int64 v41; // [rsp+20h] [rbp-58h]
  __int64 v42; // [rsp+28h] [rbp-50h]
  __int64 v43; // [rsp+30h] [rbp-48h]

  if ( a2 > 0 )
  {
    v5 = a3;
    v6 = 0;
    v7 = &a3[(unsigned int)(a2 - 1) + 1];
    do
    {
      v8 = (***(__int64 (__fastcall ****)(const CoinPackedVectorBase *const))v5)(*v5);
      v9 = (double *)(*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(**(_QWORD **)v5 + 16LL))(*v5);
      v6 += v8 != 2;
      if ( fabs(*v9) != 1.0 || fabs(v9[1]) != 1.0 || *v9 * v9[1] != -1.0 )
        ++v6;
      ++v5;
    }
    while ( v7 != v5 );
    if ( v6 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v41 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v41 - 24);
      if ( (_UNKNOWN *)(v42 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v42 - 24);
      if ( (_UNKNOWN *)(v43 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        start(v43 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  v10 = *((void **)this + 12);
  if ( v10 )
    operator delete[](v10);
  v11 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = *((_DWORD *)this + 29);
  *((_QWORD *)this + 11) = 0;
  v13 = 2 * (a2 + v12);
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v14 = operator new[](4 * v13);
  v15 = *((_DWORD *)this + 29);
  v16 = v14;
  v17 = *((char **)this + 13);
  v18 = 2 * v15;
  if ( 2 * v15 && v17 != (char *)v14 )
  {
    v19 = v18 >> 3;
    if ( v18 >> 3 <= 0 )
    {
      v27 = (_DWORD *)v16;
      v26 = *((char **)this + 13);
    }
    else
    {
      if ( (v16 >= (unsigned __int64)(v17 + 32) || (unsigned __int64)v17 >= v16 + 32) && v19 > 1 )
      {
        v20 = v16;
        v21 = *((const __m128i **)this + 13);
        v22 = v19 - 1;
        do
        {
          v23 = _mm_loadu_si128(v21);
          v20 += 32LL;
          v21 += 2;
          v24 = _mm_loadu_si128(v21 - 1);
          *(__m128i *)(v20 - 32) = v23;
          *(__m128i *)(v20 - 16) = v24;
        }
        while ( v16 + 32 * v22 + 32 != v20 );
      }
      else
      {
        v36 = v16;
        v37 = *((int **)this + 13);
        v22 = v19 - 1;
        do
        {
          v38 = *v37;
          v36 += 32LL;
          v37 += 8;
          *(_DWORD *)(v36 - 32) = v38;
          *(_DWORD *)(v36 - 28) = *(v37 - 7);
          *(_DWORD *)(v36 - 24) = *(v37 - 6);
          *(_DWORD *)(v36 - 20) = *(v37 - 5);
          *(_DWORD *)(v36 - 16) = *(v37 - 4);
          *(_DWORD *)(v36 - 12) = *(v37 - 3);
          *(_DWORD *)(v36 - 8) = *(v37 - 2);
          *(_DWORD *)(v36 - 4) = *(v37 - 1);
        }
        while ( v16 + 32 * (v22 + 1) != v36 );
      }
      v25 = 32 * ((int)v22 + 1LL);
      v26 = &v17[v25];
      v27 = (_DWORD *)(v16 + v25);
    }
    switch ( v18 % 8 )
    {
      case 1:
        goto LABEL_29;
      case 2:
        goto LABEL_28;
      case 3:
        goto LABEL_27;
      case 4:
        goto LABEL_26;
      case 5:
        goto LABEL_25;
      case 6:
        goto LABEL_24;
      case 7:
        v27[6] = *((_DWORD *)v26 + 6);
LABEL_24:
        v27[5] = *((_DWORD *)v26 + 5);
LABEL_25:
        v27[4] = *((_DWORD *)v26 + 4);
LABEL_26:
        v27[3] = *((_DWORD *)v26 + 3);
LABEL_27:
        v27[2] = *((_DWORD *)v26 + 2);
LABEL_28:
        v27[1] = *((_DWORD *)v26 + 1);
LABEL_29:
        *v27 = *(_DWORD *)v26;
        break;
      default:
        break;
    }
  }
  if ( v17 )
  {
    operator delete[](v17);
    v15 = *((_DWORD *)this + 29);
    v18 = 2 * v15;
  }
  *((_QWORD *)this + 13) = v16;
  if ( a2 > 0 )
  {
    v28 = 4LL * v18;
    v29 = 4 * (v18 + 2LL * (unsigned int)(a2 - 1) + 2);
    v30 = (char *)a3 - v28;
    do
    {
      while ( 1 )
      {
        v31 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v30[v28] + 8LL))(*(_QWORD *)&v30[v28]);
        v32 = (double *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v30[v28] + 16LL))(*(_QWORD *)&v30[v28]);
        v33 = v28 + 4;
        v34 = *v32 == -1.0;
        v35 = *((_QWORD *)this + 13);
        if ( !v34 )
          break;
        *(_DWORD *)(v35 + v28) = *v31;
        v28 += 8;
        *(_DWORD *)(v35 + v33) = v31[1];
        if ( v29 == v28 )
          goto LABEL_37;
      }
      *(_DWORD *)(v35 + v28) = v31[1];
      v28 += 8;
      *(_DWORD *)(v35 + v33) = *v31;
    }
    while ( v29 != v28 );
LABEL_37:
    v15 = *((_DWORD *)this + 29);
  }
  *((_DWORD *)this + 29) = v15 + a2;
}

