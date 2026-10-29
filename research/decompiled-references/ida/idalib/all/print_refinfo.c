__int64 __fastcall print_refinfo(__int64 *a1, int a2, __int64 a3)
{
  int v4; // edx
  const char *v5; // r13
  size_t v6; // rax
  __int64 v7; // r12
  size_t v8; // r14
  size_t v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rsi
  _DWORD *v26; // r12
  __int64 v27; // r12
  __int64 v28; // r14
  unsigned __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // r12
  __int64 v33; // r14
  unsigned __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // r14
  unsigned __int64 v39; // r13
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // rbp
  __int64 v43; // r13
  unsigned __int64 v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rbp
  __int64 v47; // rsi
  __int64 v48; // r13
  unsigned __int64 v49; // r12
  __int64 v50; // rax
  __int64 result; // rax
  __int64 custom_refinfo; // rax
  __int64 v53; // r12
  __int64 v54; // rsi
  unsigned __int64 v55; // r13
  __int64 v56; // r14
  __int64 v57; // r12
  __int64 v58; // r12
  __int64 v59; // rsi
  unsigned __int64 v60; // r13
  __int64 v61; // r14
  _DWORD *v62; // r12
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
  unsigned __int64 v73; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v53 = a1[1];
    if ( v53 )
    {
      v56 = v53 + 5;
      v55 = v53 + 6;
      v54 = *a1;
      --v53;
      if ( a1[2] >= v55 )
        goto LABEL_53;
    }
    else
    {
      v54 = *a1;
      v55 = 7;
      v56 = 6;
      if ( (unsigned __int64)a1[2] >= 7 )
      {
LABEL_53:
        a1[1] = v55;
        *(_BYTE *)(v54 + v56) = 0;
        v57 = *a1 + v53;
        *(_DWORD *)v57 = 1163154767;
        *(_WORD *)(v57 + 4) = 24402;
        goto LABEL_2;
      }
    }
    v69 = qvector_reserve(a1, v54, v55, 1);
    *a1 = v69;
    v54 = v69;
    goto LABEL_53;
  }
LABEL_2:
  v4 = *(_DWORD *)(a3 + 24) & 0x4F;
  if ( (*(_DWORD *)(a3 + 24) & 0x40) == 0 )
  {
    if ( (unsigned __int8)v4 <= 0xCu )
    {
      v5 = (&off_2B2F1E0)[v4];
      if ( !v5 )
        goto LABEL_9;
LABEL_5:
      v6 = strlen(v5);
      v7 = a1[1];
      v8 = v6;
      v9 = v6;
      if ( v7 )
      {
        --v7;
        v10 = *a1;
        v9 = v6 + v7;
        v11 = v6 + v7 + 1;
        if ( a1[2] >= v11 )
          goto LABEL_7;
      }
      else
      {
        v10 = *a1;
        v11 = v6 + 1;
        if ( a1[2] >= v6 + 1 )
        {
LABEL_7:
          a1[1] = v11;
          *(_BYTE *)(v10 + v9) = 0;
          memmove((void *)(v7 + *a1), v5, v8);
          goto LABEL_9;
        }
      }
      v73 = v11;
      v63 = qvector_reserve(a1, v10, v11, 1);
      v11 = v73;
      *a1 = v63;
      v10 = v63;
      goto LABEL_7;
    }
    goto LABEL_8;
  }
  custom_refinfo = get_custom_refinfo(v4);
  if ( !custom_refinfo )
  {
LABEL_8:
    sub_35A910(a1);
    goto LABEL_9;
  }
  v5 = *(const char **)(custom_refinfo + 8);
  if ( v5 )
    goto LABEL_5;
