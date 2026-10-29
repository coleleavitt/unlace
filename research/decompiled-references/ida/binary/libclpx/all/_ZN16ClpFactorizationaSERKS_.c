__int64 __fastcall ClpFactorization::operator=(__int64 a1, __int64 a2)
{
  ClpNetworkBasis *v2; // r12
  ClpNetworkBasis *v4; // r12
  char v5; // al
  CoinFactorization *v6; // r12
  CoinFactorization *v7; // rsi
  const void *v8; // r14
  const void *v9; // r12
  CoinOslFactorization *v10; // r15
  void *v11; // r14
  CoinSimpFactorization *v12; // rax
  CoinFactorization *v14; // r12
  CoinDenseFactorization *v15; // [rsp+8h] [rbp-50h]
  void *v16; // [rsp+10h] [rbp-48h]
  CoinOslFactorization *v17; // [rsp+18h] [rbp-40h]

  if ( a1 != a2 )
  {
    v2 = *(ClpNetworkBasis **)a1;
    if ( *(_QWORD *)a1 )
    {
      ClpNetworkBasis::~ClpNetworkBasis(*(ClpNetworkBasis **)a1);
      operator delete(v2);
    }
    if ( *(_QWORD *)a2 )
    {
      v4 = (ClpNetworkBasis *)operator new(0x70u);
      ClpNetworkBasis::ClpNetworkBasis(v4, *(const ClpNetworkBasis **)a2);
      *(_QWORD *)a1 = v4;
    }
    else
    {
      *(_QWORD *)a1 = 0;
    }
    v5 = *(_BYTE *)(a2 + 76);
    v6 = *(CoinFactorization **)(a1 + 8);
    *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
    *(_BYTE *)(a1 + 76) = v5;
    *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
    v7 = *(CoinFactorization **)(a2 + 8);
    if ( v7 )
    {
      if ( v6 )
      {
        CoinFactorization::operator=(v6, v7);
      }
      else
      {
        v14 = (CoinFactorization *)operator new(0x488u);
        CoinFactorization::CoinFactorization(v14, *(const CoinFactorization **)(a2 + 8));
        *(_QWORD *)(a1 + 8) = v14;
      }
    }
    else
    {
      if ( v6 )
      {
        CoinFactorization::~CoinFactorization(v6);
        operator delete(v6);
      }
      *(_QWORD *)(a1 + 8) = 0;
    }
    v8 = *(const void **)(a2 + 16);
    v9 = *(const void **)(a1 + 16);
    if ( v8 )
    {
      if ( v9 )
      {
        v16 = __dynamic_cast(
                *(const void **)(a2 + 16),
                (const struct __class_type_info *)&`typeinfo for'CoinOtherFactorization,
                (const struct __class_type_info *)&`typeinfo for'CoinDenseFactorization,
                0);
        v15 = (CoinDenseFactorization *)__dynamic_cast(
                                          v9,
                                          (const struct __class_type_info *)&`typeinfo for'CoinOtherFactorization,
                                          (const struct __class_type_info *)&`typeinfo for'CoinDenseFactorization,
                                          0);
        v17 = (CoinOslFactorization *)__dynamic_cast(
                                        v8,
                                        (const struct __class_type_info *)&`typeinfo for'CoinOtherFactorization,
                                        (const struct __class_type_info *)&`typeinfo for'CoinOslFactorization,
                                        0);
        v10 = (CoinOslFactorization *)__dynamic_cast(
                                        v9,
                                        (const struct __class_type_info *)&`typeinfo for'CoinOtherFactorization,
                                        (const struct __class_type_info *)&`typeinfo for'CoinOslFactorization,
                                        0);
        v11 = __dynamic_cast(
                v8,
                (const struct __class_type_info *)&`typeinfo for'CoinOtherFactorization,
                (const struct __class_type_info *)&`typeinfo for'CoinSimpFactorization,
                0);
        v12 = (CoinSimpFactorization *)__dynamic_cast(
                                         v9,
                                         (const struct __class_type_info *)&`typeinfo for'CoinOtherFactorization,
                                         (const struct __class_type_info *)&`typeinfo for'CoinSimpFactorization,
                                         0);
        if ( v15 && v16 )
        {
          CoinDenseFactorization::operator=(v15);
        }
        else if ( v10 && v17 )
        {
          CoinOslFactorization::operator=(v10, v17);
        }
        else if ( v12 && v11 )
        {
          CoinSimpFactorization::operator=(v12);
        }
        else
        {
          (*(void (__fastcall **)(const void *))(*(_QWORD *)v9 + 8LL))(v9);
          *(_QWORD *)(a1 + 16) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 16) + 16LL))(*(_QWORD *)(a2 + 16));
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*(_QWORD *)(a2 + 16));
      }
    }
    else
    {
      if ( v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(a1 + 16));
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return a1;
}

