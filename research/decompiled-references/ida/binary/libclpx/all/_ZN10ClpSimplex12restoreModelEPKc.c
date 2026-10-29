__int64 __fastcall ClpSimplex::restoreModel(ClpSimplex *this, const char *filename)
{
  FILE *v3; // rax
  FILE *v4; // rbp
  __int64 v5; // r12
  CoinFactorization *v6; // rdi
  unsigned int v7; // r13d
  int v9; // eax
  int v10; // esi
  __int128 v11; // xmm0
  int v12; // eax
  __int128 v13; // xmm0
  int v14; // eax
  __int128 v15; // xmm0
  __m128i v16; // xmm0
  int v17; // eax
  void *v18; // r13
  size_t v19; // rax
  int v20; // esi
  __int64 v21; // rdi
  ClpLinearObjective *v22; // r13
  double *v23; // rdi
  int v24; // eax
  int v25; // esi
  void *v26; // rdi
  int v27; // edx
  int v28; // eax
  char *v29; // r15
  void *v30; // rdi
  int v31; // eax
  char v32; // r14
  __int64 v33; // rdi
  int v34; // esi
  ClpDualRowDantzig *v35; // r15
  __int64 v36; // rdi
  int v37; // esi
  ClpPrimalColumnDantzig *v38; // r15
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rdx
  CoinPackedMatrix *v46; // r12
  _DWORD *v47; // rsi
  _DWORD *v48; // r9
  __int64 v49; // rax
  double *v50; // r8
  _DWORD *v51; // rdi
  __int64 v52; // rdx
  int v53; // r10d
  __int64 k; // rcx
  int v55; // edx
  __int64 v56; // r11
  int v57; // edx
  ClpPackedMatrix *v58; // r14
  void *v59; // rax
  size_t v60; // rdx
  void *v61; // rax
  size_t v62; // rdx
  size_t v63; // rax
  char *v64; // [rsp+8h] [rbp-180h]
  char *v65; // [rsp+8h] [rbp-180h]
  int i; // [rsp+1Ch] [rbp-16Ch]
  int j; // [rsp+1Ch] [rbp-16Ch]
  int v68; // [rsp+38h] [rbp-150h] BYREF
  int v69; // [rsp+3Ch] [rbp-14Ch] BYREF
  double *v70; // [rsp+40h] [rbp-148h] BYREF
  double *v71; // [rsp+48h] [rbp-140h] BYREF
  void *v72; // [rsp+50h] [rbp-138h] BYREF
  void *v73; // [rsp+58h] [rbp-130h] BYREF
  void *v74[2]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v75; // [rsp+70h] [rbp-118h]
  _OWORD ptr[5]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-B8h]
  __int128 v78; // [rsp+D8h] [rbp-B0h]
  __int128 v79; // [rsp+E8h] [rbp-A0h]
  __int64 v80; // [rsp+F8h] [rbp-90h]
  int v81; // [rsp+100h] [rbp-88h]
  int v82; // [rsp+104h] [rbp-84h]
  __m128i v83; // [rsp+108h] [rbp-80h] BYREF
  int v84; // [rsp+118h] [rbp-70h]
  int v85; // [rsp+11Ch] [rbp-6Ch]
  int v86; // [rsp+120h] [rbp-68h]
  __m128i v87; // [rsp+124h] [rbp-64h] BYREF
  int v88; // [rsp+134h] [rbp-54h]
  int v89; // [rsp+138h] [rbp-50h]
  int v90; // [rsp+13Ch] [rbp-4Ch]
  int v91; // [rsp+140h] [rbp-48h]
  int v92; // [rsp+144h] [rbp-44h]

  v3 = fopen(filename, "rb");
  if ( !v3 )
    return (unsigned int)-1;
  v4 = v3;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 32LL))(*((_QWORD *)this + 45));
  ClpModel::gutsOfDelete(this, 0);
  *((_QWORD *)this + 45) = v5;
  ClpSimplex::gutsOfDelete(this, 0);
  *((_OWORD *)this + 66) = 0;
  *((_OWORD *)this + 67) = 0;
  *((_OWORD *)this + 68) = 0;
  *((_OWORD *)this + 69) = 0;
  *((_OWORD *)this + 70) = 0;
  *((_OWORD *)this + 71) = 0;
  ClpSimplex::getEmptyFactorization(this);
  v6 = *(CoinFactorization **)(*((_QWORD *)this + 158) + 8LL);
  if ( v6 )
    CoinFactorization::sparseThreshold(v6, 1);
  if ( fread(ptr, 0xD0u, 1u, v4) != 1 )
    return 1;
  v9 = v81;
  v10 = v85;
  *(_OWORD *)this = ptr[0];
  v11 = ptr[1];
  *((_DWORD *)this + 26) = v9;
  v12 = v82;
  *((_OWORD *)this + 1) = v11;
  v13 = ptr[2];
  *((_DWORD *)this + 27) = v12;
  v14 = v84;
  *((_OWORD *)this + 2) = v13;
  v15 = ptr[3];
  *((_DWORD *)this + 80) = v14;
  *((_OWORD *)this + 3) = v15;
  *((_OWORD *)this + 4) = ptr[4];
  *((_QWORD *)this + 98) = v77;
  *(_OWORD *)((char *)this + 872) = v78;
  *(_OWORD *)((char *)this + 888) = v79;
  *((_QWORD *)this + 113) = v80;
  *(__m128i *)((char *)this + 296) = _mm_loadu_si128(&v83);
  ClpModel::setMaximumIterations(this, v10);
  v16 = _mm_loadu_si128(&v87);
  *((_DWORD *)this + 82) = v86;
  v17 = v88;
  *(__m128i *)((char *)this + 1224) = v16;
  *((_DWORD *)this + 64) = v17;
  *((_DWORD *)this + 325) = v89;
  *((_DWORD *)this + 84) = v90;
  if ( fread(&v68, 4u, 1u, v4) != 1 )
    return 1;
  if ( v68 )
  {
    v18 = (void *)operator new[](v68 + 1);
    if ( fread(v18, v68, 1u, v4) != 1 )
      return 1;
    *((_BYTE *)v18 + v68) = 0;
    v19 = strlen((const char *)v18);
    std::string::assign((ClpSimplex *)((char *)this + 688), (const char *)v18, v19);
    operator delete[](v18);
  }
  if ( (unsigned int)sub_102330((_QWORD *)this + 14, *((_DWORD *)this + 26), v4) )
    return 1;
  if ( (unsigned int)sub_102330((_QWORD *)this + 15, *((_DWORD *)this + 27), v4) )
    return 1;
  if ( (unsigned int)sub_102330((_QWORD *)this + 16, *((_DWORD *)this + 26), v4) )
    return 1;
  if ( (unsigned int)sub_102330((_QWORD *)this + 17, *((_DWORD *)this + 27), v4) )
    return 1;
  if ( (unsigned int)sub_102330((_QWORD *)this + 18, *((_DWORD *)this + 26), v4) )
    return 1;
  if ( (unsigned int)sub_102330((_QWORD *)this + 19, *((_DWORD *)this + 26), v4) )
    return 1;
  v20 = *((_DWORD *)this + 27);
  v70 = nullptr;
  if ( (unsigned int)sub_102330(&v70, v20, v4) )
    return 1;
  v21 = *((_QWORD *)this + 20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 80LL))(v21);
  v22 = (ClpLinearObjective *)operator new(0x28u);
  ClpLinearObjective::ClpLinearObjective(v22, v70, *((_DWORD *)this + 27));
  v23 = v70;
  *((_QWORD *)this + 20) = v22;
  if ( v23 )
    operator delete[](v23);
  if ( (unsigned int)sub_102330((_QWORD *)this + 21, *((_DWORD *)this + 26), v4) )
    return 1;
  if ( (unsigned int)sub_102330((_QWORD *)this + 22, *((_DWORD *)this + 27), v4) )
    return 1;
  v7 = sub_102330((_QWORD *)this + 23, *((_DWORD *)this + 27), v4);
  if ( v7 )
    return 1;
  v24 = *((_DWORD *)this + 80);
  if ( v24 == 1 )
  {
    v25 = *((_DWORD *)this + 26);
LABEL_32:
    if ( (unsigned int)sub_102330((_QWORD *)this + 27, v25, v4) )
      return 1;
    goto LABEL_33;
  }
  if ( v24 == 2 )
  {
    v25 = *((_DWORD *)this + 27);
    goto LABEL_32;
  }
  if ( fread(&v68, 4u, 1u, v4) != 1 )
    return 1;
  if ( v68 )
    return 2;