LABEL_9:
  if ( *(_QWORD *)a3 != -1 )
    sub_35A910(a1);
  if ( *(_QWORD *)(a3 + 16) )
    sub_35A910(a1);
  v12 = *(_DWORD *)(a3 + 24);
  if ( (v12 & 0x10) != 0 )
  {
    v58 = a1[1];
    if ( v58 )
    {
      v61 = v58 + 6;
      v60 = v58 + 7;
      v59 = *a1;
      --v58;
      if ( a1[2] >= v60 )
        goto LABEL_56;
    }
    else
    {
      v59 = *a1;
      v60 = 8;
      v61 = 7;
      if ( (unsigned __int64)a1[2] >= 8 )
      {
LABEL_56:
        a1[1] = v60;
        *(_BYTE *)(v59 + v61) = 0;
        v62 = (_DWORD *)(*a1 + v58);
        *v62 = 1635152416;
        *(_DWORD *)((char *)v62 + 3) = 1717989217;
        goto LABEL_39;
      }
    }
    v68 = qvector_reserve(a1, v59, v60, 1);
    *a1 = v68;
    v59 = v68;
    goto LABEL_56;
  }
  if ( (v12 & 0x1000) != 0 )
  {
    v13 = a1[1];
    if ( v13 )
    {
      v16 = v13 + 7;
      v15 = v13 + 8;
      v14 = *a1;
      --v13;
      if ( a1[2] >= v15 )
        goto LABEL_17;
    }
    else
    {
      v14 = *a1;
      v15 = 9;
      v16 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_17;
    }
    v64 = qvector_reserve(a1, v14, v15, 1);
    *a1 = v64;
    v14 = v64;
LABEL_17:
    a1[1] = v15;
    *(_BYTE *)(v14 + v16) = 0;
    *(_QWORD *)(*a1 + v13) = 0x666572666C657320LL;
    v17 = *(_DWORD *)(a3 + 24);
    if ( (v17 & 0x20) != 0 )
      goto LABEL_18;
    goto LABEL_40;
  }
  sub_35A910(a1);
LABEL_39:
  v17 = *(_DWORD *)(a3 + 24);
  if ( (v17 & 0x20) != 0 )
  {
LABEL_18:
    v18 = a1[1];
    if ( v18 )
    {
      v21 = v18 + 7;
      v20 = v18 + 8;
      v19 = *a1;
      --v18;
      if ( a1[2] >= v20 )
        goto LABEL_20;
    }
    else
    {
      v19 = *a1;
      v20 = 9;
      v21 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_20;
    }
    v65 = qvector_reserve(a1, v19, v20, 1);
    *a1 = v65;
    v19 = v65;
LABEL_20:
    a1[1] = v20;
    *(_BYTE *)(v19 + v21) = 0;
    *(_QWORD *)(*a1 + v18) = 0x646E657473617020LL;
    v17 = *(_DWORD *)(a3 + 24);
    if ( (v17 & 0x40) != 0 )
      goto LABEL_21;
    goto LABEL_41;
  }
LABEL_40:
  if ( (v17 & 0x40) != 0 )
  {
LABEL_21:
    v22 = a1[1];
    if ( v22 )
    {
      v23 = v22 + 6;
      v24 = v22 + 7;
      v25 = *a1;
      --v22;
      if ( a1[2] >= v24 )
        goto LABEL_23;
    }
    else
    {
      v25 = *a1;
      v24 = 8;
      v23 = 7;
      if ( (unsigned __int64)a1[2] >= 8 )
        goto LABEL_23;
    }
    v72 = qvector_reserve(a1, v25, v24, 1);
    *a1 = v72;
    v25 = v72;
LABEL_23:
    a1[1] = v24;
    *(_BYTE *)(v25 + v23) = 0;
    v26 = (_DWORD *)(*a1 + v22);
    *v26 = 1937072928;
    *(_DWORD *)((char *)v26 + 3) = 1836020851;
    v17 = *(_DWORD *)(a3 + 24);
    if ( (v17 & 0x100) != 0 )
      goto LABEL_24;
    goto LABEL_42;
  }
LABEL_41:
  if ( (v17 & 0x100) != 0 )
  {
LABEL_24:
    v27 = a1[1];
    if ( v27 )
    {
      v28 = v27 + 8;
      v29 = v27 + 9;
      v30 = *a1;
      --v27;
      if ( a1[2] >= v29 )
        goto LABEL_26;
    }
    else
    {
      v30 = *a1;
      v29 = 10;
      v28 = 9;
      if ( (unsigned __int64)a1[2] >= 0xA )
        goto LABEL_26;
    }
    v71 = qvector_reserve(a1, v30, v29, 1);
    *a1 = v71;
    v30 = v71;
LABEL_26:
    a1[1] = v29;
    *(_BYTE *)(v30 + v28) = 0;
    v31 = *a1 + v27;
    *(_QWORD *)v31 = 0x6361727462757320LL;
    *(_BYTE *)(v31 + 8) = 116;
    v17 = *(_DWORD *)(a3 + 24);
    if ( (v17 & 0x200) != 0 )
      goto LABEL_27;
    goto LABEL_43;
  }
