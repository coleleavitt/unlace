__int64 __fastcall sub_216A50(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, int *a6, int *a7)
{
  __int64 v7; // r14
  double v8; // xmm3_8
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r13
  int v12; // eax
  int v13; // r8d
  int v14; // edi
  int v15; // ecx
  int v16; // r10d
  __int64 v17; // r9
  double *v18; // rbp
  double v19; // xmm1_8
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rdx
  int v23; // r10d
  __int64 v24; // rsi
  __int64 v25; // r11
  int *v26; // rcx
  __int64 result; // rax
  __int64 v28; // rax
  char v29; // bp
  int *v30; // rsi
  __int64 v31; // r11
  __int64 v32; // rax
  int v33; // r9d
  __int64 v34; // rax
  double v35; // xmm0_8
  double v36; // xmm1_8
  __int64 v37; // rax
  __int64 v38; // r15
  int *v39; // rax
  int v40; // esi
  __int64 v41; // rdx
  int v42; // r10d
  __int64 v43; // rdx
  int v44; // [rsp+0h] [rbp-CCh]
  __int64 v45; // [rsp+4h] [rbp-C8h]
  __int64 v48; // [rsp+1Ch] [rbp-B0h]
  int v49; // [rsp+24h] [rbp-A8h]
  int v50; // [rsp+28h] [rbp-A4h]
  int v52; // [rsp+34h] [rbp-98h]
  int v53; // [rsp+38h] [rbp-94h]
  __int64 v54; // [rsp+3Ch] [rbp-90h]
  __int64 v55; // [rsp+44h] [rbp-88h]
  __int64 v58; // [rsp+64h] [rbp-68h]
  __int64 v59; // [rsp+6Ch] [rbp-60h]
  __int64 v60; // [rsp+7Ch] [rbp-50h]
  __int64 v61; // [rsp+84h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 160);
  v54 = *(_QWORD *)(a1 + 56);
  v8 = *(double *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(a1 + 64);
  v55 = *(_QWORD *)(a1 + 72);
  v53 = *(_DWORD *)(a1 + 240);
  if ( v53 <= 1 )
  {
    if ( v53 <= 0 )
    {
      result = 10;
      v13 = 0;
      v14 = -1;
      v26 = a6;
      goto LABEL_12;
    }
    v14 = -1;
    v13 = 0;
LABEL_51:
    v43 = 1;
    do
    {
      if ( !*(_DWORD *)(v54 + 4 * v43) )
      {
        *(_DWORD *)(a2 + 8 * v43 + 4) = ~v53;
        ++*a4;
      }
      ++v43;
    }
    while ( (unsigned int)(v53 - 1) + 2LL != v43 );
    result = 10;
    v26 = a6;
    goto LABEL_12;
  }
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
  if ( v12 > 0 )
  {
    v44 = 1;
    v13 = 0;
    v14 = -1;
    v15 = 0x7FFFFFFF;
    v16 = 2;
    goto LABEL_4;
  }
  v61 = 0;
  v49 = 0;
  v59 = *(_QWORD *)(a1 + 168);
  v58 = *(_QWORD *)(a1 + 48);
  v50 = -1;
  v52 = 0x7FFFFFFF;
  v45 = *(_QWORD *)(a1 + 40);
  v60 = *(_QWORD *)(a1 + 80);
  v15 = 0x7FFFFFFF;
  while ( 1 )
  {
    v44 = v61 + 2;
    v14 = *(_DWORD *)(v60 + 4 * v61 + 8);
    if ( v14 > 0 )
      break;
    v13 = v49;
    v14 = v50;
    v42 = v61;
LABEL_38:
    v16 = v42 + 3;
    if ( v53 < v16 )
      goto LABEL_51;
    if ( v52 <= v16 )
      goto LABEL_11;
    ++v61;
    v12 = *(_DWORD *)(v55 + 4 * v61 + 8);
    if ( v12 > 0 )
    {
      v10 = v45;
LABEL_4:
      v17 = *(int *)(v10 + 4LL * v12);
      v18 = (double *)(v9 + 8 * v17);
      v19 = fabs(*v18) * v8;
      if ( (int)v17 + v16 > (int)v17 )
      {
        v20 = (unsigned int)(v16 - 1);
        v22 = 0;
        v23 = v16 + 1;
        v24 = v20 + 1;
        do
        {
          if ( v19 <= fabs(v18[v22]) )
          {
            v21 = v7 + 4 * v17;
            v25 = *(int *)(v21 + 4 * v22);
            if ( v44 * *(_DWORD *)(v11 + 4 * v25) < v15 )
            {
              v13 = v12;
              v14 = *(_DWORD *)(v21 + 4 * v22);
              if ( *(_DWORD *)(v11 + 4 * v25) <= v23 )
                goto LABEL_11;
              v15 = v44 * *(_DWORD *)(v11 + 4 * v25);
            }
          }
          ++v22;
        }
        while ( v24 != v22 );
      }
      goto LABEL_11;
    }
  }
  while ( 2 )
  {
    v48 = v14;
    v28 = *(int *)(v58 + 4LL * v14);
    if ( (int)v28 + v44 <= (int)v28 )
    {
      v14 = *(_DWORD *)(a3 + 8LL * v14);
      goto LABEL_36;
    }
    v29 = 0;
    v30 = (int *)(v59 + 4 * v28);
    v31 = v59 + 4 + 4 * ((unsigned int)(v61 + 1) + v28);
    do
    {
      while ( 1 )
      {
        v32 = *v30;
        v33 = *(_DWORD *)(v54 + 4 * v32);
        v13 = *v30;
        if ( ((int)v61 + 1) * v33 < v15 )
          break;
LABEL_17:
        if ( (int *)v31 == ++v30 )
          goto LABEL_29;
      }
      v34 = *(int *)(v45 + 4 * v32);
      v35 = fabs(*(double *)(v9 + 8 * v34));
      v36 = v35 * v8;
      if ( (int)v34 < (int)v34 + v33 && v14 != *(_DWORD *)(v7 + 4 * v34) )
      {
        v37 = v34 + 1;
        v38 = v37 + (unsigned int)(v33 - 1);
        while ( 1 )
        {
          if ( v38 == v37 )
          {
            v35 = fabs(*(double *)(v9 + 8 * v38));
            goto LABEL_26;
          }
          if ( *(_DWORD *)(v7 + 4 * (v37 + 1) - 4) == v14 )
            break;
          ++v37;
        }
        v35 = fabs(*(double *)(v9 + 8 * v37));
      }
LABEL_26:
      if ( v36 > v35 )
      {
        if ( !v49 )
          v29 = 1;
        goto LABEL_17;
      }
      if ( v33 <= v44 )
        goto LABEL_11;
      ++v30;
      v29 = 0;
      v49 = v13;
      v50 = v14;
      v52 = v33;
      v15 = (v61 + 1) * v33;
    }
    while ( (int *)v31 != v30 );
LABEL_29:
    if ( v49 <= 0 )
    {
      v39 = (int *)(a3 + 8LL * v14);
      v14 = *v39;
      if ( v29 )
      {
        ++*a5;
        v40 = v39[1];
        v41 = *v39;
        if ( v40 <= 0 )
          *(_DWORD *)(v60 + 4LL * *(int *)(v11 + 4 * v48)) = v41;
        else
          *(_DWORD *)(a3 + 8LL * v40) = v41;
        if ( (int)v41 > 0 )
          *(_DWORD *)(a3 + 8 * v41 + 4) = v40;
        v39[1] = v53 + 1;
      }
LABEL_36:
      if ( v14 <= 0 )
      {
        v13 = v49;
        v14 = v50;
        v42 = v61;
        goto LABEL_38;
      }
      continue;
    }
    break;
  }
  v13 = v49;
  v14 = v50;
LABEL_11:
  v26 = a6;
  result = 0;
LABEL_12:
  *v26 = v13;
  *a7 = v14;
  return result;
}

