__int64 __fastcall ClpPlusMinusOneMatrix::appendRows(
        ClpPlusMinusOneMatrix *this,
        int a2,
        const CoinPackedVectorBase *const *a3,
        double a4,
        __m128 a5,
        double a6)
{
  ClpPlusMinusOneMatrix *v6; // r12
  unsigned __int64 v7; // rdi
  _DWORD *v9; // rax
  unsigned __int64 v10; // r15
  _DWORD *v11; // rbp
  char *v12; // r14
  int v13; // r12d
  const CoinPackedVectorBase *const *v14; // r15
  _DWORD *v15; // r13
  char *v16; // rbp
  int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // r15d
  void *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r15
  int v35; // ebx
  __int64 v36; // r11
  int v37; // r12d
  int v38; // edi
  __int64 v39; // r11
  int v40; // ecx
  char *v41; // rsi
  char *v42; // rdx
  unsigned int v43; // r10d
  __int64 v44; // rdi
  __int64 v45; // r10
  __m128i v46; // xmm0
  __int64 v47; // r10
  int v48; // edx
  int v49; // ebx
  int v50; // r12d
  __int64 v51; // r11
  int v52; // edi
  __int64 v53; // r11
  int v54; // ecx
  char *v55; // rsi
  char *v56; // rdx
  unsigned int v57; // r10d
  __int64 v58; // rdi
  __int64 v59; // r10
  __m128i v60; // xmm0
  __int64 v61; // r10
  int v62; // ecx
  int v63; // edx
  void *v64; // rax
  ClpPlusMinusOneMatrix *v65; // r9
  __int64 v66; // r15
  const CoinPackedVectorBase *const *v67; // r12
  char *v68; // rbx
  _DWORD *v69; // r14
  int v70; // ebp
  __int64 v71; // r13
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rcx
  char *v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rdx
  char *v79; // r11
  char *v80; // rdi
  char *v81; // rax
  int v82; // edx
  char *v83; // r11
  char *v84; // rdi
  char *v85; // rax
  int v86; // edx
  void *exception; // r13
  int *v88; // [rsp+8h] [rbp-A0h]
  int v89; // [rsp+8h] [rbp-A0h]
  char *v90; // [rsp+10h] [rbp-98h]
  ClpPlusMinusOneMatrix *v91; // [rsp+10h] [rbp-98h]
  int v92; // [rsp+18h] [rbp-90h]
  __int64 v93; // [rsp+18h] [rbp-90h]
  const CoinPackedVectorBase *const *v94; // [rsp+20h] [rbp-88h]
  ClpPlusMinusOneMatrix *v96; // [rsp+30h] [rbp-78h]
  char *v97; // [rsp+30h] [rbp-78h]
  char *v98; // [rsp+30h] [rbp-78h]
  const CoinPackedVectorBase *const *v99; // [rsp+38h] [rbp-70h]
  __int64 v100; // [rsp+38h] [rbp-70h]
  __int64 v101; // [rsp+38h] [rbp-70h]
  __int64 v102; // [rsp+50h] [rbp-58h]
  __int64 v103; // [rsp+58h] [rbp-50h]
  __int64 v104; // [rsp+60h] [rbp-48h]

  v6 = this;
  v7 = *((_DWORD *)this + 33) + 1;
  if ( v7 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_77;
  v9 = (_DWORD *)operator new[](4 * v7);
  v10 = *((int *)v6 + 33);
  v11 = v9;
  memset(v9, 0, 4 * v10);
  if ( v10 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_77;
  v12 = (char *)operator new[](4 * v10);
  memset(v12, 0, 4LL * *((int *)v6 + 33));
  if ( a2 <= 0 )
  {
    v92 = 0;
    goto LABEL_14;
  }
  v96 = v6;
  a5.m128_u64[0] = 0x3FF0000000000000LL;
  a6 = -1.0;
  v13 = 0;
  v99 = a3;
  v14 = a3;
  v94 = &a3[(unsigned int)(a2 - 1) + 1];
  v15 = v11;
  v92 = 0;
  v16 = v12;
  do
  {
    v17 = (***(__int64 (__fastcall ****)(const CoinPackedVectorBase *const))v14)(*v14);
    v18 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(**(_QWORD **)v14 + 8LL))(*v14);
    v19 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(**(_QWORD **)v14 + 16LL))(*v14);
    v92 += v17;
    if ( v17 > 0 )
    {
      v20 = 0;
      v21 = (unsigned int)(v17 - 1) + 1LL;
      do
      {
        while ( 1 )
        {
          a4 = *(double *)(v19 + 8 * v20);
          v22 = *(int *)(v18 + 4 * v20);
          if ( a4 != 1.0 )
            break;
          ++v15[v22];
LABEL_8:
          if ( v21 == ++v20 )
            goto LABEL_12;
        }
        if ( a4 != -1.0 )
        {
          ++v13;
          goto LABEL_8;
        }
        ++v20;
        ++*(_DWORD *)&v16[4 * v22];
      }
      while ( v21 != v20 );
    }
LABEL_12:
    ++v14;
  }
  while ( v14 != v94 );
  v23 = v13;
  v12 = v16;
  v6 = v96;
  v11 = v15;
  a3 = v99;
  if ( v23 )
  {
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v102 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C4E8(v102 - 24);
    if ( (_UNKNOWN *)(v103 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C4E8(v103 - 24);
    if ( (_UNKNOWN *)(v104 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C4E8(v104 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
LABEL_14:
  v24 = *((void **)v6 + 12);
  if ( v24 )
    operator delete[](v24);
  v25 = *((_QWORD *)v6 + 11);
  *((_QWORD *)v6 + 12) = 0;
  if ( v25 )
    (*(void (__fastcall **)(__int64, double, double, double))(*(_QWORD *)v25 + 8LL))(
      v25,
      a4,
      *(double *)a5.m128_u64,
      a6);
  v26 = *((int *)v6 + 33);
  v27 = *((_QWORD *)v6 + 13);
  *((_QWORD *)v6 + 11) = 0;
  v28 = *(_DWORD *)(v27 + 4 * v26) + v92;
  if ( (unsigned __int64)v28 > 0x1FFFFFFFFFFFFFFELL )
LABEL_77:
    __cxa_throw_bad_array_new_length();
  v29 = operator new[](4LL * v28);
  v30 = *((int *)v6 + 33);
  v31 = v29;
  v93 = v29;
  if ( (int)v30 <= 0 )
  {
    v64 = *((void **)v6 + 15);
    v35 = 0;
  }
  else
  {
    v32 = *((_QWORD *)v6 + 13);
    v33 = 1;
    v34 = *((_QWORD *)v6 + 14);
    v35 = 0;
    v88 = (int *)v6;
    v90 = *((char **)v6 + 15);
    do
    {
      v36 = *(int *)(v32 + 4 * v33 - 4);
      v37 = v11[v33 - 1];
      v38 = v36 + v35;
      v39 = 4 * v36;
      v40 = *(_DWORD *)(v34 + 4 * v33 - 4) - *(_DWORD *)(v32 + 4 * v33 - 4);
      v41 = &v90[v39];
      *(_DWORD *)(v32 + 4 * v33 - 4) = v38;
      v42 = (char *)(v31 + 4LL * v38);
      if ( v40 && v42 != v41 )
      {
        v43 = v40 >> 3;
        if ( v40 >> 3 > 0 )
        {
          if ( (v42 >= &v90[v39 + 32] || (unsigned __int64)v41 >= v31 + 4LL * v38 + 32) && v43 > 1 )
          {
            v44 = 0;
            v45 = v43 - 1;
            do
            {
              a5 = (__m128)_mm_loadu_si128((const __m128i *)&v41[v44]);
              v46 = _mm_loadu_si128((const __m128i *)&v41[v44 + 16]);
              *(__m128 *)&v42[v44] = a5;
              *(__m128i *)&v42[v44 + 16] = v46;
              v44 += 32;
            }
            while ( v44 != 32 * (v45 + 1) );
          }
          else
          {
            v100 = v33;
            v79 = &v90[v39];
            v45 = v43 - 1;
            v80 = (char *)(v31 + 4LL * v38);
            v81 = &v42[32 * v45 + 32];
            v97 = v42;
            do
            {
              v82 = *(_DWORD *)v79;
              v80 += 32;
              v79 += 32;
              *((_DWORD *)v80 - 8) = v82;
              *((_DWORD *)v80 - 7) = *((_DWORD *)v79 - 7);
              *((_DWORD *)v80 - 6) = *((_DWORD *)v79 - 6);
              *((_DWORD *)v80 - 5) = *((_DWORD *)v79 - 5);
              *((_DWORD *)v80 - 4) = *((_DWORD *)v79 - 4);
              *((_DWORD *)v80 - 3) = *((_DWORD *)v79 - 3);
              *((_DWORD *)v80 - 2) = *((_DWORD *)v79 - 2);
              *((_DWORD *)v80 - 1) = *((_DWORD *)v79 - 1);
            }
            while ( v80 != v81 );
            v33 = v100;
            v42 = v97;
          }
          v47 = 32 * ((int)v45 + 1LL);
          v41 += v47;
          v42 += v47;
        }
        switch ( v40 % 8 )
        {
          case 1:
            goto LABEL_37;
          case 2:
            goto LABEL_36;
          case 3:
            goto LABEL_35;
          case 4:
            goto LABEL_34;
          case 5:
            goto LABEL_33;
          case 6:
            goto LABEL_32;
          case 7:
            *((_DWORD *)v42 + 6) = *((_DWORD *)v41 + 6);
LABEL_32:
            *((_DWORD *)v42 + 5) = *((_DWORD *)v41 + 5);
LABEL_33:
            *((_DWORD *)v42 + 4) = *((_DWORD *)v41 + 4);
LABEL_34:
            *((_DWORD *)v42 + 3) = *((_DWORD *)v41 + 3);
LABEL_35:
            *((_DWORD *)v42 + 2) = *((_DWORD *)v41 + 2);
LABEL_36:
            *((_DWORD *)v42 + 1) = *((_DWORD *)v41 + 1);
LABEL_37:
            *(_DWORD *)v42 = *(_DWORD *)v41;
            break;
          default:
            break;
        }
      }
      v48 = v35 + *(_DWORD *)(v34 + 4 * v33 - 4);
      v49 = v37 + v35;
      v50 = *(_DWORD *)&v12[4 * v33 - 4];
      v11[v33 - 1] = v48;
      v51 = *(int *)(v34 + 4 * v33 - 4);
      v52 = v49 + v51;
      v53 = 4 * v51;
      v54 = *(_DWORD *)(v32 + 4 * v33) - *(_DWORD *)(v34 + 4 * v33 - 4);
      v55 = &v90[v53];
      *(_DWORD *)(v34 + 4 * v33 - 4) = v52;
      v56 = (char *)(v31 + 4LL * v52);
      if ( v54 && v56 != v55 )
      {
        v57 = v54 >> 3;
        if ( v54 >> 3 > 0 )
        {
          if ( (v56 >= &v90[v53 + 32] || (unsigned __int64)v55 >= v31 + 4LL * v52 + 32) && v57 > 1 )
          {
            v58 = 0;
            v59 = v57 - 1;
            do
            {
              a5 = (__m128)_mm_loadu_si128((const __m128i *)&v55[v58]);
              v60 = _mm_loadu_si128((const __m128i *)&v55[v58 + 16]);
              *(__m128 *)&v56[v58] = a5;
              *(__m128i *)&v56[v58 + 16] = v60;
              v58 += 32;
            }
            while ( v58 != 32 * (v59 + 1) );
          }
          else
          {
            v101 = v33;
            v83 = &v90[v53];
            v59 = v57 - 1;
            v84 = (char *)(v31 + 4LL * v52);
            v85 = &v56[32 * v59 + 32];
            v98 = v56;
            do
            {
              v86 = *(_DWORD *)v83;
              v84 += 32;
              v83 += 32;
              *((_DWORD *)v84 - 8) = v86;
              *((_DWORD *)v84 - 7) = *((_DWORD *)v83 - 7);
              *((_DWORD *)v84 - 6) = *((_DWORD *)v83 - 6);
              *((_DWORD *)v84 - 5) = *((_DWORD *)v83 - 5);
              *((_DWORD *)v84 - 4) = *((_DWORD *)v83 - 4);
              *((_DWORD *)v84 - 3) = *((_DWORD *)v83 - 3);
              *((_DWORD *)v84 - 2) = *((_DWORD *)v83 - 2);
              *((_DWORD *)v84 - 1) = *((_DWORD *)v83 - 1);
            }
            while ( v85 != v84 );
            v33 = v101;
            v56 = v98;
          }
          v61 = 32 * ((int)v59 + 1LL);
          v55 += v61;
          v56 += v61;
        }
        switch ( v54 % 8 )
        {
          case 1:
            goto LABEL_53;
          case 2:
            goto LABEL_52;
          case 3:
            goto LABEL_51;
          case 4:
            goto LABEL_50;
          case 5:
            goto LABEL_49;
          case 6:
            goto LABEL_48;
          case 7:
            *((_DWORD *)v56 + 6) = *((_DWORD *)v55 + 6);
LABEL_48:
            *((_DWORD *)v56 + 5) = *((_DWORD *)v55 + 5);
LABEL_49:
            *((_DWORD *)v56 + 4) = *((_DWORD *)v55 + 4);
LABEL_50:
            *((_DWORD *)v56 + 3) = *((_DWORD *)v55 + 3);
LABEL_51:
            *((_DWORD *)v56 + 2) = *((_DWORD *)v55 + 2);
LABEL_52:
            *((_DWORD *)v56 + 1) = *((_DWORD *)v55 + 1);
LABEL_53:
            *(_DWORD *)v56 = *(_DWORD *)v55;
            break;
          default:
            break;
        }
      }
      v62 = v33;
      v63 = v49 + *(_DWORD *)(v32 + 4 * v33);
      v35 = v50 + v49;
      *(_DWORD *)&v12[4 * v33 - 4] = v63;
      v30 = v88[33];
      ++v33;
    }
    while ( (int)v30 > v62 );
    v64 = v90;
    v6 = (ClpPlusMinusOneMatrix *)v88;
  }
  if ( v64 )
  {
    operator delete[](v64);
    v30 = *((int *)v6 + 33);
  }
  *((_QWORD *)v6 + 15) = v93;
  *(_DWORD *)(*((_QWORD *)v6 + 13) + 4 * v30) += v35;
  if ( a2 > 0 )
  {
    v65 = v6;
    v66 = 0;
    v67 = a3;
    v68 = v12;
    v69 = v11;
    do
    {
      v91 = v65;
      v70 = v66 + *((_DWORD *)v65 + 32);
      v89 = (**(__int64 (__fastcall ***)(const CoinPackedVectorBase *const, double, double, double))v67[v66])(
              v67[v66],
              1.0,
              *(double *)a5.m128_u64,
              a6);
      v71 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(*(_QWORD *)v67[v66] + 8LL))(v67[v66]);
      v72 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(*(_QWORD *)v67[v66] + 16LL))(v67[v66]);
      v65 = v91;
      if ( v89 > 0 )
      {
        v73 = *((_QWORD *)v91 + 15);
        v74 = 0;
        do
        {
          v77 = *(int *)(v71 + 4 * v74);
          if ( *(double *)(v72 + 8 * v74) == 1.0 )
            v75 = (char *)&v69[v77];
          else
            v75 = &v68[v77 * 4];
          v76 = *(int *)v75;
          ++v74;
          *(_DWORD *)v75 = v76 + 1;
          *(_DWORD *)(v73 + 4 * v76) = v70;
        }
        while ( (unsigned int)(v89 - 1) + 1LL != v74 );
      }
      ++v66;
    }
    while ( v66 != (unsigned int)(a2 - 1) + 1LL );
    v11 = v69;
    v6 = v91;
    v12 = v68;
  }
  operator delete[](v11);
  operator delete[](v12);
  *((_DWORD *)v6 + 32) += a2;
  return (unsigned int)a2;
}

