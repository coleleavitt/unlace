__int64 __fastcall ClpDualRowSteepest::operator=(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // r12
  void *v6; // r12
  void *v7; // r12
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  CoinIndexedVector *v11; // r13
  bool v12; // zf
  unsigned __int64 v13; // r12
  void *v14; // rax
  CoinIndexedVector *v15; // r12
  CoinIndexedVector *v16; // r12
  unsigned __int64 v17; // rdx
  size_t v18; // r12
  void *v19; // rax

  if ( a1 == a2 )
    return a1;
  ClpDualRowPivot::operator=();
  v3 = *(void **)(a1 + 32);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  if ( v3 )
    operator delete[](v3);
  v4 = *(void **)(a1 + 64);
  if ( v4 )
    operator delete[](v4);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
  {
    CoinIndexedVector::~CoinIndexedVector(*(CoinIndexedVector **)(a1 + 40));
    operator delete(v5);
  }
  v6 = *(void **)(a1 + 48);
  if ( v6 )
  {
    CoinIndexedVector::~CoinIndexedVector(*(CoinIndexedVector **)(a1 + 48));
    operator delete(v6);
  }
  v7 = *(void **)(a1 + 56);
  if ( v7 )
  {
    CoinIndexedVector::~CoinIndexedVector(*(CoinIndexedVector **)(a1 + 56));
    operator delete(v7);
  }
  v8 = *(int *)(*(_QWORD *)(a1 + 8) + 104LL);
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    v10 = *(int *)(v9 + 20);
    if ( (int)v8 > (int)v10 )
      v8 = v10;
  }
  if ( *(_QWORD *)(a2 + 40) )
  {
    v11 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v11, *(const CoinIndexedVector **)(a2 + 40));
    v12 = *(_QWORD *)(a2 + 32) == 0;
    *(_QWORD *)(a1 + 40) = v11;
    if ( !v12 )
      goto LABEL_17;
LABEL_25:
    v12 = *(_QWORD *)(a2 + 48) == 0;
    *(_QWORD *)(a1 + 32) = 0;
    if ( !v12 )
      goto LABEL_19;
    goto LABEL_26;
  }
  v12 = *(_QWORD *)(a2 + 32) == 0;
  *(_QWORD *)(a1 + 40) = 0;
  if ( v12 )
    goto LABEL_25;
LABEL_17:
  if ( v8 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_29;
  v13 = 8 * v8;
  v14 = (void *)operator new[](v13);
  *(_QWORD *)(a1 + 32) = v14;
  memcpy(v14, *(const void **)(a2 + 32), v13);
  if ( *(_QWORD *)(a2 + 48) )
  {
LABEL_19:
    v15 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v15, *(const CoinIndexedVector **)(a2 + 48));
    v12 = *(_QWORD *)(a2 + 56) == 0;
    *(_QWORD *)(a1 + 48) = v15;
    if ( !v12 )
      goto LABEL_20;
    goto LABEL_27;
  }
LABEL_26:
  v12 = *(_QWORD *)(a2 + 56) == 0;
  *(_QWORD *)(a1 + 48) = 0;
  if ( !v12 )
  {
LABEL_20:
    v16 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v16, *(const CoinIndexedVector **)(a2 + 56));
    v12 = *(_QWORD *)(a2 + 64) == 0;
    *(_QWORD *)(a1 + 56) = v16;
    if ( !v12 )
      goto LABEL_21;
    goto LABEL_28;
  }
LABEL_27:
  v12 = *(_QWORD *)(a2 + 64) == 0;
  *(_QWORD *)(a1 + 56) = 0;
  if ( !v12 )
  {
LABEL_21:
    v17 = *(int *)(*(_QWORD *)(a1 + 8) + 104LL);
    if ( v17 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v18 = 4 * v17;
      v19 = (void *)operator new[](4 * v17);
      *(_QWORD *)(a1 + 64) = v19;
      memcpy(v19, *(const void **)(a2 + 64), v18);
      return a1;
    }
LABEL_29:
    __cxa_throw_bad_array_new_length();
  }
LABEL_28:
  *(_QWORD *)(a1 + 64) = 0;
  return a1;
}

