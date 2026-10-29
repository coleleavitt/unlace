__int64 __fastcall CoinModel::differentModel(CoinModel *this, CoinModel *a2, char a3)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v9; // rbx
  int v10; // r12d
  int v11; // r13d
  __int64 v12; // rbx
  int v13; // r12d
  int v14; // r13d
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rsi
  const char *v18; // rax
  int v19; // eax
  const char *v20; // rax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // r13
  __int64 v26; // rbp
  __int64 v27; // r12
  int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rbx
  __int64 v31; // xmm0_8
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rbp
  __int64 v36; // xmm0_8
  __int64 v37; // rbx
  __int64 v38; // rbp
  unsigned int v39; // [rsp+4h] [rbp-2A4h]
  double s2; // [rsp+8h] [rbp-2A0h]
  double s2a; // [rsp+8h] [rbp-2A0h]
  double s2b; // [rsp+8h] [rbp-2A0h]
  double s2c; // [rsp+8h] [rbp-2A0h]
  double s2d; // [rsp+8h] [rbp-2A0h]
  char *s2e; // [rsp+8h] [rbp-2A0h]
  char *s2f; // [rsp+8h] [rbp-2A0h]
  double v47; // [rsp+10h] [rbp-298h]
  double v48; // [rsp+10h] [rbp-298h]
  double v49; // [rsp+10h] [rbp-298h]
  double v50; // [rsp+10h] [rbp-298h]
  double v51; // [rsp+10h] [rbp-298h]
  char v52; // [rsp+18h] [rbp-290h]
  char v53; // [rsp+18h] [rbp-290h]
  __int64 v54; // [rsp+18h] [rbp-290h]
  __int64 v55; // [rsp+18h] [rbp-290h]
  double v56; // [rsp+18h] [rbp-290h]
  int v58; // [rsp+20h] [rbp-288h]
  int v59; // [rsp+28h] [rbp-280h]
  int v60; // [rsp+28h] [rbp-280h]
  int v61; // [rsp+40h] [rbp-268h]
  double v62; // [rsp+40h] [rbp-268h]
  unsigned __int64 v63; // [rsp+48h] [rbp-260h]
  double *v64; // [rsp+50h] [rbp-258h] BYREF
  double *v65; // [rsp+58h] [rbp-250h] BYREF
  double *v66; // [rsp+60h] [rbp-248h] BYREF
  double *v67; // [rsp+68h] [rbp-240h] BYREF
  double *v68; // [rsp+70h] [rbp-238h] BYREF
  void *v69; // [rsp+78h] [rbp-230h] BYREF
  double *v70; // [rsp+80h] [rbp-228h] BYREF
  double *v71; // [rsp+88h] [rbp-220h] BYREF
  double *v72; // [rsp+90h] [rbp-218h] BYREF
  double *v73; // [rsp+98h] [rbp-210h] BYREF
  double *v74; // [rsp+A0h] [rbp-208h] BYREF
  double *v75; // [rsp+A8h] [rbp-200h] BYREF
  void *v76; // [rsp+B0h] [rbp-1F8h] BYREF
  double *v77; // [rsp+B8h] [rbp-1F0h] BYREF
  int v78; // [rsp+C0h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-1E0h]
  _BYTE v80[8]; // [rsp+D0h] [rbp-1D8h] BYREF
  int v81; // [rsp+D8h] [rbp-1D0h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-1C8h]
  int *v83; // [rsp+E8h] [rbp-1C0h]
  int *v84; // [rsp+F0h] [rbp-1B8h]
  __int64 v85; // [rsp+F8h] [rbp-1B0h]
  int v86; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v87; // [rsp+108h] [rbp-1A0h] BYREF
  __int64 v88; // [rsp+110h] [rbp-198h]
  __int64 *v89; // [rsp+118h] [rbp-190h]
  __int64 *v90; // [rsp+120h] [rbp-188h]
  __int64 v91; // [rsp+128h] [rbp-180h]
  _QWORD v92[6]; // [rsp+130h] [rbp-178h] BYREF
  int v93; // [rsp+160h] [rbp-148h]
  _QWORD v94[6]; // [rsp+170h] [rbp-138h] BYREF
  int v95; // [rsp+1A0h] [rbp-108h]
  _BYTE v96[8]; // [rsp+1B0h] [rbp-F8h] BYREF
  char v97; // [rsp+1B8h] [rbp-F0h]
  __int64 v98; // [rsp+1D0h] [rbp-D8h]
  __int64 v99; // [rsp+1D8h] [rbp-D0h]
  __int64 v100; // [rsp+1E0h] [rbp-C8h]
  __int64 v101; // [rsp+1E8h] [rbp-C0h]
  int v102; // [rsp+1F0h] [rbp-B8h]
  int v103; // [rsp+1F4h] [rbp-B4h]
  int v104; // [rsp+1F8h] [rbp-B0h]
  _BYTE v105[32]; // [rsp+210h] [rbp-98h] BYREF
  __int64 v106; // [rsp+230h] [rbp-78h]
  __int64 v107; // [rsp+238h] [rbp-70h]
  __int64 v108; // [rsp+240h] [rbp-68h]
  __int64 v109; // [rsp+248h] [rbp-60h]
  int v110; // [rsp+250h] [rbp-58h]
  int v111; // [rsp+254h] [rbp-54h]
  int v112; // [rsp+258h] [rbp-50h]

  v39 = 0;
  if ( *((_QWORD *)this + 1) != *((_QWORD *)a2 + 1) )
  {
    v39 = 1000;
    if ( *((int *)this + 24) > 0 )
      printf(
        "** Mismatch on size, this has %d rows, %d columns - other has %d rows, %d columns\n",
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        *((_DWORD *)a2 + 2),
        *((_DWORD *)a2 + 3));
  }
  v4 = *((_DWORD *)this + 66);
  v64 = *((double **)this + 16);
  v65 = *((double **)this + 17);
  v66 = *((double **)this + 24);
  v67 = *((double **)this + 25);
  v68 = *((double **)this + 23);
  v69 = *((void **)this + 30);
  v70 = *((double **)this + 78);
  if ( v4 )
    v4 = CoinModel::createArrays(this, &v64, &v65, &v66, &v67, &v68, (int **)&v69, &v70);
  v5 = *((_DWORD *)a2 + 66);
  v71 = *((double **)a2 + 16);
  v72 = *((double **)a2 + 17);
  v73 = *((double **)a2 + 24);
  v74 = *((double **)a2 + 25);
  v75 = *((double **)a2 + 23);
  v76 = *((void **)a2 + 30);
  v77 = *((double **)a2 + 78);
  if ( v5 )
    v5 = CoinModel::createArrays(a2, &v71, &v72, &v73, &v74, &v75, (int **)&v76, &v77);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v96);
  CoinModel::createPackedMatrix(this, (CoinPackedMatrix *)v96, v70);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v105);
  CoinModel::createPackedMatrix(a2, (CoinPackedMatrix *)v105, v77);
  if ( v5 | v4 && *((int *)this + 24) > 0 )
  {
    printf("** Errors when converting strings, %d on this, %d on other\n", v4, v5);
    v6 = *((_DWORD *)this + 2);
    if ( v6 != *((_DWORD *)a2 + 2) )
      goto LABEL_11;
  }
  else
  {
    v6 = *((_DWORD *)this + 2);
    if ( v6 != *((_DWORD *)a2 + 2) )
      goto LABEL_11;
  }
  v52 = 0;
  if ( *((_DWORD *)this + 40) && *((_DWORD *)a2 + 40) )
    v52 = a3 ^ 1;
  if ( v6 > 0 )
  {
    v9 = 0;
    v59 = 0;
    v10 = 0;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        s2a = v71[v9];
        v48 = v64[v9];
        if ( (unsigned __int8)CoinIsnan(v48)
          || (unsigned __int8)CoinIsnan(s2a)
          || s2a != v48
          && (!(unsigned __int8)CoinFinite(v48)
           || !(unsigned __int8)CoinFinite(s2a)
           || (fmax(fabs(v48), fabs(s2a)) + 1.0) * 1.0e-10 < fabs(v48 - s2a)) )
        {
          ++v11;
        }
        s2 = v72[v9];
        v47 = v65[v9];
        if ( (unsigned __int8)CoinIsnan(v47)
          || (unsigned __int8)CoinIsnan(s2)
          || s2 != v47
          && (!(unsigned __int8)CoinFinite(v47)
           || !(unsigned __int8)CoinFinite(s2)
           || (fmax(fabs(v47), fabs(s2)) + 1.0) * 1.0e-10 < fabs(v47 - s2)) )
        {
          ++v10;
        }
        if ( v52
          && CoinModelHash::name((CoinModel *)((char *)this + 144), v9)
          && CoinModelHash::name((CoinModel *)((char *)a2 + 144), v9) )
        {
          break;
        }
        if ( *((_DWORD *)this + 2) <= (int)++v9 )
          goto LABEL_110;
      }
      s2f = (char *)CoinModelHash::name((CoinModel *)((char *)a2 + 144), v9);
      v20 = (const char *)CoinModelHash::name((CoinModel *)((char *)this + 144), v9);
      v59 -= (strcmp(v20, s2f) == 0) - 1;
      ++v9;
    }
    while ( *((_DWORD *)this + 2) > (int)v9 );
