__int64 __fastcall CoinPackedMatrix::isEquivalent2(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  char v3; // al
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  std::ostream *v8; // rax
  std::ostream *v9; // rbp
  _BYTE *v10; // rbx
  char v11; // si
  std::ostream *v12; // rax
  __int64 (__fastcall *v13)(__int64, unsigned int); // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rbx
  double v20; // xmm0_8
  std::ostream *v21; // r12
  __int64 v22; // rax
  char v23; // si
  std::ostream *v24; // rax
  __int64 (__fastcall *v25)(__int64, unsigned int); // rax
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // xmm0_8
  double *v31; // r12
  int v32; // eax
  __int64 *v33; // r12
  int *v34; // rbx
  int v35; // eax
  __int64 v36; // rbx
  int v37; // [rsp+4h] [rbp-164h]
  double v38; // [rsp+10h] [rbp-158h]
  __int64 v39; // [rsp+10h] [rbp-158h]
  __int64 v40; // [rsp+10h] [rbp-158h]
  int *v41; // [rsp+10h] [rbp-158h]
  double v42; // [rsp+10h] [rbp-158h]
  __int64 i; // [rsp+28h] [rbp-140h]
  double v44; // [rsp+30h] [rbp-138h]
  int v45; // [rsp+40h] [rbp-128h] BYREF
  __int64 v46; // [rsp+48h] [rbp-120h]
  char v47[8]; // [rsp+50h] [rbp-118h] BYREF
  int v48; // [rsp+58h] [rbp-110h] BYREF
  __int64 v49; // [rsp+60h] [rbp-108h]
  int *v50; // [rsp+68h] [rbp-100h]
  int *v51; // [rsp+70h] [rbp-F8h]
  __int64 v52; // [rsp+78h] [rbp-F0h]
  int v53; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v55; // [rsp+90h] [rbp-D8h]
  double *v56; // [rsp+98h] [rbp-D0h]
  __int64 *v57; // [rsp+A0h] [rbp-C8h]
  __int64 v58; // [rsp+A8h] [rbp-C0h]
  _QWORD v59[5]; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-90h]
  int v61; // [rsp+E0h] [rbp-88h]
  _QWORD v62[4]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v63; // [rsp+110h] [rbp-58h]
  __int64 v64; // [rsp+118h] [rbp-50h]
  int v65; // [rsp+120h] [rbp-48h]

  v3 = *((_BYTE *)this + 8);
  if ( v3 != *((_BYTE *)a2 + 8) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<bool>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = (std::ostream *)std::ostream::_M_insert<bool>();
    goto LABEL_11;
  }
  v4 = *((_DWORD *)this + 16);
  v5 = *((_DWORD *)a2 + 16);
  if ( !v3 )
  {
    v6 = *((_DWORD *)this + 16);
    if ( *((_DWORD *)a2 + 17) == *((_DWORD *)this + 17) )
      goto LABEL_5;
    goto LABEL_10;
  }
  if ( v4 != v5 )
  {
LABEL_10:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v8 = (std::ostream *)std::ostream::operator<<();
LABEL_11:
    v9 = v8;
    v10 = *(_BYTE **)((char *)v8 + *(_QWORD *)(*(_QWORD *)v8 - 24LL) + 240);
    if ( !v10 )
      std::__throw_bad_cast();
    if ( v10[56] )
    {
      v11 = v10[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v11 = 10;
      v13 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 48LL);
      if ( v13 != std::ctype<char>::do_widen )
        v11 = v13((__int64)v10, 10u);
    }
    v12 = (std::ostream *)std::ostream::put(v9, v11);
    std::ostream::flush(v12);
    return 0;
  }
  v6 = *((_DWORD *)this + 17);
  v5 = *((_DWORD *)a2 + 17);
