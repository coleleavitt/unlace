void __fastcall ClpSimplex::gutsOfDelete(ClpSimplex *this, int a2)
{
  int v3; // eax
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  char *v10; // rbp
  char *v11; // r14
  CoinIndexedVector *v12; // r12
  CoinIndexedVector *v13; // r12
  void *v14; // rdi
  __int64 v15; // rdi
  void *v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  ClpSimplex *v19; // rbp
  void *v20; // rdi
  void *v21; // rbp
  __int64 v22; // rax
  CoinFactorization *v23; // rdi
  __int64 v24; // rdi
  void *v25; // rdi

  if ( a2 )
  {
    v3 = *((_DWORD *)this + 84);
    if ( (v3 & 0x10000) != 0 )
    {
      if ( (v3 & 2) != 0 )
        goto LABEL_22;
      goto LABEL_40;
    }
  }
  v4 = *((void **)this + 123);
  *((_QWORD *)this + 61) = -1;
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 126);
  *((_QWORD *)this + 123) = 0;
  *((_QWORD *)this + 124) = 0;
  *((_QWORD *)this + 125) = 0;
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 129);
  *((_QWORD *)this + 126) = 0;
  *((_QWORD *)this + 127) = 0;
  *((_QWORD *)this + 128) = 0;
  if ( v6 )
    operator delete[](v6);
  v7 = *((void **)this + 147);
  *((_QWORD *)this + 129) = 0;
  *((_QWORD *)this + 131) = 0;
  *((_QWORD *)this + 130) = 0;
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)this + 150);
  *((_QWORD *)this + 147) = 0;
  *((_QWORD *)this + 149) = 0;
  *((_QWORD *)this + 148) = 0;
  if ( v8 )
    operator delete[](v8);
  v9 = *((void **)this + 159);
  *((_QWORD *)this + 150) = 0;
  *((_QWORD *)this + 151) = 0;
  *((_QWORD *)this + 152) = 0;
  if ( v9 )
    operator delete[](v9);
  v3 = *((_DWORD *)this + 84);
  *((_QWORD *)this + 159) = 0;
  if ( (v3 & 2) == 0 )
  {
LABEL_40:
    v21 = *((void **)this + 165);
    if ( v21 )
    {
      ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
      operator delete(v21);
      v3 = *((_DWORD *)this + 84);
    }
    *((_QWORD *)this + 165) = 0;
  }
  if ( (v3 & 0x10000) == 0 )
  {
    v10 = (char *)this + 1056;
    v11 = (char *)this + 1104;
    do
    {
      while ( 1 )
      {
        v12 = *(CoinIndexedVector **)v10;
        if ( *(_QWORD *)v10 )
        {
          CoinIndexedVector::~CoinIndexedVector(*(CoinIndexedVector **)v10);
          operator delete(v12);
        }
        v13 = *((CoinIndexedVector **)v10 + 6);
        *(_QWORD *)v10 = 0;
        if ( !v13 )
          break;
        v10 += 8;
        CoinIndexedVector::~CoinIndexedVector(v13);
        operator delete(v13);
        *((_QWORD *)v10 + 5) = 0;
        if ( v10 == v11 )
          goto LABEL_22;
      }
      v10 += 8;
    }
    while ( v11 != v10 );
  }
LABEL_22:
  v14 = *((void **)this + 164);
  if ( v14 )
    operator delete[](v14);
  *((_QWORD *)this + 164) = 0;
  if ( a2 == 1 )
    goto LABEL_53;
  v15 = *((_QWORD *)this + 25);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 480LL))(v15);
  *((_QWORD *)this + 25) = 0;
  if ( a2 )
  {
    if ( a2 > 1 )
    {
      v22 = *((_QWORD *)this + 158);
      if ( v22 )
      {
        v23 = *(CoinFactorization **)(v22 + 8);
        if ( v23 )
        {
          CoinFactorization::gutsOfDestructor(v23, 1);
        }
        else
        {
          v24 = *(_QWORD *)(v22 + 16);
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 112LL))(v24);
        }
      }
      v25 = *((void **)this + 157);
      if ( v25 )
        operator delete[](v25);
      *((_QWORD *)this + 157) = 0;
    }
LABEL_53:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 155) + 48LL))(*((_QWORD *)this + 155));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 156) + 32LL))(*((_QWORD *)this + 156));
    return;
  }
  ClpSimplex::setEmptyFactorization(this);
  v16 = *((void **)this + 157);
  if ( v16 )
    operator delete[](v16);
  v17 = *((_QWORD *)this + 155);
  *((_QWORD *)this + 157) = 0;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
  v18 = *((_QWORD *)this + 156);
  *((_QWORD *)this + 155) = 0;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 64LL))(v18);
  v19 = *((ClpSimplex **)this + 175);
  *((_QWORD *)this + 156) = 0;
  if ( v19 )
  {
    ClpSimplex::~ClpSimplex(v19);
    operator delete(v19);
  }
  v20 = *((void **)this + 174);
  *((_QWORD *)this + 175) = 0;
  if ( v20 )
    operator delete[](v20);
  *((_QWORD *)this + 174) = 0;
  *((_DWORD *)this + 347) = 0;
}