LABEL_110:
    v21 = v59 + v11 + v10;
    v39 += v21;
    if ( v21 && *((int *)this + 24) > 0 )
      printf("Row differences , %d lower, %d upper and %d names\n", v11, v10, v59);
  }
LABEL_11:
  v7 = *((_DWORD *)this + 3);
  if ( v7 == *((_DWORD *)a2 + 3) )
  {
    v53 = 0;
    if ( *((_DWORD *)this + 56) && *((_DWORD *)a2 + 56) )
      v53 = a3 ^ 1;
    if ( v7 > 0 )
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v61 = 0;
      v60 = 0;
      v58 = 0;
      while ( 1 )
      {
        s2d = v73[v12];
        v51 = v66[v12];
        if ( (unsigned __int8)CoinIsnan(v51)
          || (unsigned __int8)CoinIsnan(s2d)
          || s2d != v51
          && (!(unsigned __int8)CoinFinite(v51)
           || !(unsigned __int8)CoinFinite(s2d)
           || (fmax(fabs(v51), fabs(s2d)) + 1.0) * 1.0e-10 < fabs(v51 - s2d)) )
        {
          ++v58;
        }
        s2b = v74[v12];
        v49 = v67[v12];
        if ( (unsigned __int8)CoinIsnan(v49)
          || (unsigned __int8)CoinIsnan(s2b)
          || s2b != v49
          && (!(unsigned __int8)CoinFinite(v49)
           || !(unsigned __int8)CoinFinite(s2b)
           || (fmax(fabs(v49), fabs(s2b)) + 1.0) * 1.0e-10 < fabs(v49 - s2b)) )
        {
          ++v60;
        }
        s2c = v75[v12];
        v50 = v68[v12];
        if ( (unsigned __int8)CoinIsnan(v50)
          || (unsigned __int8)CoinIsnan(s2c)
          || s2c != v50
          && (!(unsigned __int8)CoinFinite(v50)
           || !(unsigned __int8)CoinFinite(s2c)
           || (fmax(fabs(v50), fabs(s2c)) + 1.0) * 1.0e-10 < fabs(v50 - s2c)) )
        {
          ++v14;
        }
        if ( v69 )
          break;
        if ( v76 )
        {
          v17 = 4 * v12;
          v15 = 0;
LABEL_70:
          v16 = *(_DWORD *)((char *)v76 + v17);
LABEL_71:
          v13 += v16 != v15;
        }
        if ( v53
          && CoinModelHash::name((CoinModel *)((char *)this + 208), v12)
          && CoinModelHash::name((CoinModel *)((char *)a2 + 208), v12) )
        {
          s2e = (char *)CoinModelHash::name((CoinModel *)((char *)a2 + 208), v12);
          v18 = (const char *)CoinModelHash::name((CoinModel *)((char *)this + 208), v12);
          v61 -= (strcmp(v18, s2e) == 0) - 1;
          if ( *((_DWORD *)this + 3) <= (int)++v12 )
          {
LABEL_96:
            v19 = v60 + v58 + v61 + v14 + v13;
            v39 += v19;
            if ( v19 && *((int *)this + 24) > 0 )
              printf(
                "Column differences , %d lower, %d upper, %d objective, %d integer and %d names\n",
                v58,
                v60,
                v14,
                v13,
                v61);
            goto LABEL_12;
          }
        }
        else if ( *((_DWORD *)this + 3) <= (int)++v12 )
        {
          goto LABEL_96;
        }
      }
      v15 = *((_DWORD *)v69 + v12);
      v16 = 0;
      v17 = 4 * v12;
      if ( v76 )
        goto LABEL_70;
      goto LABEL_71;
    }
  }
