void __fastcall CoinWarmStartBasis::CoinWarmStartBasis(
        CoinWarmStartBasis *this,
        __int64 *a2,
        int a3,
        const char *a4,
        const char *a5,
        char *a6)
{
  int v7; // r12d
  __int64 v9; // rax
  int v10; // ebp
  int v11; // r13d
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  int v16; // ecx
  bool v17; // sf
  int v18; // r13d
  __int64 v19; // rbp
  int v20; // edi
  char *v21; // rsi
  int v22; // r13d
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  char *v26; // rdx
  char *v27; // rax
  int v28; // r13d
  __int64 v29; // rax
  int v30; // edx
  int v31; // r15d
  int v32; // r9d
  const char *v33; // r8
  int v34; // r15d
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rdx
  const char *v38; // rcx
  char *v39; // rdx
  int v40; // r15d
  __int64 v41; // rdx
  char *v42; // rdx
  char *v43; // rcx
  char v44; // al
  __int64 v45; // rdi
  const char *v46; // rcx
  char v47; // dl

  v7 = (a3 + 15) >> 4;
  v9 = *a2;
  v10 = ((int)a4 + 15) >> 4;
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v9 - 56)) = a2[1];
  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 3) = (_DWORD)a4;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 4) = v7 + v10;
  if ( v7 + v10 <= 0 )
    return;
  v11 = (int)a4;
  v13 = operator new[](4 * (v7 + v10));
  *((_QWORD *)this + 3) = v13;
  v14 = 4 * v7;
  if ( v7 <= 0 )
    goto LABEL_3;
  v30 = a3 + 6;
  v17 = a3 + 3 < 0;
  v31 = a3 + 3;
  *(_BYTE *)(v13 + v14 - 3) = 0;
  *(_BYTE *)(v13 + v14 - 2) = 0;
  *(_BYTE *)(v13 + v14 - 1) = 0;
  if ( v17 )
    v31 = v30;
  v13 = *((_QWORD *)this + 3);
  v32 = v31 >> 2;
  if ( !(v31 >> 2) || (v33 = a5, (const char *)v13 == a5) )
  {
LABEL_3:
    v15 = v14 + v13;
    *((_QWORD *)this + 4) = v15;
    if ( v10 <= 0 )
      return;
    goto LABEL_4;
  }
  v34 = v31 >> 5;
  if ( v34 > 0 )
  {
    if ( (v13 >= (unsigned __int64)(a5 + 16) || (unsigned __int64)a5 >= v13 + 16) && (unsigned int)v34 > 1 )
    {
      v35 = 0;
      v36 = 0;
      do
      {
        ++v36;
        *(__m128i *)(v13 + v35) = _mm_loadu_si128((const __m128i *)&a5[v35]);
        v35 += 16;
      }
      while ( v36 < (unsigned int)v34 >> 1 );
      v37 = 8LL * (v34 & 0xFFFFFFFE);
      v38 = &a5[v37];
      v39 = (char *)(v13 + v37);
      if ( v34 != (v34 & 0xFFFFFFFE) )
      {
        *v39 = *v38;
        v39[1] = v38[1];
        v39[2] = v38[2];
        v39[3] = v38[3];
        v39[4] = v38[4];
        v39[5] = v38[5];
        v39[6] = v38[6];
        v39[7] = v38[7];
      }
      v40 = v34 - 1;
    }
    else
    {
      v40 = v34 - 1;
      v45 = *((_QWORD *)this + 3);
      v46 = a5;
      do
      {
        v47 = *v46;
        v46 += 8;
        v45 += 8;
        *(_BYTE *)(v45 - 8) = v47;
        *(_BYTE *)(v45 - 7) = *(v46 - 7);
        *(_BYTE *)(v45 - 6) = *(v46 - 6);
        *(_BYTE *)(v45 - 5) = *(v46 - 5);
        *(_BYTE *)(v45 - 4) = *(v46 - 4);
        *(_BYTE *)(v45 - 3) = *(v46 - 3);
        *(_BYTE *)(v45 - 2) = *(v46 - 2);
        *(_BYTE *)(v45 - 1) = *(v46 - 1);
      }
      while ( &a5[8 * v40 + 8] != v46 );
    }
    v41 = 8LL * v40 + 8;
    v33 = &a5[v41];
    v13 += v41;
  }
  switch ( v32 % 8 )
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
      *(_BYTE *)(v13 + 6) = v33[6];