LABEL_33:
  v26 = *((void **)this + 33);
  if ( v26 )
    operator delete[](v26);
  *((_QWORD *)this + 33) = 0;
  if ( fread(&v68, 4u, 1u, v4) != 1 )
    return 1;
  if ( v68 )
  {
    if ( v68 != *((_DWORD *)this + 26) + *((_DWORD *)this + 27) )
      return 1;
    v61 = (void *)operator new[](v68);
    v62 = v68;
    *((_QWORD *)this + 33) = v61;
    v63 = fread(v61, 1u, v62, v4);
    if ( v68 != v63 )
      return 1;
  }
  v27 = *((_DWORD *)this + 82);
  if ( v27 )
  {
    v28 = *((_DWORD *)this + 26);
    if ( *((_DWORD *)this + 27) >= v28 )
      v28 = *((_DWORD *)this + 27);
    v29 = (char *)operator new[]((v27 + 1) * v28);
    if ( *((_DWORD *)this + 26) != fread(v29, *((_DWORD *)this + 82) + 1, *((int *)this + 26), v4) )
      return 1;
    v75 = 0;
    *(_OWORD *)v74 = 0;
    sub_5C560((__int64)this + 368, v74);
    std::vector<std::string>::~vector(v74);
    std::vector<std::string>::resize((char *)this + 368, *((int *)this + 26));
    v64 = v29;
    for ( i = 0; *((_DWORD *)this + 26) > i; ++i )
    {
      std::string::string();
      std::vector<std::string>::emplace_back<std::string>((char *)this + 368, v74);
      if ( (char *)v74[0] - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
        sub_5C538((__int64)v74[0] - 24);
      v64 += *((int *)this + 82) + 1;
    }
    if ( *((_DWORD *)this + 27) != fread(v29, *((_DWORD *)this + 82) + 1, *((int *)this + 27), v4) )
      return 1;
    v75 = 0;
    *(_OWORD *)v74 = 0;
    sub_5C560((__int64)this + 392, v74);
    std::vector<std::string>::~vector(v74);
    std::vector<std::string>::resize((char *)this + 392, *((int *)this + 27));
    v65 = v29;
    for ( j = 0; *((_DWORD *)this + 27) > j; ++j )
    {
      std::string::string();
      std::vector<std::string>::emplace_back<std::string>((char *)this + 392, v74);
      if ( (char *)v74[0] - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
        sub_5C538((__int64)v74[0] - 24);
      v65 += *((int *)this + 82) + 1;
    }
    operator delete[](v29);
  }
  v30 = *((void **)this + 34);
  if ( v30 )
    operator delete[](v30);
  if ( fread(&v69, 4u, 1u, v4) != 1 )
    return 1;
  v31 = v69;
  if ( v69 == 1 )
  {
    v59 = (void *)operator new[](*((int *)this + 27));
    v60 = *((int *)this + 27);
    *((_QWORD *)this + 34) = v59;
    if ( *((_DWORD *)this + 27) == fread(v59, 1u, v60, v4) )
      goto LABEL_93;
    return 1;
  }
  *((_QWORD *)this + 34) = 0;
  if ( v31 )
  {
    v68 = v31;
    v32 = 1;
    goto LABEL_59;
  }
LABEL_93:
  v32 = 0;
LABEL_59:
  v33 = *((_QWORD *)this + 155);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 80LL))(v33);
  v34 = v91 & 0x3F;
  if ( v34 == 1 )
    goto LABEL_64;
  if ( v34 != 2 )
  {
    printf("Need another dualPivot case %d\n", v34);
LABEL_64:
    v35 = (ClpDualRowDantzig *)operator new(0x18u);
    ClpDualRowDantzig::ClpDualRowDantzig(v35);
    goto LABEL_65;
  }
  v35 = (ClpDualRowDantzig *)operator new(0x48u);
  ClpDualRowSteepest::ClpDualRowSteepest(v35, v91 >> 6);
