int __fastcall CoinMpsIO::setMpsDataColAndRowNames(CoinMpsIO *this, const char **a2, const char **a3)
{
  __int64 v5; // r14
  char **v6; // rax
  __int64 v7; // rdi
  char **v8; // rbp
  int v9; // r12d
  const char *v10; // rax
  int v11; // r12d
  __int64 v12; // r14
  const char *v13; // r15
  int v14; // ebp
  unsigned int v15; // edi
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  const char *v19; // rcx
  char *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  char *v23; // rcx
  char *v24; // rax
  int v25; // ebp
  __int64 v26; // r14
  int v27; // r12d
  const char *v28; // r15
  int v29; // r13d
  unsigned int v30; // edi
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  const char *v34; // rcx
  char *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rcx
  char *v38; // rcx
  char *v39; // rax
  char **v40; // rbp
  int v41; // r15d
  int v42; // r12d
  int v43; // r14d
  size_t v44; // r13
  char *v45; // rax
  int v46; // edx
  int v47; // r15d
  int v48; // r12d
  int v49; // r14d
  size_t v50; // r13
  char *v51; // rax
  int v52; // edx
  const char *v53; // rcx
  const char *v54; // rdx
  char v55; // si
  const char *v56; // rcx
  const char *v57; // rdx
  char v58; // r9
  const char *v61; // [rsp+8h] [rbp-50h]
  char **v62; // [rsp+10h] [rbp-48h]
  int v63; // [rsp+1Ch] [rbp-3Ch]

  CoinMpsIO::releaseRowNames(this);
  CoinMpsIO::releaseColumnNames(this);
  v5 = *((int *)this + 10);
  v6 = (char **)malloc(8 * v5);
  v7 = *((int *)this + 11);
  *((_QWORD *)this + 19) = v6;
  v8 = v6;
  v9 = v7;
  v10 = (const char *)malloc(8 * v7);
  v61 = v10;
  *((_QWORD *)this + 20) = v10;
  *((_DWORD *)this + 44) = v5;
  *((_DWORD *)this + 45) = v7;
  if ( a3 )
  {
    if ( (int)v5 > 0 )
    {
      v11 = 10000000;
      v63 = 9;
      v12 = 0;
      v62 = v8;
      v13 = *a3;
      if ( !*a3 )
        goto LABEL_27;
      while ( 1 )
      {
        v14 = strlen(v13);
        v10 = (const char *)malloc(v14 + 1);
        if ( v14 && v13 != v10 )
        {
          v15 = v14 >> 3;
          if ( v14 >> 3 <= 0 )
          {
            v23 = (char *)v10;
          }
          else
          {
            if ( (v13 >= v10 + 16 || v10 >= v13 + 16) && v15 > 1 )
            {
              v16 = 0;
              v17 = 0;
              do
              {
                ++v17;
                *(__m128i *)&v10[v16] = _mm_loadu_si128((const __m128i *)&v13[v16]);
                v16 += 16;
              }
              while ( v17 < v15 >> 1 );
              v18 = 8LL * (v15 & 0xFFFFFFFE);
              v19 = &v13[v18];
              v20 = (char *)&v10[v18];
              if ( v15 != (v15 & 0xFFFFFFFE) )
              {
                *v20 = *v19;
                v20[1] = v19[1];
                v20[2] = v19[2];
                v20[3] = v19[3];
                v20[4] = v19[4];
                v20[5] = v19[5];
                v20[6] = v19[6];
                v20[7] = v19[7];
              }
              LODWORD(v21) = v15 - 1;
            }
            else
            {
              v53 = v10;
              v21 = v15 - 1;
              v54 = v13;
              do
              {
                v55 = *v54;
                v54 += 8;
                v53 += 8;
                *((_BYTE *)v53 - 8) = v55;
                *((_BYTE *)v53 - 7) = *(v54 - 7);
                *((_BYTE *)v53 - 6) = *(v54 - 6);
                *((_BYTE *)v53 - 5) = *(v54 - 5);
                *((_BYTE *)v53 - 4) = *(v54 - 4);
                *((_BYTE *)v53 - 3) = *(v54 - 3);
                *((_BYTE *)v53 - 2) = *(v54 - 2);
                *((_BYTE *)v53 - 1) = *(v54 - 1);
              }
              while ( &v13[8 * v21 + 8] != v54 );
            }
            v22 = 8LL * (int)v21 + 8;
            v13 += v22;
            v23 = (char *)&v10[v22];
          }
          switch ( v14 % 8 )
          {
            case 1:
              goto LABEL_22;
            case 2:
              goto LABEL_21;
            case 3:
              goto LABEL_20;
            case 4:
              goto LABEL_19;
            case 5:
              goto LABEL_18;
            case 6:
              goto LABEL_17;
            case 7:
              v23[6] = v13[6];
LABEL_17:
              v23[5] = v13[5];
LABEL_18:
              v23[4] = v13[4];
LABEL_19:
              v23[3] = v13[3];
LABEL_20:
              v23[2] = v13[2];
LABEL_21:
              v23[1] = v13[1];
LABEL_22:
              *v23 = *v13;
              break;
            default:
              break;
          }
        }
        v10[v14] = 0;
        v62[v12] = (char *)v10;
        LODWORD(v10) = v12 + 1;
        if ( *((_DWORD *)this + 10) <= (int)v12 + 1 )
          break;
        while ( 1 )
        {
          if ( v11 == (_DWORD)v10 )
          {
            ++v63;
            v11 *= 10;
          }
          v13 = a3[++v12];
          if ( v13 )
            break;
LABEL_27:
          v24 = (char *)malloc(v63);
          v62[v12] = v24;
          sprintf(v24, "R%7.7d", v12);
          LODWORD(v10) = v12 + 1;
          if ( *((_DWORD *)this + 10) <= (int)v12 + 1 )
            goto LABEL_28;
        }
      }
LABEL_28:
      v9 = *((_DWORD *)this + 11);
    }
  }
  else if ( (int)v5 > 0 )
  {
    v47 = 0;
    v48 = 10000000;
    v49 = 9;
    v50 = 9;
    while ( 1 )
    {
      v51 = (char *)malloc(v50);
      *v8 = v51;
      v52 = v47++;
      LODWORD(v10) = sprintf(v51, "R%7.7d", v52);
      if ( *((_DWORD *)this + 10) <= v47 )
        break;
      if ( v48 == v47 )
      {
        v50 = ++v49;
        v48 *= 10;
      }
      ++v8;
    }
    v9 = *((_DWORD *)this + 11);
  }
  if ( a2 )
  {
    if ( v9 > 0 )
    {
      v25 = 10000000;
      v26 = 0;
      v27 = 9;
      v28 = *a2;
      if ( !*a2 )
        goto LABEL_55;
      while ( 1 )
      {
        v29 = strlen(v28);
        v10 = (const char *)malloc(v29 + 1);
        if ( v29 && v28 != v10 )
        {
          v30 = v29 >> 3;
          if ( v29 >> 3 <= 0 )
          {
            v38 = (char *)v10;
          }
          else
          {
            if ( (v10 >= v28 + 16 || v28 >= v10 + 16) && v30 > 1 )
            {
              v31 = 0;
              v32 = 0;
              do
              {
                ++v32;
                *(__m128i *)&v10[v31] = _mm_loadu_si128((const __m128i *)&v28[v31]);
                v31 += 16;
              }
              while ( v30 >> 1 > v32 );
              v33 = 8LL * (v30 & 0xFFFFFFFE);
              v34 = &v28[v33];
              v35 = (char *)&v10[v33];
              if ( v30 != (v30 & 0xFFFFFFFE) )
              {
                *v35 = *v34;
                v35[1] = v34[1];
                v35[2] = v34[2];
                v35[3] = v34[3];
                v35[4] = v34[4];
                v35[5] = v34[5];
                v35[6] = v34[6];
                v35[7] = v34[7];
              }
              LODWORD(v36) = v30 - 1;
            }
            else
            {
              v56 = v28;
              v36 = v30 - 1;
              v57 = v10;
              do
              {
                v58 = *v56;
                v57 += 8;
                v56 += 8;
                *((_BYTE *)v57 - 8) = v58;
                *((_BYTE *)v57 - 7) = *(v56 - 7);
                *((_BYTE *)v57 - 6) = *(v56 - 6);
                *((_BYTE *)v57 - 5) = *(v56 - 5);
                *((_BYTE *)v57 - 4) = *(v56 - 4);
                *((_BYTE *)v57 - 3) = *(v56 - 3);
                *((_BYTE *)v57 - 2) = *(v56 - 2);
                *((_BYTE *)v57 - 1) = *(v56 - 1);
              }
              while ( v57 != &v10[8 * v36 + 8] );
            }
            v37 = 8LL * (int)v36 + 8;
            v28 += v37;
            v38 = (char *)&v10[v37];
          }
          switch ( v29 % 8 )
          {
            case 1:
              goto LABEL_50;
            case 2:
              goto LABEL_49;
            case 3:
              goto LABEL_48;
            case 4:
              goto LABEL_47;
            case 5:
              goto LABEL_46;
            case 6:
              goto LABEL_45;
            case 7:
              v38[6] = v28[6];
LABEL_45:
              v38[5] = v28[5];
LABEL_46:
              v38[4] = v28[4];
LABEL_47:
              v38[3] = v28[3];
LABEL_48:
              v38[2] = v28[2];
LABEL_49:
              v38[1] = v28[1];
LABEL_50:
              *v38 = *v28;
              break;
            default:
              break;
          }
        }
        v10[v29] = 0;
        *(_QWORD *)&v61[8 * v26] = v10;
        LODWORD(v10) = v26 + 1;
        if ( *((_DWORD *)this + 11) <= (int)v26 + 1 )
          break;
        while ( 1 )
        {
          if ( v25 == (_DWORD)v10 )
          {
            ++v27;
            v25 *= 10;
          }
          v28 = a2[++v26];
          if ( v28 )
            break;
LABEL_55:
          v39 = (char *)malloc(v27);
          *(_QWORD *)&v61[8 * v26] = v39;
          sprintf(v39, "C%7.7d", v26);
          LODWORD(v10) = v26 + 1;
          if ( *((_DWORD *)this + 11) <= (int)v26 + 1 )
            return (int)v10;
        }
      }
    }
  }
  else if ( v9 > 0 )
  {
    v40 = (char **)v61;
    v41 = 0;
    v42 = 10000000;
    v43 = 9;
    v44 = 9;
    while ( 1 )
    {
      v45 = (char *)malloc(v44);
      *v40 = v45;
      v46 = v41++;
      LODWORD(v10) = sprintf(v45, "C%7.7d", v46);
      if ( *((_DWORD *)this + 11) <= v41 )
        break;
      if ( v42 == v41 )
      {
        v44 = ++v43;
        v42 *= 10;
      }
      ++v40;
    }
  }
  return (int)v10;
}

