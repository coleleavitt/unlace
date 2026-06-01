unsigned __int64 __fastcall sub_65F730(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // rsi
  __int64 v29; // r12
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rsi
  size_t v33; // rax
  __int64 v34; // r12
  size_t v35; // r13
  size_t v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rbp
  unsigned __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rbp
  unsigned __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  char v56[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v57; // [rsp+408h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( !print_argloc(v56, 1024, a2, a3, a4) )
    return v57 - __readfsqword(0x28u);
  v5 = a1[1];
  if ( v5 )
  {
    v8 = v5 + 1;
    v7 = a1[1];
    v6 = *a1;
    --v5;
    if ( a1[2] >= v8 )
      goto LABEL_5;
  }
  else
  {
    v6 = *a1;
    v7 = 1;
    v8 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_5;
  }
  v46 = qvector_reserve(a1, v6, v8, 1);
  *a1 = v46;
  v6 = v46;
LABEL_5:
  a1[1] = v8;
  *(_BYTE *)(v6 + v5) = 1;
  *(_BYTE *)(*a1 + v7) = 0;
  v9 = a1[1];
  if ( v9 )
  {
    v10 = v9 + 1;
    v11 = a1[1];
    v12 = *a1;
    --v9;
    if ( a1[2] >= v10 )
      goto LABEL_7;
  }
  else
  {
    v12 = *a1;
    v11 = 1;
    v10 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_7;
  }
  v47 = qvector_reserve(a1, v12, v10, 1);
  *a1 = v47;
  v12 = v47;
LABEL_7:
  a1[1] = v10;
  *(_BYTE *)(v12 + v9) = 9;
  *(_BYTE *)(*a1 + v11) = 0;
  v13 = a1[1];
  if ( v13 )
  {
    v14 = v13 + 1;
    v15 = v13 + 2;
    v16 = *a1;
    --v13;
    if ( a1[2] >= v15 )
      goto LABEL_9;
  }
  else
  {
    v16 = *a1;
    v15 = 3;
    v14 = 2;
    if ( (unsigned __int64)a1[2] >= 3 )
      goto LABEL_9;
  }
  v49 = qvector_reserve(a1, v16, v15, 1);
  *a1 = v49;
  v16 = v49;
LABEL_9:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  *(_WORD *)(*a1 + v13) = 15424;
  v17 = a1[1];
  if ( v17 )
  {
    v18 = v17 + 1;
    v19 = a1[1];
    v20 = *a1;
    --v17;
    if ( a1[2] >= v18 )
      goto LABEL_11;
  }
  else
  {
    v20 = *a1;
    v19 = 1;
    v18 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
  }
  v48 = qvector_reserve(a1, v20, v18, 1);
  *a1 = v48;
  v20 = v48;
LABEL_11:
  a1[1] = v18;
  *(_BYTE *)(v20 + v17) = 2;
  *(_BYTE *)(*a1 + v19) = 0;
  v21 = a1[1];
  if ( !v21 )
  {
    v24 = *a1;
    v23 = 1;
    v22 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_13;
LABEL_45:
    v50 = qvector_reserve(a1, v24, v22, 1);
    *a1 = v50;
    v24 = v50;
    goto LABEL_13;
  }
  v22 = v21 + 1;
  v23 = a1[1];
  v24 = *a1;
  --v21;
  if ( a1[2] < v22 )
    goto LABEL_45;
LABEL_13:
  a1[1] = v22;
  *(_BYTE *)(v24 + v21) = 9;
  *(_BYTE *)(*a1 + v23) = 0;
  if ( v56[0] )
  {
    v25 = a1[1];
    if ( v25 )
    {
      v26 = v25 + 1;
      v27 = a1[1];
      --v25;
    }
    else
    {
      v27 = 1;
      v26 = 2;
    }
    v28 = *a1;
    if ( a1[2] < v26 )
    {
      v54 = qvector_reserve(a1, v28, v26, 1);
      *a1 = v54;
      v28 = v54;
    }
    a1[1] = v26;
    *(_BYTE *)(v28 + v25) = 1;
    *(_BYTE *)(*a1 + v27) = 0;
    v29 = a1[1];
    if ( v29 )
    {
      v30 = v29 + 1;
      v31 = a1[1];
      --v29;
    }
    else
    {
      v31 = 1;
      v30 = 2;
    }
    v32 = *a1;
    if ( a1[2] < v30 )
    {
      v53 = qvector_reserve(a1, v32, v30, 1);
      *a1 = v53;
      v32 = v53;
    }
    a1[1] = v30;
    *(_BYTE *)(v32 + v29) = 16;
    *(_BYTE *)(*a1 + v31) = 0;
    v33 = strlen(v56);
    v34 = a1[1];
    v35 = v33;
    v36 = v33;
    if ( v34 )
    {
      --v34;
      v36 = v33 + v34;
    }
    v37 = *a1;
    if ( a1[2] < v36 + 1 )
    {
      v55 = qvector_reserve(a1, v37, v36 + 1, 1);
      *a1 = v55;
      v37 = v55;
    }
    a1[1] = v36 + 1;
    *(_BYTE *)(v37 + v36) = 0;
    memmove((void *)(v34 + *a1), v56, v35);
    v38 = a1[1];
    if ( v38 )
    {
      v39 = v38 + 1;
      v40 = a1[1];
      --v38;
    }
    else
    {
      v40 = 1;
      v39 = 2;
    }
    v41 = *a1;
    if ( a1[2] < v39 )
    {
      v52 = qvector_reserve(a1, v41, v39, 1);
      *a1 = v52;
      v41 = v52;
    }
    a1[1] = v39;
    *(_BYTE *)(v41 + v38) = 2;
    *(_BYTE *)(*a1 + v40) = 0;
    v42 = a1[1];
    if ( v42 )
    {
      v43 = v42 + 1;
      v44 = a1[1];
      --v42;
    }
    else
    {
      v44 = 1;
      v43 = 2;
    }
    v45 = *a1;
    if ( a1[2] < v43 )
    {
      v51 = qvector_reserve(a1, v45, v43, 1);
      *a1 = v51;
      v45 = v51;
    }
    a1[1] = v43;
    *(_BYTE *)(v45 + v42) = 16;
    *(_BYTE *)(*a1 + v44) = 0;
  }
  sub_65F4F0(a1, 62);
  return v57 - __readfsqword(0x28u);
}
