int **__fastcall CoinPackedMatrix::assignMatrix(
        CoinPackedMatrix *this,
        char a2,
        int a3,
        int a4,
        int a5,
        double **a6,
        int **a7,
        int **a8,
        int **a9,
        int a10,
        int a11)
{
  unsigned __int64 v12; // r13
  unsigned __int64 v14; // rbp
  int v15; // r8d
  __int64 v16; // rax
  _DWORD *v17; // rax
  void *v19; // rdi
  _DWORD *v20; // rax
  _DWORD *v21; // r10
  int *v22; // r8
  int v23; // ecx
  int *v24; // rdx
  _DWORD *v25; // rsi
  int v26; // edi
  int v27; // ebx

  v12 = a4;
  v14 = a10;
  CoinPackedMatrix::gutsOfDestructor(this);
  v15 = a5;
  if ( a10 == -1 )
    v14 = v12;
  *((_QWORD *)this + 4) = *a6;
  v16 = (__int64)*a7;
  *((_BYTE *)this + 8) = a2;
  *((_QWORD *)this + 5) = v16;
  v17 = *a8;
  *((_DWORD *)this + 18) = a5;
  if ( a11 != -1 )
    v15 = a11;
  *((_DWORD *)this + 16) = v12;
  *((_DWORD *)this + 17) = a3;
  *((_QWORD *)this + 6) = v17;
  *((_DWORD *)this + 19) = v14;
  *((_DWORD *)this + 20) = v15;
  if ( !*a9 )
  {
    v19 = *((void **)this + 7);
    if ( v19 )
    {
      operator delete[](v19);
      v14 = *((int *)this + 19);
    }
    if ( v14 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v20 = (_DWORD *)operator new[](4 * v14);
    *((_QWORD *)this + 7) = v20;
    v21 = *a8;
    v22 = &(*a8)[(int)v12 + 1];
    if ( v22 != *a8 + 1 )
    {
      v23 = v21[1];
      v24 = v21 + 2;
      *v20 = v23;
      if ( v22 == v21 + 2 )
      {
LABEL_16:
        *v20 = v23 - *v21;
        goto LABEL_7;
      }
      v25 = v20;
      do
      {
        v26 = *v24++;
        ++v25;
        v27 = v26 - v23;
        v23 = v26;
        *v25 = v27;
      }
      while ( v22 != v24 );
    }
    v23 = *v20;
    goto LABEL_16;
  }
  *((_QWORD *)this + 7) = *a9;
LABEL_7:
  *a6 = nullptr;
  *a7 = nullptr;
  *a8 = nullptr;
  *a9 = nullptr;
  return a9;
}

