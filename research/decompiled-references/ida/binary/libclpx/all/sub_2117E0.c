__int64 __fastcall sub_2117E0(__int64 a1, __int64 a2, double *a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  double v10; // xmm3_8
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  int *v14; // rdi
  __int64 result; // rax
  int *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r9
  double *v19; // r15
  double v20; // xmm1_8
  int *v21; // r8
  int v22; // r10d
  double *v23; // r9
  int v24; // r11d
  double v25; // xmm1_8
  int v26; // r11d
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // rcx
  double v31; // xmm2_8
  int v32; // [rsp+0h] [rbp-44h]
  __int64 v33; // [rsp+4h] [rbp-40h]

  v6 = a5 - 1;
  v7 = *(_QWORD *)(a1 + 176);
  v8 = *(_QWORD *)(a1 + 168);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = *(double *)(a1 + 24);
  v33 = *(_QWORD *)(a1 + 72);
  v11 = *(_QWORD *)(a1 + 112);
  if ( v6 >= 0 )
  {
    v12 = 4LL * v6;
    v13 = a6 + v12 - 4;
    v14 = (int *)(a6 + v12);
    result = 0;
    v16 = (int *)(v13 - 4LL * (unsigned int)v6);
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = *v14;
        v18 = *(int *)(v9 + 4 * v17);
        v19 = (double *)(a2 + 8 * v17);
        v20 = *v19;
        v21 = (int *)(v8 + 4 * v18);
        v22 = *(_DWORD *)(v9 + 4 * v17);
        v23 = (double *)(v7 + 8 * v18);
        v24 = *v21;
        *v19 = 0.0;
        v25 = v20 * *v23;
        *(_BYTE *)(v11 + v17) = 0;
        if ( fabs(v25) >= v10 )
          break;
LABEL_3:
        if ( v16 == --v14 )
          return result;
      }
      v26 = v22 + v24;
      v27 = *(_DWORD *)(v33 + 4 * v17);
      *a3 = v25;
      v32 = result + 1;
      *(_DWORD *)(a4 + 4 * result) = v27 - 1;
      if ( v22 >= v26 )
      {
        result = v32;
        ++a3;
        goto LABEL_3;
      }
      v28 = 0;
      v29 = (unsigned int)(v26 + ~v22) + 1LL;
      do
      {
        v30 = v21[v28 + 1];
        v31 = v23[++v28];
        *(double *)(a2 + 8 * v30) = *(double *)(a2 + 8 * v30) - v31 * v25;
      }
      while ( v29 != v28 );
      --v14;
      result = v32;
      ++a3;
      if ( v16 == v14 )
        return result;
    }
  }
  return 0;
}

