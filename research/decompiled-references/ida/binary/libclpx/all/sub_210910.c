__int64 __fastcall sub_210910(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r10d
  double v7; // xmm3_8
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r8
  int v14; // ebx
  double *v15; // r12
  double v16; // xmm1_8
  __int64 v17; // rcx
  __int64 v18; // rax
  double v19; // xmm0_8
  double v20; // xmm0_8
  int *v21; // rdi
  __int64 v22; // r11
  __int64 result; // rax
  __int64 v24; // r10
  __int64 v25; // r9
  double *v26; // r10
  double v27; // xmm0_8
  __int64 v28; // rax
  __int64 v29; // [rsp+10h] [rbp-40h]
  __int64 v30; // [rsp+18h] [rbp-38h]

  v6 = *(_DWORD *)(a1 + 360);
  v7 = *(double *)(a1 + 24);
  if ( v6 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    v9 = *(_DWORD *)(v8 + 4);
    if ( v6 > 0 )
    {
      v10 = *(_QWORD *)(a1 + 136);
      v11 = 0;
      v12 = *(_QWORD *)(a1 + 232);
      v30 = a5;
      v29 = a4;
      v13 = *(_QWORD *)(a1 + 152);
      do
      {
        v14 = *(_DWORD *)(v8 + v11 + 8);
        v15 = (double *)(a2 + 8LL * *(int *)(v12 + v11 + 4));
        if ( v14 >= v9 )
        {
          v16 = *v15;
        }
        else
        {
          v16 = *v15;
          v17 = (unsigned int)(v9 - 1 - v14) + 1LL;
          v18 = 0;
          do
          {
            v19 = *(double *)(a2 + 8LL * *(int *)(v10 + 4LL * v14 + 4 * v18 + 4))
                * *(double *)(v13 + 8LL * v14 + 8 * v18 + 8);
            ++v18;
            v16 = v16 + v19;
          }
          while ( v17 != v18 );
        }
        v20 = fabs(v16);
        if ( *v15 == 0.0 )
        {
          if ( v20 > v7 )
          {
            v28 = a6++;
            a3[v28] = *(_DWORD *)(v12 + v11 + 4);
            *v15 = v16;
          }
        }
        else if ( v20 <= v7 )
        {
          *v15 = 1.0e-128;
        }
        else
        {
          *v15 = v16;
        }
        v11 += 4;
        v9 = v14;
      }
      while ( 4LL * (unsigned int)(v6 - 1) + 4 != v11 );
      a4 = v29;
      a5 = v30;
    }
  }
  if ( a6 <= 0 )
    return 0;
  v21 = a3;
  v22 = (__int64)&a3[a6 - 1 + 1];
  result = 0;
  do
  {
    while ( 1 )
    {
      v25 = *v21;
      v26 = (double *)(a2 + 8 * v25);
      v27 = *v26;
      if ( fabs(*v26) <= v7 )
        break;
      ++v21;
      v24 = (int)result;
      result = (unsigned int)(result + 1);
      *(_DWORD *)(a4 + 4 * v24 + 4) = v25;
      *(double *)(a5 + 8 * v24 + 8) = v27;
      a3[v24] = v25;
      if ( (int *)v22 == v21 )
        return result;
    }
    ++v21;
    *v26 = 0.0;
  }
  while ( (int *)v22 != v21 );
  return result;
}

