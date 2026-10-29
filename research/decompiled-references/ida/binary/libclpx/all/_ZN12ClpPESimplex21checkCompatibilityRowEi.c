__int64 __fastcall ClpPESimplex::checkCompatibilityRow(ClpPESimplex *this, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  int **v4; // rax
  int **v5; // rbp
  int v6; // edx
  int *v7; // r12
  int *v8; // r14
  double *v9; // r13
  __int64 v10; // r15
  __int64 v11; // r10
  double v12; // xmm0_8
  std::ostream *v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx
  char v16; // si
  std::ostream *v17; // rax
  _DWORD *v18; // rbp
  __int64 v19; // r12
  double v20; // xmm0_8
  std::ostream *v21; // r15
  _BYTE *v22; // r14
  char v23; // si
  std::ostream *v24; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  double *v28; // r15
  double v29; // xmm0_8
  std::ostream *v30; // rdx
  _BYTE *v31; // r15
  __int64 v32; // rcx
  char v33; // si
  std::ostream *v34; // rax
  int *i; // rbp
  __int64 v36; // rdx
  double *v37; // r12
  double v38; // xmm0_8
  std::ostream *v39; // r15
  _BYTE *v40; // r12
  char v41; // si
  std::ostream *v42; // rax
  __int64 (__fastcall *v43)(__int64, unsigned int); // rax
  char v44; // al
  __int64 (__fastcall *v45)(__int64, unsigned int); // rax
  char v46; // al
  __int64 (__fastcall *v47)(__int64, unsigned int); // rax
  __int64 (__fastcall *v48)(__int64, unsigned int); // rax
  int *v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  __int64 v51; // [rsp+10h] [rbp-68h]
  __int64 v52; // [rsp+10h] [rbp-68h]
  __int64 v53; // [rsp+10h] [rbp-68h]
  std::ostream *v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+18h] [rbp-60h]
  std::ostream *v57; // [rsp+18h] [rbp-60h]
  __int64 v58; // [rsp+20h] [rbp-58h]
  int v59; // [rsp+28h] [rbp-50h]
  int v60[3]; // [rsp+2Ch] [rbp-4Ch] BYREF
  double v61[8]; // [rsp+38h] [rbp-40h] BYREF

  v60[0] = a2;
  v61[0] = 1.0;
  CoinIndexedVector::createPacked(*(CoinIndexedVector **)(*((_QWORD *)this + 12) + 1056LL), 1, v60, v61);
  ClpFactorization::updateColumnTranspose(
    *(ClpFactorization **)(*((_QWORD *)this + 12) + 1264LL),
    *(CoinIndexedVector **)(*((_QWORD *)this + 12) + 1064LL),
    *(CoinIndexedVector **)(*((_QWORD *)this + 12) + 1056LL));
  v2 = *((_QWORD *)this + 12);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, double))(**(_QWORD **)(v2 + 192) + 392LL))(
    *(_QWORD *)(v2 + 192),
    v2,
    *(_QWORD *)(v2 + 1056),
    *(_QWORD *)(v2 + 1064),
    *(_QWORD *)(v2 + 1104),
    -1.0);
  v3 = *((_QWORD *)this + 12);
  v4 = *(int ***)(v3 + 1104);
  v5 = *(int ***)(v3 + 1056);
  v6 = *((_DWORD *)v4 + 4);
  v7 = *v4;
  v8 = v4[1];
  v59 = *((_DWORD *)v5 + 4);
  v9 = (double *)v5[1];
  v49 = *v5;
  if ( *((_BYTE *)v4 + 28) )
  {
    if ( v6 > 0 )
    {
      v10 = 0;
      v11 = (unsigned int)(v6 - 1) + 1LL;
      while ( 1 )
      {
        while ( !*(_BYTE *)(*((_QWORD *)this + 5) + v7[v10]) || fabs(*(double *)&v8[2 * v10]) <= *((double *)this + 13) )
        {
          if ( v11 == ++v10 )
            goto LABEL_11;
        }
        v50 = v11;
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = *(double *)&v8[2 * v10];
        v13 = (std::ostream *)std::ostream::_M_insert<double>();
        v14 = v50;
        v15 = *(_QWORD *)((char *)v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 240);
        if ( !v15 )
          break;
        if ( *(_BYTE *)(v15 + 56) )
        {
          v16 = *(_BYTE *)(v15 + 67);
        }
        else
        {
          v58 = v50;
          v57 = v13;
          v55 = *(_QWORD *)((char *)v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 240);
          std::ctype<char>::_M_widen_init();
          v16 = 10;
          v13 = v57;
          v14 = v58;
          v45 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v55 + 48LL);
          if ( v45 != std::ctype<char>::do_widen )
          {
            v46 = ((__int64 (__fastcall *)(__int64, __int64, double))v45)(v55, 10, v12);
            v14 = v58;
            v16 = v46;
            v13 = v57;
          }
        }
        v51 = v14;
        ++v10;
        v17 = (std::ostream *)std::ostream::put(v13, v16);
        std::ostream::flush(v17);
        v11 = v51;
        if ( v51 == v10 )
          goto LABEL_11;
      }
LABEL_48:
      std::__throw_bad_cast();
    }
  }
  else if ( v6 > 0 )
  {
    v26 = (__int64)&v7[v6 - 1 + 1];
    do
    {
      v27 = *v7;
      if ( *(_BYTE *)(*((_QWORD *)this + 5) + v27) )
      {
        v28 = (double *)&v8[2 * v27];
        if ( fabs(*v28) > *((double *)this + 13) )
        {
          v52 = v26;
          std::__ostream_insert<char,std::char_traits<char>>();
          v29 = *v28;
          v30 = (std::ostream *)std::ostream::_M_insert<double>();
          v31 = *(_BYTE **)((char *)v30 + *(_QWORD *)(*(_QWORD *)v30 - 24LL) + 240);
          if ( !v31 )
            goto LABEL_48;
          v32 = v52;
          if ( v31[56] )
          {
            v33 = v31[67];
          }
          else
          {
            v56 = v52;
            v54 = v30;
            std::ctype<char>::_M_widen_init();
            v33 = 10;
            v30 = v54;
            v32 = v56;
            v43 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v31 + 48LL);
            if ( v43 != std::ctype<char>::do_widen )
            {
              v44 = ((__int64 (__fastcall *)(_BYTE *, __int64, std::ostream *, __int64, double))v43)(
                      v31,
                      10,
                      v54,
                      v56,
                      v29);
              v32 = v56;
              v33 = v44;
              v30 = v54;
            }
          }
          v53 = v32;
          v34 = (std::ostream *)std::ostream::put(v30, v33);
          std::ostream::flush(v34);
          v26 = v53;
        }
      }
      ++v7;
    }
    while ( (int *)v26 != v7 );
  }
