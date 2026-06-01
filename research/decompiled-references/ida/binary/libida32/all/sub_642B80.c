void __fastcall sub_642B80(__int64 a1, __int64 *a2, char a3, _BYTE *a4)
{
  char v4; // dl
  const char *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rsi
  size_t v15; // rax
  __int64 v16; // r12
  unsigned int v17; // ebp
  size_t v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rsi
  _QWORD *v21; // r12
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rbp
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  char *v36; // r12
  const char *v37; // r13
  unsigned int v38; // ebp
  unsigned int v39; // ebp
  unsigned int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax

  v4 = a3 & 0x30;
  if ( v4 == 16 )
  {
    v6 = "union";
  }
  else if ( v4 == 32 )
  {
    v6 = "enum";
  }
  else
  {
    if ( v4 )
      return;
    if ( !a4 || (v6 = "__tuple", !sub_51C4D0(a4)) && (v6 = "__objc_interface", !sub_51C4F0(a4)) )
    {
      v7 = a2[1];
      v6 = "struct";
      if ( !v7 )
        goto LABEL_8;
LABEL_30:
      v10 = v7 + 1;
      v9 = v7;
      v8 = *a2;
      --v7;
      if ( a2[2] >= v10 )
        goto LABEL_9;
      goto LABEL_31;
    }
  }
  v7 = a2[1];
  if ( v7 )
    goto LABEL_30;
LABEL_8:
  v8 = *a2;
  v9 = 1;
  v10 = 2;
  if ( (unsigned __int64)a2[2] >= 2 )
    goto LABEL_9;
LABEL_31:
  v33 = qvector_reserve(a2, v8, v10, 1);
  *a2 = v33;
  v8 = v33;
LABEL_9:
  a2[1] = v10;
  *(_BYTE *)(v8 + v7) = 1;
  *(_BYTE *)(*a2 + v9) = 0;
  v11 = a2[1];
  if ( v11 )
  {
    v12 = v11 + 1;
    v13 = a2[1];
    v14 = *a2;
    --v11;
    if ( a2[2] >= v12 )
      goto LABEL_11;
  }
  else
  {
    v14 = *a2;
    v13 = 1;
    v12 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_11;
  }
  v42 = qvector_reserve(a2, v14, v12, 1);
  *a2 = v42;
  v14 = v42;
LABEL_11:
  a2[1] = v12;
  *(_BYTE *)(v14 + v11) = 32;
  *(_BYTE *)(*a2 + v13) = 0;
  v15 = strlen(v6);
  v16 = a2[1];
  v17 = v15;
  v18 = v15;
  if ( v16 )
  {
    --v16;
    v18 = v15 + v16;
  }
  v19 = *a2;
  if ( a2[2] < v18 + 1 )
  {
    v45 = qvector_reserve(a2, v19, v18 + 1, 1);
    *a2 = v45;
    v19 = v45;
  }
  a2[1] = v18 + 1;
  *(_BYTE *)(v19 + v18) = 0;
  v20 = *a2;
  v21 = (_QWORD *)(*a2 + v16);
  if ( v17 >= 8 )
  {
    *v21 = *(_QWORD *)v6;
    *(_QWORD *)((char *)v21 + v17 - 8) = *(_QWORD *)&v6[v17 - 8];
    v35 = (unsigned __int64)(v21 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v36 = (char *)v21 - v35;
    v37 = (const char *)(v6 - v36);
    v38 = ((_DWORD)v36 + v17) & 0xFFFFFFF8;
    if ( v38 >= 8 )
    {
      v39 = v38 & 0xFFFFFFF8;
      v40 = 0;
      do
      {
        v41 = v40;
        v40 += 8;
        *(_QWORD *)(v35 + v41) = *(_QWORD *)&v37[v41];
      }
      while ( v40 < v39 );
    }
LABEL_19:
    v20 = *a2;
    goto LABEL_20;
  }
  if ( (v17 & 4) != 0 )
  {
    *(_DWORD *)v21 = *(_DWORD *)v6;
    *(_DWORD *)((char *)v21 + v17 - 4) = *(_DWORD *)&v6[v17 - 4];
    v20 = *a2;
  }
  else
  {
    if ( !v17 )
      goto LABEL_20;
    *(_BYTE *)v21 = *v6;
    if ( (v17 & 2) == 0 )
      goto LABEL_19;
    *(_WORD *)((char *)v21 + v17 - 2) = *(_WORD *)&v6[v17 - 2];
    v20 = *a2;
  }
LABEL_20:
  v22 = a2[1];
  if ( v22 )
  {
    v23 = v22 + 1;
    v24 = a2[1];
    --v22;
    if ( a2[2] >= v23 )
      goto LABEL_22;
  }
  else
  {
    v24 = 1;
    v23 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_22;
  }
  v44 = qvector_reserve(a2, v20, v23, 1);
  *a2 = v44;
  v20 = v44;
LABEL_22:
  a2[1] = v23;
  *(_BYTE *)(v20 + v22) = 2;
  *(_BYTE *)(*a2 + v24) = 0;
  v25 = a2[1];
  if ( v25 )
  {
    v26 = v25 + 1;
    v27 = a2[1];
    v28 = *a2;
    --v25;
    if ( a2[2] >= v26 )
      goto LABEL_24;
  }
  else
  {
    v28 = *a2;
    v27 = 1;
    v26 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_24;
  }
  v43 = qvector_reserve(a2, v28, v26, 1);
  *a2 = v43;
  v28 = v43;
LABEL_24:
  a2[1] = v26;
  *(_BYTE *)(v28 + v25) = 32;
  *(_BYTE *)(*a2 + v27) = 0;
  v29 = a2[1];
  if ( !v29 )
  {
    v32 = *a2;
    v31 = 1;
    v30 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_26;
LABEL_34:
    v34 = qvector_reserve(a2, v32, v30, 1);
    *a2 = v34;
    v32 = v34;
    goto LABEL_26;
  }
  v30 = v29 + 1;
  v31 = a2[1];
  v32 = *a2;
  --v29;
  if ( a2[2] < v30 )
    goto LABEL_34;
LABEL_26:
  a2[1] = v30;
  *(_BYTE *)(v32 + v29) = 32;
  *(_BYTE *)(*a2 + v31) = 0;
}

