__int64 __fastcall CoinModel::addColumn(
        CoinModel *this,
        int a2,
        const int *a3,
        const double *a4,
        double a5,
        double a6,
        double a7,
        char *a8,
        char a9)
{
  int v15; // eax
  _DWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  int v20; // r10d
  char v21; // r8
  int v22; // esi
  double v23; // xmm0_8
  __int64 v24; // r8
  char v25; // cl
  int v26; // edx
  int v27; // eax
  bool v28; // zf
  int v29; // r14d
  int v30; // esi
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // edx
  __int64 v36; // rdx
  __int64 result; // rax
  __int64 v38; // rsi
  void *v39; // rdi
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rdi
  int v43; // edi
  __int64 v44; // r14
  __int64 v45; // r13
  int v46; // ecx
  int v47; // r12d
  __int64 v48; // r10
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // xmm0_8
  int v54; // edi
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rax
  _DWORD *v58; // rdx
  __int64 v59; // xmm0_8
  char s[65]; // [rsp+27h] [rbp-41h] BYREF

  v15 = *((_DWORD *)this + 176);
  if ( v15 == -1 )
  {
    *((_DWORD *)this + 176) = 1;
    CoinModel::resize(this, 0, 100, 1000);
  }
  else if ( v15 )
  {
    if ( v15 == 3 )
      CoinModel::badType(this);
  }
  else
  {
    CoinModel::createList(this, 2);
  }
  if ( a2 <= 0 )
  {
    v29 = -1;
  }
  else
  {
    v16 = *((_DWORD **)this + 60);
    if ( *((_DWORD *)this + 124) < a2 )
    {
      if ( v16 )
        operator delete[](v16);
      v39 = *((void **)this + 61);
      if ( v39 )
        operator delete[](v39);
      *((_DWORD *)this + 124) = a2 + 100;
      v40 = a2 + 100;
      if ( v40 > 0x1FFFFFFFFFFFFFFELL
        || (v41 = operator new[](4 * v40),
            v42 = *((int *)this + 124),
            *((_QWORD *)this + 60) = v41,
            v42 > 0xFFFFFFFFFFFFFFFLL) )
      {
        __cxa_throw_bad_array_new_length();
      }
      v17 = operator new[](8 * v42);
      v16 = *((_DWORD **)this + 60);
      *((_QWORD *)this + 61) = v17;
    }
    else
    {
      v17 = *((_QWORD *)this + 61);
    }
    v18 = (unsigned int)(a2 - 1);
    v19 = 0;
    v20 = -1;
    v21 = 1;
    do
    {
      v22 = a3[v19 / 4];
      v23 = a4[v19 / 4];
      v16[v19 / 4] = v22;
      *(double *)(v17 + 2 * v19) = v23;
      if ( v22 <= v20 )
        v21 = 0;
      v19 += 4LL;
      v20 = v22;
    }
    while ( 4 * v18 + 4 != v19 );
    if ( !v21 )
    {
      CoinSort_2<int,double>(v16, &v16[a2], v17);
      v16 = *((_DWORD **)this + 60);
      v18 = (unsigned int)(a2 - 1);
    }
    if ( (int)*v16 < 0 )
    {
      printf("bad index %d\n", *v16);
      abort();
    }
    v24 = (__int64)&v16[v18 + 1];
    v25 = 0;
    v26 = -1;
    do
    {
      v27 = *v16;
      v28 = v26 == *v16;
      v26 = *v16;
      if ( v28 )
        v25 = 1;
      ++v16;
    }
    while ( v16 != (_DWORD *)v24 );
    if ( v25 )
    {
      puts("duplicates - what do we want");
      abort();
    }
    v29 = -1;
    if ( v27 >= 0 )
      v29 = v27;
  }
  v30 = *((_DWORD *)this + 3);
  v31 = *((_DWORD *)this + 26);
  v32 = *((_DWORD *)this + 25);
  v33 = a2 + *((_DWORD *)this + 27);
  if ( v33 <= *((_DWORD *)this + 28) )
  {
    if ( v31 != v30 )
    {
      v34 = 0;
      v35 = 0;
      if ( v29 < v32 )
        goto LABEL_25;
      goto LABEL_24;
    }
    v34 = 0;
    v35 = 3 * v30 / 2 + 100;
LABEL_46:
    if ( v35 )
      goto LABEL_47;
    goto LABEL_41;
  }
  v34 = 3 * v33 / 2 + 1000;
  if ( 10 * v30 > 9 * v31 )
  {
    v43 = 3 * v31;
    goto LABEL_45;
  }
  v43 = 3 * v30;
  if ( v31 == v30 )
  {
LABEL_45:
    v35 = v43 / 2 + 100;
    goto LABEL_46;
  }
LABEL_41:
  if ( !v34 && v29 < v32 )
    goto LABEL_25;
  v35 = 0;
LABEL_47:
  if ( v29 >= v32 )
  {
LABEL_24:
    CoinModel::resize(this, 3 * v29 / 2 + 100, v35, v34);
    v30 = *((_DWORD *)this + 3);
    goto LABEL_25;
  }
  CoinModel::resize(this, 0, v35, v34);
  v30 = *((_DWORD *)this + 3);
LABEL_25:
  CoinModel::fillColumns(this, v30, 0, 1);
  if ( a8 )
  {
LABEL_26:
    CoinModelHash::addHash((CoinModel *)((char *)this + 208), *((_DWORD *)this + 3), a8);
    v36 = *((int *)this + 3);
    goto LABEL_27;
  }
  v36 = *((int *)this + 3);
  if ( !*((_BYTE *)this + 708) )
  {
    a8 = s;
    sprintf(s, "c%7.7d", v36);
    goto LABEL_26;
  }
LABEL_27:
  *(double *)(*((_QWORD *)this + 24) + 8 * v36) = a5;
  *(double *)(*((_QWORD *)this + 25) + 8 * v36) = a6;
  *(double *)(*((_QWORD *)this + 23) + 8 * v36) = a7;
  *(_DWORD *)(*((_QWORD *)this + 30) + 4 * v36) = a9 != 0;
  result = CoinModel::fillRows(this, v29, 0, 0);
  if ( *((_DWORD *)this + 176) == 1 )
  {
    v44 = *((int *)this + 3);
    v45 = *((_QWORD *)this + 36);
    result = *((unsigned int *)this + 80);
    v46 = *((_DWORD *)this + 3);
    v47 = *(_DWORD *)(v45 + 4 * v44);
    if ( a2 > 0 )
    {
      if ( (_DWORD)result )
      {
        v55 = 0;
        v56 = 16LL * v47;
        do
        {
          v57 = *((_QWORD *)this + 37) + v56;
          v58 = (_DWORD *)(*((_QWORD *)this + 60) + 4 * v55);
          v56 += 16;
          *(_DWORD *)(v57 + 4) = v46;
          *(_DWORD *)v57 = *v58;
          v59 = *(_QWORD *)(*((_QWORD *)this + 61) + 8 * v55++);
          *(_QWORD *)(v57 + 8) = v59;
          result = CoinModelHash2::addHash((CoinModel *)((char *)this + 312));
          v46 = *((_DWORD *)this + 3);
        }
        while ( (unsigned int)(a2 - 1) + 1LL != v55 );
        v47 += a2;
        v45 = *((_QWORD *)this + 36);
        v44 = v46;
      }
      else
      {
        v48 = *((_QWORD *)this + 37);
        v49 = *((_QWORD *)this + 60);
        v50 = *((_QWORD *)this + 61);
        v51 = 16LL * v47;
        result = 0;
        do
        {
          v52 = v48 + v51;
          v53 = *(_QWORD *)(v50 + 2 * result);
          v51 += 16;
          *(_DWORD *)(v52 + 4) = v44;
          v54 = *(_DWORD *)(v49 + result);
          result += 4;
          *(_QWORD *)(v52 + 8) = v53;
          *(_DWORD *)v52 = v54;
        }
        while ( 4LL * (unsigned int)(a2 - 1) + 4 != result );
        v47 += a2;
      }
    }
    *(_DWORD *)(v45 + 4 * v44 + 4) = v47;
    *((_DWORD *)this + 27) += a2;
    LODWORD(v38) = *((_DWORD *)this + 3);
  }
  else
  {
    v38 = *((unsigned int *)this + 3);
    if ( a2 )
    {
      result = *((unsigned int *)this + 178);
      if ( (unsigned int)(result - 2) <= 1 )
      {
        CoinModelLinkedList::addEasy(
          (_DWORD)this + 392,
          v38,
          a2,
          *((_QWORD *)this + 60),
          *((_QWORD *)this + 61),
          *((_QWORD *)this + 37),
          (CoinModel *)((char *)this + 312));
        if ( *((_DWORD *)this + 178) == 3 )
          CoinModelLinkedList::addHard((CoinModel *)((char *)this + 336));
        result = *((unsigned int *)this + 108);
        if ( *((_DWORD *)this + 27) >= (int)result )
          result = *((unsigned int *)this + 27);
        LODWORD(v38) = *((_DWORD *)this + 3);
        *((_DWORD *)this + 27) = result;
      }
      else if ( (_DWORD)result == 1 )
      {
        CoinModelLinkedList::addHard(
          (CoinModel *)((char *)this + 336),
          v38,
          (unsigned int)a2,
          *((_QWORD *)this + 60),
          *((_QWORD *)this + 61),
          *((_QWORD *)this + 37),
          (CoinModel *)((char *)this + 312));
        result = *((unsigned int *)this + 94);
        if ( *((_DWORD *)this + 27) >= (int)result )
          result = *((unsigned int *)this + 27);
        LODWORD(v38) = *((_DWORD *)this + 3);
        *((_DWORD *)this + 27) = result;
      }
    }
  }
  *((_DWORD *)this + 3) = v38 + 1;
  return result;
}

