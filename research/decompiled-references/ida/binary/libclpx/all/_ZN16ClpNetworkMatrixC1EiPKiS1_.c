// Alternative name is '_ZN16ClpNetworkMatrixC2EiPKiS1_'
void __fastcall ClpNetworkMatrix::ClpNetworkMatrix(ClpNetworkMatrix *this, int a2, const int *a3, const int *a4)
{
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // edx
  int v12; // esi
  int v13; // esi

  ClpMatrixBase::ClpMatrixBase(this);
  *((_DWORD *)this + 13) = 11;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  v8 = 2 * a2;
  *(_QWORD *)this = off_4D07B8;
  if ( v8 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v9 = operator new[](4 * v8);
  *((_QWORD *)this + 13) = v9;
  *((_DWORD *)this + 28) = -1;
  *((_DWORD *)this + 29) = a2;
  *((_BYTE *)this + 120) = 1;
  if ( a2 <= 0 )
  {
    *((_DWORD *)this + 28) = 0;
  }
  else
  {
    v10 = 0;
    v11 = -1;
    do
    {
      v12 = a3[v10 / 4];
      *(_DWORD *)(v9 + 2 * v10) = v12;
      if ( v12 >= v11 )
        v11 = v12;
      *((_DWORD *)this + 28) = v11;
      v13 = a4[v10 / 4];
      *(_DWORD *)(v9 + 2 * v10 + 4) = v13;
      if ( v13 >= v11 )
        v11 = v13;
      v10 += 4LL;
      *((_DWORD *)this + 28) = v11;
    }
    while ( 4LL * (unsigned int)(a2 - 1) + 4 != v10 );
    *((_DWORD *)this + 28) = v11 + 1;
  }
}

