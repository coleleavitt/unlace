// Alternative name is '_ZN16ClpFactorizationC1ERKS_i'
void __fastcall ClpFactorization::ClpFactorization(ClpFactorization *this, const ClpFactorization *a2, int a3)
{
  ClpNetworkBasis *v6; // r13
  char v7; // al
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  __int64 *v11; // r13
  CoinFactorization *v12; // r12
  __int64 v13; // rdi
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rax
  CoinOslFactorization *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  void (__fastcall *v20)(CoinOslFactorization *, _QWORD); // rdx
  int v21; // r12d

  if ( *(_QWORD *)a2 )
  {
    v6 = (ClpNetworkBasis *)operator new(0x70u);
    ClpNetworkBasis::ClpNetworkBasis(v6, *(const ClpNetworkBasis **)a2);
    *(_QWORD *)this = v6;
  }
  else
  {
    *(_QWORD *)this = 0;
  }
  v7 = *((_BYTE *)a2 + 76);
  v8 = *((_DWORD *)a2 + 7);
  v9 = *((_DWORD *)a2 + 9);
  v10 = *((_DWORD *)a2 + 8);
  *(__m128i *)((char *)this + 24) = _mm_loadu_si128((const __m128i *)((char *)a2 + 24));
  *((_BYTE *)this + 76) = v7;
  if ( a3 > 0 )
  {
    v11 = *((__int64 **)a2 + 2);
    if ( v9 < a3 )
    {
      if ( v11 )
        goto LABEL_6;
      if ( v10 >= a3 )
        goto LABEL_32;
      if ( v8 < a3 )
      {
        if ( !*((_QWORD *)a2 + 1) )
        {
          *((_QWORD *)this + 1) = 0;
          *((_QWORD *)this + 2) = 0;
          goto LABEL_20;
        }
        goto LABEL_7;
      }
LABEL_25:
      *((_QWORD *)this + 1) = 0;
      *((_QWORD *)this + 2) = 0;
      v17 = (CoinOslFactorization *)operator new(0x1F0u);
      CoinOslFactorization::CoinOslFactorization(v17);
      goto LABEL_18;
    }
    if ( v11 )
    {
      if ( !__dynamic_cast(
              *((const void **)a2 + 2),
              (const struct __class_type_info *)&`typeinfo for'CoinOtherFactorization,
              (const struct __class_type_info *)&`typeinfo for'CoinDenseFactorization,
              0) )
      {
        v14 = 1;
LABEL_14:
        v15 = *v11;
        *((_QWORD *)this + 1) = 0;
        v16 = (*(__int64 (__fastcall **)(__int64 *))(v15 + 16))(v11);
        *((_QWORD *)this + 2) = v16;
        if ( !v14 )
          goto LABEL_20;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        goto LABEL_17;
      }
LABEL_6:
      if ( *((_QWORD *)a2 + 1) )
        goto LABEL_7;
      v14 = 0;
      goto LABEL_14;
    }
LABEL_26:
    *((_QWORD *)this + 1) = 0;
    *((_QWORD *)this + 2) = 0;
LABEL_17:
    v17 = (CoinOslFactorization *)operator new(0x68u);
    CoinDenseFactorization::CoinDenseFactorization(v17);
    goto LABEL_18;
  }
  if ( !a3 )
  {
LABEL_28:
    if ( !*((_QWORD *)a2 + 1) )
    {
      v13 = *((_QWORD *)a2 + 2);
      *((_QWORD *)this + 1) = 0;
      if ( v13 )
        goto LABEL_8;
      goto LABEL_30;
    }
LABEL_7:
    v12 = (CoinFactorization *)operator new(0x488u);
    CoinFactorization::CoinFactorization(v12, *((const CoinFactorization **)a2 + 1));
    v13 = *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 1) = v12;
    if ( v13 )
    {
LABEL_8:
      *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      goto LABEL_20;
    }
LABEL_30:
    *((_QWORD *)this + 2) = 0;
    goto LABEL_20;
  }
  v21 = -a3;
  if ( v9 >= v21 )
    goto LABEL_26;
  if ( v10 < v21 )
  {
    if ( v8 >= v21 )
      goto LABEL_25;
    goto LABEL_28;
  }
LABEL_32:
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  v17 = (CoinOslFactorization *)operator new(0x240u);
  CoinSimpFactorization::CoinSimpFactorization(v17);
LABEL_18:
  v18 = *((_QWORD *)a2 + 1);
  v19 = *(_QWORD *)v17;
  *((_QWORD *)this + 2) = v17;
  v20 = *(void (__fastcall **)(CoinOslFactorization *, _QWORD))(v19 + 24);
  if ( v18 )
  {
    v20(v17, *(unsigned int *)(v18 + 64));
    CoinOtherFactorization::pivotTolerance(*((CoinOtherFactorization **)this + 2), **((double **)a2 + 1));
    CoinOtherFactorization::zeroTolerance(
      *((CoinOtherFactorization **)this + 2),
      *(double *)(*((_QWORD *)a2 + 1) + 8LL));
  }
  else
  {
    v20(v17, *(unsigned int *)(*((_QWORD *)a2 + 2) + 48LL));
    CoinOtherFactorization::pivotTolerance(
      *((CoinOtherFactorization **)this + 2),
      *(double *)(*((_QWORD *)a2 + 2) + 8LL));
    CoinOtherFactorization::zeroTolerance(
      *((CoinOtherFactorization **)this + 2),
      *(double *)(*((_QWORD *)a2 + 2) + 16LL));
  }
LABEL_20:
  *(__m128i *)((char *)this + 40) = _mm_loadu_si128((const __m128i *)((char *)a2 + 40));
  *(__m128i *)((char *)this + 56) = _mm_loadu_si128((const __m128i *)((char *)a2 + 56));
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
}

