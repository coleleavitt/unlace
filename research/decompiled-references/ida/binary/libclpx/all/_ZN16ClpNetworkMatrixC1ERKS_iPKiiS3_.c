// Alternative name is '_ZN16ClpNetworkMatrixC2ERKS_iPKiiS3_'
void __fastcall ClpNetworkMatrix::ClpNetworkMatrix(
        ClpNetworkMatrix *this,
        const ClpNetworkMatrix *a2,
        int a3,
        const int *a4,
        int a5,
        const int *a6)
{
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  void *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // esi
  __int64 v19; // rdi
  int v20; // r9d
  const int *v21; // r10
  int v22; // eax
  int v23; // r15d
  int v24; // eax
  void *exception; // r14
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int64 v28; // [rsp+30h] [rbp-48h]

  ClpMatrixBase::ClpMatrixBase(this, a2);
  *((_DWORD *)this + 13) = 11;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  v11 = 2 * a5;
  *(_QWORD *)this = off_4D07B8;
  if ( v11 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v12 = operator new[](4 * v11);
  *((_DWORD *)this + 28) = a3;
  v13 = *((int *)a2 + 28);
  *((_QWORD *)this + 13) = v12;
  *((_DWORD *)this + 29) = a5;
  *((_BYTE *)this + 120) = 1;
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v14 = (void *)operator new[](4 * v13);
  v15 = *((_DWORD *)a2 + 28);
  if ( v15 > 0 )
    v14 = memset(v14, 255, 4LL * (unsigned int)(v15 - 1) + 4);
  if ( a3 > 0 )
  {
    v16 = 0;
    do
    {
      *((_DWORD *)v14 + a4[v16]) = v16;
      ++v16;
    }
    while ( (unsigned int)(a3 - 1) + 1LL != v16 );
  }
  if ( a5 > 0 )
  {
    v17 = *((_QWORD *)a2 + 13);
    v18 = 1;
    v19 = 0;
    v20 = 0;
    v21 = &a6[a5 - 1 + 1];
    while ( 1 )
    {
      v23 = 2 * *a6;
      v24 = *((_DWORD *)v14 + *(int *)(v17 + 4LL * v23));
      if ( v24 >= 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 13) + v19) = v24;
        v22 = *((_DWORD *)v14 + *(int *)(v17 + 4LL * (v23 + 1)));
        if ( v22 >= 0 )
          goto LABEL_11;
LABEL_14:
        ++a6;
        ++v20;
        v19 += 8;
        v18 += 2;
        if ( a6 == v21 )
        {
LABEL_15:
          if ( v20 )
          {
            exception = __cxa_allocate_exception(0x30u);
            std::string::string();
            std::string::string();
            std::string::string();
            CoinError::CoinError();
            if ( (_UNKNOWN *)(v26 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              start(v26 - 24);
            if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              start(v27 - 24);
            if ( (_UNKNOWN *)(v28 - 24) != &std::string::_Rep::_S_empty_rep_storage )
              start(v28 - 24);
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'CoinError,
              (void (*)(void *))CoinError::~CoinError);
          }
          return;
        }
      }
      else
      {
        ++v20;
        v22 = *((_DWORD *)v14 + *(int *)(v17 + 4LL * (v23 + 1)));
        if ( v22 < 0 )
          goto LABEL_14;
LABEL_11:
        ++a6;
        v18 += 2;
        *(_DWORD *)(*((_QWORD *)this + 13) + v19 + 4) = v22;
        v19 += 8;
        if ( a6 == v21 )
          goto LABEL_15;
      }
    }
  }
}

