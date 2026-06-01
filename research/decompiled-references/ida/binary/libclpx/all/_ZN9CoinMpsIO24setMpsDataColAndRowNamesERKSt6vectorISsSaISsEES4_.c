int __fastcall CoinMpsIO::setMpsDataColAndRowNames(__int64 a1, __int64 a2, const char ***a3)
{
  __int64 v5; // r12
  char **v6; // rax
  __int64 v7; // rdi
  char **v8; // rbx
  char **v9; // rax
  const char **v10; // rsi
  const char **v11; // r14
  const char **v12; // r13
  __int64 v13; // r12
  const char *v14; // rbx
  int v15; // r15d
  const char *v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  const char *v21; // rcx
  char *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rcx
  char *v25; // rcx
  const char **v26; // r15
  const char *v27; // rax
  const char **v28; // rbp
  __int64 v29; // r14
  const char *v30; // rbx
  int v31; // r13d
  unsigned int v32; // esi
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rdx
  const char *v36; // rcx
  char *v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rcx
  char *v40; // rcx
  char **v41; // rbx
  int v42; // r15d
  int v43; // r12d
  int v44; // r14d
  size_t v45; // r13
  char *v46; // rax
  int v47; // edx
  int v48; // r15d
  int v49; // r12d
  int v50; // r14d
  size_t v51; // r13
  char *v52; // rax
  int v53; // edx
  const char *v54; // rcx
  const char *v55; // rdx
  char v56; // di
  const char *v57; // rcx
  const char *v58; // rdx
  char v59; // di
  int v61; // [rsp+Ch] [rbp-4Ch]
  char **v63; // [rsp+18h] [rbp-40h]

  v5 = *(int *)(a1 + 40);
  v6 = (char **)malloc(8 * v5);
  v7 = *(int *)(a1 + 44);
  *(_QWORD *)(a1 + 152) = v6;
  v8 = v6;
  v61 = v7;
  v9 = (char **)malloc(8 * v7);
  *(_QWORD *)(a1 + 160) = v9;
  v10 = *a3;
  v63 = v9;
  if ( *a3 == a3[1] )
  {
    if ( (int)v5 > 0 )
    {
      v48 = 0;
      v49 = 10000000;
      v50 = 9;
      v51 = 9;
      while ( 1 )
      {
        v52 = (char *)malloc(v51);
        *v8 = v52;
        v53 = v48++;
        sprintf(v52, "R%7.7d", v53);
        if ( *(_DWORD *)(a1 + 40) <= v48 )
          break;
        if ( v49 == v48 )
        {
          v51 = ++v50;
          v49 *= 10;
        }
        ++v8;
      }
      v61 = *(_DWORD *)(a1 + 44);
    }
  }
  else if ( (int)v5 > 0 )
  {
    v11 = *a3;
    v12 = (const char **)v8;
    v13 = (__int64)&v10[(unsigned int)(v5 - 1) + 1];
    do
    {
      v14 = *v11;
      if ( *v11 )
      {
        v15 = strlen(*v11);
        v16 = (const char *)malloc(v15 + 1);
        if ( v15 && v14 != v16 )
        {
          v17 = v15 >> 3;
          if ( v15 >> 3 <= 0 )
          {
            v25 = (char *)v16;
          }
          else
          {
            if ( (v14 >= v16 + 16 || v16 >= v14 + 16) && v17 > 1 )
            {
              v18 = 0;
              v19 = 0;
              do
              {
                ++v19;
                *(__m128i *)&v16[v18] = _mm_loadu_si128((const __m128i *)&v14[v18]);
                v18 += 16;
              }
              while ( v19 < v17 >> 1 );
              v20 = 8LL * (v17 & 0xFFFFFFFE);
              v21 = &v14[v20];
              v22 = (char *)&v16[v20];
              if ( v17 != (v17 & 0xFFFFFFFE) )
              {
                *v22 = *v21;
                v22[1] = v21[1];
                v22[2] = v21[2];
                v22[3] = v21[3];
                v22[4] = v21[4];
                v22[5] = v21[5];
                v22[6] = v21[6];
                v22[7] = v21[7];
              }
              LODWORD(v23) = v17 - 1;
            }
            else
            {
              v57 = v16;
              v23 = v17 - 1;
              v58 = v14;
              do
              {
                v59 = *v58;
                v58 += 8;
                v57 += 8;
                *((_BYTE *)v57 - 8) = v59;
                *((_BYTE *)v57 - 7) = *(v58 - 7);
                *((_BYTE *)v57 - 6) = *(v58 - 6);
                *((_BYTE *)v57 - 5) = *(v58 - 5);
                *((_BYTE *)v57 - 4) = *(v58 - 4);
                *((_BYTE *)v57 - 3) = *(v58 - 3);
                *((_BYTE *)v57 - 2) = *(v58 - 2);
                *((_BYTE *)v57 - 1) = *(v58 - 1);
              }
              while ( &v14[8 * v23 + 8] != v58 );
            }
            v24 = 8LL * (int)v23 + 8;
            v14 += v24;
            v25 = (char *)&v16[v24];
          }
          switch ( v15 % 8 )
          {
            case 1:
              goto LABEL_23;
            case 2:
              goto LABEL_22;
            case 3:
              goto LABEL_21;
            case 4:
              goto LABEL_20;
            case 5:
              goto LABEL_19;
            case 6:
              goto LABEL_18;
            case 7:
              v25[6] = v14[6];
LABEL_18:
              v25[5] = v14[5];
LABEL_19:
              v25[4] = v14[4];
LABEL_20:
              v25[3] = v14[3];
LABEL_21:
              v25[2] = v14[2];
LABEL_22:
              v25[1] = v14[1];
LABEL_23:
              *v25 = *v14;
              break;
            default:
              break;
          }
        }
        v16[v15] = 0;
      }
      else
      {
        v16 = nullptr;
      }
      ++v11;
      *v12++ = v16;
    }
    while ( v11 != (const char **)v13 );
  }
  v26 = *(const char ***)a2;
  if ( *(_QWORD *)(a2 + 8) == *(_QWORD *)a2 )
  {
    LODWORD(v27) = v61;
    if ( v61 > 0 )
    {
      v41 = v63;
      v42 = 0;
      v43 = 10000000;
      v44 = 9;
      v45 = 9;
      while ( 1 )
      {
        v46 = (char *)malloc(v45);
        *v41 = v46;
        v47 = v42++;
        LODWORD(v27) = sprintf(v46, "C%7.7d", v47);
        if ( *(_DWORD *)(a1 + 44) <= v42 )
          break;
        if ( v43 == v42 )
        {
          v45 = ++v44;
          v43 *= 10;
        }
        ++v41;
      }
    }
  }
  else
  {
    LODWORD(v27) = v61;
    if ( v61 > 0 )
    {
      v28 = (const char **)v63;
      v29 = (__int64)&v26[(unsigned int)(v61 - 1) + 1];
      do
      {
        v30 = *v26;
        if ( *v26 )
        {
          v31 = strlen(*v26);
          v27 = (const char *)malloc(v31 + 1);
          if ( v31 && v30 != v27 )
          {
            v32 = v31 >> 3;
            if ( v31 >> 3 <= 0 )
            {
              v40 = (char *)v27;
            }
            else
            {
              if ( (v27 >= v30 + 16 || v30 >= v27 + 16) && v32 > 1 )
              {
                v33 = 0;
                v34 = 0;
                do
                {
                  ++v34;
                  *(__m128i *)&v27[v33] = _mm_loadu_si128((const __m128i *)&v30[v33]);
                  v33 += 16;
                }
                while ( v32 >> 1 > v34 );
                v35 = 8LL * (v32 & 0xFFFFFFFE);
                v36 = &v30[v35];
                v37 = (char *)&v27[v35];
                if ( v32 != (v32 & 0xFFFFFFFE) )
                {
                  *v37 = *v36;
                  v37[1] = v36[1];
                  v37[2] = v36[2];
                  v37[3] = v36[3];
                  v37[4] = v36[4];
                  v37[5] = v36[5];
                  v37[6] = v36[6];
                  v37[7] = v36[7];
                }
                LODWORD(v38) = v32 - 1;
              }
              else
              {
                v54 = v30;
                v38 = v32 - 1;
                v55 = v27;
                do
                {
                  v56 = *v54;
                  v55 += 8;
                  v54 += 8;
                  *((_BYTE *)v55 - 8) = v56;
                  *((_BYTE *)v55 - 7) = *(v54 - 7);
                  *((_BYTE *)v55 - 6) = *(v54 - 6);
                  *((_BYTE *)v55 - 5) = *(v54 - 5);
                  *((_BYTE *)v55 - 4) = *(v54 - 4);
                  *((_BYTE *)v55 - 3) = *(v54 - 3);
                  *((_BYTE *)v55 - 2) = *(v54 - 2);
                  *((_BYTE *)v55 - 1) = *(v54 - 1);
                }
                while ( v55 != &v27[8 * v38 + 8] );
              }
              v39 = 8LL * (int)v38 + 8;
              v30 += v39;
              v40 = (char *)&v27[v39];
            }
            switch ( v31 % 8 )
            {
              case 1:
                goto LABEL_48;
              case 2:
                goto LABEL_47;
              case 3:
                goto LABEL_46;
              case 4:
                goto LABEL_45;
              case 5:
                goto LABEL_44;
              case 6:
                goto LABEL_43;
              case 7:
                v40[6] = v30[6];
LABEL_43:
                v40[5] = v30[5];
LABEL_44:
                v40[4] = v30[4];
LABEL_45:
                v40[3] = v30[3];
LABEL_46:
                v40[2] = v30[2];
LABEL_47:
                v40[1] = v30[1];
LABEL_48:
                *v40 = *v30;
                break;
              default:
                break;
            }
          }
          v27[v31] = 0;
        }
        else
        {
          v27 = nullptr;
        }
        ++v26;
        *v28++ = v27;
      }
      while ( (const char **)v29 != v26 );
    }
  }
  return (int)v27;
}

