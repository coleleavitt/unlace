__int64 __fastcall sub_210E20(__int64 a1, __int64 a2, __int64 a3, int a4, int *a5, __int64 *a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  double v9; // xmm4_8
  __int64 v10; // r13
  __int64 result; // rax
  double v12; // xmm2_8
  int v13; // r11d
  __int64 v14; // r12
  __int64 v15; // rdi
  int *v16; // rax
  double v17; // xmm2_8
  int *v18; // rbx
  double *v19; // rdx
  __int64 v20; // rdi
  double v21; // xmm1_8
  __int64 v22; // rdi
  double v23; // xmm3_8
  double *v24; // r10
  double *v25; // rdi
  double v26; // xmm0_8
  int v27; // eax
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 176);
  v7 = *(_QWORD *)(a1 + 168);
  v8 = *(_QWORD *)(a1 + 104);
  v9 = *(double *)(a1 + 24);
  v28 = *(_QWORD *)(a1 + 48);
  v10 = *a6;
  v29 = *(_QWORD *)(a1 + 72);
  result = *a5;
  v12 = *(double *)(a2 + 8 * result);
  if ( (_DWORD)result == a4 )
  {
    v13 = *a5;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v8 + 4 * result);
        v14 = 4 * result;
        *(_QWORD *)(a2 + 8 * result) = 0;
        if ( fabs(v12) > v9 )
        {
          v15 = *(int *)(v28 + 4 * result);
          v16 = (int *)(v7 + 4 * v15 + 4);
          v17 = v12 * *(double *)(v6 + 8 * v15);
          v18 = &v16[*(int *)(v7 + 4 * v15)];
          v19 = (double *)(v6 + 8 * v15 + 8);
          if ( (*(_DWORD *)(v7 + 4 * v15) & 1) != 0 )
          {
            v20 = *v16;
            v21 = *v19;
            ++v16;
            ++v19;
            *(double *)(a2 + 8 * v20) = *(double *)(a2 + 8 * v20) - v21 * v17;
          }
          while ( v18 > v16 )
          {
            v22 = *v16;
            v23 = v19[1];
            v16 += 2;
            v19 += 2;
            v24 = (double *)(a2 + 8 * v22);
            v25 = (double *)(a2 + 8LL * *(v16 - 1));
            v26 = *v25 - v23 * v17;
            *v24 = *v24 - *(v19 - 2) * v17;
            *v25 = v26;
          }
          if ( fabs(v17) >= v9 )
            break;
        }
        result = v13;
        v12 = *(double *)(a2 + 8LL * v13);
        if ( a4 == v13 )
          goto LABEL_11;
      }
      v10 += 4;
      v27 = *(_DWORD *)(v29 + v14);
      *(double *)(a3 + 8LL * v27) = v17;
      *(_DWORD *)(v10 - 4) = v27 - 1;
      result = v13;
      v12 = *(double *)(a2 + 8LL * v13);
    }
    while ( a4 != v13 );
  }
LABEL_11:
  *a6 = v10;
  *a5 = v13;
  return result;
}

