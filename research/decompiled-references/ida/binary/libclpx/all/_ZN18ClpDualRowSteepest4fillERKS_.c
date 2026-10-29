void __fastcall ClpDualRowSteepest::fill(ClpDualRowSteepest *this, const ClpDualRowSteepest *a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  void *v8; // r13
  const void *v9; // rsi
  void *v10; // rdi
  CoinIndexedVector *v11; // r12
  CoinIndexedVector *v12; // r12
  const void *v13; // rsi
  void *v14; // rdi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  CoinIndexedVector *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rax
  CoinIndexedVector *v22; // r12
  CoinIndexedVector *v23; // r12

  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  v4 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v4;
  v5 = *(int *)(v4 + 104);
  v6 = *((_QWORD *)a2 + 7);
  if ( v6 )
  {
    v7 = *(int *)(v6 + 20);
    if ( (int)v5 > (int)v7 )
      v5 = v7;
  }
  v8 = *((void **)this + 5);
  if ( !*((_QWORD *)a2 + 5) )
  {
    if ( v8 )
    {
      CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 5));
      operator delete(v8);
    }
    *((_QWORD *)this + 5) = 0;
LABEL_7:
    v9 = *((const void **)a2 + 4);
    v10 = *((void **)this + 4);
    if ( v9 )
      goto LABEL_8;
LABEL_21:
    if ( v10 )
      operator delete[](v10);
    v19 = *((_QWORD *)a2 + 6);
    *((_QWORD *)this + 4) = 0;
    v11 = *((CoinIndexedVector **)this + 6);
    if ( v19 )
      goto LABEL_10;
    goto LABEL_24;
  }
  if ( v8 )
  {
    CoinIndexedVector::operator=(*((CoinIndexedVector **)this + 5));
    goto LABEL_7;
  }
  v18 = (CoinIndexedVector *)operator new(0x20u);
  CoinIndexedVector::CoinIndexedVector(v18, *((const CoinIndexedVector **)a2 + 5));
  v9 = *((const void **)a2 + 4);
  *((_QWORD *)this + 5) = v18;
  v10 = *((void **)this + 4);
  if ( !v9 )
    goto LABEL_21;
LABEL_8:
  if ( !v10 )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_41;
    v21 = operator new[](8 * v5);
    *((_QWORD *)this + 4) = v21;
    v10 = (void *)v21;
    v9 = *((const void **)a2 + 4);
  }
  memcpy(v10, v9, 8 * v5);
  v11 = *((CoinIndexedVector **)this + 6);
  if ( *((_QWORD *)a2 + 6) )
  {
LABEL_10:
    if ( v11 )
    {
      CoinIndexedVector::operator=(v11);
    }
    else
    {
      v22 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v22, *((const CoinIndexedVector **)a2 + 6));
      *((_QWORD *)this + 6) = v22;
    }
    v12 = *((CoinIndexedVector **)this + 7);
    if ( *((_QWORD *)a2 + 7) )
      goto LABEL_13;
LABEL_27:
    if ( v12 )
    {
      CoinIndexedVector::~CoinIndexedVector(v12);
      operator delete(v12);
    }
    v13 = *((const void **)a2 + 8);
    *((_QWORD *)this + 7) = 0;
    v14 = *((void **)this + 8);
    if ( v13 )
      goto LABEL_16;
    goto LABEL_30;
  }
LABEL_24:
  if ( v11 )
  {
    CoinIndexedVector::~CoinIndexedVector(v11);
    operator delete(v11);
  }
  v20 = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 6) = 0;
  v12 = *((CoinIndexedVector **)this + 7);
  if ( !v20 )
    goto LABEL_27;
LABEL_13:
  if ( v12 )
  {
    CoinIndexedVector::operator=(v12);
  }
  else
  {
    v23 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v23, *((const CoinIndexedVector **)a2 + 7));
    *((_QWORD *)this + 7) = v23;
  }
  v13 = *((const void **)a2 + 8);
  v14 = *((void **)this + 8);
  if ( v13 )
  {
LABEL_16:
    v15 = *(int *)(*((_QWORD *)this + 1) + 104LL);
    if ( v14 )
    {
      v16 = 4 * v15;
      goto LABEL_19;
    }
    if ( v15 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v16 = 4 * v15;
      v17 = operator new[](v16);
      *((_QWORD *)this + 8) = v17;
      v13 = *((const void **)a2 + 8);
      v14 = (void *)v17;
LABEL_19:
      memcpy(v14, v13, v16);
      return;
    }
LABEL_41:
    __cxa_throw_bad_array_new_length();
  }
LABEL_30:
  if ( v14 )
    operator delete[](v14);
  *((_QWORD *)this + 8) = 0;
}

