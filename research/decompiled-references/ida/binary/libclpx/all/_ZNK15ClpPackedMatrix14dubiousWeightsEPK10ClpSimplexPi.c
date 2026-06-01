__int64 __fastcall ClpPackedMatrix::dubiousWeights(ClpPackedMatrix *this, const ClpSimplex *a2, int *a3)
{
  __int64 v4; // rax
  int v6; // r13d
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // rsi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r11
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdx
  int *v19; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rcx

  v4 = *((_QWORD *)this + 11);
  v6 = *((_DWORD *)a2 + 26);
  v7 = *(int *)(v4 + 64);
  if ( !*(_BYTE *)(v4 + 8) )
    v7 = *(int *)(v4 + 68);
  v8 = (int)v7 + v6;
  if ( v8 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v9 = operator new[](4 * v8);
  v10 = *((_QWORD **)this + 11);
  v11 = v10[5];
  v12 = v10[6];
  v13 = v10[7];
  if ( (int)v7 > 0 )
  {
    v14 = 0;
    v15 = 4LL * (unsigned int)(v7 - 1) + 4;
    do
    {
      while ( 1 )
      {
        v16 = *(_DWORD *)(v12 + v14);
        v17 = *(_DWORD *)(v13 + v14);
        if ( v16 < v16 + v17 )
          break;
        *(_DWORD *)(v9 + v14) = 0;
        v14 += 4;
        if ( v15 == v14 )
          goto LABEL_10;
      }
      v18 = v16;
      v19 = (int *)(v11 + 4LL * v16);
      v20 = v11 + 4 + 4 * ((unsigned int)(v17 - 1) + v18);
      v21 = 0;
      do
      {
        v22 = *v19++;
        v21 += a3[v22];
      }
      while ( v19 != (int *)v20 );
      *(_DWORD *)(v9 + v14) = v21;
      v14 += 4;
    }
    while ( v15 != v14 );
  }
LABEL_10:
  if ( v6 > 0 )
    memcpy((void *)(v9 + 4 * v7), a3, 4LL * (unsigned int)(v6 - 1) + 4);
  return v9;
}

