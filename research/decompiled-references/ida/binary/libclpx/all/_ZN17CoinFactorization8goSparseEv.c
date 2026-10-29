__int64 __fastcall CoinFactorization::goSparse(CoinFactorization *this)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  CoinArrayWithLength *v6; // rdi
  int v7; // eax
  int v8; // esi
  __int64 v9; // rax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rdi
  __int64 v19; // r11
  __int64 v20; // r10
  int v21; // r9d
  int v22; // eax
  int *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // edx
  __int64 v28; // rsi
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r12
  int v33; // edx
  __int64 v34; // r13
  int v35; // r8d
  _DWORD *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rbp
  __int64 v39; // r9
  __int64 v40; // xmm0_8
  int *v41; // rsi
  int v42; // eax
  int v43; // esi
  __int64 v44; // rax
  int v45; // esi
  __int64 v46; // rsi

  result = *((unsigned int *)this + 262);
  if ( (_DWORD)result )
  {
    *((_DWORD *)this + 263) = result;
  }
  else
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 <= 300 )
    {
      *((_DWORD *)this + 263) = 0;
      return result;
    }
    if ( v2 > 9999 )
    {
      *((_DWORD *)this + 262) = 500;
      *((_DWORD *)this + 263) = v2 >> 3;
    }
    else
    {
      v3 = v2 / 6;
      if ( v2 / 6 <= 499 )
      {
        v4 = v2 >> 2;
        *((_DWORD *)this + 262) = v3;
      }
      else
      {
        v4 = v2 >> 2;
        *((_DWORD *)this + 262) = 500;
      }
      *((_DWORD *)this + 263) = v4;
    }
  }
  v6 = (CoinFactorization *)((char *)this + 1128);
  v7 = 4 * *((_DWORD *)v6 - 272) + 3;
  v8 = 4 * v7;
  if ( v7 < 0 )
    v8 = -1;
  CoinArrayWithLength::conditionalNew(v6, v8);
  v9 = *((_QWORD *)this + 141);
  if ( *((int *)this + 284) <= -2 )
    v9 = 0;
  memset((void *)(v9 + 12LL * *((_DWORD *)this + 10)), 0, *((int *)this + 10));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1104));
  CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1080));
  v10 = *((_DWORD *)this + 8) + 1;
  v11 = 4 * v10;
  if ( v10 < 0 )
    v11 = -1;
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 1056), v11);
  v12 = *((_DWORD *)this + 177);
  if ( v12 )
  {
    v13 = 8 * v12;
    if ( v12 < 0 )
      v13 = -1;
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 1104), v13);
    v14 = *((_DWORD *)this + 177);
    v15 = 4 * v14;
    if ( v14 < 0 )
      v15 = -1;
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 1080), v15);
  }
  v16 = *((_QWORD *)this + 132);
  v17 = *((_DWORD *)this + 8);
  if ( *((int *)this + 266) <= -2 )
    v16 = 0;
  if ( v17 )
  {
    v43 = v17 + 7;
    v44 = v16;
    if ( v17 >= 0 )
      v43 = *((_DWORD *)this + 8);
    v45 = v43 >> 3;
    if ( v45 > 0 )
    {
      v46 = (unsigned int)(v45 - 1);
      do
      {
        *(_OWORD *)v44 = 0;
        v44 += 32;
        *(_OWORD *)(v44 - 16) = 0;
      }
      while ( v16 + 32 * v46 + 32 != v44 );
      v44 = v16 + 32 * ((int)v46 + 1LL);
    }
    switch ( v17 % 8 )
    {
      case 1:
        goto LABEL_67;
      case 2:
        goto LABEL_66;
      case 3:
        goto LABEL_65;
      case 4:
        goto LABEL_64;
      case 5:
        goto LABEL_63;
      case 6:
        goto LABEL_62;
      case 7:
        *(_DWORD *)(v44 + 24) = 0;
LABEL_62:
        *(_DWORD *)(v44 + 20) = 0;
LABEL_63:
        *(_DWORD *)(v44 + 16) = 0;
LABEL_64:
        *(_DWORD *)(v44 + 12) = 0;
LABEL_65:
        *(_DWORD *)(v44 + 8) = 0;
LABEL_66:
        *(_DWORD *)(v44 + 4) = 0;
LABEL_67:
        *(_DWORD *)v44 = 0;
        break;
      default:
        break;
    }
  }
  v18 = *((_QWORD *)this + 95);
  v19 = *((_QWORD *)this + 89);
  v20 = *((_QWORD *)this + 92);
  v21 = *((_DWORD *)this + 175);
  if ( *((int *)this + 192) <= -2 )
    v18 = 0;
  if ( *((int *)this + 180) <= -2 )
    v19 = 0;
  if ( *((int *)this + 186) <= -2 )
    v20 = 0;
  v22 = v21 + *((_DWORD *)this + 174);
  if ( v21 < v22 )
  {
    v23 = (int *)(v18 + 4LL * v21);
    do
    {
      v24 = *v23;
      if ( (int)v24 < v23[1] )
      {
        v25 = (int)v24 + 1;
        v26 = v20 + 4 * (v24 - v25);
        do
        {
          ++*(_DWORD *)(v16 + 4LL * *(int *)(v26 + 4 * v25));
          v27 = v25++;
        }
        while ( v23[1] > v27 );
        v22 = *((_DWORD *)this + 175) + *((_DWORD *)this + 174);
      }
      ++v21;
      ++v23;
    }
    while ( v22 > v21 );
  }
  v28 = *((int *)this + 8);
  if ( (int)v28 <= 0 )
  {
    v30 = 0;
  }
  else
  {
    v29 = 1;
    v30 = 0;
    do
    {
      v30 += *(_DWORD *)(v16 + 4 * v29 - 4);
      v31 = v29;
      *(_DWORD *)(v16 + 4 * v29 - 4) = v30;
      v28 = *((int *)this + 8);
      ++v29;
    }
    while ( (int)v28 > v31 );
  }
  *(_DWORD *)(v16 + 4 * v28) = v30;
  result = 0;
  v32 = *((_QWORD *)this + 138);
  v33 = *((_DWORD *)this + 175);
  v34 = *((_QWORD *)this + 135);
  if ( *((int *)this + 278) <= -2 )
    v32 = 0;
  if ( *((int *)this + 272) <= -2 )
    v34 = 0;
  v35 = v33 + *((_DWORD *)this + 174) - 1;
  if ( v33 <= v35 )
  {
    v36 = (_DWORD *)(v18 + 4LL * v35 + 4);
    do
    {
      result = (int)*(v36 - 1);
      if ( (int)result < *v36 )
      {
        v37 = (int)result + 1;
        v38 = v20 + -4 * v37 + 4 * result;
        v39 = v19 + -8 * v37 + 8 * result;
        do
        {
          v40 = *(_QWORD *)(v39 + 8 * v37);
          v41 = (int *)(v16 + 4LL * *(int *)(v38 + 4 * v37));
          v42 = *v41 - 1;
          *v41 = v42;
          *(_QWORD *)(v32 + 8LL * v42) = v40;
          *(_DWORD *)(v34 + 4LL * v42) = v35;
          result = (unsigned int)v37++;
        }
        while ( *v36 > (int)result );
        v33 = *((_DWORD *)this + 175);
      }
      --v35;
      --v36;
    }
    while ( v35 >= v33 );
  }
  return result;
}

