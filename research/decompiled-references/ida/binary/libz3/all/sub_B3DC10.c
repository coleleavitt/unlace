void __fastcall sub_B3DC10(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // edi
  _DWORD *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int *v11; // r13
  int v12; // r11d
  unsigned int v13; // ecx
  __int64 v14; // rbp
  double v15; // xmm2_8
  unsigned int *v16; // r12
  double v17; // xmm1_8
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int *v20; // r10
  unsigned int v21; // edx
  double v22; // xmm0_8
  unsigned int v23; // edi
  __int64 v24; // rbx
  unsigned int *v25; // r13
  unsigned int v26; // r8d
  int v27; // r11d
  unsigned int v28; // ecx
  __int64 v29; // r15
  __int64 v30; // rbp
  double v31; // xmm2_8
  unsigned int *v32; // r13
  double v33; // xmm1_8
  unsigned int *v34; // r10
  __int64 v35; // r8
  unsigned int v36; // r9d
  unsigned int v37; // edx
  double v38; // xmm0_8
  int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // r8
  __int64 v42; // r11
  unsigned int *v43; // r12
  unsigned int v44; // edi
  int v45; // r10d
  unsigned int v46; // edx
  __int64 v47; // rbp
  __int64 *v48; // rax
  __int64 v49; // rbx
  double v50; // xmm2_8
  unsigned int *v51; // r12
  double v52; // xmm1_8
  unsigned int *v53; // r9
  __int64 v54; // rsi
  unsigned int v55; // edi
  unsigned int v56; // eax
  double v57; // xmm0_8
  __int64 v58; // [rsp+0h] [rbp-58h]
  _DWORD *v59; // [rsp+8h] [rbp-50h]
  __int64 v60; // [rsp+10h] [rbp-48h]
  __int64 v61; // [rsp+18h] [rbp-40h]
  unsigned int v62; // [rsp+20h] [rbp-38h]
  unsigned int v63; // [rsp+20h] [rbp-38h]
  unsigned int v64; // [rsp+20h] [rbp-38h]
  int v65; // [rsp+24h] [rbp-34h]

  v2 = a1;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 64);
  if ( v4 )
  {
    if ( a2 >= *(_DWORD *)(v4 - 4) )
      goto LABEL_30;
    v6 = (unsigned int)a2;
    v7 = *(_DWORD *)(v4 + 4LL * (unsigned int)a2);
    v8 = (_DWORD *)(4LL * (unsigned int)a2);
    if ( !v7 )
      goto LABEL_30;
  }
  else
  {
    if ( a2 >= 0 )
      goto LABEL_53;
    v6 = (unsigned int)a2;
    v7 = *(_DWORD *)(4LL * (unsigned int)a2);
    v8 = (_DWORD *)(4LL * (unsigned int)a2);
    if ( !v7 )
      goto LABEL_50;
  }
  v9 = *(_QWORD *)(v2 + 32);
  v10 = v7;
  v11 = (unsigned int *)(v9 + 4LL * v7);
  v62 = *v11;
  if ( v9 )
    v12 = *(_DWORD *)(v9 - 4);
  else
    v12 = 0;
  v13 = 2 * v7;
  if ( (int)(2 * v7) < v12 )
  {
    v59 = v8;
    v14 = **(_QWORD **)(v2 + 24);
    v61 = v2;
    v65 = a2;
    v15 = *(double *)(v14 + 8LL * v62);
    while ( 1 )
    {
      v21 = v13 + 1;
      v20 = (unsigned int *)(v9 + 4LL * v13);
      v18 = *v20;
      v22 = *(double *)(v14 + 8 * v18);
      v19 = *v20;
      if ( (int)(v13 + 1) >= v12
        || (v16 = (unsigned int *)(v9 + 4LL * v21), v17 = *(double *)(v14 + 8LL * *v16), v17 <= v22) )
      {
        v21 = v13;
        v11 = (unsigned int *)(v9 + 4 * v10);
        if ( v22 <= v15 )
        {
LABEL_14:
          v8 = v59;
          v2 = v61;
          a2 = v65;
          goto LABEL_15;
        }
      }
      else
      {
        v18 = *v16;
        v19 = *v16;
        v20 = (unsigned int *)(v9 + 4LL * v21);
        v11 = (unsigned int *)(v9 + 4 * v10);
        if ( v17 <= v15 )
          goto LABEL_14;
      }
      v13 = 2 * v21;
      *v11 = v19;
      *(_DWORD *)(v4 + 4 * v18) = v7;
      if ( (int)(2 * v21) >= v12 )
        break;
      v10 = v21;
      v7 = v21;
    }
    v8 = v59;
    v11 = v20;
    v7 = v21;
    v2 = v61;
    a2 = v65;
  }
