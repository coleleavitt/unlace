__int64 __fastcall CoinMessageHandler::gutsOfCopy(CoinMessageHandler *this, const CoinMessageHandler *a2)
{
  char *v4; // rsi
  char *v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // r15
  char *v8; // r14
  char *v9; // r13
  size_t v10; // r12
  unsigned __int64 v11; // rax
  _BYTE *v12; // rdi
  size_t v13; // rdx
  char *v14; // r12
  _BYTE *v15; // r15
  char *v16; // r14
  char *v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r12
  unsigned __int64 v20; // rax
  _BYTE *v21; // rdi
  size_t v22; // rdx
  char *v23; // r12
  __int64 v24; // rcx
  char *v25; // r14
  _BYTE *v26; // rdi
  __int64 v27; // rax
  size_t v28; // r13
  _BYTE *v29; // rax
  size_t v30; // rdx
  __int64 v31; // rax
  __int64 result; // rax
  char *v33; // rcx
  __int64 v34; // rax
  char *v35; // rsi
  signed __int64 v36; // rsi
  char *v37; // rsi
  size_t v38; // rcx
  char *v39; // rsi
  char *v40; // rcx
  __int64 v41; // rax
  char *v42; // rax
  char *v43; // r12
  void *v44; // rdi
  char *v45; // [rsp+8h] [rbp-40h]
  char *v46; // [rsp+8h] [rbp-40h]

  v4 = (char *)a2 + 128;
  v5 = (char *)this + 128;
  *((_DWORD *)v5 - 6) = *((_DWORD *)v4 - 6);
  *((_DWORD *)v5 - 1) = *((_DWORD *)v4 - 1);
  v6 = *((_BYTE **)v4 + 52);
  if ( v6 && !*v6 )
  {
    *v6 = 37;
    CoinOneMessage::operator=(v5);
    **((_BYTE **)a2 + 68) = 0;
  }
  else
  {
    CoinOneMessage::operator=(v5);
  }
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  if ( a2 == this )
    goto LABEL_18;
  v7 = *((_BYTE **)a2 + 2);
  v8 = *((char **)a2 + 1);
  v9 = *((char **)this + 1);
  v10 = v7 - v8;
  v11 = (v7 - v8) >> 3;
  if ( v11 > (__int64)(*((_QWORD *)this + 3) - (_QWORD)v9) >> 3 )
  {
    v33 = nullptr;
    if ( v11 )
    {
      if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
        goto LABEL_60;
      v34 = operator new(*((_QWORD *)a2 + 2) - (_QWORD)v8);
      v9 = *((char **)this + 1);
      v33 = (char *)v34;
    }
    if ( v7 != v8 )
      v33 = (char *)memmove(v33, v8, v10);
    if ( v9 )
    {
      v45 = v33;
      operator delete(v9);
      v33 = v45;
    }
    v14 = &v33[v10];
    *((_QWORD *)this + 1) = v33;
    *((_QWORD *)this + 3) = v14;
  }
  else
  {
    v12 = *((_BYTE **)this + 2);
    v13 = v12 - v9;
    if ( v11 > (v12 - v9) >> 3 )
    {
      v39 = &v8[v13];
      if ( v8 == &v8[v13] )
      {
        if ( v7 == v39 )
          goto LABEL_8;
      }
      else
      {
        memmove(*((void **)this + 1), *((const void **)a2 + 1), v13);
        v12 = *((_BYTE **)this + 2);
        v9 = *((char **)this + 1);
        v7 = *((_BYTE **)a2 + 2);
        v39 = (char *)(*((_QWORD *)a2 + 1) + v12 - v9);
        if ( v7 == v39 )
          goto LABEL_8;
      }
      memmove(v12, v39, v7 - v39);
      v14 = (char *)(*((_QWORD *)this + 1) + v10);
    }
    else
    {
      if ( v7 == v8 )
      {
LABEL_8:
        v14 = &v9[v10];
        goto LABEL_9;
      }
      memmove(*((void **)this + 1), *((const void **)a2 + 1), *((_QWORD *)a2 + 2) - (_QWORD)v8);
      v14 = (char *)(*((_QWORD *)this + 1) + v10);
    }
  }
LABEL_9:
  v15 = *((_BYTE **)a2 + 5);
  v16 = *((char **)a2 + 4);
  v17 = *((char **)this + 4);
  v18 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 2) = v14;
  v19 = v15 - v16;
  v20 = (v15 - v16) >> 2;
  if ( v20 > (v18 - (__int64)v17) >> 2 )
  {
    v40 = nullptr;
    if ( !v20 )
    {
LABEL_43:
      if ( v15 != v16 )
        v40 = (char *)memmove(v40, v16, v15 - v16);
      if ( v17 )
      {
        v46 = v40;
        operator delete(v17);
        v40 = v46;
      }
      v23 = &v40[v19];
      *((_QWORD *)this + 4) = v40;
      *((_QWORD *)this + 6) = v23;
      goto LABEL_13;
    }
    if ( v20 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      v41 = operator new(v15 - v16);
      v17 = *((char **)this + 4);
      v40 = (char *)v41;
      goto LABEL_43;
    }
LABEL_60:
    std::__throw_bad_alloc();
  }
  v21 = *((_BYTE **)this + 5);
  v22 = v21 - v17;
  if ( v20 > (v21 - v17) >> 2 )
  {
    v35 = &v16[v22];
    if ( v16 == &v16[v22] )
    {
      if ( v15 == v35 )
        goto LABEL_12;
    }
    else
    {
      memmove(v17, v16, v22);
      v21 = *((_BYTE **)this + 5);
      v17 = *((char **)this + 4);
      v15 = *((_BYTE **)a2 + 5);
      v35 = (char *)(*((_QWORD *)a2 + 4) + v21 - v17);
      if ( v15 == v35 )
        goto LABEL_12;
    }
    memmove(v21, v35, v15 - v35);
    v23 = (char *)(*((_QWORD *)this + 4) + v19);
  }
  else
  {
    if ( v15 == v16 )
    {
LABEL_12:
      v23 = &v17[v19];
      goto LABEL_13;
    }
    memmove(v17, v16, v15 - v16);
    v23 = (char *)(*((_QWORD *)this + 4) + v19);
  }
