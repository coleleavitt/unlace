_QWORD *__fastcall sub_6453E0(_QWORD *a1, __int64 a2, __int64 *a3, unsigned __int64 *a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // r13
  unsigned __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // r13
  unsigned __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // r13
  unsigned __int64 v36; // r14
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // r13
  unsigned __int64 v40; // r14
  __int64 v41; // r12
  __int64 v42; // rsi
  __int64 v43; // r12
  unsigned __int64 v44; // r13
  __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v59; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-50h]
  _QWORD v61[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *a4;
  v61[1] = __readfsqword(0x28u);
  v60 = v5;
  do
  {
    v47 = sub_51B8E0(*(_QWORD *)(*(_QWORD *)a2 + 1632LL), v5);
    if ( !v47 )
    {
      *a1 = 0;
      return a1;
    }
    v10 = a3[1];
    if ( v10 )
    {
      v7 = v10 + 1;
      v8 = a3[1];
      v9 = *a3;
      --v10;
      if ( a3[2] >= v7 )
        goto LABEL_3;
    }
    else
    {
      v9 = *a3;
      v8 = 1;
      v7 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_3;
    }
    v48 = qvector_reserve(a3, v9, v7, 1);
    *a3 = v48;
    v9 = v48;
LABEL_3:
    a3[1] = v7;
    *(_BYTE *)(v9 + v10) = 1;
    *(_BYTE *)(*a3 + v8) = 0;
    v11 = a3[1];
    if ( v11 )
    {
      v12 = v11 + 1;
      v13 = a3[1];
      v14 = *a3;
      --v11;
      if ( a3[2] >= v12 )
        goto LABEL_5;
    }
    else
    {
      v14 = *a3;
      v13 = 1;
      v12 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_5;
    }
    v55 = qvector_reserve(a3, v14, v12, 1);
    *a3 = v55;
    v14 = v55;
LABEL_5:
    a3[1] = v12;
    *(_BYTE *)(v14 + v11) = 9;
    *(_BYTE *)(*a3 + v13) = 0;
    v15 = a3[1];
    if ( v15 )
    {
      v16 = v15 + 1;
      v17 = a3[1];
      v18 = *a3;
      --v15;
      if ( a3[2] >= v16 )
        goto LABEL_7;
    }
    else
    {
      v18 = *a3;
      v17 = 1;
      v16 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_7;
    }
    v54 = qvector_reserve(a3, v18, v16, 1);
    *a3 = v54;
    v18 = v54;
LABEL_7:
    a3[1] = v16;
    *(_BYTE *)(v18 + v15) = 91;
    *(_BYTE *)(*a3 + v17) = 0;
    v19 = a3[1];
    if ( v19 )
    {
      v20 = v19 + 1;
      v21 = a3[1];
      v22 = *a3;
      --v19;
      if ( a3[2] >= v20 )
        goto LABEL_9;
    }
    else
    {
      v22 = *a3;
      v21 = 1;
      v20 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_9;
    }
    v57 = qvector_reserve(a3, v22, v20, 1);
    *a3 = v57;
    v22 = v57;
LABEL_9:
    a3[1] = v20;
    *(_BYTE *)(v22 + v19) = 2;
    *(_BYTE *)(*a3 + v21) = 0;
    v23 = a3[1];
    if ( v23 )
    {
      v24 = v23 + 1;
      v25 = a3[1];
      v26 = *a3;
      --v23;
      if ( a3[2] >= v24 )
        goto LABEL_11;
    }
    else
    {
      v26 = *a3;
      v25 = 1;
      v24 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_11;
    }
    v56 = qvector_reserve(a3, v26, v24, 1);
    *a3 = v56;
    v26 = v56;
LABEL_11:
    a3[1] = v24;
    *(_BYTE *)(v26 + v23) = 9;
    *(_BYTE *)(*a3 + v25) = 0;
    if ( *(_QWORD *)(v47 + 8) )
    {
      if ( *(_DWORD *)(v47 + 8) )
        sub_357520(a3);
      sub_357520(a3);
    }
    v27 = a3[1];
    if ( v27 )
    {
      v28 = v27 + 1;
      v29 = a3[1];
      v30 = *a3;
      --v27;
      if ( a3[2] >= v28 )
        goto LABEL_17;
    }
    else
    {
      v30 = *a3;
      v29 = 1;
      v28 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_17;
    }
    v53 = qvector_reserve(a3, v30, v28, 1);
    *a3 = v53;
    v30 = v53;
LABEL_17:
    a3[1] = v28;
    *(_BYTE *)(v30 + v27) = 1;
    *(_BYTE *)(*a3 + v29) = 0;
    v31 = a3[1];
    if ( v31 )
    {
      v32 = v31 + 1;
      v33 = a3[1];
      v34 = *a3;
      --v31;
      if ( a3[2] >= v32 )
        goto LABEL_19;
    }
    else
    {
      v34 = *a3;
      v33 = 1;
      v32 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_19;
    }
    v52 = qvector_reserve(a3, v34, v32, 1);
    *a3 = v52;
    v34 = v52;
LABEL_19:
    a3[1] = v32;
    *(_BYTE *)(v34 + v31) = 9;
    *(_BYTE *)(*a3 + v33) = 0;
    v35 = a3[1];
    if ( v35 )
    {
      v36 = v35 + 1;
      v37 = a3[1];
      v38 = *a3;
      --v35;
      if ( a3[2] >= v36 )
        goto LABEL_21;
    }
    else
    {
      v38 = *a3;
      v37 = 1;
      v36 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_21;
    }
    v51 = qvector_reserve(a3, v38, v36, 1);
    *a3 = v51;
    v38 = v51;
LABEL_21:
    a3[1] = v36;
    *(_BYTE *)(v38 + v35) = 93;
    *(_BYTE *)(*a3 + v37) = 0;
    v39 = a3[1];
    if ( v39 )
    {
      v40 = v39 + 1;
      v41 = a3[1];
      v42 = *a3;
      --v39;
      if ( a3[2] >= v40 )
        goto LABEL_23;
    }
    else
    {
      v42 = *a3;
      v41 = 1;
      v40 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_23;
    }
    v50 = qvector_reserve(a3, v42, v40, 1);
    *a3 = v50;
    v42 = v50;
LABEL_23:
    a3[1] = v40;
    *(_BYTE *)(v42 + v39) = 2;
    *(_BYTE *)(*a3 + v41) = 0;
    v43 = a3[1];
    if ( v43 )
    {
      v44 = v43 + 1;
      v45 = a3[1];
      v46 = *a3;
      --v43;
      if ( a3[2] >= v44 )
        goto LABEL_25;
    }
    else
    {
      v46 = *a3;
      v45 = 1;
      v44 = 2;
      if ( (unsigned __int64)a3[2] >= 2 )
        goto LABEL_25;
    }
    v49 = qvector_reserve(a3, v46, v44, 1);
    *a3 = v49;
    v46 = v49;
LABEL_25:
    a3[1] = v44;
    *(_BYTE *)(v46 + v43) = 9;
    *(_BYTE *)(*a3 + v45) = 0;
    v5 = *(_QWORD *)v47;
  }
  while ( (*(_BYTE *)v47 & 0xF) == 0xB );
  v61[0] = 0;
  copy_tinfo_t(v61);
  v59 = v61[0];
  if ( LOBYTE(v61[0]) )
  {
    LOBYTE(v59) = v61[0] & 0x3F;
    v61[0] = v60 & 0xC0 | v59;
  }
  *a1 = 0;
  copy_tinfo_t(a1);
  clear_tinfo_t(v61);
  return a1;
}

