// Alternative name is '_ZN21ClpPlusMinusOneMatrixC2EiibPKiS1_S1_'
void __fastcall ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(
        ClpPlusMinusOneMatrix *this,
        int a2,
        int a3,
        char a4,
        const int *a5,
        const int *a6,
        const int *src)
{
  unsigned __int64 v11; // rbp
  int v12; // r15d
  __int64 v13; // r13
  void *v14; // rax
  void *v15; // rcx
  void *v16; // rax
  void *v17; // rcx
  void *v18; // rax
  void *v19; // rcx
  int v20; // [rsp+Ch] [rbp-3Ch]

  ClpMatrixBase::ClpMatrixBase(this);
  *((_DWORD *)this + 33) = a3;
  *((_DWORD *)this + 32) = a2;
  *((_DWORD *)this + 13) = 12;
  *((_BYTE *)this + 136) = a4;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  if ( !a4 )
    a3 = a2;
  *(_QWORD *)this = off_4D0E88;
  v11 = a3;
  v12 = a3 + 1;
  v13 = 4 * v11;
  v20 = a6[v11];
  if ( a6 )
  {
    if ( (unsigned __int64)v12 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v14 = (void *)operator new[](v13 + 4);
    v15 = memcpy(v14, a6, v13 + 4);
  }
  else
  {
    v15 = nullptr;
  }
  *((_QWORD *)this + 13) = v15;
  if ( src )
  {
    if ( v11 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v16 = (void *)operator new[](4 * v11);
    v17 = memcpy(v16, src, 4 * v11);
  }
  else
  {
    v17 = nullptr;
  }
  *((_QWORD *)this + 14) = v17;
  if ( a5 )
  {
    if ( (unsigned __int64)v20 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v18 = (void *)operator new[](4LL * v20);
    v19 = memcpy(v18, a5, 4LL * v20);
  }
  else
  {
    v19 = nullptr;
  }
  *((_QWORD *)this + 15) = v19;
  ClpPlusMinusOneMatrix::checkValid(this, 0);
}