LABEL_41:
      *(_BYTE *)(v13 + 5) = v33[5];
LABEL_42:
      *(_BYTE *)(v13 + 4) = v33[4];
LABEL_43:
      *(_BYTE *)(v13 + 3) = v33[3];
LABEL_44:
      *(_BYTE *)(v13 + 2) = v33[2];
LABEL_45:
      *(_BYTE *)(v13 + 1) = v33[1];
LABEL_46:
      *(_BYTE *)v13 = *v33;
      break;
    default:
      break;
  }
  v15 = v14 + *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = v15;
  if ( v10 > 0 )
  {
LABEL_4:
    v16 = v11 + 6;
    v17 = v11 + 3 < 0;
    v18 = v11 + 3;
    v19 = 4 * v10;
    *(_BYTE *)(v15 + v19 - 3) = 0;
    if ( v17 )
      v18 = v16;
    v20 = v18 >> 2;
    *(_BYTE *)(*((_QWORD *)this + 4) + v19 - 2) = 0;
    *(_BYTE *)(*((_QWORD *)this + 4) + v19 - 1) = 0;
    v21 = *((char **)this + 4);
    if ( v18 >> 2 && v21 != a6 )
    {
      v22 = v18 >> 5;
      if ( v22 > 0 )
      {
        if ( (a6 >= v21 + 16 || v21 >= a6 + 16) && (unsigned int)v22 > 1 )
        {
          v23 = 0;
          v24 = 0;
          do
          {
            ++v24;
            *(__m128i *)&v21[v23] = _mm_loadu_si128((const __m128i *)&a6[v23]);
            v23 += 16;
          }
          while ( (unsigned int)v22 >> 1 > v24 );
          v25 = 8LL * (v22 & 0xFFFFFFFE);
          v26 = &a6[v25];
          v27 = &v21[v25];
          if ( v22 != (v22 & 0xFFFFFFFE) )
          {
            *v27 = *v26;
            v27[1] = v26[1];
            v27[2] = v26[2];
            v27[3] = v26[3];
            v27[4] = v26[4];
            v27[5] = v26[5];
            v27[6] = v26[6];
            v27[7] = v26[7];
          }
          v28 = v22 - 1;
        }
        else
        {
          v28 = v22 - 1;
          v42 = *((char **)this + 4);
          v43 = a6;
          do
          {
            v44 = *v43;
            v42 += 8;
            v43 += 8;
            *(v42 - 8) = v44;
            *(v42 - 7) = *(v43 - 7);
            *(v42 - 6) = *(v43 - 6);
            *(v42 - 5) = *(v43 - 5);
            *(v42 - 4) = *(v43 - 4);
            *(v42 - 3) = *(v43 - 3);
            *(v42 - 2) = *(v43 - 2);
            *(v42 - 1) = *(v43 - 1);
          }
          while ( v42 != &v21[8 * v28 + 8] );
        }
        v29 = 8LL * v28 + 8;
        a6 += v29;
        v21 += v29;
      }
      switch ( v20 % 8 )
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
          v21[6] = a6[6];
LABEL_19:
          v21[5] = a6[5];
LABEL_20:
          v21[4] = a6[4];
LABEL_21:
          v21[3] = a6[3];
LABEL_22:
          v21[2] = a6[2];
LABEL_23:
          v21[1] = a6[1];
LABEL_24:
          *v21 = *a6;
          break;
        default:
          return;
      }
    }
  }
}

