__int64 __fastcall sub_65EEB0(__int64 *a1, char a2, char a3)
{
  char v3; // r13
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rsi
  __int64 v28; // r13
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // rbp
  unsigned __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rbp
  unsigned __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rbp
  unsigned __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // r14
  unsigned __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rbp
  unsigned __int64 v49; // r13
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rbp
  unsigned __int64 v53; // r13
  __int64 v54; // r14
  __int64 v55; // rsi
  __int64 v56; // r14
  __int64 v57; // rsi
  __int64 v58; // r8
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // [rsp+8h] [rbp-40h]

  v3 = a2 & 0x40;
  if ( a3 )
  {
    if ( !v3 )
    {
      if ( a2 >= 0 )
        goto LABEL_4;
      goto LABEL_23;
    }
    goto LABEL_7;
  }
  v56 = a1[1];
  if ( v56 )
  {
    v59 = v56 + 1;
    v58 = a1[1];
    v57 = *a1;
    --v56;
    if ( a1[2] >= v59 )
      goto LABEL_38;
  }
  else
  {
    v57 = *a1;
    v58 = 1;
    v59 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_38;
  }
  v73 = v58;
  v65 = qvector_reserve(a1, v57, v59, 1);
  v58 = v73;
  *a1 = v65;
  v57 = v65;
LABEL_38:
  a1[1] = v59;
  *(_BYTE *)(v57 + v56) = 32;
  result = *a1;
  *(_BYTE *)(*a1 + v58) = 0;
  if ( !v3 )
  {
    if ( a2 >= 0 )
      return result;
    goto LABEL_23;
  }
LABEL_7:
  v11 = a1[1];
  if ( v11 )
  {
    v14 = v11 + 1;
    v13 = a1[1];
    v12 = *a1;
    --v11;
    if ( a1[2] >= v14 )
      goto LABEL_9;
  }
  else
  {
    v12 = *a1;
    v13 = 1;
    v14 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_9;
  }
  v66 = qvector_reserve(a1, v12, v14, 1);
  *a1 = v66;
  v12 = v66;
LABEL_9:
  a1[1] = v14;
  *(_BYTE *)(v12 + v11) = 1;
  *(_BYTE *)(*a1 + v13) = 0;
  v15 = a1[1];
  if ( v15 )
  {
    v16 = v15 + 1;
    v17 = a1[1];
    v18 = *a1;
    --v15;
    if ( a1[2] >= v16 )
      goto LABEL_11;
  }
  else
  {
    v18 = *a1;
    v17 = 1;
    v16 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_11;
  }
  v71 = qvector_reserve(a1, v18, v16, 1);
  *a1 = v71;
  v18 = v71;
LABEL_11:
  a1[1] = v16;
  *(_BYTE *)(v18 + v15) = 32;
  *(_BYTE *)(*a1 + v17) = 0;
  v19 = a1[1];
  if ( v19 )
  {
    v20 = v19 + 4;
    v21 = v19 + 5;
    v22 = *a1;
    --v19;
    if ( a1[2] >= v21 )
      goto LABEL_13;
  }
  else
  {
    v22 = *a1;
    v21 = 6;
    v20 = 5;
    if ( (unsigned __int64)a1[2] >= 6 )
      goto LABEL_13;
  }
  v70 = qvector_reserve(a1, v22, v21, 1);
  *a1 = v70;
  v22 = v70;
LABEL_13:
  a1[1] = v21;
  *(_BYTE *)(v22 + v20) = 0;
  v23 = *a1 + v19;
  *(_DWORD *)v23 = 1936617315;
  *(_BYTE *)(v23 + 4) = 116;
  v24 = a1[1];
  if ( v24 )
  {
    v25 = v24 + 1;
    v26 = a1[1];
    v27 = *a1;
    --v24;
    if ( a1[2] >= v25 )
      goto LABEL_15;
  }
  else
  {
    v27 = *a1;
    v26 = 1;
    v25 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_15;
  }
  v69 = qvector_reserve(a1, v27, v25, 1);
  *a1 = v69;
  v27 = v69;
LABEL_15:
  a1[1] = v25;
  *(_BYTE *)(v27 + v24) = 2;
  *(_BYTE *)(*a1 + v26) = 0;
  v28 = a1[1];
  if ( !v28 )
  {
    v31 = *a1;
    v30 = 1;
    v29 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_17;
LABEL_58:
    v68 = qvector_reserve(a1, v31, v29, 1);
    *a1 = v68;
    v31 = v68;
    goto LABEL_17;
  }
  v29 = v28 + 1;
  v30 = a1[1];
  v31 = *a1;
  --v28;
  if ( a1[2] < v29 )
    goto LABEL_58;
LABEL_17:
  a1[1] = v29;
  *(_BYTE *)(v31 + v28) = 32;
  result = *a1;
  *(_BYTE *)(*a1 + v30) = 0;
  if ( a2 >= 0 )
    goto LABEL_34;
  v32 = a1[1];
  if ( v32 )
  {
    v33 = v32 + 1;
    v34 = a1[1];
    --v32;
  }
  else
  {
    v34 = 1;
    v33 = 2;
  }
  v35 = *a1;
  if ( a1[2] < v33 )
  {
    v72 = qvector_reserve(a1, v35, v33, 1);
    *a1 = v72;
    v35 = v72;
  }
  a1[1] = v33;
  *(_BYTE *)(v35 + v32) = 32;
  *(_BYTE *)(*a1 + v34) = 0;
LABEL_23:
  v36 = a1[1];
  if ( v36 )
  {
    v37 = v36 + 1;
    v38 = a1[1];
    v39 = *a1;
    --v36;
    if ( a1[2] >= v37 )
      goto LABEL_25;
  }
  else
  {
    v39 = *a1;
    v38 = 1;
    v37 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_25;
  }
  v64 = qvector_reserve(a1, v39, v37, 1);
  *a1 = v64;
  v39 = v64;
LABEL_25:
  a1[1] = v37;
  *(_BYTE *)(v39 + v36) = 1;
  *(_BYTE *)(*a1 + v38) = 0;
  v40 = a1[1];
  if ( v40 )
  {
    v41 = v40 + 1;
    v42 = a1[1];
    v43 = *a1;
    --v40;
    if ( a1[2] >= v41 )
      goto LABEL_27;
  }
  else
  {
    v43 = *a1;
    v42 = 1;
    v41 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_27;
  }
  v63 = qvector_reserve(a1, v43, v41, 1);
  *a1 = v63;
  v43 = v63;
LABEL_27:
  a1[1] = v41;
  *(_BYTE *)(v43 + v40) = 32;
  *(_BYTE *)(*a1 + v42) = 0;
  v44 = a1[1];
  if ( v44 )
  {
    v45 = v44 + 7;
    v46 = v44 + 8;
    v47 = *a1;
    --v44;
    if ( a1[2] >= v46 )
      goto LABEL_29;
  }
  else
  {
    v47 = *a1;
    v46 = 9;
    v45 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_29;
  }
  v62 = qvector_reserve(a1, v47, v46, 1);
  *a1 = v62;
  v47 = v62;
LABEL_29:
  a1[1] = v46;
  *(_BYTE *)(v47 + v45) = 0;
  *(_QWORD *)(*a1 + v44) = 0x656C6974616C6F76LL;
  v48 = a1[1];
  if ( v48 )
  {
    v49 = v48 + 1;
    v50 = a1[1];
    v51 = *a1;
    --v48;
    if ( a1[2] >= v49 )
      goto LABEL_31;
  }
  else
  {
    v51 = *a1;
    v50 = 1;
    v49 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_31;
  }
  v61 = qvector_reserve(a1, v51, v49, 1);
  *a1 = v61;
  v51 = v61;
LABEL_31:
  a1[1] = v49;
  *(_BYTE *)(v51 + v48) = 2;
  *(_BYTE *)(*a1 + v50) = 0;
  v52 = a1[1];
  if ( !v52 )
  {
    v55 = *a1;
    v54 = 1;
    v53 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_33;
LABEL_42:
    v60 = qvector_reserve(a1, v55, v53, 1);
    *a1 = v60;
    v55 = v60;
    goto LABEL_33;
  }
  v53 = v52 + 1;
  v54 = a1[1];
  v55 = *a1;
  --v52;
  if ( a1[2] < v53 )
    goto LABEL_42;
LABEL_33:
  a1[1] = v53;
  *(_BYTE *)(v55 + v52) = 32;
  result = *a1;
  *(_BYTE *)(*a1 + v54) = 0;
LABEL_34:
  if ( a3 )
  {
LABEL_4:
    v6 = a1[1];
    if ( v6 )
    {
      v9 = v6 + 1;
      v8 = a1[1];
      v7 = *a1;
      --v6;
      if ( a1[2] >= v9 )
        goto LABEL_6;
    }
    else
    {
      v7 = *a1;
      v8 = 1;
      v9 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
      {
LABEL_6:
        a1[1] = v9;
        *(_BYTE *)(v7 + v6) = 32;
        result = *a1;
        *(_BYTE *)(*a1 + v8) = 0;
        return result;
      }
    }
    v67 = qvector_reserve(a1, v7, v9, 1);
    *a1 = v67;
    v7 = v67;
    goto LABEL_6;
  }
  return result;
}
