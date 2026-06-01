void *__fastcall CoinLpIO::gutsOfCopy(CoinLpIO *this, const CoinLpIO *a2)
{
  CoinLpIO *v3; // rbx
  CoinPackedMatrix *v4; // r12
  int v5; // edi
  size_t v6; // r12
  void *v7; // rax
  void *v8; // r15
  void *v9; // rax
  void *v10; // r14
  const void *RowRange; // rax
  size_t v12; // r12
  const void *RowSense; // rax
  __int64 v14; // r12
  const void *RightHandSide; // rax
  size_t v16; // r12
  void *v17; // rax
  void *v18; // r14
  void *v19; // rax
  void *v20; // r13
  int v21; // r14d
  __int64 v22; // r13
  void *v23; // rax
  const void *v24; // rsi
  size_t v25; // r12
  void *v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // r12
  CoinSet *v29; // r13
  char *v30; // r12
  int v31; // r13d
  char *v32; // rax
  unsigned int v33; // esi
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  char *v37; // rcx
  char *v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rcx
  char *v41; // rcx
  char *v42; // r12
  int v43; // r13d
  char *v44; // rax
  unsigned int v45; // esi
  __int64 v46; // rdx
  unsigned int v47; // ecx
  __int64 v48; // rdx
  char *v49; // rcx
  char *v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rcx
  char *v53; // rcx
  void *result; // rax
  __int64 i; // r15
  int v56; // r13d
  const char **v57; // rbp
  const char **v58; // rax
  const char **v59; // rbx
  const char **v60; // r14
  __int64 v61; // r13
  const char *v62; // r12
  int v63; // ebp
  const char *v64; // rax
  unsigned int v65; // esi
  __int64 v66; // rdx
  unsigned int v67; // ecx
  __int64 v68; // rdx
  const char *v69; // rcx
  char *v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rcx
  char *v73; // rcx
  void *v74; // rax
  const char *v75; // rcx
  const char *v76; // rdx
  char v77; // di
  char *v78; // rcx
  char *v79; // rdx
  char v80; // di
  char *v81; // rcx
  char *v82; // rdx
  char v83; // di
  const CoinLpIO *v84; // [rsp+0h] [rbp-58h]
  unsigned __int64 v85; // [rsp+8h] [rbp-50h]
  CoinLpIO *v86; // [rsp+18h] [rbp-40h]

  v3 = this;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 16);
  if ( *((_QWORD *)a2 + 10) )
  {
    v4 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v4, *((const CoinPackedMatrix **)a2 + 10));
    *((_QWORD *)this + 10) = v4;
  }
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  v5 = *((_DWORD *)a2 + 14);
  *((_DWORD *)v3 + 14) = v5;
  *((_DWORD *)v3 + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)v3 + 59) = *((_DWORD *)a2 + 59);
  *((_BYTE *)v3 + 256) = *((_BYTE *)a2 + 256);
  if ( *((_QWORD *)a2 + 11) )
  {
    v6 = 8LL * v5;
    v7 = malloc(v6);
    *((_QWORD *)v3 + 11) = v7;
    v8 = v7;
    v9 = malloc(v6);
    *((_QWORD *)v3 + 12) = v9;
    v10 = v9;
    memcpy(v8, *((const void **)a2 + 11), v6);
    memcpy(v10, *((const void **)a2 + 12), v6);
    *((_QWORD *)v3 + 16) = malloc(v6);
    *((_QWORD *)v3 + 17) = malloc(v5);
    *((_QWORD *)v3 + 15) = malloc(v6);
    RowRange = (const void *)CoinLpIO::getRowRange(a2);
    memcpy(*((void **)v3 + 16), RowRange, v6);
    v12 = *((int *)v3 + 14);
    RowSense = (const void *)CoinLpIO::getRowSense(a2);
    memcpy(*((void **)v3 + 17), RowSense, v12);
    v14 = *((int *)v3 + 14);
    RightHandSide = (const void *)CoinLpIO::getRightHandSide(a2);
    memcpy(*((void **)v3 + 15), RightHandSide, 8 * v14);
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v16 = 8LL * *((int *)v3 + 15);
    v17 = malloc(v16);
    *((_QWORD *)v3 + 13) = v17;
    v18 = v17;
    v19 = malloc(v16);
    *((_QWORD *)v3 + 14) = v19;
    v20 = v19;
    memcpy(v18, *((const void **)a2 + 13), v16);
    memcpy(v20, *((const void **)a2 + 14), v16);
    v21 = *((_DWORD *)v3 + 40);
    if ( v21 > 0 )
    {
      v22 = 0;
      do
      {
        v23 = malloc(v16);
        *((_QWORD *)v3 + v22 + 18) = v23;
        v24 = *((const void **)a2 + v22++ + 18);
        memcpy(v23, v24, v16);
      }
      while ( v21 > (int)v22 );
    }
  }
  if ( *((_QWORD *)a2 + 23) )
  {
    v25 = *((int *)v3 + 15);
    v26 = malloc(v25);
    *((_QWORD *)v3 + 23) = v26;
    memcpy(v26, *((const void **)a2 + 23), v25);
  }
  v27 = *((int *)a2 + 50);
  *((_DWORD *)v3 + 50) = v27;
  if ( (_DWORD)v27 )
  {
    if ( v27 > 0xFFFFFFFFFFFFFFFLL )
LABEL_107:
      __cxa_throw_bad_array_new_length();
    *((_QWORD *)v3 + 24) = operator new[](8 * v27);
    if ( *((int *)v3 + 50) > 0 )
    {
      v28 = 0;
      do
      {
        v29 = (CoinSet *)operator new(0x20u);
        CoinSet::CoinSet(v29, *(const CoinSet **)(*((_QWORD *)a2 + 24) + 8 * v28));
        *(_QWORD *)(*((_QWORD *)v3 + 24) + 8 * v28++) = v29;
      }
      while ( *((_DWORD *)v3 + 50) > (int)v28 );
    }
  }
  free(*((void **)v3 + 26));
  free(*(void **)v3);
  v30 = *((char **)a2 + 26);
  if ( v30 )
  {
    v31 = strlen(*((const char **)a2 + 26));
    v32 = (char *)malloc(v31 + 1);
    if ( v31 && v30 != v32 )
    {
      v33 = v31 >> 3;
      if ( v31 >> 3 <= 0 )
      {
        v41 = v32;
      }
      else
      {
        if ( (v30 >= v32 + 16 || v32 >= v30 + 16) && v33 > 1 )
        {
          v34 = 0;
          v35 = 0;
          do
          {
            ++v35;
            *(__m128i *)&v32[v34] = _mm_loadu_si128((const __m128i *)&v30[v34]);
            v34 += 16;
          }
          while ( v35 < v33 >> 1 );
          v36 = 8LL * (v33 & 0xFFFFFFFE);
          v37 = &v30[v36];
          v38 = &v32[v36];
          if ( v33 != (v33 & 0xFFFFFFFE) )
          {
            *v38 = *v37;
            v38[1] = v37[1];
            v38[2] = v37[2];
            v38[3] = v37[3];
            v38[4] = v37[4];
            v38[5] = v37[5];
            v38[6] = v37[6];
            v38[7] = v37[7];
          }
          LODWORD(v39) = v33 - 1;
        }
        else
        {
          v78 = v32;
          v39 = v33 - 1;
          v79 = v30;
          do
          {
            v80 = *v79;
            v79 += 8;
            v78 += 8;
            *(v78 - 8) = v80;
            *(v78 - 7) = *(v79 - 7);
            *(v78 - 6) = *(v79 - 6);
            *(v78 - 5) = *(v79 - 5);
            *(v78 - 4) = *(v79 - 4);
            *(v78 - 3) = *(v79 - 3);
            *(v78 - 2) = *(v79 - 2);
            *(v78 - 1) = *(v79 - 1);
          }
          while ( &v30[8 * v39 + 8] != v79 );
        }
        v40 = 8LL * (int)v39 + 8;
        v30 += v40;
        v41 = &v32[v40];
      }
      switch ( v31 % 8 )
      {
        case 1:
          goto LABEL_35;
        case 2:
          goto LABEL_34;
        case 3:
          goto LABEL_33;
        case 4:
          goto LABEL_32;
        case 5:
          goto LABEL_31;
        case 6:
          goto LABEL_30;
        case 7:
          v41[6] = v30[6];
LABEL_30:
          v41[5] = v30[5];
LABEL_31:
          v41[4] = v30[4];
LABEL_32:
          v41[3] = v30[3];
LABEL_33:
          v41[2] = v30[2];
LABEL_34:
          v41[1] = v30[1];
LABEL_35:
          *v41 = *v30;
          break;
        default:
          break;
      }
    }
    v32[v31] = 0;
  }
  else
  {
    v32 = nullptr;
  }
  *((_QWORD *)v3 + 26) = v32;
  v42 = *(char **)a2;
  if ( *(_QWORD *)a2 )
  {
    v43 = strlen(*(const char **)a2);
    v44 = (char *)malloc(v43 + 1);
    if ( v43 && v42 != v44 )
    {
      v45 = v43 >> 3;
      if ( v43 >> 3 <= 0 )
      {
        v53 = v44;
      }
      else
      {
        if ( (v42 >= v44 + 16 || v44 >= v42 + 16) && v45 > 1 )
        {
          v46 = 0;
          v47 = 0;
          do
          {
            ++v47;
            *(__m128i *)&v44[v46] = _mm_loadu_si128((const __m128i *)&v42[v46]);
            v46 += 16;
          }
          while ( v47 < v45 >> 1 );
          v48 = 8LL * (v45 & 0xFFFFFFFE);
          v49 = &v42[v48];
          v50 = &v44[v48];
          if ( v45 != (v45 & 0xFFFFFFFE) )
          {
            *v50 = *v49;
            v50[1] = v49[1];
            v50[2] = v49[2];
            v50[3] = v49[3];
            v50[4] = v49[4];
            v50[5] = v49[5];
            v50[6] = v49[6];
            v50[7] = v49[7];
          }
          LODWORD(v51) = v45 - 1;
        }
        else
        {
          v81 = v44;
          v51 = v45 - 1;
          v82 = v42;
          do
          {
            v83 = *v82;
            v82 += 8;
            v81 += 8;
            *(v81 - 8) = v83;
            *(v81 - 7) = *(v82 - 7);
            *(v81 - 6) = *(v82 - 6);
            *(v81 - 5) = *(v82 - 5);
            *(v81 - 4) = *(v82 - 4);
            *(v81 - 3) = *(v82 - 3);
            *(v81 - 2) = *(v82 - 2);
            *(v81 - 1) = *(v82 - 1);
          }
          while ( &v42[8 * v51 + 8] != v82 );
        }
        v52 = 8LL * (int)v51 + 8;
        v42 += v52;
        v53 = &v44[v52];
      }
      switch ( v43 % 8 )
      {
        case 1:
          goto LABEL_56;
        case 2:
          goto LABEL_55;
        case 3:
          goto LABEL_54;
        case 4:
          goto LABEL_53;
        case 5:
          goto LABEL_52;
        case 6:
          goto LABEL_51;
        case 7:
          v53[6] = v42[6];
LABEL_51:
          v53[5] = v42[5];
LABEL_52:
          v53[4] = v42[4];
LABEL_53:
          v53[3] = v42[3];
LABEL_54:
          v53[2] = v42[2];
LABEL_55:
          v53[1] = v42[1];
LABEL_56:
          *v53 = *v42;
          break;
        default:
          break;
      }
    }
    v44[v43] = 0;
  }
  else
  {
    v44 = nullptr;
  }
  *(_QWORD *)v3 = v44;
  *((_DWORD *)v3 + 78) = *((_DWORD *)a2 + 78);
  *((_DWORD *)v3 + 79) = *((_DWORD *)a2 + 79);
  *((_DWORD *)v3 + 76) = *((_DWORD *)a2 + 76);
  *((_DWORD *)v3 + 77) = *((_DWORD *)a2 + 77);
  *((_QWORD *)v3 + 27) = *((_QWORD *)a2 + 27);
  *((_DWORD *)v3 + 58) = *((_DWORD *)a2 + 58);
  result = (void *)*((unsigned int *)v3 + 40);
  if ( (int)result > 0 )
  {
    *((_QWORD *)v3 + 21) = *((_QWORD *)a2 + 21);
    if ( (_DWORD)result != 1 )
      *((_QWORD *)v3 + 22) = *((_QWORD *)a2 + 22);
  }
  v84 = a2;
  for ( i = 0; i != 8; i += 4 )
  {
    v56 = *(_DWORD *)((char *)v3 + i + 312);
    if ( v56 )
    {
      v57 = *(const char ***)((char *)v84 + 2 * i + 288);
      v85 = *(int *)((char *)v3 + i + 304);
      v58 = (const char **)malloc(8 * v85);
      *(_QWORD *)((char *)v3 + 2 * i + 288) = v58;
      if ( v56 > 0 )
      {
        v86 = v3;
        v59 = v58;
        v60 = v57;
        v61 = (__int64)&v57[(unsigned int)(v56 - 1) + 1];
        do
        {
          v62 = *v60;
          if ( *v60 )
          {
            v63 = strlen(*v60);
            v64 = (const char *)malloc(v63 + 1);
            if ( v63 && v62 != v64 )
            {
              v65 = v63 >> 3;
              if ( v63 >> 3 <= 0 )
              {
                v73 = (char *)v64;
              }
              else
              {
                if ( (v64 >= v62 + 16 || v62 >= v64 + 16) && v65 > 1 )
                {
                  v66 = 0;
                  v67 = 0;
                  do
                  {
                    ++v67;
                    *(__m128i *)&v64[v66] = _mm_loadu_si128((const __m128i *)&v62[v66]);
                    v66 += 16;
                  }
                  while ( v65 >> 1 > v67 );
                  v68 = 8LL * (v65 & 0xFFFFFFFE);
                  v69 = &v62[v68];
                  v70 = (char *)&v64[v68];
                  if ( v65 != (v65 & 0xFFFFFFFE) )
                  {
                    *v70 = *v69;
                    v70[1] = v69[1];
                    v70[2] = v69[2];
                    v70[3] = v69[3];
                    v70[4] = v69[4];
                    v70[5] = v69[5];
                    v70[6] = v69[6];
                    v70[7] = v69[7];
                  }
                  LODWORD(v71) = v65 - 1;
                }
                else
                {
                  v75 = v62;
                  v71 = v65 - 1;
                  v76 = v64;
                  do
                  {
                    v77 = *v75;
                    v76 += 8;
                    v75 += 8;
                    *((_BYTE *)v76 - 8) = v77;
                    *((_BYTE *)v76 - 7) = *(v75 - 7);
                    *((_BYTE *)v76 - 6) = *(v75 - 6);
                    *((_BYTE *)v76 - 5) = *(v75 - 5);
                    *((_BYTE *)v76 - 4) = *(v75 - 4);
                    *((_BYTE *)v76 - 3) = *(v75 - 3);
                    *((_BYTE *)v76 - 2) = *(v75 - 2);
                    *((_BYTE *)v76 - 1) = *(v75 - 1);
                  }
                  while ( v76 != &v64[8 * v71 + 8] );
                }
                v72 = 8LL * (int)v71 + 8;
                v62 += v72;
                v73 = (char *)&v64[v72];
              }
              switch ( v63 % 8 )
              {
                case 1:
                  goto LABEL_86;
                case 2:
                  goto LABEL_85;
                case 3:
                  goto LABEL_84;
                case 4:
                  goto LABEL_83;
                case 5:
                  goto LABEL_82;
                case 6:
                  goto LABEL_81;
                case 7:
                  v73[6] = v62[6];
LABEL_81:
                  v73[5] = v62[5];
LABEL_82:
                  v73[4] = v62[4];
LABEL_83:
                  v73[3] = v62[3];
LABEL_84:
                  v73[2] = v62[2];
LABEL_85:
                  v73[1] = v62[1];
LABEL_86:
                  *v73 = *v62;
                  break;
                default:
                  break;
              }
            }
            v64[v63] = 0;
          }
          else
          {
            v64 = nullptr;
          }
          ++v60;
          *v59++ = v64;
        }
        while ( (const char **)v61 != v60 );
        v3 = v86;
      }
      if ( v85 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_107;
      v74 = (void *)operator new[](8 * v85);
      *(_QWORD *)((char *)v3 + 2 * i + 320) = v74;
      result = memcpy(v74, *(const void **)((char *)v84 + 2 * i + 320), 8LL * *(int *)((char *)v3 + i + 304));
    }
  }
  return result;
}

