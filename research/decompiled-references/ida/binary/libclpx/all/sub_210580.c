__int64 __fastcall sub_210580(__int64 a1, __int64 a2, int *a3, int a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbp
  double v10; // xmm3_8
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // rax
  _DWORD *v14; // r12
  int v15; // r13d
  int v16; // r14d
  __int64 v17; // rax
  int *v18; // rdi
  int v19; // ecx
  __int64 v20; // rsi
  int v21; // eax
  int v22; // r11d
  int v23; // ebp
  int v24; // edx
  __int64 v25; // r10
  __int64 v26; // rbx
  _BYTE *v27; // rsi
  int v28; // eax
  int v29; // eax
  int *v30; // r11
  __int64 v31; // r13
  __int64 result; // rax
  __int64 v33; // rdx
  double *v34; // rdi
  int v35; // ebx
  double v36; // xmm1_8
  __int64 v37; // rdx
  int v38; // r12d
  int v39; // r10d
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r10
  double v44; // xmm0_8
  __int64 v45; // rdx
  int *v46; // rdx
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // edi
  double *v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // [rsp+0h] [rbp-78h]
  __int64 v54; // [rsp+8h] [rbp-70h]
  _DWORD *v55; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+20h] [rbp-58h]
  int v58; // [rsp+28h] [rbp-50h]
  int v59; // [rsp+2Ch] [rbp-4Ch]

  v6 = *(_DWORD *)(a1 + 240);
  v7 = *(int *)(a1 + 336);
  v8 = *(_QWORD *)(a1 + 176);
  v59 = v6;
  v9 = *(_QWORD *)(a1 + 168);
  v10 = *(double *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 112);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v7);
  v13 = 4LL * v6;
  v14 = (_DWORD *)(a5 + v13);
  v15 = v12 - 1;
  v16 = v12 + *(_DWORD *)(a1 + 332);
  v55 = (_DWORD *)(a5 + v13 + v13);
  v54 = *(_QWORD *)(a1 + 48) + 4 * v7 - 4 - 4LL * (v12 - 1);
  if ( a4 <= 0 )
    return 0;
  v17 = (unsigned int)(a4 - 1);
  v18 = a3;
  v19 = v6;
  v58 = 0;
  v57 = v9;
  v53 = (__int64)&a3[v17 + 1];
  do
  {
    while ( 1 )
    {
      v20 = *v18;
      v21 = *v18;
      if ( *(_BYTE *)(v11 + v20) != 1 )
        break;
LABEL_16:
      if ( (int *)v53 == ++v18 )
        goto LABEL_17;
    }
    if ( v15 < (int)v20 && v16 > (int)v20 )
    {
      *v14 = v20;
      v22 = 1;
      *v55 = *(_DWORD *)(v54 + 4 * v20 + 4) + 1;
      while ( 1 )
      {
        v24 = v22 - 1;
        v25 = (int)v14[v22 - 1];
        v26 = v22 - 1;
        v27 = (_BYTE *)(v11 + v25);
        v28 = v14[v26];
        if ( *(_BYTE *)(v11 + v25) != 1 && v15 < (int)v25 && v16 > (int)v25 )
          break;
        if ( v16 > v28 )
          goto LABEL_11;
        *(_DWORD *)(a5 + 4LL * --v19) = v28;
        *v27 = 1;
        if ( v22 == 1 )
          goto LABEL_16;
LABEL_12:
        v22 = v24;
      }
      v23 = v55[v26];
      if ( *(_DWORD *)(v54 + 4 * v25) >= v23 )
      {
        v24 = v22;
        v52 = *(int *)(v57 + 4LL * v23);
        v55[v26] = v23 + 1;
        if ( !*(_BYTE *)(v11 + v52) )
        {
          v14[v26 + 1] = v52;
          v24 = v22 + 1;
          *(_BYTE *)(v11 + v52) = 2;
          v55[v26 + 1] = *(_DWORD *)(v54 + 4 * v52 + 4) + 1;
        }
        goto LABEL_12;
      }
      *(_DWORD *)(a5 + 4LL * v58) = v28;
      *v27 = 1;
      ++v58;
LABEL_11:
      if ( v22 == 1 )
        goto LABEL_16;
      goto LABEL_12;
    }
    --v19;
    ++v18;
    *(_DWORD *)(a5 + 4LL * v19) = v21;
    *(_BYTE *)(v11 + v20) = 1;
  }
  while ( (int *)v53 != v18 );
LABEL_17:
  v29 = v58 - 1;
  if ( v58 )
  {
    v30 = (int *)(a5 + 4LL * v29);
    v31 = (__int64)&v30[-v29 - 1];
    result = 0;
    do
    {
      while ( 1 )
      {
        v33 = *v30;
        v34 = (double *)(a2 + 8 * v33);
        v35 = *v30;
        v36 = *v34;
        *(_BYTE *)(v11 + v33) = 0;
        if ( fabs(v36) > v10 )
          break;
        --v30;
        *v34 = 0.0;
        if ( (int *)v31 == v30 )
          goto LABEL_26;
      }
      v37 = v33 + 1;
      v38 = *(_DWORD *)(v54 + 4 * v37);
      v39 = *(_DWORD *)(v54 + 4 * v37 - 4);
      if ( v38 < v39 )
      {
        v40 = v39;
        v41 = v39 - 1LL;
        v42 = v41 - (unsigned int)(v39 - 1 - v38);
        while ( 1 )
        {
          v43 = *(int *)(v57 + 4 * v40);
          v44 = *(double *)(v8 + 8 * v40);
          v40 = v41;
          *(double *)(a2 + 8 * v43) = v44 * v36 + *(double *)(a2 + 8 * v43);
          if ( v42 == v41 )
            break;
          --v41;
        }
      }
      --v30;
      v45 = (int)result;
      result = (unsigned int)(result + 1);
      a3[v45] = v35;
    }
    while ( (int *)v31 != v30 );
  }
  else
  {
    result = 0;
  }
LABEL_26:
  if ( v19 < v59 )
  {
    v46 = (int *)(a5 + 4LL * v19);
    v47 = a5 + 4 * (v19 + (unsigned __int64)(unsigned int)(v59 - 1 - v19)) + 4;
    do
    {
      while ( 1 )
      {
        v49 = *v46;
        *(_BYTE *)(v11 + v49) = 0;
        v50 = v49;
        v51 = (double *)(a2 + 8 * v49);
        if ( fabs(*v51) <= v10 )
          break;
        ++v46;
        v48 = (int)result;
        result = (unsigned int)(result + 1);
        a3[v48] = v50;
        if ( (int *)v47 == v46 )
          return result;
      }
      ++v46;
      *v51 = 0.0;
    }
    while ( (int *)v47 != v46 );
  }
  return result;
}

