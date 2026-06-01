__int64 __fastcall ClpNetworkMatrix::dubiousWeights(ClpNetworkMatrix *this, const ClpSimplex *a2, int *a3)
{
  __int64 v4; // r12
  int v5; // r13d
  unsigned __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  int *v11; // r8
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // edx

  v4 = *((int *)a2 + 27);
  v5 = *((_DWORD *)a2 + 26);
  v6 = v5 + (int)v4;
  if ( v6 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v8 = operator new[](4 * v6);
  v9 = v8;
  if ( (int)v4 > 0 )
  {
    v10 = *((_QWORD *)this + 13);
    v11 = (int *)v8;
    v12 = 0;
    do
    {
      v13 = *(int *)(v10 + 4LL * v12);
      v14 = *(int *)(v10 + 4LL * v12 + 4);
      v15 = 0;
      if ( (int)v13 >= 0 )
        v15 = a3[v13];
      if ( (int)v14 >= 0 )
        v15 += a3[v14];
      v12 += 2;
      *v11++ = v15;
    }
    while ( 2 * (_DWORD)v4 != v12 );
  }
  if ( v5 > 0 )
    memcpy((void *)(v9 + 4 * v4), a3, 4LL * (unsigned int)(v5 - 1) + 4);
  return v9;
}

