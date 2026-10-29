// Alternative name is '_ZN18ClpDualRowSteepestC2ERKS_'
void __fastcall ClpDualRowSteepest::ClpDualRowSteepest(ClpDualRowSteepest *this, const ClpDualRowSteepest *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  CoinIndexedVector *v6; // r13
  bool v7; // zf
  unsigned __int64 v8; // r12
  void *v9; // rax
  CoinIndexedVector *v10; // r12
  CoinIndexedVector *v11; // r12
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r12
  void *v14; // rax

  ClpDualRowPivot::ClpDualRowPivot(this, a2);
  *(_QWORD *)this = &off_4D0190;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  v2 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 1) = v2;
  if ( !v2 || (*(_BYTE *)(v2 + 316) & 1) == 0 )
  {
    *((_QWORD *)this + 5) = 0;
    *((_QWORD *)this + 4) = 0;
    *((_QWORD *)this + 6) = 0;
    *((_QWORD *)this + 7) = 0;
    *((_QWORD *)this + 8) = 0;
    return;
  }
  v3 = *(int *)(v2 + 104);
  v4 = *((_QWORD *)a2 + 7);
  if ( v4 )
  {
    v5 = *(int *)(v4 + 20);
    if ( (int)v3 > (int)v5 )
      v3 = v5;
  }
  if ( *((_QWORD *)a2 + 5) )
  {
    v6 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v6, *((const CoinIndexedVector **)a2 + 5));
    v7 = *((_QWORD *)a2 + 4) == 0;
    *((_QWORD *)this + 5) = v6;
    if ( !v7 )
      goto LABEL_8;
LABEL_16:
    v7 = *((_QWORD *)a2 + 6) == 0;
    *((_QWORD *)this + 4) = 0;
    if ( !v7 )
      goto LABEL_10;
    goto LABEL_17;
  }
  v7 = *((_QWORD *)a2 + 4) == 0;
  *((_QWORD *)this + 5) = 0;
  if ( v7 )
    goto LABEL_16;
LABEL_8:
  if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v8 = 8 * v3;
  v9 = (void *)operator new[](v8);
  *((_QWORD *)this + 4) = v9;
  memcpy(v9, *((const void **)a2 + 4), v8);
  if ( *((_QWORD *)a2 + 6) )
  {
LABEL_10:
    v10 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v10, *((const CoinIndexedVector **)a2 + 6));
    v7 = *((_QWORD *)a2 + 7) == 0;
    *((_QWORD *)this + 6) = v10;
    if ( !v7 )
      goto LABEL_11;
LABEL_18:
    v7 = *((_QWORD *)a2 + 8) == 0;
    *((_QWORD *)this + 7) = 0;
    if ( !v7 )
      goto LABEL_12;
LABEL_19:
    *((_QWORD *)this + 8) = 0;
    return;
  }
LABEL_17:
  v7 = *((_QWORD *)a2 + 7) == 0;
  *((_QWORD *)this + 6) = 0;
  if ( v7 )
    goto LABEL_18;
LABEL_11:
  v11 = (CoinIndexedVector *)operator new(0x20u);
  CoinIndexedVector::CoinIndexedVector(v11, *((const CoinIndexedVector **)a2 + 7));
  v7 = *((_QWORD *)a2 + 8) == 0;
  *((_QWORD *)this + 7) = v11;
  if ( v7 )
    goto LABEL_19;
LABEL_12:
  v12 = *(int *)(*((_QWORD *)this + 1) + 104LL);
  if ( v12 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v13 = 4 * v12;
  v14 = (void *)operator new[](v13);
  *((_QWORD *)this + 8) = v14;
  memcpy(v14, *((const void **)a2 + 8), v13);
}

