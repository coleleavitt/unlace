__int64 __fastcall presolve_delete_from_major(int a1, int a2, const int *a3, int *a4, int *a5, double *a6)
{
  int *v6; // rbx
  int v7; // r11d
  __int64 v8; // rax
  int v9; // r10d
  int *v10; // rdx
  __int64 v11; // rcx
  int *v12; // rax
  int *v13; // r11
  __int64 result; // rax
  double v15; // xmm0_8

  v6 = &a4[a1];
  v7 = a3[a1];
  v8 = v7;
  v9 = v7 + *v6;
  v10 = &a5[v8];
  if ( v7 >= v9 || a2 == *v10 )
  {
    v11 = v7;
  }
  else
  {
    v11 = v7 + 1LL;
    v12 = &a5[v8 + 1];
    v13 = &a5[(unsigned int)(*v6 - 1) + 1 + (__int64)v7];
    while ( 1 )
    {
      v10 = v12;
      if ( v13 == v12 )
        break;
      ++v12;
      if ( a2 == *v10 )
        break;
      ++v11;
    }
  }
  result = (unsigned int)a5[v9 - 1];
  v15 = a6[v9 - 1];
  *v10 = result;
  a6[v11] = v15;
  --*v6;
  return result;
}

