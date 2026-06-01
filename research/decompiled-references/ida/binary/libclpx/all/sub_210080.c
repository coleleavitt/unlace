__int64 __fastcall sub_210080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, int a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  double *v9; // r12
  double v10; // xmm0_8
  __int64 v11; // r11
  double v12; // xmm2_8
  int *v13; // r10
  int *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax

  for ( ; a7 >= (int)a6; *v9 = v10 * v12 )
  {
    v7 = (int)a6;
    v8 = *(int *)(a3 + 4LL * (int)a6);
    v9 = (double *)(a5 + 8LL * (int)a6);
    v10 = *v9;
    v11 = a1 + 8 * v8;
    v12 = *(double *)(v11 - 8);
    v13 = (int *)(a2 + 4 * v8);
    v14 = &v13[*(v13 - 1)];
    if ( (*(v13 - 1) & 1) != 0 )
    {
      v15 = *v13;
      v11 += 8;
      ++v13;
      v10 = v10 - *(double *)(a5 + 8 * v15) * *(double *)(v11 - 8);
    }
    while ( v14 > v13 )
    {
      v16 = *v13;
      v11 += 16;
      v13 += 2;
      v10 = v10
          - *(double *)(a5 + 8 * v16) * *(double *)(v11 - 16)
          - *(double *)(a5 + 8LL * *(v13 - 1)) * *(double *)(v11 - 8);
    }
    a6 = *(_DWORD *)(a4 + 4 * v7);
  }
  return a6;
}

