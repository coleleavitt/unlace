__int64 __fastcall sub_210B10(__int64 a1, __int64 a2, int *a3, int a4)
{
  int v4; // r8d
  double v5; // xmm3_8
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r15
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 v11; // rdx
  int v12; // ebx
  double *v13; // rbp
  double v14; // xmm1_8
  __int64 v15; // rdi
  __int64 v16; // rax
  double v17; // xmm0_8
  double v18; // xmm0_8
  int *v19; // rdi
  __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  double *v24; // rcx
  __int64 v25; // rax
  int *v26; // [rsp+8h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 360);
  v5 = *(double *)(a1 + 24);
  if ( v4 )
  {
    v6 = *(_QWORD *)(a1 + 144);
    v7 = *(_DWORD *)(v6 + 4);
    if ( v4 > 0 )
    {
      v8 = *(_QWORD *)(a1 + 152);
      v9 = 0;
      v10 = *(_QWORD *)(a1 + 232);
      v26 = a3;
      v11 = *(_QWORD *)(a1 + 136);
      do
      {
        v12 = *(_DWORD *)(v6 + v9 + 8);
        v13 = (double *)(a2 + 8LL * *(int *)(v10 + v9 + 4));
        if ( v12 >= v7 )
        {
          v14 = *v13;
        }
        else
        {
          v14 = *v13;
          v15 = (unsigned int)(v7 - 1 - v12) + 1LL;
          v16 = 0;
          do
          {
            v17 = *(double *)(a2 + 8LL * *(int *)(v11 + 4LL * v12 + 4 * v16 + 4))
                * *(double *)(v8 + 8LL * v12 + 8 * v16 + 8);
            ++v16;
            v14 = v14 + v17;
          }
          while ( v15 != v16 );
        }
        v18 = fabs(v14);
        if ( *v13 == 0.0 )
        {
          if ( v18 > v5 )
          {
            v25 = a4++;
            v26[v25] = *(_DWORD *)(v10 + v9 + 4);
            *v13 = v14;
          }
        }
        else if ( v18 <= v5 )
        {
          *v13 = 1.0e-128;
        }
        else
        {
          *v13 = v14;
        }
        v9 += 4;
        v7 = v12;
      }
      while ( 4LL * (unsigned int)(v4 - 1) + 4 != v9 );
      a3 = v26;
    }
  }
  if ( a4 <= 0 )
    return 0;
  v19 = a3;
  v20 = (__int64)&a3[a4 - 1 + 1];
  result = 0;
  do
  {
    while ( 1 )
    {
      v23 = *v19;
      v24 = (double *)(a2 + 8 * v23);
      if ( fabs(*v24) <= v5 )
        break;
      ++v19;
      v22 = (int)result;
      result = (unsigned int)(result + 1);
      a3[v22] = v23;
      if ( (int *)v20 == v19 )
        return result;
    }
    ++v19;
    *v24 = 0.0;
  }
  while ( (int *)v20 != v19 );
  return result;
}