LABEL_15:
  *v11 = v62;
  *(_DWORD *)(v4 + 4LL * v62) = v7;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 - 4) <= a2 )
      goto LABEL_30;
    v23 = *(_DWORD *)((char *)v8 + v4);
    if ( !v23 )
      goto LABEL_30;
    goto LABEL_18;
  }
  if ( a2 >= 0 )
  {
LABEL_53:
    if ( !v5 )
      return;
    goto LABEL_31;
  }
  v23 = *v8;
  if ( *v8 )
  {
LABEL_18:
    v24 = v23;
    v25 = (unsigned int *)(v9 + 4LL * v23);
    v26 = *v25;
    if ( v9 )
      v27 = *(_DWORD *)(v9 - 4);
    else
      v27 = 0;
    v28 = 2 * v23;
    v29 = v26;
    if ( (int)(2 * v23) >= v27 )
    {
LABEL_29:
      *v25 = v26;
      *(_DWORD *)(v4 + 4 * v29) = v23;
    }
    else
    {
      v63 = *v25;
      v58 = v26;
      v30 = **(_QWORD **)(v2 + 24);
      v60 = v2;
      v31 = *(double *)(v30 + 8LL * v26);
      while ( 1 )
      {
        v37 = v28 + 1;
        v34 = (unsigned int *)(v9 + 4LL * v28);
        v35 = *v34;
        v38 = *(double *)(v30 + 8 * v35);
        v36 = *v34;
        if ( (int)(v28 + 1) >= v27
          || (v32 = (unsigned int *)(v9 + 4LL * v37), v33 = *(double *)(v30 + 8LL * *v32), v33 <= v38) )
        {
          v37 = v28;
          v25 = (unsigned int *)(v9 + 4 * v24);
          if ( v38 <= v31 )
          {
LABEL_28:
            v26 = v63;
            v29 = v58;
            v2 = v60;
            goto LABEL_29;
          }
        }
        else
        {
          v34 = (unsigned int *)(v9 + 4LL * v37);
          v35 = *v32;
          v36 = *v32;
          v25 = (unsigned int *)(v9 + 4 * v24);
          if ( v33 <= v31 )
            goto LABEL_28;
        }
        v28 = 2 * v37;
        *v25 = v36;
        *(_DWORD *)(v4 + 4 * v35) = v23;
        if ( (int)(2 * v37) >= v27 )
          break;
        v24 = v37;
        v23 = v37;
      }
      v2 = v60;
      *v34 = v63;
      *(_DWORD *)(v4 + 4 * v58) = v37;
    }
LABEL_30:
    if ( !v5 )
    {
      v39 = 0;
      goto LABEL_32;
    }
LABEL_31:
    v39 = *(_DWORD *)(v5 - 4);
LABEL_32:
    if ( a2 >= v39 )
      return;
    v6 = (unsigned int)a2;
    goto LABEL_34;
  }
LABEL_50:
  if ( v5 )
    goto LABEL_31;
LABEL_34:
  v40 = *(_DWORD *)(v5 + 4 * v6);
  if ( v40 )
  {
    v41 = *(_QWORD *)(v2 + 56);
    v42 = v40;
    v43 = (unsigned int *)(v41 + 4LL * v40);
    v44 = *v43;
    if ( v41 )
      v45 = *(_DWORD *)(v41 - 4);
    else
      v45 = 0;
    v46 = 2 * v40;
    v47 = v44;
    if ( (int)(2 * v40) >= v45 )
    {
LABEL_46:
      *v43 = v44;
      *(_DWORD *)(v5 + 4 * v47) = v40;
    }
    else
    {
      v48 = *(__int64 **)(v2 + 48);
      v64 = *v43;
      v49 = *v48;
      v50 = *(double *)(*v48 + 8LL * v44);
      while ( 1 )
      {
        v56 = v46 + 1;
        v53 = (unsigned int *)(v41 + 4LL * v46);
        v54 = *v53;
        v57 = *(double *)(v49 + 8 * v54);
        v55 = *v53;
        if ( (int)(v46 + 1) >= v45
          || (v51 = (unsigned int *)(v41 + 4LL * v56), v52 = *(double *)(v49 + 8LL * *v51), v52 <= v57) )
        {
          v56 = v46;
          v43 = (unsigned int *)(v41 + 4 * v42);
          if ( v57 <= v50 )
          {
LABEL_45:
            v44 = v64;
            goto LABEL_46;
          }
        }
        else
        {
          v53 = (unsigned int *)(v41 + 4LL * v56);
          v54 = *v51;
          v55 = *v51;
          v43 = (unsigned int *)(v41 + 4 * v42);
          if ( v52 <= v50 )
            goto LABEL_45;
        }
        v46 = 2 * v56;
        *v43 = v55;
        *(_DWORD *)(v5 + 4 * v54) = v40;
        if ( (int)(2 * v56) >= v45 )
          break;
        v42 = v56;
        v40 = v56;
      }
      *v53 = v64;
      *(_DWORD *)(v5 + 4 * v47) = v56;
    }
  }
}

