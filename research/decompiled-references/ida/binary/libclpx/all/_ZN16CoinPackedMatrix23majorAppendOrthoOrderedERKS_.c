void __fastcall CoinPackedMatrix::majorAppendOrthoOrdered(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // esi
  int v8; // eax
  __int64 v9; // rdi
  double v10; // xmm4_8
  int *v11; // r8
  int v12; // ecx
  __int64 v13; // rdx
  double v14; // xmm4_8
  __m128d v15; // xmm0
  __m128d v16; // xmm1
  int v17; // eax
  int *v18; // r8
  bool v19; // cc
  int *v20; // r8
  _DWORD *v21; // rdi
  int v22; // ecx
  __int64 v23; // r15
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // r9
  __int64 v29; // r12
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // xmm0_8
  int *v34; // rsi
  int v35; // ecx
  __int64 v36; // rdx
  int v37; // edx
  __int64 v38; // rax
  void *exception; // r13
  __int64 v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+10h] [rbp-78h]
  int *v42; // [rsp+18h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-58h]
  __int64 v44; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-48h]

  v2 = *((_DWORD *)this + 17);
  if ( v2 != *((_DWORD *)a2 + 16) )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v43 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v43 - 24);
    if ( (_UNKNOWN *)(v44 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v44 - 24);
    if ( (_UNKNOWN *)(v45 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_223D40(v45 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  if ( v2 )
  {
    v5 = CoinPackedMatrix::countOrthoLength(a2);
    v6 = *((int *)this + 16);
    v7 = *((_DWORD *)a2 + 17);
    v42 = (int *)v5;
    v8 = v6 + v7;
    if ( (int)v6 + v7 > *((_DWORD *)this + 19) )
      goto LABEL_23;
    v9 = 4 * v6;
    v10 = *((double *)this + 2);
    v11 = (int *)(v9 + *((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = v11;
    if ( v7 > 0 )
    {
      v12 = *v11;
      v13 = 1;
      v14 = v10 + 1.0;
      do
      {
        v15 = 0;
        v15.m128d_f64[0] = (double)v42[v13 - 1] * v14;
        if ( fabs(v15.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v16.m128d_f64[0] = (double)(int)v15.m128d_f64[0];
          *(_QWORD *)&v15.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v15, v16).m128d_f64[0] & 0x3FF0000000000000LL)
                                         + v16.m128d_f64[0])
                                       | *(_QWORD *)&v15.m128d_f64[0] & 0x8000000000000000LL;
        }
        v12 += (int)v15.m128d_f64[0];
        v17 = v13;
        v11[v13] = v12;
        v7 = *((_DWORD *)a2 + 17);
        ++v13;
      }
      while ( v7 > v17 );
      v9 = 4LL * *((int *)this + 16);
      v8 = v7 + *((_DWORD *)this + 16);
    }
    v18 = &v11[v9 / 0xFFFFFFFFFFFFFFFCLL];
    v19 = v18[v8] <= *((_DWORD *)this + 20);
    *((_QWORD *)this + 6) = v18;
    if ( !v19 )
    {
LABEL_23:
      CoinPackedMatrix::resizeForAddingMajorVectors(this, v7, v42);
      v18 = *((int **)this + 6);
      v7 = *((_DWORD *)a2 + 17);
      v9 = 4LL * *((int *)this + 16);
    }
    v20 = &v18[(unsigned __int64)v9 / 4];
    v21 = (_DWORD *)(*((_QWORD *)this + 7) + v9);
    *((_QWORD *)this + 6) = v20;
    *((_QWORD *)this + 7) = v21;
    if ( v7 )
    {
      sub_223D80(v21, v7);
      v20 = *((int **)this + 6);
      v21 = *((_DWORD **)this + 7);
    }
    v22 = *((_DWORD *)a2 + 16);
    if ( v22 > 0 )
    {
      v23 = 0;
      v40 = *((_QWORD *)a2 + 6);
      v41 = *((_QWORD *)a2 + 7);
      do
      {
        v24 = *(int *)(v40 + 4 * v23);
        v25 = *(_DWORD *)(v41 + 4 * v23);
        if ( (int)v24 < (int)v24 + v25 )
        {
          v26 = *((_QWORD *)this + 4);
          v27 = *((_QWORD *)this + 5);
          v28 = (unsigned int)(v25 - 1) + 1LL;
          v29 = *((_QWORD *)a2 + 5) + 4 * v24;
          v30 = *((_QWORD *)a2 + 4) + 8 * v24;
          v31 = 0;
          do
          {
            v32 = *(int *)(v29 + 4 * v31);
            v33 = *(_QWORD *)(v30 + 8 * v31++);
            v34 = &v21[v32];
            v35 = *v34 + 1;
            v36 = *v34 + v20[v32];
            *(_QWORD *)(v26 + 8 * v36) = v33;
            *v34 = v35;
            *(_DWORD *)(v27 + 4 * v36) = v23;
          }
          while ( v28 != v31 );
          v22 = *((_DWORD *)a2 + 16);
        }
        ++v23;
      }
      while ( (int)v23 < v22 );
    }
    v37 = *((_DWORD *)a2 + 17) + *((_DWORD *)this + 16);
    v38 = 0x3FFFFFFFFFFFFFFFLL * *((int *)this + 16);
    *((_DWORD *)this + 18) += *((_DWORD *)a2 + 18);
    *((_QWORD *)this + 7) = &v21[v38];
    *((_QWORD *)this + 6) = &v20[v38];
    *((_DWORD *)this + 16) = v37;
    if ( v42 )
      operator delete[](v42);
  }
}

