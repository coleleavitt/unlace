__int64 __fastcall CoinLpIO::read_monom_obj(
        CoinLpIO *this,
        double *a2,
        char **a3,
        int *a4,
        char **a5,
        int *a6,
        int *a7)
{
  char *v10; // r15
  char *v11; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  bool v14; // cf
  __int64 v15; // rax
  __int64 v16; // rdx
  int is_subject_to; // r14d
  char **v19; // r12
  int v20; // ebx
  __int64 v21; // r13
  char *v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  char *v27; // rcx
  char *v28; // rdx
  __int64 v29; // rcx
  char *v30; // rcx
  char v31; // al
  char *v32; // r14
  bool v33; // zf
  __int64 v34; // rax
  char *v35; // r15
  __int64 v36; // rax
  char *v37; // rdx
  int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // rax
  char *v41; // rdx
  int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // rax
  char **v45; // r13
  int v46; // ebx
  __int64 v47; // r12
  char *v48; // rax
  int v49; // ebx
  __int64 v50; // rdx
  unsigned int v51; // ecx
  __int64 v52; // rdx
  char *v53; // rcx
  char *v54; // rdx
  __int64 v55; // rcx
  char *v56; // rcx
  void *exception; // r14
  const char *v58; // rsi
  __int64 v59; // rcx
  char *v60; // rdi
  double v62; // [rsp+8h] [rbp-2470h]
  __int64 v63; // [rsp+20h] [rbp-2458h]
  __int64 v64; // [rsp+28h] [rbp-2450h]
  __int64 v65; // [rsp+30h] [rbp-2448h]
  __int64 v66; // [rsp+38h] [rbp-2440h]
  char nptr[8]; // [rsp+40h] [rbp-2438h] BYREF
  __int64 v68; // [rsp+48h] [rbp-2430h]
  _BYTE v69[1008]; // [rsp+50h] [rbp-2428h] BYREF
  char dest[8248]; // [rsp+440h] [rbp-2038h] BYREF

  v10 = nptr;
  *(_QWORD *)nptr = 24929;
  v68 = 0;
  memset(v69, 0, sizeof(v69));
  if ( (int)CoinLpIO::fscanfLpIO(this, nptr) <= 0 )
  {
    strcpy(dest, "### ERROR: Unable to read objective function\n");
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    goto LABEL_75;
  }
  v11 = nptr;
  do
  {
    v12 = *(_DWORD *)v11;
    v11 += 4;
    v13 = ~v12 & (v12 - 16843009) & 0x80808080;
  }
  while ( !v13 );
  if ( (~v12 & (v12 - 16843009) & 0x8080) == 0 )
  {
    LOBYTE(v13) = (~v12 & (v12 - 16843009) & 0x80808080) >> 16;
    v11 += 2;
  }
  v14 = __CFADD__((_BYTE)v13, (_BYTE)v13);
  v15 = *a6;
  v16 = &v11[-v14 - 3] - nptr - 1;
  if ( nptr[v16] == 58 )
  {
    nptr[v16] = 0;
    if ( (_DWORD)v15 != 2 )
    {
      v19 = &a5[v15];
      v20 = strlen(nptr);
      v21 = v20;
      v22 = (char *)malloc(v20 + 1);
      if ( !v20 )
      {
LABEL_43:
        *v19 = v22;
        v22[v21] = 0;
        is_subject_to = 0;
        v40 = *a6;
        *a6 = v40 + 1;
        a7[v40] = *a4;
        return (unsigned int)is_subject_to;
      }
      v23 = v20 >> 3;
      if ( v23 <= 0 )
      {
        v30 = v22;
LABEL_20:
        switch ( (int)v21 % 8 )
        {
          case 1:
            goto LABEL_42;
          case 2:
            goto LABEL_41;
          case 3:
            goto LABEL_40;
          case 4:
            goto LABEL_39;
          case 5:
            goto LABEL_38;
          case 6:
            goto LABEL_37;
          case 7:
            v30[6] = v10[6];
LABEL_37:
            v30[5] = v10[5];
LABEL_38:
            v30[4] = v10[4];
LABEL_39:
            v30[3] = v10[3];
LABEL_40:
            v30[2] = v10[2];
LABEL_41:
            v30[1] = v10[1];
LABEL_42:
            *v30 = *v10;
            break;
          default:
            goto LABEL_43;
        }
        goto LABEL_43;
      }
      if ( v23 == 1 )
      {
        v28 = v22;
        v27 = nptr;
      }
      else
      {
        v24 = 0;
        v25 = 0;
        do
        {
          ++v25;
          *(__m128i *)&v22[v24] = _mm_load_si128((const __m128i *)&nptr[v24]);
          v24 += 16;
        }
        while ( (unsigned int)v23 >> 1 > v25 );
        v26 = 8LL * (v23 & 0xFFFFFFFE);
        v27 = &nptr[v26];
        v28 = &v22[v26];
        if ( v23 == (v23 & 0xFFFFFFFE) )
          goto LABEL_19;
      }
      *v28 = *v27;
      v28[1] = v27[1];
      v28[2] = v27[2];
      v28[3] = v27[3];
      v28[4] = v27[4];
      v28[5] = v27[5];
      v28[6] = v27[6];
      v28[7] = v27[7];
LABEL_19:
      v29 = 8LL * (v23 - 1) + 8;
      v10 = &nptr[v29];
      v30 = &v22[v29];
      goto LABEL_20;
    }
    v58 = "### ERROR: Change MAX_OBJECTIVES to larger number.\n";
    v59 = 13;
    v60 = dest;
    while ( v59 )
    {
      *(_DWORD *)v60 = *(_DWORD *)v58;
      v58 += 4;
      v60 += 4;
      --v59;
    }
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
LABEL_75:
    if ( (_UNKNOWN *)(v63 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v63 - 24);
    if ( (_UNKNOWN *)(v64 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v64 - 24);
    if ( (_UNKNOWN *)(v65 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v65 - 24);
    if ( (_UNKNOWN *)(v66 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C66A(v66 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  if ( !(_DWORD)v15 )
  {
    *a6 = 1;
    *a7 = *a4;
  }
  is_subject_to = CoinLpIO::is_subject_to(this, nptr);
  if ( is_subject_to <= 0 )
  {
    v31 = nptr[0];
    if ( nptr[0] == 43 )
    {
      v37 = nptr;
      do
      {
        v38 = *(_DWORD *)v37;
        v37 += 4;
        v39 = ~v38 & (v38 - 16843009) & 0x80808080;
      }
      while ( !v39 );
      v32 = &nptr[1];
      if ( (~v38 & (v38 - 16843009) & 0x8080) == 0 )
        LOBYTE(v39) = (~v38 & (v38 - 16843009) & 0x80808080) >> 16;
      v62 = 1.0;
      if ( (~v38 & (v38 - 16843009) & 0x8080) == 0 )
        v37 += 2;
      if ( &v37[-__CFADD__((_BYTE)v39, (_BYTE)v39) - 3] - nptr != 1 )
      {
LABEL_24:
        v33 = (unsigned int)CoinLpIO::first_is_number(this, v32) == 0;
        v34 = *a4;
        if ( v33 )
        {
          v35 = dest;
          a2[v34] = 1.0;
          strcpy(dest, v32);
        }
        else
        {
          a2[v34] = strtod(v32, nullptr);
          v35 = dest;
          strcpy(dest, "aa");
          CoinLpIO::fscanfLpIO(this, dest);
        }
        is_subject_to = CoinLpIO::is_subject_to(this, dest);
        v36 = *a4;
        if ( is_subject_to > 0 )
        {
          *((double *)this + 21) = v62 * a2[v36];
          return (unsigned int)is_subject_to;
        }
        v44 = v36;
        v45 = &a3[v44];
        a2[v44] = v62 * a2[v44];
        v46 = strlen(dest);
        v47 = v46;
        v48 = (char *)malloc(v46 + 1);
        if ( !v46 )
        {
LABEL_69:
          *v45 = v48;
          v48[v47] = 0;
          ++*a4;
          return (unsigned int)is_subject_to;
        }
        v49 = v46 >> 3;
        if ( v49 <= 0 )
        {
          v56 = v48;
LABEL_61:
          switch ( (int)v47 % 8 )
          {
            case 1:
              goto LABEL_68;
            case 2:
              goto LABEL_67;
            case 3:
              goto LABEL_66;
            case 4:
              goto LABEL_65;
            case 5:
              goto LABEL_64;
            case 6:
              goto LABEL_63;
            case 7:
              v56[6] = v35[6];
LABEL_63:
              v56[5] = v35[5];
LABEL_64:
              v56[4] = v35[4];
LABEL_65:
              v56[3] = v35[3];
LABEL_66:
              v56[2] = v35[2];
LABEL_67:
              v56[1] = v35[1];
LABEL_68:
              *v56 = *v35;
              break;
            default:
              goto LABEL_69;
          }
          goto LABEL_69;
        }
        if ( v49 == 1 )
        {
          v54 = v48;
          v53 = dest;
        }
        else
        {
          v50 = 0;
          v51 = 0;
          do
          {
            ++v51;
            *(__m128i *)&v48[v50] = _mm_load_si128((const __m128i *)&dest[v50]);
            v50 += 16;
          }
          while ( v51 < (unsigned int)v49 >> 1 );
          v52 = 8LL * (v49 & 0xFFFFFFFE);
          v53 = &dest[v52];
          v54 = &v48[v52];
          if ( v49 == (v49 & 0xFFFFFFFE) )
            goto LABEL_60;
        }
        *v54 = *v53;
        v54[1] = v53[1];
        v54[2] = v53[2];
        v54[3] = v53[3];
        v54[4] = v53[4];
        v54[5] = v53[5];
        v54[6] = v53[6];
        v54[7] = v53[7];
LABEL_60:
        v55 = 8LL * (v49 - 1) + 8;
        v35 = &dest[v55];
        v56 = &v48[v55];
        goto LABEL_61;
      }
      CoinLpIO::fscanfLpIO(this, nptr);
      v31 = nptr[0];
    }
    if ( v31 == 45 )
    {
      v41 = nptr;
      do
      {
        v42 = *(_DWORD *)v41;
        v41 += 4;
        v43 = ~v42 & (v42 - 16843009) & 0x80808080;
      }
      while ( !v43 );
      v32 = &nptr[1];
      if ( (~v42 & (v42 - 16843009) & 0x8080) == 0 )
        LOBYTE(v43) = (~v42 & (v42 - 16843009) & 0x80808080) >> 16;
      v62 = -1.0;
      if ( (~v42 & (v42 - 16843009) & 0x8080) == 0 )
        v41 += 2;
      if ( &v41[-__CFADD__((_BYTE)v43, (_BYTE)v43) - 3] - nptr == 1 )
      {
        v32 = nptr;
        CoinLpIO::fscanfLpIO(this, nptr);
      }
    }
    else
    {
      v32 = nptr;
      v62 = 1.0;
    }
    goto LABEL_24;
  }
  return (unsigned int)is_subject_to;
}