LABEL_11:
  if ( *((_BYTE *)v5 + 28) )
  {
    if ( v59 > 0 )
    {
      v18 = v49;
      v19 = (__int64)&v49[v59 - 1 + 1];
      while ( 1 )
      {
        while ( !*(_BYTE *)(*((_QWORD *)this + 5) + *((_DWORD *)this + 31) + *v18)
             || fabs(*v9) <= *((double *)this + 13) )
        {
          ++v18;
          ++v9;
          if ( v18 == (_DWORD *)v19 )
            return 1;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        v20 = *v9;
        v21 = (std::ostream *)std::ostream::_M_insert<double>();
        v22 = *(_BYTE **)((char *)v21 + *(_QWORD *)(*(_QWORD *)v21 - 24LL) + 240);
        if ( !v22 )
          break;
        if ( v22[56] )
        {
          v23 = v22[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v23 = 10;
          v47 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v22 + 48LL);
          if ( v47 != std::ctype<char>::do_widen )
            v23 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v47)(v22, 10, v20);
        }
        ++v18;
        ++v9;
        v24 = (std::ostream *)std::ostream::put(v21, v23);
        std::ostream::flush(v24);
        if ( v18 == (_DWORD *)v19 )
          return 1;
      }
      goto LABEL_48;
    }
  }
  else if ( v59 > 0 )
  {
    for ( i = v49; &v49[v59 - 1 + 1] != i; ++i )
    {
      v36 = *i;
      if ( *(_BYTE *)(*((_QWORD *)this + 5) + (int)v36 + *((_DWORD *)this + 31)) )
      {
        v37 = &v9[v36];
        if ( fabs(*v37) > *((double *)this + 13) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v38 = *v37;
          v39 = (std::ostream *)std::ostream::_M_insert<double>();
          v40 = *(_BYTE **)((char *)v39 + *(_QWORD *)(*(_QWORD *)v39 - 24LL) + 240);
          if ( !v40 )
            goto LABEL_48;
          if ( v40[56] )
          {
            v41 = v40[67];
          }
          else
          {
            std::ctype<char>::_M_widen_init();
            v41 = 10;
            v48 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v40 + 48LL);
            if ( v48 != std::ctype<char>::do_widen )
              v41 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v48)(v40, 10, v38);
          }
          v42 = (std::ostream *)std::ostream::put(v39, v41);
          std::ostream::flush(v42);
        }
      }
    }
  }
  return 1;
}

