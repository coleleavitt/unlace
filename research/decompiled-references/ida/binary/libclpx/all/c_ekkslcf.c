__int64 __fastcall c_ekkslcf(__int64 a1)
{
  __int64 v1; // rbp
  int *v2; // rbx
  int *v3; // r15
  int *v4; // r13
  double *v5; // rdx
  const int *v6; // r12
  __int64 v7; // rcx
  int v8; // r10d
  int v9; // r11d
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // r10
  __int64 v15; // rdx
  int v16; // esi
  __int64 v17; // r11
  int v18; // ecx
  int v19; // eax
  int *v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  _DWORD *v23; // r8
  int v24; // eax
  _QWORD *v26; // rdi
  __int64 v27; // r9
  _QWORD *v28; // rsi
  int v29; // eax
  char *v30; // rcx
  __int64 v31; // r14
  double *v32; // rax
  __int64 v33; // xmm0_8
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  int *v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // r8
  int *v43; // r14
  char *v44; // r10
  __int64 v45; // rsi
  double v46; // xmm0_8
  const int *v47; // rdi
  int v48; // eax
  __int64 v49; // rax
  _DWORD *v50; // [rsp+0h] [rbp-58h]
  __int64 v51; // [rsp+0h] [rbp-58h]
  int v52; // [rsp+8h] [rbp-50h]
  int *v53; // [rsp+10h] [rbp-48h]
  int *v54; // [rsp+10h] [rbp-48h]
  int v55; // [rsp+18h] [rbp-40h]
  int v56; // [rsp+1Ch] [rbp-3Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(int **)(a1 + 40);
  v3 = *(int **)(a1 + 168);
  v4 = *(int **)(a1 + 160);
  v5 = *(double **)(a1 + 176);
  v6 = *(const int **)(a1 + 56);
  v7 = 4LL * *(int *)(a1 + 240) + 4;
  v8 = *(_DWORD *)(a1 + 240);
  v9 = *(_DWORD *)(v1 + v7);
  v50 = (_DWORD *)(v1 + v7);
  v53 = (int *)((char *)v2 + v7);
  v10 = v9 - 1;
  v55 = v9 - 1;
  if ( 2 * (v9 - 1) <= *(_DWORD *)(a1 + 260) )
  {
    v26 = v5 + 1;
    v27 = 8LL * v10 + 8;
    v28 = (_QWORD *)((char *)v5 + v27);
    if ( v9 != 1 && v28 != v26 )
    {
      v29 = v10 >> 3;
      if ( v29 > 0 )
      {
        v30 = (char *)v5 + v27;
        v31 = (unsigned int)(v29 - 1);
        v32 = v5 + 1;
        do
        {
          v33 = *(_QWORD *)v32;
          v32 += 8;
          v30 += 64;
          *((_QWORD *)v30 - 8) = v33;
          *((double *)v30 - 7) = *(v32 - 7);
          *((double *)v30 - 6) = *(v32 - 6);
          *((double *)v30 - 5) = *(v32 - 5);
          *((double *)v30 - 4) = *(v32 - 4);
          *((double *)v30 - 3) = *(v32 - 3);
          *((double *)v30 - 2) = *(v32 - 2);
          *((double *)v30 - 1) = *(v32 - 1);
        }
        while ( &v5[8 * v31 + 9] != v32 );
        v34 = ((int)v31 + 1LL) << 6;
        v26 = (_QWORD *)((char *)v26 + v34);
        v28 = (_QWORD *)((char *)v28 + v34);
      }
      switch ( v55 % 8 )
      {
        case 1:
          goto LABEL_26;
        case 2:
          goto LABEL_25;
        case 3:
          goto LABEL_24;
        case 4:
          goto LABEL_23;
        case 5:
          goto LABEL_22;
        case 6:
          goto LABEL_21;
        case 7:
          v28[6] = v26[6];
LABEL_21:
          v28[5] = v26[5];
LABEL_22:
          v28[4] = v26[4];
LABEL_23:
          v28[3] = v26[3];
LABEL_24:
          v28[2] = v26[2];
LABEL_25:
          v28[1] = v26[1];
LABEL_26:
          *v28 = *v26;
          break;
        default:
          break;
      }
    }
    if ( v8 <= 0 )
    {
      *v53 = v9;
    }
    else
    {
      v35 = 1;
      v51 = (unsigned int)(v8 - 1) + 2LL;
      v36 = 1;
      do
      {
        v2[v36] = v35;
        v35 += v6[v36];
        v6[v36++] = 0;
      }
      while ( v51 != v36 );
      v37 = v53;
      v54 = v3;
      *v37 = v9;
      v38 = 1;
      do
      {
        v39 = *(int *)(v1 + 4 * v38);
        v40 = *(_DWORD *)(v1 + 4 * v38 + 4);
        if ( (int)v39 < v40 )
        {
          v41 = 0;
          v42 = (unsigned int)(v40 - 1 - v39) + 1LL;
          v43 = &v54[v39];
          v44 = (char *)&v5[v39 - 1] + v27;
          do
          {
            v45 = v43[v41];
            v46 = *(double *)&v44[8 * v41++];
            v47 = &v6[v45];
            v48 = (*v47)++;
            v49 = v2[v45] + v48;
            v4[v49] = v38;
            v5[v49] = v46;
          }
          while ( v42 != v41 );
        }
        ++v38;
      }
      while ( v51 != v38 );
    }
  }
  else
  {
    v56 = *(_DWORD *)(v1 + v7);
    v11 = *(_QWORD *)(a1 + 64);
    v52 = *(_DWORD *)(a1 + 240);
    c_ekkrowq(v3, v4, v5, v2, v6, v8, v9 - 1);
    if ( v52 <= 0 )
    {
      *v53 = 1;
      *v50 = v56;
    }
    else
    {
      v12 = 4;
      v13 = 1;
      v14 = (unsigned int)(v52 - 1) + 2LL;
      do
      {
        v2[(unsigned __int64)v12 / 4] = v13;
        v13 += v6[(unsigned __int64)v12 / 4];
        v12 += 4;
      }
      while ( 4 * v14 != v12 );
      *v53 = v13;
      v15 = 4;
      v16 = 1;
      do
      {
        *(_DWORD *)(v1 + v15) = v16;
        v16 += *(_DWORD *)(v11 + v15);
        *(_DWORD *)(v11 + v15) = 0;
        v15 += 4;
      }
      while ( v12 != v15 );
      *v50 = v56;
      v17 = 1;
      do
      {
        v18 = v2[v17];
        v19 = v2[v17 + 1];
        if ( v18 < v19 )
        {
          v20 = &v4[v18];
          v21 = (unsigned __int64)&v4[v18 + 1 + (unsigned __int64)(unsigned int)(v19 - 1 - v18)];
          do
          {
            v22 = *v20++;
            v23 = (_DWORD *)(v11 + 4 * v22);
            v24 = (*v23)++;
            v3[*(_DWORD *)(v1 + 4 * v22) + v24] = v17;
          }
          while ( (int *)v21 != v20 );
        }
        ++v17;
      }
      while ( v14 != v17 );
    }
  }
  return (unsigned int)v55;
}

