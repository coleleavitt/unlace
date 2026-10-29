// Alternative name is '_ZN21ClpPlusMinusOneMatrixC1ERKS_iPKiiS3_'
void __fastcall ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(
        ClpPlusMinusOneMatrix *this,
        const ClpPlusMinusOneMatrix *a2,
        int a3,
        const int *a4,
        int a5,
        const int *a6)
{
  char v9; // al
  int v10; // ebx
  char *v11; // r13
  int *v12; // rax
  __int64 v13; // rcx
  int *v14; // rbp
  int v15; // r12d
  __int64 v16; // rax
  int *v17; // rdx
  int v18; // esi
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // r8
  int v23; // ecx
  int v24; // eax
  int *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 i; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  _DWORD *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // r10
  __int64 v33; // r15
  __int64 v34; // r11
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rdi
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rsi
  int *v42; // r8
  int v43; // ecx
  __int64 v44; // rdi
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  int v49; // edx
  int v50; // eax
  const int *v51; // rax
  _DWORD *v52; // rax
  void *v53; // r14
  void *v54; // r14
  void *exception; // r14
  int v57; // [rsp+8h] [rbp-A0h]
  __int64 v58; // [rsp+8h] [rbp-A0h]
  __int64 v59; // [rsp+10h] [rbp-98h]
  __int64 v60; // [rsp+10h] [rbp-98h]
  __int64 v61; // [rsp+18h] [rbp-90h]
  ClpPlusMinusOneMatrix *v62; // [rsp+20h] [rbp-88h]
  __int64 v63; // [rsp+28h] [rbp-80h]
  __int64 v65; // [rsp+50h] [rbp-58h]
  __int64 v66; // [rsp+58h] [rbp-50h]
  __int64 v67; // [rsp+60h] [rbp-48h]

  v62 = this;
  ClpMatrixBase::ClpMatrixBase(this, a2);
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *(_QWORD *)this = off_4D0E88;
  v9 = *((_BYTE *)a2 + 136);
  *((_BYTE *)this + 136) = v9;
  if ( a3 <= 0 || a5 <= 0 )
  {
    v52 = (_DWORD *)operator new[](4u);
    *v52 = 0;
    *((_QWORD *)this + 13) = v52;
  }
  else
  {
    *((_DWORD *)this + 33) = a5;
    *((_DWORD *)this + 32) = a3;
    v10 = *((_DWORD *)a2 + 32);
    v61 = *((_QWORD *)a2 + 15);
    v63 = *((_QWORD *)a2 + 13);
    v57 = *((_DWORD *)a2 + 33);
    if ( !v9 )
    {
      v10 = *((_DWORD *)a2 + 33);
      v57 = *((_DWORD *)a2 + 32);
      v50 = a3;
      a3 = a5;
      a5 = v50;
      v51 = a4;
      a4 = a6;
      a6 = v51;
    }
    if ( v57 <= 0 || v10 <= 0 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v65 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v65 - 24);
      if ( (_UNKNOWN *)(v66 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v66 - 24);
      if ( (_UNKNOWN *)(v67 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v67 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
    v11 = (char *)operator new[](4LL * v10);
    memset(v11, 255, 4LL * (unsigned int)(v10 - 1) + 4);
    v12 = (int *)operator new[](4LL * a3);
    v13 = (unsigned int)(a3 - 1);
    v14 = v12;
    v15 = 0;
    v59 = v13 + 1;
    memset(v12, 255, 4 * (v13 + 1));
    v16 = 0;
    do
    {
      while ( 1 )
      {
        v19 = a4[v16];
        if ( (int)v19 >= 0 && (int)v19 < v10 )
          break;
        ++v16;
        ++v15;
        if ( v16 == v59 )
          goto LABEL_14;
      }
      v17 = (int *)&v11[4 * v19];
      v18 = *v17;
      *v17 = v16;
      if ( v18 >= 0 )
        v14[v16] = v18;
      ++v16;
    }
    while ( v16 != v59 );
LABEL_14:
    if ( v15 )
    {
      v54 = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v65 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v65 - 24);
      if ( (_UNKNOWN *)(v66 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v66 - 24);
      if ( (_UNKNOWN *)(v67 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v67 - 24);
      __cxa_throw(v54, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
    v20 = 0;
    v21 = 0;
    v60 = (unsigned int)(a5 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v22 = a6[v21];
        if ( (int)v22 >= 0 && (int)v22 < v57 )
          break;
        ++v20;
        printf("%d %d %d %d\n", v21++, a5, v57, v22);
        if ( v60 == v21 )
          goto LABEL_24;
      }
      v23 = *(_DWORD *)(v63 + 4 * v22);
      v24 = *(_DWORD *)(v63 + 4 * v22 + 4);
      if ( v24 > v23 )
      {
        v25 = (int *)(v61 + 4LL * v23);
        v26 = v61 + 4 + 4 * (v23 + (unsigned __int64)(unsigned int)(v24 - v23 - 1));
        do
        {
          for ( i = *(int *)&v11[4 * *v25]; (int)i >= 0; ++v15 )
            LODWORD(i) = v14[i];
          ++v25;
        }
        while ( (int *)v26 != v25 );
      }
      ++v21;
    }
    while ( v60 != v21 );
LABEL_24:
    if ( v20 )
    {
      v53 = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v65 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v65 - 24);
      if ( (_UNKNOWN *)(v66 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v66 - 24);
      if ( (_UNKNOWN *)(v67 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v67 - 24);
      __cxa_throw(v53, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
    v28 = 4LL * (a5 + 1);
    *((_QWORD *)this + 13) = operator new[](v28);
    *((_QWORD *)this + 14) = operator new[](v28 - 4);
    v29 = operator new[](4LL * v15);
    v30 = *((_DWORD **)this + 13);
    v31 = *((_QWORD *)this + 14);
    *((_QWORD *)this + 15) = v29;
    v32 = 0;
    *v30 = 0;
    v33 = *((_QWORD *)a2 + 14);
    v58 = v31;
    do
    {
      v34 = 4LL * a6[v32];
      v35 = *(int *)(v63 + v34);
      v36 = *(_DWORD *)(v33 + v34);
      if ( (int)v35 < v36 )
      {
        v37 = (int)v35 + 1;
        v38 = v61 + 4 * (v35 - v37);
        do
        {
          v39 = *(int *)&v11[4 * *(int *)(v38 + 4 * v37)];
          if ( (int)v39 >= 0 )
          {
            v40 = v20 + 1;
            v41 = v29 + 4 * (v20 - v40);
            do
            {
              *(_DWORD *)(v41 + 4 * v40) = v39;
              v39 = v14[v39];
              v20 = v40++;
            }
            while ( (int)v39 >= 0 );
            v36 = *(_DWORD *)(v33 + v34);
          }
          v35 = (int)v37++;
        }
        while ( (int)v35 < v36 );
      }
      v42 = (int *)(v63 + v34 + 4);
      *(_DWORD *)(v58 + v32 * 4) = v20;
      v43 = *v42;
      if ( (int)v35 < *v42 )
      {
        v44 = (int)v35 + 1;
        v45 = v61 + 4 * (v35 - v44);
        do
        {
          v46 = *(int *)&v11[4 * *(int *)(v45 + 4 * v44)];
          if ( (int)v46 >= 0 )
          {
            v47 = v20 + 1;
            v48 = v29 + 4 * (v20 - v47);
            do
            {
              *(_DWORD *)(v48 + 4 * v47) = v46;
              v46 = v14[v46];
              v20 = v47++;
            }
            while ( (int)v46 >= 0 );
            v43 = *v42;
          }
          v49 = v44++;
        }
        while ( v49 < v43 );
      }
      v30[++v32] = v20;
    }
    while ( v21 != v32 );
    operator delete[](v11);
    operator delete[](v14);
    this = v62;
  }
  ClpPlusMinusOneMatrix::checkValid(this, 0);
}

