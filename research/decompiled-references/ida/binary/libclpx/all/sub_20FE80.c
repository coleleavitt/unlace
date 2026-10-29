unsigned __int64 __fastcall sub_20FE80(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r14
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // r13
  __int64 v9; // r15
  int v10; // ebx
  double v11; // xmm0_8
  int v12; // eax
  int v13; // r11d
  int v14; // r12d
  int *v15; // rax
  double *v16; // rdx
  __int64 v17; // rcx
  double v18; // xmm3_8
  double v19; // xmm2_8
  double v20; // xmm1_8
  double *v21; // r9
  double *v22; // r8
  double v23; // xmm3_8
  double *v24; // rdi
  double v25; // xmm2_8
  double *v26; // rcx
  double v27; // xmm1_8
  __int64 v28; // rdx
  double *v29; // rax
  double *v30; // rdx
  double v31; // xmm0_8
  unsigned __int64 v32; // [rsp+0h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-48h]
  int v34; // [rsp+10h] [rbp-40h]
  unsigned int v35; // [rsp+14h] [rbp-3Ch]

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 136);
  v33 = *(_QWORD *)(a1 + 152);
  v4 = *(int *)(a1 + 360);
  result = v4 + 1;
  v6 = *(_DWORD *)(v2 + 4 * (v4 + 1));
  if ( (int)v4 > 0 )
  {
    v7 = 0;
    v32 = 4 * ~(unsigned __int64)(unsigned int)(v4 - 1);
    v8 = v2 + 4 * result - 4;
    v9 = *(_QWORD *)(a1 + 232) + 4 * result - 4;
    do
    {
      while ( 1 )
      {
        result = *(int *)(v9 + v7);
        v10 = *(_DWORD *)(v8 + v7);
        v11 = *(double *)(a2 + 8 * result);
        if ( v11 != 0.0 )
        {
          v12 = v10 - v6;
          v13 = v6 + 1;
          v14 = v12 >> 2;
          v35 = v12 & 2;
          v34 = v12 & 1;
          if ( v12 >> 2 > 0 )
          {
            v15 = (int *)(v3 + 4LL * v13);
            v16 = (double *)(v33 + 8LL * v13);
            do
            {
              v17 = *v15;
              v18 = v16[1];
              v19 = v16[2];
              v15 += 4;
              v20 = v16[3];
              v16 += 4;
              v21 = (double *)(a2 + 8 * v17);
              v22 = (double *)(a2 + 8LL * *(v15 - 3));
              v23 = v18 * v11 + *v22;
              v24 = (double *)(a2 + 8LL * *(v15 - 2));
              v25 = v19 * v11 + *v24;
              v26 = (double *)(a2 + 8LL * *(v15 - 1));
              v27 = v20 * v11 + *v26;
              *v21 = *(v16 - 4) * v11 + *v21;
              *v22 = v23;
              *v24 = v25;
              *v26 = v27;
            }
            while ( (int *)(v3 + 16 + 4 * (v13 + 4LL * (unsigned int)(v14 - 1))) != v15 );
            v13 += 4 * v14;
          }
          if ( v34 )
          {
            v28 = v13++;
            v29 = (double *)(a2 + 8LL * *(int *)(v3 + 4 * v28));
            *v29 = *(double *)(v33 + 8 * v28) * v11 + *v29;
          }
          result = v35;
          if ( v35 )
            break;
        }
        v7 -= 4;
        v6 = v10;
        if ( v32 == v7 )
          return result;
      }
      v7 -= 4;
      v30 = (double *)(a2 + 8LL * *(int *)(v3 + 4LL * v13));
      result = a2 + 8LL * *(int *)(v3 + 4LL * v13 + 4);
      *v30 = *(double *)(v33 + 8LL * v13) * v11 + *v30;
      v31 = v11 * *(double *)(v33 + 8LL * v13 + 8);
      v6 = v10;
      *(double *)result = v31 + *(double *)result;
    }
    while ( v32 != v7 );
  }
  return result;
}

