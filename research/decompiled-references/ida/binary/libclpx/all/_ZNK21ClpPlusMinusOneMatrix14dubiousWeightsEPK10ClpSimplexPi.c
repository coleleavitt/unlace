__int64 __fastcall ClpPlusMinusOneMatrix::dubiousWeights(ClpPlusMinusOneMatrix *this, const ClpSimplex *a2, int *a3)
{
  __int64 v4; // r13
  int v5; // r14d
  unsigned __int64 v6; // rdi
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r8
  int v12; // ecx
  int v13; // edx
  __int64 v14; // r9
  int *v15; // rax
  unsigned __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rcx

  v4 = *((int *)a2 + 27);
  v5 = *((_DWORD *)a2 + 26);
  v6 = v5 + (int)v4;
  if ( v6 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v8 = operator new[](4 * v6);
  if ( (int)v4 > 0 )
  {
    v9 = *((_QWORD *)this + 13);
    v10 = 0;
    v11 = 4LL * (unsigned int)(v4 - 1) + 4;
    do
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v9 + v10);
        v13 = *(_DWORD *)(v9 + v10 + 4);
        if ( v12 < v13 )
          break;
        *(_DWORD *)(v8 + v10) = 0;
        v10 += 4;
        if ( v11 == v10 )
          goto LABEL_8;
      }
      v14 = *((_QWORD *)this + 15);
      v15 = (int *)(v14 + 4LL * v12);
      v16 = v14 + 4 * (v12 + (unsigned __int64)(unsigned int)(v13 - 1 - v12)) + 4;
      v17 = 0;
      do
      {
        v18 = *v15++;
        v17 += a3[v18];
      }
      while ( v15 != (int *)v16 );
      *(_DWORD *)(v8 + v10) = v17;
      v10 += 4;
    }
    while ( v11 != v10 );
  }
LABEL_8:
  if ( v5 > 0 )
    memcpy((void *)(v8 + 4 * v4), a3, 4LL * (unsigned int)(v5 - 1) + 4);
  return v8;
}

