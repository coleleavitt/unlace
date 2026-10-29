void __fastcall CoinPackedMatrix::appendMinorVectors(
        CoinPackedMatrix *this,
        int a2,
        const CoinPackedVectorBase *const *a3)
{
  int v3; // r13d
  unsigned __int64 v6; // rdi
  int v7; // r12d
  int *v8; // r14
  int v9; // eax
  __int64 v10; // r15
  const CoinPackedVectorBase *const *v11; // r12
  __int64 v12; // rbp
  const CoinPackedVectorBase *v13; // rdi
  __int64 (**v14)(void); // rax
  __int64 (*v15)(void); // rdx
  int v16; // r13d
  __int64 (*v17)(void); // rax
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdi
  int *v21; // rdx
  int *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  const CoinPackedVectorBase *v32; // rdi
  __int64 (**v33)(void); // rax
  int v34; // r13d
  __int64 (*v35)(void); // rdx
  __int64 v36; // r12
  __int64 (*v37)(void); // rax
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rdi
  __int64 v41; // r15
  __int64 v42; // rsi
  __int64 v43; // r14
  __int64 v44; // r11
  __int64 v45; // r10
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // xmm0_8
  int *v49; // r8
  int v50; // ecx
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  int *v56; // rdx
  int v57; // ecx
  __int64 v58; // rcx
  const CoinPackedVectorBase *const *v59; // [rsp+8h] [rbp-50h]

  if ( !a2 )
    return;
  v3 = a2;
  v6 = *((int *)this + 16);
  if ( v6 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v7 = a2 - 1;
  v8 = (int *)operator new[](4 * v6);
  v9 = *((_DWORD *)this + 16);
  if ( v9 )
  {
    v55 = v9 + 7;
    v56 = v8;
    if ( v9 >= 0 )
      v55 = *((_DWORD *)this + 16);
    v57 = v55 >> 3;
    if ( v57 > 0 )
    {
      v58 = (unsigned int)(v57 - 1);
      do
      {
        *(_OWORD *)v56 = 0;
        v56 += 8;
        *((_OWORD *)v56 - 1) = 0;
      }
      while ( &v8[8 * v58 + 8] != v56 );
      v56 = &v8[8 * (int)v58 + 8];
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_54;
      case 2:
        goto LABEL_53;
      case 3:
        goto LABEL_52;
      case 4:
        goto LABEL_51;
      case 5:
        goto LABEL_50;
      case 6:
        goto LABEL_49;
      case 7:
        v56[6] = 0;
LABEL_49:
        v56[5] = 0;
LABEL_50:
        v56[4] = 0;
LABEL_51:
        v56[3] = 0;
LABEL_52:
        v56[2] = 0;
LABEL_53:
        v56[1] = 0;
LABEL_54:
        *v56 = 0;
        break;
      default:
        break;
    }
    if ( v7 < 0 )
    {
LABEL_15:
      v24 = v9 - 1;
      v25 = v24;
      if ( v24 >= 0 )
      {
        v26 = *((_QWORD *)this + 6);
        v27 = *((_QWORD *)this + 7);
        v28 = v24;
        v29 = 4 * v28;
        if ( *(_DWORD *)(v26 + 4 * v28 + 4) < v8[v28] + *(_DWORD *)(v27 + 4 * v28) + *(_DWORD *)(v26 + 4 * v28) )
        {
LABEL_40:
          CoinPackedMatrix::resizeForAddingMinorVectors(this, v8);
        }
        else
        {
          v30 = 4 * (v28 - v25);
          while ( v30 != v29 )
          {
            v31 = v8[(unsigned __int64)v29 / 4 - 1] + *(_DWORD *)(v26 + v29 - 4) + *(_DWORD *)(v27 + v29 - 4);
            v29 -= 4;
            if ( v31 > *(_DWORD *)(v26 + v29 + 4) )
              goto LABEL_40;
          }
        }
      }
      goto LABEL_20;
    }
LABEL_5:
    v10 = v7;
    v11 = a3;
    v12 = v10;
    do
    {
      v13 = v11[v12];
      v14 = *(__int64 (***)(void))v13;
      v15 = **(__int64 (***)(void))v13;
      if ( (char *)v15 == (char *)CoinShallowPackedVector::getNumElements )
      {
        v16 = *((_DWORD *)v13 + 12);
      }
      else
      {
        v54 = v15();
        v13 = v11[v12];
        v16 = v54;
        v14 = *(__int64 (***)(void))v13;
      }
      v17 = v14[1];
      if ( (char *)v17 == (char *)CoinShallowPackedVector::getIndices )
        v18 = *((_QWORD *)v13 + 4);
      else
        v18 = v17();
      v19 = v16 - 1;
      if ( v16 - 1 >= 0 )
      {
        v20 = 4LL * (int)v19;
        v21 = (int *)(v18 + v20);
        v22 = (int *)(v20 - 4 - 4LL * v19 + v18);
        do
        {
          v23 = *v21--;
          ++v8[v23];
        }
        while ( v22 != v21 );
      }
      --v12;
    }
    while ( (int)v12 >= 0 );
    a3 = v11;
    v3 = a2;
    v7 = a2 - 1;
    v9 = *((_DWORD *)this + 16);
    goto LABEL_15;
  }
  if ( v7 >= 0 )
    goto LABEL_5;
LABEL_20:
  operator delete[](v8);
  if ( v3 > 0 )
  {
    v59 = &a3[(unsigned int)v7 + 1];
    do
    {
      v32 = *a3;
      v33 = **(__int64 (****)(void))a3;
      if ( (char *)*v33 == (char *)CoinShallowPackedVector::getNumElements )
      {
        v34 = *((_DWORD *)v32 + 12);
      }
      else
      {
        v53 = (*v33)();
        v32 = *a3;
        v34 = v53;
        v33 = **(__int64 (****)(void))a3;
      }
      v35 = v33[1];
      if ( (char *)v35 == (char *)CoinShallowPackedVector::getIndices )
      {
        v36 = *((_QWORD *)v32 + 4);
      }
      else
      {
        v52 = v35();
        v32 = *a3;
        v36 = v52;
        v33 = **(__int64 (****)(void))a3;
      }
      v37 = v33[2];
      if ( (char *)v37 == (char *)CoinShallowPackedVector::getElements )
        v38 = *((_QWORD *)v32 + 5);
      else
        v38 = v37();
      v39 = v34 - 1;
      if ( v34 - 1 >= 0 )
      {
        v40 = (int)v39;
        v41 = *((_QWORD *)this + 4);
        v42 = (int)v39 - 1LL;
        v43 = *((_QWORD *)this + 6);
        v44 = *((_QWORD *)this + 7);
        v45 = *((_QWORD *)this + 5);
        v46 = v42 - v39;
        while ( 1 )
        {
          v47 = *(int *)(v36 + 4 * v40);
          v48 = *(_QWORD *)(v38 + 8 * v40);
          v40 = v42;
          v49 = (int *)(v44 + 4 * v47);
          v50 = *v49 + 1;
          v51 = *v49 + *(_DWORD *)(v43 + 4 * v47);
          *(_QWORD *)(v41 + 8 * v51) = v48;
          *v49 = v50;
          *(_DWORD *)(v45 + 4 * v51) = *((_DWORD *)this + 17);
          if ( v46 == v42 )
            break;
          --v42;
        }
      }
      ++*((_DWORD *)this + 17);
      *((_DWORD *)this + 18) += v34;
      ++a3;
    }
    while ( v59 != a3 );
  }
}

