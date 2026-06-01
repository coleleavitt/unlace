void __fastcall CoinWarmStartBasis::CoinWarmStartBasis(
        CoinWarmStartBasis *this,
        int a2,
        int a3,
        const char *a4,
        const char *a5)
{
  int v5; // r12d
  int v7; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edx
  bool v15; // sf
  int v16; // r13d
  __int64 v17; // rbp
  int v18; // edi
  unsigned __int64 v19; // rsi
  int v20; // r13d
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rax
  const char *v24; // rcx
  char *v25; // rax
  int v26; // r13d
  __int64 v27; // rax
  int v28; // esi
  int v29; // r15d
  int v30; // r9d
  const char *v31; // rcx
  int v32; // r15d
  __int64 v33; // rdx
  unsigned int v34; // esi
  __int64 v35; // rdx
  const char *v36; // rsi
  char *v37; // rdx
  int v38; // r15d
  __int64 v39; // rdx
  __int64 v40; // rdx
  const char *v41; // rcx
  char v42; // al
  __int64 v43; // r8
  const char *v44; // rsi
  char v45; // dl

  v5 = (a2 + 15) >> 4;
  v7 = (a3 + 15) >> 4;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_4D2418;
  *((_DWORD *)this + 4) = v5 + v7;
  if ( v5 + v7 <= 0 )
    return;
  v11 = operator new[](4 * (v5 + v7));
  *((_QWORD *)this + 3) = v11;
  v12 = 4 * v5;
  if ( v5 <= 0 )
    goto LABEL_3;
  v28 = a2 + 6;
  v15 = a2 + 3 < 0;
  v29 = a2 + 3;
  *(_BYTE *)(v11 + v12 - 3) = 0;
  *(_BYTE *)(v11 + v12 - 2) = 0;
  *(_BYTE *)(v11 + v12 - 1) = 0;
  if ( v15 )
    v29 = v28;
  v11 = *((_QWORD *)this + 3);
  v30 = v29 >> 2;
  if ( !(v29 >> 2) || (v31 = a4, (const char *)v11 == a4) )
  {
LABEL_3:
    v13 = v12 + v11;
    *((_QWORD *)this + 4) = v13;
    if ( v7 <= 0 )
      return;
    goto LABEL_4;
  }
  v32 = v29 >> 5;
  if ( v32 > 0 )
  {
    if ( (v11 >= (unsigned __int64)(a4 + 16) || (unsigned __int64)a4 >= v11 + 16) && (unsigned int)v32 > 1 )
    {
      v33 = 0;
      v34 = 0;
      do
      {
        ++v34;
        *(__m128i *)(v11 + v33) = _mm_loadu_si128((const __m128i *)&a4[v33]);
        v33 += 16;
      }
      while ( v34 < (unsigned int)v32 >> 1 );
      v35 = 8LL * (v32 & 0xFFFFFFFE);
      v36 = &a4[v35];
      v37 = (char *)(v11 + v35);
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
      v38 = v32 - 1;
    }
    else
    {
      v38 = v32 - 1;
      v43 = *((_QWORD *)this + 3);
      v44 = a4;
      do
      {
        v45 = *v44;
        v44 += 8;
        v43 += 8;
        *(_BYTE *)(v43 - 8) = v45;
        *(_BYTE *)(v43 - 7) = *(v44 - 7);
        *(_BYTE *)(v43 - 6) = *(v44 - 6);
        *(_BYTE *)(v43 - 5) = *(v44 - 5);
        *(_BYTE *)(v43 - 4) = *(v44 - 4);
        *(_BYTE *)(v43 - 3) = *(v44 - 3);
        *(_BYTE *)(v43 - 2) = *(v44 - 2);
        *(_BYTE *)(v43 - 1) = *(v44 - 1);
      }
      while ( &a4[8 * v38 + 8] != v44 );
    }
    v39 = 8LL * v38 + 8;
    v31 = &a4[v39];
    v11 += v39;
  }
  switch ( v30 % 8 )
  {
    case 1:
      goto LABEL_46;
    case 2:
      goto LABEL_45;
    case 3:
      goto LABEL_44;
    case 4:
      goto LABEL_43;
    case 5:
      goto LABEL_42;
    case 6:
      goto LABEL_41;
    case 7:
      *(_BYTE *)(v11 + 6) = v31[6];
LABEL_41:
      *(_BYTE *)(v11 + 5) = v31[5];
LABEL_42:
      *(_BYTE *)(v11 + 4) = v31[4];
LABEL_43:
      *(_BYTE *)(v11 + 3) = v31[3];
LABEL_44:
      *(_BYTE *)(v11 + 2) = v31[2];
LABEL_45:
      *(_BYTE *)(v11 + 1) = v31[1];
LABEL_46:
      *(_BYTE *)v11 = *v31;
      break;
    default:
      break;
  }
  v13 = v12 + *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = v13;
  if ( v7 > 0 )
  {
LABEL_4:
    v14 = a3 + 6;
    v15 = a3 + 3 < 0;
    v16 = a3 + 3;
    v17 = 4 * v7;
    *(_BYTE *)(v13 + v17 - 3) = 0;
    if ( v15 )
      v16 = v14;
    v18 = v16 >> 2;
    *(_BYTE *)(*((_QWORD *)this + 4) + v17 - 2) = 0;
    *(_BYTE *)(*((_QWORD *)this + 4) + v17 - 1) = 0;
    v19 = *((_QWORD *)this + 4);
    if ( v16 >> 2 && (const char *)v19 != a5 )
    {
      v20 = v16 >> 5;
      if ( v20 > 0 )
      {
        if ( ((unsigned __int64)a5 >= v19 + 16 || v19 >= (unsigned __int64)(a5 + 16)) && (unsigned int)v20 > 1 )
        {
          v21 = 0;
          v22 = 0;
          do
          {
            ++v22;
            *(__m128i *)(v19 + v21) = _mm_loadu_si128((const __m128i *)&a5[v21]);
            v21 += 16;
          }
          while ( (unsigned int)v20 >> 1 > v22 );
          v23 = 8LL * (v20 & 0xFFFFFFFE);
          v24 = &a5[v23];
          v25 = (char *)(v19 + v23);
          if ( v20 != (v20 & 0xFFFFFFFE) )
          {
            *v25 = *v24;
            v25[1] = v24[1];
            v25[2] = v24[2];
            v25[3] = v24[3];
            v25[4] = v24[4];
            v25[5] = v24[5];
            v25[6] = v24[6];
            v25[7] = v24[7];
          }
          v26 = v20 - 1;
        }
        else
        {
          v26 = v20 - 1;
          v40 = *((_QWORD *)this + 4);
          v41 = a5;
          do
          {
            v42 = *v41;
            v40 += 8;
            v41 += 8;
            *(_BYTE *)(v40 - 8) = v42;
            *(_BYTE *)(v40 - 7) = *(v41 - 7);
            *(_BYTE *)(v40 - 6) = *(v41 - 6);
            *(_BYTE *)(v40 - 5) = *(v41 - 5);
            *(_BYTE *)(v40 - 4) = *(v41 - 4);
            *(_BYTE *)(v40 - 3) = *(v41 - 3);
            *(_BYTE *)(v40 - 2) = *(v41 - 2);
            *(_BYTE *)(v40 - 1) = *(v41 - 1);
          }
          while ( v40 != v19 + 8LL * (unsigned int)v26 + 8 );
        }
        v27 = 8LL * v26 + 8;
        a5 += v27;
        v19 += v27;
      }
      switch ( v18 % 8 )
      {
        case 1:
          goto LABEL_24;
        case 2:
          goto LABEL_23;
        case 3:
          goto LABEL_22;
        case 4:
          goto LABEL_21;
        case 5:
          goto LABEL_20;
        case 6:
          goto LABEL_19;
        case 7:
          *(_BYTE *)(v19 + 6) = a5[6];
LABEL_19:
          *(_BYTE *)(v19 + 5) = a5[5];
LABEL_20:
          *(_BYTE *)(v19 + 4) = a5[4];
LABEL_21:
          *(_BYTE *)(v19 + 3) = a5[3];
LABEL_22:
          *(_BYTE *)(v19 + 2) = a5[2];
LABEL_23:
          *(_BYTE *)(v19 + 1) = a5[1];
LABEL_24:
          *(_BYTE *)v19 = *a5;
          break;
        default:
          return;
      }
    }
  }
}

