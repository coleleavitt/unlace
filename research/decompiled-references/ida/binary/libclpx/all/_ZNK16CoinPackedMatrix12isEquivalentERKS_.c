__int64 __fastcall CoinPackedMatrix::isEquivalent(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx
  int v5; // r8d
  int v6; // ecx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // r13
  __int64 v13; // xmm0_8
  double *v14; // r15
  int v15; // eax
  __int64 *v16; // r15
  int *v17; // r13
  __int64 v18; // xmm0_8
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-148h]
  int *v22; // [rsp+18h] [rbp-148h]
  double v23; // [rsp+18h] [rbp-148h]
  __int64 v24; // [rsp+20h] [rbp-140h]
  double v25; // [rsp+20h] [rbp-140h]
  unsigned __int64 v26; // [rsp+30h] [rbp-130h]
  int v27; // [rsp+38h] [rbp-128h] BYREF
  __int64 v28; // [rsp+40h] [rbp-120h]
  char v29[8]; // [rsp+48h] [rbp-118h] BYREF
  int v30; // [rsp+50h] [rbp-110h] BYREF
  __int64 v31; // [rsp+58h] [rbp-108h]
  int *v32; // [rsp+60h] [rbp-100h]
  int *v33; // [rsp+68h] [rbp-F8h]
  __int64 v34; // [rsp+70h] [rbp-F0h]
  int v35; // [rsp+78h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+88h] [rbp-D8h]
  double *v38; // [rsp+90h] [rbp-D0h]
  __int64 *v39; // [rsp+98h] [rbp-C8h]
  __int64 v40; // [rsp+A0h] [rbp-C0h]
  _QWORD v41[6]; // [rsp+A8h] [rbp-B8h] BYREF
  int v42; // [rsp+D8h] [rbp-88h]
  _QWORD v43[4]; // [rsp+E8h] [rbp-78h] BYREF
  __int64 v44; // [rsp+108h] [rbp-58h]
  __int64 v45; // [rsp+110h] [rbp-50h]
  int v46; // [rsp+118h] [rbp-48h]

  result = *((unsigned __int8 *)this + 8);
  if ( (_BYTE)result != *((_BYTE *)a2 + 8) )
    return 0;
  v3 = *((_DWORD *)this + 16);
  v4 = *((_DWORD *)a2 + 16);
  if ( (_BYTE)result )
  {
    result = 0;
    if ( v3 != v4 )
      return result;
    v5 = *((_DWORD *)this + 17);
    v4 = *((_DWORD *)a2 + 17);
  }
  else
  {
    v5 = *((_DWORD *)this + 16);
    if ( *((_DWORD *)this + 17) != *((_DWORD *)a2 + 17) )
      return result;
  }
  result = 0;
  if ( v5 == v4 && *((_DWORD *)this + 18) == *((_DWORD *)a2 + 18) )
  {
    v6 = v3 - 1;
    if ( v6 < 0 )
    {
      return 1;
    }
    else
    {
      v7 = 4LL * v6;
      v26 = 4 * (v6 - (unsigned __int64)(unsigned int)v6) - 4;
      while ( 1 )
      {
        v8 = *(int *)(*((_QWORD *)this + 6) + v7);
        CoinShallowPackedVector::CoinShallowPackedVector(
          (CoinShallowPackedVector *)v41,
          *(_DWORD *)(*((_QWORD *)this + 7) + v7),
          (const int *)(*((_QWORD *)this + 5) + 4 * v8),
          (const double *)(*((_QWORD *)this + 4) + 8 * v8),
          0);
        v9 = *(int *)(*((_QWORD *)a2 + 6) + v7);
        CoinShallowPackedVector::CoinShallowPackedVector(
          (CoinShallowPackedVector *)v43,
          *(_DWORD *)(*((_QWORD *)a2 + 7) + v7),
          (const int *)(*((_QWORD *)a2 + 5) + 4 * v9),
          (const double *)(*((_QWORD *)a2 + 4) + 8 * v9),
          0);
        if ( v42 != v46 )
          break;
        CoinPackedVectorBase::duplicateIndex((CoinPackedVectorBase *)v41, "equivalent", "CoinPackedVector");
        CoinPackedVectorBase::duplicateIndex((CoinPackedVectorBase *)v43, "equivalent", "CoinPackedVector");
        v30 = 0;
        v31 = 0;
        v34 = 0;
        v10 = v41[4];
        v32 = &v30;
        v33 = &v30;
        v21 = v41[5];
        v11 = v42 - 1;
        if ( v42 - 1 < 0 )
        {
          LODWORD(v36) = 0;
          v37 = 0;
          v40 = 0;
          v14 = (double *)&v36;
          v38 = (double *)&v36;
          v39 = &v36;
        }
        else
        {
          v12 = (int)v11;
          v24 = (int)v11 - 1LL - v11;
          do
          {
            v13 = *(_QWORD *)(v21 + 8 * v12);
            v35 = *(_DWORD *)(v10 + 4 * v12);
            v36 = v13;
            std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
              v29,
              &v35);
            --v12;
          }
          while ( v24 != v12 );
          v14 = (double *)&v36;
          LODWORD(v36) = 0;
          v37 = 0;
          v40 = 0;
          v38 = (double *)&v36;
          v39 = &v36;
          v15 = v42 - 1;
          if ( v42 - 1 >= 0 )
          {
            v16 = (__int64 *)(v45 + 8LL * v15);
            v22 = (int *)(v44 - 4);
            v17 = (int *)(v44 + 4LL * v15);
            do
            {
              v18 = *v16;
              v27 = *v17;
              v28 = v18;
              std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
                &v35,
                &v27);
              --v17;
              --v16;
            }
            while ( v17 != v22 );
            v14 = v38;
          }
        }
        v19 = (__int64)v32;
        if ( v32 != &v30 )
        {
          if ( *((_DWORD *)v14 + 8) == v32[8] )
          {
            do
            {
              v25 = *(double *)(v19 + 40);
              v23 = v14[5];
              if ( (unsigned __int8)CoinIsnan(v25)
                || (unsigned __int8)CoinIsnan(v23)
                || v23 != v25
                && (!(unsigned __int8)CoinFinite(v25)
                 || !(unsigned __int8)CoinFinite(v23)
                 || (fmax(fabs(v25), fabs(v23)) + 1.0) * 1.0e-10 < fabs(v25 - v23)) )
              {
                break;
              }
              v19 = std::_Rb_tree_increment();
              v20 = std::_Rb_tree_increment();
              v14 = (double *)v20;
              if ( (int *)v19 == &v30 )
                goto LABEL_25;
            }
            while ( *(_DWORD *)(v19 + 32) == *(_DWORD *)(v20 + 32) );
          }
          std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
            &v35,
            v37);
          std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
            v29,
            v31);
          break;
        }
LABEL_25:
        v7 -= 4;
        std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
          &v35,
          v37);
        std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
          v29,
          v31);
        v43[0] = off_4D1798;
        CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v43);
        v41[0] = off_4D1798;
        CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v41);
        if ( v26 == v7 )
          return 1;
      }
      v43[0] = off_4D1798;
      CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v43);
      v41[0] = off_4D1798;
      CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v41);
      return 0;
    }
  }
  return result;
}

