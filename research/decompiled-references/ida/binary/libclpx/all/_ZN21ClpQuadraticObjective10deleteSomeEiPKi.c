void __fastcall ClpQuadraticObjective::deleteSome(ClpQuadraticObjective *this, int a2, const int *a3)
{
  bool v6; // zf
  unsigned __int64 v7; // rdi
  char *v8; // r15
  int v9; // r14d
  const int *v10; // rdx
  int v11; // esi
  __int64 v12; // rax
  char *v13; // rax
  int v14; // ebx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 *v24; // rsi
  unsigned __int64 v25; // rdx
  int v26; // ecx
  __int64 *v27; // r8
  __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 v30; // r10
  __int64 v31; // xmm0_8
  __int64 v32; // r10
  char *v33; // r15
  const int *v34; // rdx
  int v35; // esi
  __int64 v36; // rax
  char *v37; // rax
  __int64 v38; // rax
  int v39; // edx
  _QWORD *v40; // rdi
  __int64 v41; // rsi
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 *v47; // r8
  __int64 *v48; // rdi
  int v49; // ecx
  __int64 v50; // rdx
  __int64 *v51; // rax
  __int64 v52; // xmm0_8
  __int64 v53; // rax
  CoinPackedMatrix *v54; // rdi
  __int64 v55; // [rsp+8h] [rbp-40h]
  __int64 v56; // [rsp+8h] [rbp-40h]

  v6 = *((_QWORD *)this + 4) == 0;
  v7 = *((int *)this + 12);
  if ( v6 )
  {
    v9 = v7 - a2;
    v14 = *((_DWORD *)this + 13) - a2;
  }
  else
  {
    v8 = (char *)operator new[](v7);
    v9 = *((_DWORD *)this + 12);
    memset(v8, 0, v9);
    if ( a2 <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v10 = a3;
      v11 = 0;
      do
      {
        v12 = *v10;
        if ( v9 > (int)v12 && (int)v12 >= 0 )
        {
          v13 = &v8[v12];
          if ( !*v13 )
          {
            ++v11;
            *v13 = 1;
          }
        }
        ++v10;
      }
      while ( v10 != &a3[a2 - 1 + 1] );
      v9 -= v11;
    }
    v14 = *((_DWORD *)this + 13) - v11;
    if ( (unsigned __int64)v14 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_70;
    v15 = operator new[](8LL * v14);
    v16 = *((_DWORD *)this + 12);
    if ( v16 <= 0 )
    {
      v18 = *((_QWORD **)this + 4);
    }
    else
    {
      v17 = (unsigned int)(v16 - 1);
      v18 = *((_QWORD **)this + 4);
      v19 = 0;
      v20 = 0;
      v21 = v17 + 1;
      do
      {
        if ( !v8[v19] )
        {
          v22 = v20++;
          *(_QWORD *)(v15 + 8 * v22) = v18[v19];
        }
        ++v19;
      }
      while ( v21 != v19 );
    }
    if ( v18 )
    {
      v55 = v15;
      operator delete[](v18);
      v15 = v55;
    }
    *((_QWORD *)this + 4) = v15;
    operator delete[](v8);
    v23 = *((_QWORD *)this + 4);
    v24 = (__int64 *)(v23 + 8LL * v9);
    v25 = *((int *)this + 12);
    v26 = *((_DWORD *)this + 13) - v25;
    v7 = v25;
    v27 = (__int64 *)(v23 + 8 * v25);
    if ( v26 && v24 != v27 )
    {
      if ( v26 >> 3 > 0 )
      {
        v28 = (__int64 *)(v23 + 8LL * v9);
        v29 = v27;
        v30 = (unsigned int)((v26 >> 3) - 1);
        do
        {
          v31 = *v29;
          v28 += 8;
          v29 += 8;
          *(v28 - 8) = v31;
          *(v28 - 7) = *(v29 - 7);
          *(v28 - 6) = *(v29 - 6);
          *(v28 - 5) = *(v29 - 5);
          *(v28 - 4) = *(v29 - 4);
          *(v28 - 3) = *(v29 - 3);
          *(v28 - 2) = *(v29 - 2);
          *(v28 - 1) = *(v29 - 1);
        }
        while ( &v24[8 * v30 + 8] != v28 );
        v32 = ((int)v30 + 1LL) << 6;
        v27 = (__int64 *)((char *)v27 + v32);
        v24 = (__int64 *)((char *)v24 + v32);
      }
      switch ( v26 % 8 )
      {
        case 1:
          goto LABEL_31;
        case 2:
          goto LABEL_30;
        case 3:
          goto LABEL_29;
        case 4:
          goto LABEL_28;
        case 5:
          goto LABEL_27;
        case 6:
          goto LABEL_26;
        case 7:
          v24[6] = v27[6];
LABEL_26:
          v24[5] = v27[5];
LABEL_27:
          v24[4] = v27[4];
LABEL_28:
          v24[3] = v27[3];
LABEL_29:
          v24[2] = v27[2];
LABEL_30:
          v24[1] = v27[1];
LABEL_31:
          *v24 = *v27;
          break;
        default:
          break;
      }
    }
  }
  if ( !*((_QWORD *)this + 5) )
    goto LABEL_63;
  v33 = (char *)operator new[](v7);
  v9 = *((_DWORD *)this + 12);
  memset(v33, 0, v9);
  if ( a2 <= 0 )
  {
    v35 = 0;
  }
  else
  {
    v34 = a3;
    v35 = 0;
    do
    {
      v36 = *v34;
      if ( v9 > (int)v36 && (int)v36 >= 0 )
      {
        v37 = &v33[v36];
        if ( !*v37 )
        {
          ++v35;
          *v37 = 1;
        }
      }
      ++v34;
    }
    while ( v34 != &a3[a2 - 1 + 1] );
    v9 -= v35;
  }
  v14 = *((_DWORD *)this + 13) - v35;
  if ( (unsigned __int64)v14 > 0xFFFFFFFFFFFFFFFLL )
LABEL_70:
    __cxa_throw_bad_array_new_length();
  v38 = operator new[](8LL * v14);
  v39 = *((_DWORD *)this + 12);
  v40 = *((_QWORD **)this + 5);
  if ( v39 > 0 )
  {
    v41 = (unsigned int)(v39 - 1);
    v42 = 0;
    v43 = 0;
    v44 = v41 + 1;
    do
    {
      if ( !v33[v43] )
      {
        v45 = v42++;
        *(_QWORD *)(v38 + 8 * v45) = v40[v43];
      }
      ++v43;
    }
    while ( v44 != v43 );
  }
  if ( v40 )
  {
    v56 = v38;
    operator delete[](v40);
    v38 = v56;
  }
  *((_QWORD *)this + 5) = v38;
  operator delete[](v33);
  v46 = *((_QWORD *)this + 5);
  v47 = (__int64 *)(v46 + 8LL * v9);
  v48 = (__int64 *)(v46 + 8LL * *((int *)this + 12));
  v49 = *((_DWORD *)this + 13) - *((_DWORD *)this + 12);
  if ( v49 && v47 != v48 )
  {
    if ( v49 >> 3 > 0 )
    {
      v50 = v46 + 8LL * v9;
      v51 = v48;
      do
      {
        v52 = *v51;
        v51 += 8;
        v50 += 64;
        *(_QWORD *)(v50 - 64) = v52;
        *(_QWORD *)(v50 - 56) = *(v51 - 7);
        *(_QWORD *)(v50 - 48) = *(v51 - 6);
        *(_QWORD *)(v50 - 40) = *(v51 - 5);
        *(_QWORD *)(v50 - 32) = *(v51 - 4);
        *(_QWORD *)(v50 - 24) = *(v51 - 3);
        *(_QWORD *)(v50 - 16) = *(v51 - 2);
        *(_QWORD *)(v50 - 8) = *(v51 - 1);
      }
      while ( &v48[8 * (unsigned int)((v49 >> 3) - 1) + 8] != v51 );
      v53 = ((v49 >> 3) - 1 + 1LL) << 6;
      v48 = (__int64 *)((char *)v48 + v53);
      v47 = (__int64 *)((char *)v47 + v53);
    }
    switch ( v49 % 8 )
    {
      case 1:
        goto LABEL_62;
      case 2:
        goto LABEL_61;
      case 3:
        goto LABEL_60;
      case 4:
        goto LABEL_59;
      case 5:
        goto LABEL_58;
      case 6:
        goto LABEL_57;
      case 7:
        v47[6] = v48[6];
LABEL_57:
        v47[5] = v48[5];
LABEL_58:
        v47[4] = v48[4];
LABEL_59:
        v47[3] = v48[3];
LABEL_60:
        v47[2] = v48[2];
LABEL_61:
        v47[1] = v48[1];
LABEL_62:
        *v47 = *v48;
        break;
      default:
        break;
    }
  }
LABEL_63:
  v54 = *((CoinPackedMatrix **)this + 3);
  *((_DWORD *)this + 12) = v9;
  *((_DWORD *)this + 13) = v14;
  if ( v54 )
  {
    CoinPackedMatrix::deleteCols(v54, a2, a3);
    CoinPackedMatrix::deleteRows(*((CoinPackedMatrix **)this + 3), a2, a3);
  }
}

