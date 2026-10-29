__int64 __fastcall CoinModel::addRow(
        CoinModel *this,
        int a2,
        const int *a3,
        const double *a4,
        double a5,
        double a6,
        char *a7)
{
  int v12; // eax
  _DWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  int v17; // r9d
  char v18; // r8
  int v19; // esi
  double v20; // xmm0_8
  __int64 v21; // r8
  char v22; // cl
  int v23; // edx
  int v24; // eax
  bool v25; // zf
  int v26; // r13d
  int v27; // esi
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 result; // rax
  int v37; // edx
  int v38; // r12d
  __int64 v39; // r10
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // xmm0_8
  int v45; // edi
  __int64 v46; // rsi
  void *v47; // rdi
  unsigned __int64 v48; // rdi
  __int64 v49; // rax
  unsigned __int64 v50; // rdi
  int v51; // edi
  __int64 v52; // r15
  __int64 v53; // r14
  __int64 v54; // rax
  _DWORD *v55; // rcx
  __int64 v56; // xmm0_8
  char s[65]; // [rsp+17h] [rbp-41h] BYREF

  v12 = *((_DWORD *)this + 176);
  switch ( v12 )
  {
    case -1:
      *((_DWORD *)this + 176) = 0;
      CoinModel::resize(this, 100, 0, 1000);
      break;
    case 1:
      CoinModel::createList(this, 1);
      break;
    case 3:
      CoinModel::badType(this);
  }
  if ( a2 <= 0 )
  {
    v26 = -1;
  }
  else
  {
    v13 = *((_DWORD **)this + 60);
    if ( *((_DWORD *)this + 124) < a2 )
    {
      if ( v13 )
        operator delete[](v13);
      v47 = *((void **)this + 61);
      if ( v47 )
        operator delete[](v47);
      *((_DWORD *)this + 124) = a2 + 100;
      v48 = a2 + 100;
      if ( v48 > 0x1FFFFFFFFFFFFFFELL
        || (v49 = operator new[](4 * v48),
            v50 = *((int *)this + 124),
            *((_QWORD *)this + 60) = v49,
            v50 > 0xFFFFFFFFFFFFFFFLL) )
      {
        __cxa_throw_bad_array_new_length();
      }
      v14 = operator new[](8 * v50);
      v13 = *((_DWORD **)this + 60);
      *((_QWORD *)this + 61) = v14;
    }
    else
    {
      v14 = *((_QWORD *)this + 61);
    }
    v15 = (unsigned int)(a2 - 1);
    v16 = 0;
    v17 = -1;
    v18 = 1;
    do
    {
      v19 = a3[v16 / 4];
      v20 = a4[v16 / 4];
      v13[v16 / 4] = v19;
      *(double *)(v14 + 2 * v16) = v20;
      if ( v19 <= v17 )
        v18 = 0;
      v16 += 4LL;
      v17 = v19;
    }
    while ( 4 * v15 + 4 != v16 );
    if ( !v18 )
    {
      CoinSort_2<int,double>(v13, &v13[a2], v14);
      v13 = *((_DWORD **)this + 60);
    }
    if ( (int)*v13 < 0 )
    {
      printf("bad index %d\n", *v13);
      abort();
    }
    v21 = (__int64)&v13[v15 + 1];
    v22 = 0;
    v23 = -1;
    do
    {
      v24 = *v13;
      v25 = v23 == *v13;
      v23 = *v13;
      if ( v25 )
        v22 = 1;
      ++v13;
    }
    while ( v13 != (_DWORD *)v21 );
    if ( v22 )
    {
      puts("duplicates - what do we want");
      abort();
    }
    v26 = -1;
    if ( v24 >= 0 )
      v26 = v24;
  }
  v27 = *((_DWORD *)this + 2);
  v28 = *((_DWORD *)this + 25);
  v29 = *((_DWORD *)this + 26);
  v30 = a2 + *((_DWORD *)this + 27);
  if ( v30 <= *((_DWORD *)this + 28) )
  {
    if ( v27 != v28 )
    {
      v31 = 0;
      v32 = 0;
      if ( v26 < v29 )
        goto LABEL_25;
      goto LABEL_24;
    }
    v31 = 0;
    v32 = 3 * v27 / 2 + 100;
LABEL_49:
    if ( v32 )
      goto LABEL_50;
    goto LABEL_44;
  }
  v31 = 3 * v30 / 2 + 1000;
  if ( 10 * v27 > 9 * v28 )
  {
    v51 = 3 * v28;
    goto LABEL_48;
  }
  v51 = 3 * v27;
  if ( v27 == v28 )
  {
LABEL_48:
    v32 = v51 / 2 + 100;
    goto LABEL_49;
  }
LABEL_44:
  if ( !v31 && v26 < v29 )
    goto LABEL_25;
  v32 = 0;
LABEL_50:
  if ( v26 >= v29 )
  {
LABEL_24:
    CoinModel::resize(this, v32, 3 * v26 / 2 + 100, v31);
    v27 = *((_DWORD *)this + 2);
    goto LABEL_25;
  }
  CoinModel::resize(this, v32, 0, v31);
  v27 = *((_DWORD *)this + 2);
LABEL_25:
  CoinModel::fillRows(this, v27, 0, 1);
  if ( !a7 )
  {
    v33 = *((int *)this + 2);
    if ( *((_BYTE *)this + 708) )
      goto LABEL_27;
    a7 = s;
    sprintf(s, "r%7.7d", v33);
  }
  CoinModelHash::addHash((CoinModel *)((char *)this + 144), *((_DWORD *)this + 2), a7);
  v33 = *((int *)this + 2);
LABEL_27:
  *(double *)(*((_QWORD *)this + 16) + 8 * v33) = a5;
  *(double *)(*((_QWORD *)this + 17) + 8 * v33) = a6;
  CoinModel::fillColumns(this, v26, 0, 0);
  if ( !*((_DWORD *)this + 176) )
  {
    v34 = *((int *)this + 2);
    v35 = *((_QWORD *)this + 36);
    result = *((unsigned int *)this + 80);
    v37 = *((_DWORD *)this + 2);
    v38 = *(_DWORD *)(v35 + 4 * v34);
    if ( a2 > 0 )
    {
      if ( (_DWORD)result )
      {
        v52 = 0;
        v53 = 16LL * v38;
        do
        {
          v54 = *((_QWORD *)this + 37) + v53;
          v55 = (_DWORD *)(*((_QWORD *)this + 60) + 4 * v52);
          v53 += 16;
          *(_DWORD *)v54 = v37;
          *(_DWORD *)(v54 + 4) = *v55;
          v56 = *(_QWORD *)(*((_QWORD *)this + 61) + 8 * v52++);
          *(_QWORD *)(v54 + 8) = v56;
          result = CoinModelHash2::addHash((CoinModel *)((char *)this + 312));
          v37 = *((_DWORD *)this + 2);
        }
        while ( (unsigned int)(a2 - 1) + 1LL != v52 );
        v38 += a2;
        v35 = *((_QWORD *)this + 36);
        v34 = v37;
      }
      else
      {
        v39 = *((_QWORD *)this + 37);
        v40 = *((_QWORD *)this + 60);
        v41 = *((_QWORD *)this + 61);
        v42 = 16LL * v38;
        result = 0;
        do
        {
          v43 = v39 + v42;
          v44 = *(_QWORD *)(v41 + 2 * result);
          v42 += 16;
          *(_DWORD *)v43 = v34;
          v45 = *(_DWORD *)(v40 + result);
          result += 4;
          *(_QWORD *)(v43 + 8) = v44;
          *(_DWORD *)(v43 + 4) = v45;
        }
        while ( 4LL * (unsigned int)(a2 - 1) + 4 != result );
        v38 += a2;
      }
    }
    *(_DWORD *)(v35 + 4 * v34 + 4) = v38;
    *((_DWORD *)this + 27) += a2;
    LODWORD(v46) = *((_DWORD *)this + 2);
    goto LABEL_34;
  }
  v46 = *((unsigned int *)this + 2);
  if ( !a2 )
    goto LABEL_55;
  if ( (*((_DWORD *)this + 178) & 0xFFFFFFFD) == 1 )
  {
    CoinModelLinkedList::addEasy(
      (_DWORD)this + 336,
      v46,
      a2,
      *((_QWORD *)this + 60),
      *((_QWORD *)this + 61),
      *((_QWORD *)this + 37),
      (CoinModel *)((char *)this + 312));
    if ( *((_DWORD *)this + 178) == 3 )
      CoinModelLinkedList::addHard((CoinModel *)((char *)this + 392));
    result = *((unsigned int *)this + 94);
    if ( *((_DWORD *)this + 27) >= (int)result )
      result = *((unsigned int *)this + 27);
    LODWORD(v46) = *((_DWORD *)this + 2);
    goto LABEL_56;
  }
  if ( *((_DWORD *)this + 178) == 2 )
  {
    CoinModelLinkedList::addHard(
      (CoinModel *)((char *)this + 392),
      v46,
      (unsigned int)a2,
      *((_QWORD *)this + 60),
      *((_QWORD *)this + 61),
      *((_QWORD *)this + 37),
      (CoinModel *)((char *)this + 312));
    result = *((unsigned int *)this + 108);
    if ( *((_DWORD *)this + 27) >= (int)result )
      result = *((unsigned int *)this + 27);
    LODWORD(v46) = *((_DWORD *)this + 2);
  }
  else
  {
LABEL_55:
    result = *((unsigned int *)this + 27);
  }
LABEL_56:
  if ( *((_DWORD *)this + 80) >= (int)result )
    result = *((unsigned int *)this + 80);
  *((_DWORD *)this + 27) = result;
LABEL_34:
  *((_DWORD *)this + 2) = v46 + 1;
  return result;
}

