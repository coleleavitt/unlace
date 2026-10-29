__int64 __fastcall ClpSimplexPrimal::primalColumn(
        ClpSimplexPrimal *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 result; // rax
  bool v11; // zf
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  double v15; // xmm0_8
  char v16; // si
  __int64 v17; // rax
  int v18; // ecx
  double v19; // xmm2_8
  int v20; // esi
  int v21; // r8d
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  char v24; // al
  int v25; // ecx
  double v26; // xmm2_8
  int v27; // esi
  signed int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx

  v7 = *((_QWORD *)this + 26);
  v8 = *((_QWORD *)this + 24);
  v9 = *((_QWORD *)this + 28);
  if ( v7 )
  {
    *((_QWORD *)this + 28) = 0;
    *((_QWORD *)this + 24) = v7;
  }
  result = (***((__int64 (__fastcall ****)(_QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *))this
              + 156))(
             *((_QWORD *)this + 156),
             a2,
             a3,
             a4,
             a5,
             a6);
  v11 = *((_QWORD *)this + 26) == 0;
  *((_DWORD *)this + 288) = result;
  if ( !v11 )
  {
    *((_QWORD *)this + 24) = v8;
    *((_QWORD *)this + 28) = v9;
  }
  if ( (int)result >= 0 )
  {
    v12 = *((_QWORD *)this + 165);
    v13 = 8LL * (int)result;
    v14 = *((_QWORD *)this + 147);
    *((_QWORD *)this + 102) = *(_QWORD *)(*((_QWORD *)this + 150) + v13);
    v15 = *(double *)(v14 + v13);
    *((double *)this + 104) = v15;
    if ( *(_BYTE *)(v12 + 149) )
    {
      v16 = *(_BYTE *)(*((_QWORD *)this + 33) + (int)result) & 7;
      if ( v16 == 2 )
      {
        if ( v15 >= 0.0 )
          goto LABEL_9;
        v25 = *(_DWORD *)(v12 + 144);
        v26 = 0.0;
        if ( (v25 & 1) != 0 )
        {
          v27 = *(_DWORD *)(*(_QWORD *)(v12 + 64) + 4LL * (int)result)
              + *(_DWORD *)(*(_QWORD *)(v12 + 72) + 4LL * (int)result);
          v28 = v27 + 1;
          if ( v27 + 1 == *(_DWORD *)(*(_QWORD *)(v12 + 56) + 4LL * (int)result + 4) )
          {
            v26 = -1.0e100;
          }
          else
          {
            v26 = -1.0e100;
            v29 = *(_DWORD *)(*(_QWORD *)(v12 + 104) + 4LL * (v28 >> 5));
            if ( !_bittest(&v29, v28) )
              v26 = *(double *)(*(_QWORD *)(v12 + 88) + 8LL * v27) - *(double *)(*(_QWORD *)(v12 + 88) + 8LL * v27 + 8);
          }
        }
        if ( (v25 & 2) != 0 )
          v26 = -*(double *)(v12 + 16);
        v30 = *((_QWORD *)this + 126);
        *((double *)this + 104) = v15 - v26;
        ClpNonLinearCost::setOne(
          (ClpNonLinearCost *)v12,
          result,
          *((double *)this + 110) + *((double *)this + 110) + *(double *)(v30 + 8LL * (int)result));
        v23 = (_BYTE *)(*((_QWORD *)this + 33) + *((int *)this + 288));
        v24 = *v23 & 0xF8 | 3;
      }
      else
      {
        if ( v16 != 3 || v15 <= 0.0 )
          goto LABEL_9;
        v18 = *(_DWORD *)(v12 + 144);
        v19 = 0.0;
        if ( (v18 & 1) != 0 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)(v12 + 64) + 4LL * (int)result)
              + *(_DWORD *)(*(_QWORD *)(v12 + 72) + 4LL * (int)result);
          if ( v20 == *(_DWORD *)(*(_QWORD *)(v12 + 56) + 4LL * (int)result) )
          {
            v19 = 1.0e100;
          }
          else
          {
            v19 = 1.0e100;
            v21 = *(_DWORD *)(*(_QWORD *)(v12 + 104) + 4LL * ((v20 - 1) >> 5));
            if ( !_bittest(&v21, v20 - 1) )
              v19 = *(double *)(*(_QWORD *)(v12 + 88) + 8LL * v20) - *(double *)(*(_QWORD *)(v12 + 88) + 8LL * v20 - 8);
          }
        }
        if ( (v18 & 2) != 0 )
          v19 = *(double *)(v12 + 16);
        v22 = *((_QWORD *)this + 123);
        *((double *)this + 104) = v15 - v19;
        ClpNonLinearCost::setOne(
          (ClpNonLinearCost *)v12,
          result,
          *(double *)(v22 + 8LL * (int)result) - (*((double *)this + 110) + *((double *)this + 110)));
        v23 = (_BYTE *)(*((_QWORD *)this + 33) + *((int *)this + 288));
        v24 = *v23 & 0xF8 | 2;
      }
      *v23 = v24;
      v15 = *((double *)this + 104);
      v13 = 8LL * *((int *)this + 288);
    }
LABEL_9:
    v17 = *((_QWORD *)this + 126);
    *((_QWORD *)this + 101) = *(_QWORD *)(*((_QWORD *)this + 123) + v13);
    *((_QWORD *)this + 103) = *(_QWORD *)(v17 + v13);
    result = 2 * (unsigned int)(v15 <= 0.0) - 1;
    *((_DWORD *)this + 289) = result;
    return result;
  }
  *((_DWORD *)this + 288) = -1;
  return result;
}

