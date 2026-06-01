__int64 *__fastcall sub_514500(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rbp
  int v4; // r12d
  _BYTE *v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  int v12; // r12d
  __int64 v13; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // r13
  int v16; // r12d
  __int64 v17; // rsi
  unsigned __int64 v18; // r14
  __int64 v19; // r13
  int v20; // r12d
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  __int64 v23; // r13
  int v24; // r12d
  __int64 v25; // rsi
  unsigned __int64 v26; // r14
  __int64 v27; // r13
  int v28; // r12d
  __int64 v29; // rsi
  __int16 aflags; // ax
  __int64 v31; // r13
  unsigned __int64 v32; // r14
  int v33; // r12d
  __int64 v34; // rsi
  unsigned __int64 v35; // r13
  __int64 v36; // r12
  int v37; // ebp
  __int64 v38; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax

  v2 = sub_5AFCE0(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 1480LL));
  *a1 = 0;
  v3 = (unsigned int *)v2;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = (*(_QWORD *)(v2 + 8) & 1) != 0 ? 46 : 82;
  v5 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
  *a1 = (__int64)v5;
  v6 = 2;
  a1[1] = 2;
  *v5 = v4;
  *(_BYTE *)(*a1 + 1) = 0;
  v7 = a1[1];
  v8 = (*((_QWORD *)v3 + 1) & 2LL) == 0 ? 46 : 70;
  if ( v7 )
    v6 = v7-- + 1;
  v9 = *a1;
  if ( a1[2] < v6 )
  {
    v40 = qvector_reserve(a1, v9, v6, 1);
    *a1 = v40;
    v9 = v40;
  }
  a1[1] = v6;
  v10 = 2;
  *(_BYTE *)(v9 + v7) = v8;
  *(_BYTE *)(*a1 + v7 + 1) = 0;
  v11 = a1[1];
  v12 = (*((_QWORD *)v3 + 1) & 4LL) == 0 ? 46 : 76;
  if ( v11 )
    v10 = v11-- + 1;
  v13 = *a1;
  if ( a1[2] < v10 )
  {
    v47 = qvector_reserve(a1, v13, v10, 1);
    *a1 = v47;
    v13 = v47;
  }
  a1[1] = v10;
  v14 = 2;
  *(_BYTE *)(v13 + v11) = v12;
  *(_BYTE *)(*a1 + v11 + 1) = 0;
  v15 = a1[1];
  v16 = (*((_QWORD *)v3 + 1) & 0x10000LL) == 0 ? 46 : 77;
  if ( v15 )
    v14 = v15-- + 1;
  v17 = *a1;
  if ( a1[2] < v14 )
  {
    v46 = qvector_reserve(a1, v17, v14, 1);
    *a1 = v46;
    v17 = v46;
  }
  a1[1] = v14;
  v18 = 2;
  *(_BYTE *)(v17 + v15) = v16;
  *(_BYTE *)(*a1 + v15 + 1) = 0;
  v19 = a1[1];
  v20 = (*((_QWORD *)v3 + 1) & 0x20000LL) == 0 ? 46 : 79;
  if ( v19 )
    v18 = v19-- + 1;
  v21 = *a1;
  if ( a1[2] < v18 )
  {
    v45 = qvector_reserve(a1, v21, v18, 1);
    *a1 = v45;
    v21 = v45;
  }
  a1[1] = v18;
  v22 = 2;
  *(_BYTE *)(v21 + v19) = v20;
  *(_BYTE *)(*a1 + v19 + 1) = 0;
  v23 = a1[1];
  v24 = (*((_QWORD *)v3 + 1) & 8LL) == 0 ? 46 : 83;
  if ( v23 )
    v22 = v23-- + 1;
  v25 = *a1;
  if ( a1[2] < v22 )
  {
    v44 = qvector_reserve(a1, v25, v22, 1);
    *a1 = v44;
    v25 = v44;
  }
  a1[1] = v22;
  v26 = 2;
  *(_BYTE *)(v25 + v23) = v24;
  *(_BYTE *)(*a1 + v23 + 1) = 0;
  v27 = a1[1];
  v28 = (*((_QWORD *)v3 + 1) & 0x10LL) == 0 ? 46 : 66;
  if ( v27 )
    v26 = v27-- + 1;
  v29 = *a1;
  if ( a1[2] < v26 )
  {
    v43 = qvector_reserve(a1, v29, v26, 1);
    *a1 = v43;
    v29 = v43;
  }
  a1[1] = v26;
  *(_BYTE *)(v29 + v27) = v28;
  *(_BYTE *)(*a1 + v27 + 1) = 0;
  aflags = get_aflags(*v3);
  v31 = a1[1];
  v32 = 2;
  v33 = (aflags & 0x800) == 0 ? 46 : 84;
  if ( v31 )
    v32 = v31-- + 1;
  v34 = *a1;
  if ( a1[2] < v32 )
  {
    v42 = qvector_reserve(a1, v34, v32, 1);
    *a1 = v42;
    v34 = v42;
  }
  a1[1] = v32;
  *(_BYTE *)(v34 + v31) = v33;
  *(_BYTE *)(*a1 + v31 + 1) = 0;
  v35 = 2;
  v36 = a1[1];
  v37 = (*((_QWORD *)v3 + 1) & 0x100LL) == 0 ? 46 : 61;
  if ( v36 )
    v35 = v36-- + 1;
  v38 = *a1;
  if ( a1[2] < v35 )
  {
    v41 = qvector_reserve(a1, v38, v35, 1);
    *a1 = v41;
    v38 = v41;
  }
  a1[1] = v35;
  *(_BYTE *)(v38 + v36) = v37;
  *(_BYTE *)(*a1 + v36 + 1) = 0;
  return a1;
}

