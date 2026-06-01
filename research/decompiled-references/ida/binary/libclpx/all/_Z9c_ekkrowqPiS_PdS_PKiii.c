void __fastcall c_ekkrowq(int *a1, int *a2, double *a3, int *a4, const int *a5, int a6, int a7)
{
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r8
  double v15; // xmm0_8
  int v16; // r11d
  int *v17; // r8
  int v18; // eax
  double *v19; // r10
  __int64 v20; // rax
  int *v21; // r9
  int *v22; // rax
  int v23; // r12d
  double v24; // xmm1_8

  if ( a6 > 0 )
  {
    v7 = (unsigned int)(a6 - 1);
    v8 = 1;
    v9 = 4 * v7 + 8;
    v10 = 4;
    do
    {
      v8 += a5[v10 / 4];
      a4[v10 / 4] = v8;
      v10 += 4LL;
    }
    while ( v9 != v10 );
  }
  if ( a7 > 0 )
  {
    v11 = a7;
    v12 = a7 - 1LL;
    v13 = v12 - (unsigned int)(a7 - 1);
    while ( 1 )
    {
      v14 = a1[v11];
      if ( (_DWORD)v14 )
      {
        v15 = a3[v11];
        v16 = a2[v11];
        a1[v11] = 0;
        do
        {
          v17 = &a4[v14];
          v18 = *v17 - 1;
          *v17 = v18;
          v19 = &a3[v18];
          v20 = v18;
          v21 = &a1[v20];
          v22 = &a2[v20];
          v23 = *v22;
          v24 = *v19;
          v14 = *v21;
          *v19 = v15;
          *v21 = 0;
          v15 = v24;
          *v22 = v16;
          v16 = v23;
        }
        while ( (_DWORD)v14 );
        v11 = v12;
        if ( v12 == v13 )
          return;
      }
      else
      {
        v11 = v12;
        if ( v12 == v13 )
          return;
      }
      --v12;
    }
  }
}

