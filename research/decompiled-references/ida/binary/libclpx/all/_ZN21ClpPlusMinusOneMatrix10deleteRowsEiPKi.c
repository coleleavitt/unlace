void __fastcall ClpPlusMinusOneMatrix::deleteRows(ClpPlusMinusOneMatrix *this, int a2, const int *a3)
{
  unsigned __int64 v4; // rdi
  char *v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  const int *v10; // rdx
  __int64 v11; // rsi
  const int *v12; // rdi
  char *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  int *v17; // rax
  __int64 v18; // rdi
  bool v19; // cf
  unsigned __int64 v20; // r12
  void *v21; // rdi
  int v22; // ebx
  __int64 v23; // rdi
  int v24; // edx
  _DWORD *v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r9
  int v35; // edx
  _DWORD *v36; // r10
  _DWORD *v37; // r9
  int v38; // r15d
  int v39; // esi
  __int64 v40; // r11
  int *v41; // rcx
  unsigned __int64 v42; // r14
  int v43; // esi
  __int64 v44; // r11
  int v45; // r15d
  int v46; // esi
  __int64 v47; // r11
  int *v48; // rcx
  unsigned __int64 v49; // r14
  int v50; // esi
  __int64 v51; // r11
  int v52; // esi
  void *v53; // rdi
  void *exception; // r13
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+20h] [rbp-48h]

  v4 = *((int *)this + 32);
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v7 = (char *)operator new[](4 * v4);
  v8 = *((int *)this + 32);
  memset(v7, 0, 4 * v8);
  if ( a2 <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v10 = a3;
    v11 = 0;
    v9 = 0;
    v12 = &a3[a2 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v14 = *v10;
        if ( (int)v8 > (int)v14 && (int)v14 >= 0 )
          break;
        ++v10;
        v9 = (unsigned int)(v9 + 1);
        if ( v12 == v10 )
          goto LABEL_10;
      }
      v13 = &v7[4 * v14];
      if ( *(_DWORD *)v13 )
        v11 = (unsigned int)(v11 + 1);
      else
        *(_DWORD *)v13 = 1;
      ++v10;
    }
    while ( v12 != v10 );
LABEL_10:
    if ( (_DWORD)v9 )
    {
      exception = __cxa_allocate_exception(0x30u);
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v55 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v55 - 24);
      if ( (_UNKNOWN *)(v56 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v56 - 24);
      if ( (_UNKNOWN *)(v57 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v57 - 24);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  v15 = *((int *)this + 33);
  v16 = *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v15);
  if ( v16 <= 0 )
  {
    v20 = 0;
  }
  else
  {
    v9 = *((_QWORD *)this + 15);
    v15 = (unsigned int)(v16 - 1);
    v17 = (int *)(v9 + 4);
    v18 = v9 + 4 + 4 * v15;
    LODWORD(v15) = 0;
    while ( 1 )
    {
      v19 = *(_DWORD *)&v7[4 * *(int *)v9] == 0;
      v9 = (unsigned __int64)v17;
      LODWORD(v15) = v19 + (_DWORD)v15;
      if ( (int *)v18 == v17 )
        break;
      ++v17;
    }
    v15 = (int)v15;
    v20 = 4LL * (int)v15;
  }
  v21 = *((void **)this + 12);
  v22 = v11 + v8 - a2;
  if ( v21 )
    operator delete[](v21);
  v23 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0;
  if ( v23 )
    (*(void (__fastcall **)(__int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v23 + 8LL))(v23, v11, v15, v9);
  v24 = *((_DWORD *)this + 32);
  *((_QWORD *)this + 11) = 0;
  if ( v24 > 0 )
  {
    v25 = v7;
    v26 = (__int64)&v7[4 * (v24 - 1) + 4];
    v27 = 0;
    while ( *v25 )
    {
LABEL_25:
      *v25++ = -1;
      if ( (_DWORD *)v26 == v25 )
        goto LABEL_26;
    }
    while ( 1 )
    {
      *v25++ = v27;
      if ( (_DWORD *)v26 == v25 )
        break;
      ++v27;
      if ( *v25 )
        goto LABEL_25;
    }
  }
LABEL_26:
  v28 = operator new[](v20);
  v29 = *((int *)this + 33);
  v30 = v28;
  v31 = *((_QWORD *)this + 13);
  if ( (int)v29 <= 0 )
  {
    v35 = 0;
  }
  else
  {
    v32 = *((_QWORD *)this + 14);
    v33 = 1;
    v34 = 4LL * v22;
    v35 = 0;
    v36 = (_DWORD *)(v31 + v34);
    v37 = (_DWORD *)(v32 + v34);
    do
    {
      v38 = *(_DWORD *)(v31 + 4 * v33 - 4);
      v39 = *(_DWORD *)(v32 + 4 * v33 - 4);
      *v36 = v35;
      if ( v38 < v39 )
      {
        v40 = *((_QWORD *)this + 15);
        v41 = (int *)(v40 + 4LL * v38);
        v42 = v40 + 4 * (v38 + (unsigned __int64)(unsigned int)(v39 - 1 - v38)) + 4;
        do
        {
          v43 = *(_DWORD *)&v7[4 * *v41];
          if ( v43 >= 0 )
          {
            v44 = v35++;
            *(_DWORD *)(v30 + 4 * v44) = v43;
          }
          ++v41;
        }
        while ( v41 != (int *)v42 );
      }
      v45 = *(_DWORD *)(v32 + 4 * v33 - 4);
      v46 = *(_DWORD *)(v31 + 4 * v33);
      *v37 = v35;
      if ( v45 < v46 )
      {
        v47 = *((_QWORD *)this + 15);
        v48 = (int *)(v47 + 4LL * v45);
        v49 = v47 + 4 * (v45 + (unsigned __int64)(unsigned int)(v46 - 1 - v45)) + 4;
        do
        {
          v50 = *(_DWORD *)&v7[4 * *v48];
          if ( v50 >= 0 )
          {
            v51 = v35++;
            *(_DWORD *)(v30 + 4 * v51) = v50;
          }
          ++v48;
        }
        while ( (int *)v49 != v48 );
      }
      v29 = *((int *)this + 33);
      v52 = v33++;
    }
    while ( (int)v29 > v52 );
  }
  *(_DWORD *)(v31 + 4 * v29) = v35;
  operator delete[](v7);
  v53 = *((void **)this + 15);
  if ( v53 )
    operator delete[](v53);
  *((_QWORD *)this + 15) = v30;
  *((_DWORD *)this + 32) = v22;
}

