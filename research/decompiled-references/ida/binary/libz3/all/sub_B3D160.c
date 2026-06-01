void __fastcall sub_B3D160(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // r11
  __int64 v6; // rbx
  int v7; // eax
  int *v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // r13
  int v13; // r14d
  __int64 v14; // rbp
  double v15; // xmm0_8
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r12
  int v21; // r8d
  int v22; // esi
  __int64 v23; // rbp
  double v24; // xmm0_8
  __int64 v25; // rdx
  __int64 v26; // rbx
  int v27; // eax
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // r8
  int v33; // edi
  __int64 *v34; // rsi
  __int64 v35; // r10
  double v36; // xmm0_8
  __int64 v37; // rcx
  __int64 v38; // rsi

  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    if ( a2 >= *(_DWORD *)(v4 - 4) )
      goto LABEL_18;
    v6 = (unsigned int)a2;
    v7 = *(_DWORD *)(v4 + 4LL * (unsigned int)a2);
    v8 = (int *)(4LL * (unsigned int)a2);
    if ( !v7 )
      goto LABEL_18;
  }
  else
  {
    if ( a2 >= 0 )
      goto LABEL_35;
    v6 = (unsigned int)a2;
    v7 = *(_DWORD *)(4LL * (unsigned int)a2);
    v8 = (int *)(4LL * (unsigned int)a2);
    if ( !v7 )
      goto LABEL_32;
  }
  v9 = *(_QWORD *)(a1 + 32);
  v10 = (unsigned int)v7;
  v11 = v7 >> 1;
  v12 = *(unsigned int *)(v9 + 4LL * (unsigned int)v7);
  v13 = *(_DWORD *)(v9 + 4LL * (unsigned int)v7);
  if ( v7 >> 1 )
  {
    v14 = **(_QWORD **)(a1 + 24);
    v15 = *(double *)(v14 + 8 * v12);
    while ( 1 )
    {
      v16 = 4 * v10;
      v17 = *(unsigned int *)(v9 + 4LL * (unsigned int)v11);
      if ( v15 <= *(double *)(v14 + 8 * v17) )
        break;
      *(_DWORD *)(v9 + v16) = v17;
      *(_DWORD *)(v4 + 4 * v17) = v7;
      v7 = v11;
      v11 >>= 1;
      if ( !v11 )
        goto LABEL_39;
      v10 = (unsigned int)v7;
    }
  }
  else
  {
LABEL_39:
    v16 = 4;
    v7 = 1;
  }
  *(_DWORD *)(v9 + v16) = v13;
  *(_DWORD *)(v4 + 4 * v12) = v7;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 - 4) <= a2 )
      goto LABEL_18;
    v18 = *(int *)((char *)v8 + v4);
    if ( !v18 )
      goto LABEL_18;
    goto LABEL_12;
  }
  if ( a2 >= 0 )
  {
LABEL_35:
    if ( !v5 )
      return;
    goto LABEL_19;
  }
  v18 = *v8;
  if ( *v8 )
  {
LABEL_12:
    v19 = (unsigned int)v18;
    v20 = *(unsigned int *)(v9 + 4LL * (unsigned int)v18);
    v21 = v18 >> 1;
    v22 = *(_DWORD *)(v9 + 4LL * (unsigned int)v18);
    if ( v18 >> 1 )
    {
      v23 = **(_QWORD **)(a1 + 24);
      v24 = *(double *)(v23 + 8 * v20);
      while ( 1 )
      {
        v25 = 4 * v19;
        v26 = *(unsigned int *)(v9 + 4LL * (unsigned int)v21);
        if ( v24 <= *(double *)(v23 + 8 * v26) )
          break;
        *(_DWORD *)(v9 + v25) = v26;
        *(_DWORD *)(v4 + 4 * v26) = v18;
        v18 = v21;
        v21 >>= 1;
        if ( !v21 )
          goto LABEL_38;
        v19 = (unsigned int)v18;
      }
      *(_DWORD *)(v9 + v25) = v22;
      *(_DWORD *)(v4 + 4 * v20) = v18;
    }
    else
    {
LABEL_38:
      *(_DWORD *)(v9 + 4) = v22;
      *(_DWORD *)(v4 + 4 * v20) = 1;
    }
LABEL_18:
    if ( !v5 )
    {
      v27 = 0;
      goto LABEL_20;
    }
LABEL_19:
    v27 = *(_DWORD *)(v5 - 4);
LABEL_20:
    if ( a2 >= v27 )
      return;
    v6 = (unsigned int)a2;
    goto LABEL_22;
  }
LABEL_32:
  if ( v5 )
    goto LABEL_19;
LABEL_22:
  v28 = *(_DWORD *)(v5 + 4 * v6);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 56);
    v30 = (unsigned int)v28;
    v31 = v28 >> 1;
    v32 = *(unsigned int *)(v29 + 4LL * (unsigned int)v28);
    v33 = *(_DWORD *)(v29 + 4LL * (unsigned int)v28);
    if ( v28 >> 1 )
    {
      v34 = *(__int64 **)(a1 + 48);
      v35 = *v34;
      v36 = *(double *)(*v34 + 8 * v32);
      while ( 1 )
      {
        v37 = 4 * v30;
        v38 = *(unsigned int *)(v29 + 4LL * (unsigned int)v31);
        if ( v36 <= *(double *)(v35 + 8 * v38) )
          break;
        *(_DWORD *)(v29 + v37) = v38;
        *(_DWORD *)(v5 + 4 * v38) = v28;
        v28 = v31;
        v31 >>= 1;
        if ( !v31 )
          goto LABEL_37;
        v30 = (unsigned int)v28;
      }
      *(_DWORD *)(v29 + v37) = v33;
      *(_DWORD *)(v5 + 4 * v32) = v28;
    }
    else
    {
LABEL_37:
      *(_DWORD *)(v29 + 4) = v33;
      *(_DWORD *)(v5 + 4 * v32) = 1;
    }
  }
}

