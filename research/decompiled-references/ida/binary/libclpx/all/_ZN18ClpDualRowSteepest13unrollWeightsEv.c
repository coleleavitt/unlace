void __fastcall ClpDualRowSteepest::unrollWeights(ClpDualRowSteepest *this)
{
  int **v1; // r8
  int *v2; // rcx
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rax
  int *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rsi
  int *v11; // rdx

  v1 = *((int ***)this + 6);
  v2 = v1[1];
  v3 = *((_DWORD *)v1 + 4);
  v4 = (__int64)*v1;
  if ( *((_BYTE *)v1 + 28) )
  {
    if ( v3 > 0 )
    {
      v5 = *((_QWORD *)this + 4);
      v6 = 0;
      do
      {
        *(_QWORD *)(v5 + 8LL * *(int *)(v4 + 4 * v6)) = *(_QWORD *)&v2[2 * v6];
        *(_QWORD *)&v2[2 * v6++] = 0;
      }
      while ( (unsigned int)(v3 - 1) + 1LL != v6 );
    }
    goto LABEL_5;
  }
  if ( v3 <= 0 )
  {
LABEL_5:
    *((_DWORD *)v1 + 4) = 0;
    *((_BYTE *)v1 + 28) = 0;
    return;
  }
  v7 = *v1;
  v8 = *((_QWORD *)this + 4);
  v9 = (__int64)&(*v1)[v3 - 1 + 1];
  do
  {
    v10 = *v7++;
    v11 = &v2[2 * v10];
    *(_QWORD *)(v8 + 8 * v10) = *(_QWORD *)v11;
    *(_QWORD *)v11 = 0;
  }
  while ( (int *)v9 != v7 );
  *((_DWORD *)v1 + 4) = 0;
  *((_BYTE *)v1 + 28) = 0;
}