LABEL_12:
  if ( *((_QWORD *)this + 1) == *((_QWORD *)a2 + 1) && *((_DWORD *)this + 27) == *((_DWORD *)a2 + 27) )
  {
    if ( v97 != v105[8] )
      goto LABEL_115;
    v22 = v110;
    if ( v97 )
    {
      if ( v102 == v110 )
      {
        v23 = v103;
        v22 = v111;
        goto LABEL_124;
      }
    }
    else if ( v103 == v111 )
    {
      v23 = v102;
LABEL_124:
      if ( v22 == v23 && v104 == v112 )
      {
        v24 = v102 - 1;
        if ( v102 - 1 < 0 )
          goto LABEL_13;
        v25 = 4LL * (int)v24;
        v63 = 4 * ((int)v24 - (unsigned __int64)v24) - 4;
        while ( 1 )
        {
          CoinShallowPackedVector::CoinShallowPackedVector(
            (CoinShallowPackedVector *)v92,
            *(_DWORD *)(v101 + v25),
            (const int *)(v99 + 4LL * *(int *)(v100 + v25)),
            (const double *)(v98 + 8LL * *(int *)(v100 + v25)),
            0);
          CoinShallowPackedVector::CoinShallowPackedVector(
            (CoinShallowPackedVector *)v94,
            *(_DWORD *)(v109 + v25),
            (const int *)(v107 + 4LL * *(int *)(v108 + v25)),
            (const double *)(v106 + 8LL * *(int *)(v108 + v25)),
            0);
          if ( v93 != v95 )
            break;
          CoinPackedVectorBase::duplicateIndex((CoinPackedVectorBase *)v92, "equivalent", "CoinPackedVector");
          CoinPackedVectorBase::duplicateIndex((CoinPackedVectorBase *)v94, "equivalent", "CoinPackedVector");
          v81 = 0;
          v82 = 0;
          v85 = 0;
          v26 = v92[4];
          v27 = v92[5];
          v83 = &v81;
          v84 = &v81;
          v28 = v93;
          v29 = v93 - 1;
          if ( v93 - 1 >= 0 )
          {
            v30 = (int)v29;
            v54 = (int)v29 - 1LL - v29;
            do
            {
              v31 = *(_QWORD *)(v27 + 8 * v30);
              v86 = *(_DWORD *)(v26 + 4 * v30);
              v87 = v31;
              std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
                v80,
                &v86);
              --v30;
            }
            while ( v54 != v30 );
            v28 = v93;
          }
          v32 = v28 - 1;
          LODWORD(v87) = 0;
          v88 = 0;
          v91 = 0;
          v89 = &v87;
          v90 = &v87;
          v33 = v94[4];
          v34 = v94[5];
          if ( v32 >= 0 )
          {
            v35 = v32;
            v55 = v32 - 1LL - (unsigned int)v32;
            do
            {
              v36 = *(_QWORD *)(v34 + 8 * v35);
              v78 = *(_DWORD *)(v33 + 4 * v35);
              v79 = v36;
              std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_insert_unique<std::pair<int,double>>(
                &v86,
                &v78);
              --v35;
            }
            while ( v35 != v55 );
          }
          v37 = (__int64)v83;
          v38 = (__int64)v89;
          if ( v83 != &v81 )
          {
            while ( *(_DWORD *)(v37 + 32) == *(_DWORD *)(v38 + 32) )
            {
              v62 = *(double *)(v37 + 40);
              v56 = *(double *)(v38 + 40);
              if ( (unsigned __int8)CoinIsnan(v62)
                || (unsigned __int8)CoinIsnan(v56)
                || v56 != v62
                && (!(unsigned __int8)CoinFinite(v62)
                 || !(unsigned __int8)CoinFinite(v56)
                 || (fmax(fabs(v62), fabs(v56)) + 1.0) * 1.0e-10 < fabs(v62 - v56)) )
              {
                break;
              }
              v37 = std::_Rb_tree_increment();
              v38 = std::_Rb_tree_increment();
              if ( (int *)v37 == &v81 )
                goto LABEL_146;
            }
            std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
              &v86,
              v88);
            std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
              v80,
              v82);
            break;
          }
LABEL_146:
          v25 -= 4;
          std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
            &v86,
            v88);
          std::_Rb_tree<int,std::pair<int const,double>,std::_Select1st<std::pair<int const,double>>,std::less<int>,std::allocator<std::pair<int const,double>>>::_M_erase(
            v80,
            v82);
          v94[0] = off_4D1798;
          CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v94);
          v92[0] = off_4D1798;
          CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v92);
          if ( v63 == v25 )
            goto LABEL_13;
        }
        v94[0] = off_4D1798;
        CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v94);
        v92[0] = off_4D1798;
        CoinPackedVectorBase::~CoinPackedVectorBase((CoinPackedVectorBase *)v92);
      }
    }
LABEL_115:
    v39 += 100;
    if ( *((int *)this + 24) > 0 )
      puts("Two matrices are not same");
  }
LABEL_13:
  if ( *((double **)this + 16) != v64 )
  {
    if ( v64 )
      operator delete[](v64);
    if ( v65 )
      operator delete[](v65);
    if ( v66 )
      operator delete[](v66);
    if ( v67 )
      operator delete[](v67);
    if ( v68 )
      operator delete[](v68);
    if ( v69 )
      operator delete[](v69);
    if ( v70 )
      operator delete[](v70);
  }
  if ( *((double **)a2 + 16) != v71 )
  {
    if ( v71 )
      operator delete[](v71);
    if ( v72 )
      operator delete[](v72);
    if ( v73 )
      operator delete[](v73);
    if ( v74 )
      operator delete[](v74);
    if ( v75 )
      operator delete[](v75);
    if ( v76 )
      operator delete[](v76);
    if ( v77 )
      operator delete[](v77);
  }
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v105);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v96);
  return v39;
}

