char *__fastcall presolve_dupmajor(const double *a1, const int *a2, int a3, int a4, int a5)
{
  __int64 v5; // r15
  int v7; // r13d
  unsigned __int64 v8; // rdi
  char *v10; // r12
  const int *v11; // r10
  __int64 v12; // rax
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rsi
  unsigned __int64 v17; // rdi

  v5 = a4;
  if ( a5 < 0 )
  {
    v17 = (3 * a3 + 1) >> 1;
    if ( v17 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v10 = (char *)operator new[](8 * v17);
      memcpy(v10, &a1[v5], 8LL * a3);
      memcpy(&v10[8 * a3], &a2[v5], 4LL * a3);
      return v10;
    }
LABEL_11:
    __cxa_throw_bad_array_new_length();
  }
  v7 = a3 - 1;
  v8 = (3 * (a3 - 1) + 1) >> 1;
  if ( v8 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_11;
  v10 = (char *)operator new[](8 * v8);
  if ( v7 >= 0 )
  {
    v11 = &a2[(int)v5];
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = v11[v12];
      if ( a5 != v14 )
      {
        v15 = v13++;
        *(double *)&v10[8 * v15] = a1[(int)v5 + v12];
        *(_DWORD *)&v10[8 * v7 + 4 * v15] = v14;
      }
      ++v12;
    }
    while ( (unsigned int)v7 + 1LL != v12 );
  }
  return v10;
}