LABEL_13:
  v24 = *((_QWORD *)a2 + 8);
  v25 = *((char **)a2 + 7);
  v26 = *((_BYTE **)this + 7);
  v27 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = v23;
  v28 = v24 - (_QWORD)v25;
  if ( v24 - (__int64)v25 > (unsigned __int64)(v27 - (_QWORD)v26) )
  {
    v42 = (char *)operator new(v24 - (_QWORD)v25);
    v43 = v42;
    if ( v28 )
      memcpy(v42, v25, v28);
    v44 = *((void **)this + 7);
    if ( v44 )
      operator delete(v44);
    *((_QWORD *)this + 7) = v43;
    *((_QWORD *)this + 9) = &v43[v28];
    *((_QWORD *)this + 8) = &v43[v28];
  }
  else
  {
    v29 = *((_BYTE **)this + 8);
    v30 = v29 - v26;
    if ( v28 <= v29 - v26 )
    {
      if ( v28 )
      {
        memmove(v26, v25, v24 - (_QWORD)v25);
        v26 = (_BYTE *)(v28 + *((_QWORD *)this + 7));
      }
      goto LABEL_17;
    }
    v36 = 0;
    if ( v30 )
    {
      memmove(v26, v25, v30);
      v29 = *((_BYTE **)this + 8);
      v26 = *((_BYTE **)this + 7);
      v25 = *((char **)a2 + 7);
      v24 = *((_QWORD *)a2 + 8);
      v36 = v29 - v26;
    }
    v37 = &v25[v36];
    v38 = v24 - (_QWORD)v37;
    if ( v38 )
    {
      memmove(v29, v37, v38);
      v26 = (_BYTE *)(v28 + *((_QWORD *)this + 7));
LABEL_17:
      *((_QWORD *)this + 8) = v26;
      goto LABEL_18;
    }
    *((_QWORD *)this + 8) = &v26[v28];
  }
LABEL_18:
  std::vector<std::string>::operator=((char *)this + 80, (char *)a2 + 80);
  v31 = *((_QWORD *)a2 + 68);
  if ( v31 )
    v31 = (CoinMessageHandler *)((char *)this + v31) - a2;
  *((_QWORD *)this + 68) = v31;
  *((_QWORD *)this + 69) = *((_QWORD *)a2 + 69);
  *((_QWORD *)this + 193) = *((_QWORD *)a2 + 193);
  qmemcpy(
    (void *)(((unsigned __int64)this + 560) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(a2 - (CoinMessageHandler *)((char *)this - (((unsigned __int64)this + 560) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((_DWORD)this + 552 - (((_DWORD)this + 560) & 0xFFFFFFF8) + 1000) >> 3));
  *((_QWORD *)this + 194) = (char *)this + *((_QWORD *)a2 + 194) - (_QWORD)a2;
  *((_DWORD *)this + 392) = *((_DWORD *)a2 + 392);
  *((_DWORD *)this + 393) = *((_DWORD *)a2 + 393);
  *((_QWORD *)this + 197) = *((_QWORD *)a2 + 197);
  std::string::assign((CoinMessageHandler *)((char *)this + 1560), (const CoinMessageHandler *)((char *)a2 + 1560));
  strcpy((char *)this + 1584, (const char *)a2 + 1584);
  result = *((unsigned int *)a2 + 398);
  *((_DWORD *)this + 398) = result;
  return result;
}