LABEL_5:
  if ( v5 != v6 || *((_DWORD *)this + 18) != *((_DWORD *)a2 + 18) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::endl<char,std::char_traits<char>>();
    return 0;
  }
  v37 = v4 - 1;
  if ( v4 - 1 >= 0 )
  {
    for ( i = 4LL * v37; ; i -= 4 )
    {
      v14 = *(int *)(*((_QWORD *)this + 6) + i);
      CoinShallowPackedVector::CoinShallowPackedVector(
        (CoinShallowPackedVector *)v59,
        *(_DWORD *)(*((_QWORD *)this + 7) + i),
        (const int *)(*((_QWORD *)this + 5) + 4 * v14),
        (const double *)(*((_QWORD *)this + 4) + 8 * v14),
        0);
      v15 = *(int *)(*((_QWORD *)a2 + 6) + i);
      CoinShallowPackedVector::CoinShallowPackedVector(
        (CoinShallowPackedVector *)v62,
        *(_DWORD *)(*((_QWORD *)a2 + 7) + i),
        (const int *)(*((_QWORD *)a2 + 5) + 4 * v15),
        (const double *)(*((_QWORD *)a2 + 4) + 8 * v15),
        0);
      if ( v61 != v65 )
        goto LABEL_22;
      CoinPackedVectorBase::duplicateIndex((CoinPackedVectorBase *)v59, "equivalent", "CoinPackedVector");
      CoinPackedVectorBase::duplicateIndex((CoinPackedVectorBase *)v62, "equivalent", "CoinPackedVector");
      v48 = 0;
      v49 = 0;
      v52 = 0;
      v26 = v59[4];
      v50 = &v48;
      v51 = &v48;
      v40 = v60;
      v27 = v61 - 1;
      if ( v61 - 1 < 0 )
      {
        LODWORD(v54) = 0;
        v55 = 0;
        v58 = 0;
        v31 = (double *)&v54;
        v56 = (double *)&v54;
        v57 = &v54;
      }
      else
      {
        v28 = v27;
        v29 = v27 - 1LL - (unsigned int)v27;
        do
        {
          v30 = *(_QWORD *)(v40 + 8 * v28);
          v53 = *(_DWORD *)(v26 + 4 * v28);
          v54 = v30;
          std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
            v47,
            &v53);
          --v28;
        }
        while ( v29 != v28 );
        v31 = (double *)&v54;
        LODWORD(v54) = 0;
        v55 = 0;
        v58 = 0;
        v56 = (double *)&v54;
        v57 = &v54;
        v32 = v61 - 1;
        if ( v61 - 1 >= 0 )
        {
          v33 = (__int64 *)(v64 + 8LL * v32);
          v34 = (int *)(v63 + 4LL * v32);
          v41 = (int *)(v63 - 4);
          do
          {
            v35 = *v34;
            v46 = *v33;
            v45 = v35;
            std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
              &v53,
              &v45);
            --v34;
            --v33;
          }
          while ( v41 != v34 );
          v31 = v56;
        }
      }
      v36 = (__int64)v50;
      if ( v50 != &v48 )
        break;
LABEL_48:
      std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
        &v53,
        v55);
      std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
        v47,
        v49);
LABEL_30:
      v62[0] = off_4D1798;
      CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v62);
      v59[0] = off_4D1798;
      CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v59);
      if ( --v37 == -1 )
        return 1;
    }
    while ( *(_DWORD *)(v36 + 32) == *((_DWORD *)v31 + 8) )
    {
      v44 = *(double *)(v36 + 40);
      v42 = v31[5];
      if ( (unsigned __int8)CoinIsnan(v44)
        || (unsigned __int8)CoinIsnan(v42)
        || v42 != v44
        && (!(unsigned __int8)CoinFinite(v44)
         || !(unsigned __int8)CoinFinite(v42)
         || (fmax(fabs(v44), fabs(v42)) + 1.0) * 1.0e-10 < fabs(v44 - v42)) )
      {
        break;
      }
      v36 = std::_Rb_tree_increment();
      v31 = (double *)std::_Rb_tree_increment();
      if ( (int *)v36 == &v48 )
        goto LABEL_48;
    }
    std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
      &v53,
      v55);
    std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
      v47,
      v49);
LABEL_22:
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::endl<char,std::char_traits<char>>();
    v16 = v61;
    v17 = v60;
    v18 = v64;
    if ( v61 > 0 )
    {
      v19 = 0;
      do
      {
        while ( 1 )
        {
          v38 = *(double *)(v17 + 8 * v19) - *(double *)(v18 + 8 * v19);
          if ( v38 != 0.0 )
            break;
          if ( v16 <= (int)++v19 )
            goto LABEL_30;
        }
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v20 = v38;
        v21 = (std::ostream *)std::ostream::_M_insert<double>();
        v22 = *(_QWORD *)((char *)v21 + *(_QWORD *)(*(_QWORD *)v21 - 24LL) + 240);
        v39 = v22;
        if ( !v22 )
          std::__throw_bad_cast();
        if ( *(_BYTE *)(v22 + 56) )
        {
          v23 = *(_BYTE *)(v22 + 67);
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v23 = 10;
          v25 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v39 + 48LL);
          if ( v25 != std::ctype<char>::do_widen )
            v23 = ((__int64 (__fastcall *)(__int64, __int64, double))v25)(v39, 10, v20);
        }
        v24 = (std::ostream *)std::ostream::put(v21, v23);
        std::ostream::flush(v24);
        printf("%x %x", *(_DWORD *)(v17 + 8 * v19), *(_DWORD *)(v17 + 8 * v19 + 4));
        printf(" %x %x\n", *(_DWORD *)(v18 + 8 * v19), *(_DWORD *)(v18 + 8 * v19 + 4));
        v16 = v61;
        ++v19;
      }
      while ( v61 > (int)v19 );
    }
    goto LABEL_30;
  }
  return 1;
}