LABEL_42:
  if ( (v17 & 0x200) != 0 )
  {
LABEL_27:
    v32 = a1[1];
    if ( v32 )
    {
      v33 = v32 + 8;
      v34 = v32 + 9;
      v35 = *a1;
      --v32;
      if ( a1[2] >= v34 )
        goto LABEL_29;
    }
    else
    {
      v35 = *a1;
      v34 = 10;
      v33 = 9;
      if ( (unsigned __int64)a1[2] >= 0xA )
        goto LABEL_29;
    }
    v70 = qvector_reserve(a1, v35, v34, 1);
    *a1 = v70;
    v35 = v70;
LABEL_29:
    a1[1] = v34;
    *(_BYTE *)(v35 + v33) = 0;
    v36 = *a1 + v32;
    *(_QWORD *)v36 = 0x6F64656E67697320LL;
    *(_BYTE *)(v36 + 8) = 112;
    v17 = *(_DWORD *)(a3 + 24);
    if ( (v17 & 0x400) != 0 )
      goto LABEL_30;
    goto LABEL_44;
  }
LABEL_43:
  if ( (v17 & 0x400) != 0 )
  {
LABEL_30:
    v37 = a1[1];
    if ( v37 )
    {
      v38 = v37 + 8;
      v39 = v37 + 9;
      v40 = *a1;
      --v37;
      if ( a1[2] >= v39 )
        goto LABEL_32;
    }
    else
    {
      v40 = *a1;
      v39 = 10;
      v38 = 9;
      if ( (unsigned __int64)a1[2] >= 0xA )
        goto LABEL_32;
    }
    v67 = qvector_reserve(a1, v40, v39, 1);
    *a1 = v67;
    v40 = v67;
LABEL_32:
    a1[1] = v39;
    *(_BYTE *)(v40 + v38) = 0;
    v41 = *a1 + v37;
    *(_QWORD *)v41 = 0x6F72657A206F6E20LL;
    *(_BYTE *)(v41 + 8) = 115;
    if ( (*(_DWORD *)(a3 + 24) & 0x800) != 0 )
      goto LABEL_33;
    goto LABEL_45;
  }
LABEL_44:
  if ( (v17 & 0x800) != 0 )
  {
LABEL_33:
    v42 = a1[1];
    if ( v42 )
    {
      v43 = v42 + 7;
      v44 = v42 + 8;
      v45 = *a1;
      --v42;
      if ( a1[2] >= v44 )
        goto LABEL_35;
    }
    else
    {
      v45 = *a1;
      v44 = 9;
      v43 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_35;
    }
    v66 = qvector_reserve(a1, v45, v44, 1);
    *a1 = v66;
    v45 = v66;
LABEL_35:
    a1[1] = v44;
    *(_BYTE *)(v45 + v43) = 0;
    *(_QWORD *)(*a1 + v42) = 0x73656E6F206F6E20LL;
    v46 = a1[1];
    if ( !v46 )
      goto LABEL_36;
LABEL_46:
    v49 = v46 + 1;
    v48 = v46;
    v47 = *a1;
    --v46;
    if ( a1[2] >= v49 )
      goto LABEL_47;
    goto LABEL_37;
  }
LABEL_45:
  v46 = a1[1];
  if ( v46 )
    goto LABEL_46;
LABEL_36:
  v47 = *a1;
  v48 = 1;
  v49 = 2;
  if ( (unsigned __int64)a1[2] < 2 )
  {
LABEL_37:
    v50 = qvector_reserve(a1, v47, v49, 1);
    *a1 = v50;
    v47 = v50;
  }
LABEL_47:
  a1[1] = v49;
  *(_BYTE *)(v47 + v46) = 32;
  result = *a1;
  *(_BYTE *)(*a1 + v48) = 0;
  return result;
}