LABEL_65:
  v36 = *((_QWORD *)this + 156);
  *((_QWORD *)this + 155) = v35;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 64LL))(v36);
  v37 = v92 & 0x3F;
  if ( v37 == 1 )
    goto LABEL_70;
  if ( v37 != 2 )
  {
    printf("Need another primalPivot case %d\n", v37);
LABEL_70:
    v38 = (ClpPrimalColumnDantzig *)operator new(0x18u);
    ClpPrimalColumnDantzig::ClpPrimalColumnDantzig(v38);
    goto LABEL_71;
  }
  v38 = (ClpPrimalColumnDantzig *)operator new(0x70u);
  ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(v38, v92 >> 6);
LABEL_71:
  v39 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 156) = v38;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 480LL))(v39);
  if ( !v32 && fread(&v68, 4u, 1u, v4) != 1 )
    return 1;
  if ( (unsigned __int64)v68 > 0xFFFFFFFFFFFFFFFLL
    || (v71 = (double *)operator new[](8LL * v68), (unsigned __int64)v68 > 0x1FFFFFFFFFFFFFFELL)
    || (v72 = (void *)operator new[](4LL * v68), v40 = *((_DWORD *)this + 27) + 1, v40 > 0x1FFFFFFFFFFFFFFELL)
    || (v73 = (void *)operator new[](4 * v40), v41 = *((int *)this + 27), v41 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v74[0] = (void *)operator new[](4 * v41);
  v42 = fread(v71, 8u, v68, v4);
  if ( v68 != v42 )
    return 1;
  v43 = fread(v72, 4u, v68, v4);
  if ( v68 != v43 )
    return 1;
  v44 = fread(v73, 4u, *((_DWORD *)this + 27) + 1, v4);
  v45 = *((int *)this + 27);
  if ( v45 + 1 != v44 || *((_DWORD *)this + 27) != fread(v74[0], 4u, v45, v4) )
    return 1;
  v46 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v46);
  CoinPackedMatrix::setExtraGap(v46, 0.0);
  CoinPackedMatrix::setExtraMajor(v46, 0.0);
  v47 = v73;
  v48 = v74[0];
  v49 = 0;
  v50 = v71;
  v51 = v72;
  v68 = 0;
  while ( 1 )
  {
    v52 = *((int *)this + 27);
    if ( (int)v52 <= (int)v49 )
      break;
    v53 = v47[v49];
    v47[v49] = v68;
    for ( k = v53; ; ++k )
    {
      v55 = v68;
      if ( v53 + v48[v49] <= (int)k )
        break;
      v56 = v68;
      v50[v68] = v50[k];
      v68 = v55 + 1;
      v57 = v51[k];
      v51[v56] = v57;
    }
    v48[v49] = v68 - v47[v49];
    ++v49;
  }
  v47[v52] = v68;
  CoinPackedMatrix::assignMatrix(
    v46,
    1,
    *((_DWORD *)this + 26),
    *((_DWORD *)this + 27),
    v68,
    &v71,
    (int **)&v72,
    (int **)&v73,
    (int **)v74,
    -1,
    -1);
  v58 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v58, v46);
  *((_QWORD *)this + 24) = v58;
  fclose(v4);
  return v7;
}

