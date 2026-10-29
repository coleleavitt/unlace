__int64 __fastcall CoinLpIO::freeAll(CoinLpIO *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  int v11; // eax
  bool v12; // cc
  int v13; // edx
  _QWORD *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 result; // rax
  __int64 v20; // rdi

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 9) = 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *((void **)this + 12);
  *((_QWORD *)this + 10) = 0;
  free(v4);
  v5 = *((void **)this + 11);
  *((_QWORD *)this + 12) = 0;
  free(v5);
  v6 = *((void **)this + 14);
  *((_QWORD *)this + 11) = 0;
  free(v6);
  v7 = *((void **)this + 13);
  *((_QWORD *)this + 14) = 0;
  free(v7);
  v8 = *((void **)this + 15);
  *((_QWORD *)this + 13) = 0;
  free(v8);
  v9 = *((void **)this + 16);
  *((_QWORD *)this + 15) = 0;
  free(v9);
  v10 = *((void **)this + 17);
  *((_QWORD *)this + 16) = 0;
  free(v10);
  v11 = *((_DWORD *)this + 40);
  *((_QWORD *)this + 17) = 0;
  if ( v11 > 0 )
  {
    free(*((void **)this + 18));
    v12 = *((_DWORD *)this + 40) <= 1;
    *((_QWORD *)this + 18) = 0;
    if ( !v12 )
    {
      free(*((void **)this + 19));
      *((_QWORD *)this + 19) = 0;
    }
  }
  free(*((void **)this + 23));
  v13 = *((_DWORD *)this + 50);
  *((_QWORD *)this + 23) = 0;
  v14 = *((_QWORD **)this + 24);
  if ( v13 > 0 )
  {
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = v14[v15];
        if ( !v16 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v13 = *((_DWORD *)this + 50);
        ++v15;
        v14 = *((_QWORD **)this + 24);
        if ( v13 <= (int)v15 )
          goto LABEL_12;
      }
      ++v15;
    }
    while ( (int)v15 < v13 );
  }
LABEL_12:
  if ( v14 )
    operator delete[](v14);
  v17 = *(void **)this;
  *((_QWORD *)this + 24) = 0;
  *((_DWORD *)this + 50) = 0;
  free(v17);
  v18 = *((void **)this + 26);
  *(_QWORD *)this = 0;
  free(v18);
  *((_QWORD *)this + 26) = 0;
  CoinLpIO::freePreviousNames(this, 0);
  result = CoinLpIO::freePreviousNames(this, 1);
  v20 = *((_QWORD *)this + 172);
  if ( v20 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  *((_QWORD *)this + 172) = 0;
  return result;
}

