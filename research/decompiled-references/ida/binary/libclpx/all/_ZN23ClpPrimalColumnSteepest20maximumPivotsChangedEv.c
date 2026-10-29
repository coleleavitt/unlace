void __fastcall ClpPrimalColumnSteepest::maximumPivotsChanged(ClpPrimalColumnSteepest *this)
{
  _DWORD *v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rdx
  int v6; // eax
  CoinIndexedVector *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rax

  v1 = *((_DWORD **)this + 6);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 1);
    v3 = *(_QWORD *)(v2 + 1264);
    v4 = *(_DWORD *)(v2 + 104);
    v5 = *(_QWORD *)(v3 + 8);
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 64);
    else
      v6 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 48LL);
    if ( v4 + v6 != v1[5] )
    {
      CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 6));
      operator delete(v1);
      v7 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v7);
      v8 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 6) = v7;
      v9 = *(_QWORD *)(v8 + 1264);
      v10 = *(_DWORD *)(v8 + 104);
      v11 = *(_QWORD *)(v9 + 8);
      if ( v11 )
        CoinIndexedVector::reserve(v7, *(_DWORD *)(v11 + 64) + v10);
      else
        CoinIndexedVector::reserve(v7, *(_DWORD *)(*(_QWORD *)(v9 + 16) + 48LL) + v10);
    }
  }
}

