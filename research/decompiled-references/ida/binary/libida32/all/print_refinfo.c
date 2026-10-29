__int64 __fastcall print_refinfo(__int64 *a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  const char *v8; // r13
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // r14
  size_t v12; // r15
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rsi
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r12
  __int64 v26; // r14
  unsigned __int64 v27; // r13
  __int64 v28; // rsi
  _DWORD *v29; // r12
  __int64 v30; // r12
  __int64 v31; // r14
  unsigned __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // r12
  __int64 v35; // r12
  __int64 v36; // r14
  unsigned __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 v40; // r12
  __int64 v41; // r14
  unsigned __int64 v42; // r13
  __int64 v43; // rsi
  __int64 v44; // r12
  __int64 v45; // rbp
  __int64 v46; // r13
  unsigned __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // r13
  unsigned __int64 v52; // r12
  __int64 v53; // rax
  __int64 result; // rax
  __int64 custom_refinfo; // rax
  __int64 v56; // r12
  unsigned __int64 v57; // r13
  __int64 v58; // r14
  __int64 v59; // r12
  __int64 v60; // r12
  __int64 v61; // rsi
  unsigned __int64 v62; // r13
  __int64 v63; // r14
  _DWORD *v64; // r12
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // [rsp+8h] [rbp-40h]

  if ( (_DWORD)a2 )
  {
    v56 = a1[1];
    if ( v56 )
    {
      v58 = v56 + 5;
      v57 = v56 + 6;
      a2 = *a1;
      --v56;
      if ( a1[2] >= v57 )
        goto LABEL_53;
    }
    else
    {
      a2 = *a1;
      v57 = 7;
      v58 = 6;
      if ( (unsigned __int64)a1[2] >= 7 )
      {
LABEL_53:
        a1[1] = v57;
        *(_BYTE *)(a2 + v58) = 0;
        v59 = *a1 + v56;
        *(_DWORD *)v59 = 1163154767;
        *(_WORD *)(v59 + 4) = 24402;
        goto LABEL_2;
      }
    }
    v71 = qvector_reserve(a1, a2, v57, 1);
    *a1 = v71;
    a2 = v71;
    goto LABEL_53;
  }
LABEL_2:
  v7 = a3[3] & 0x4F;
  if ( (a3[3] & 0x40) == 0 )
  {
    if ( (unsigned __int8)v7 <= 0xCu )
    {
      v8 = (&off_2B05220)[v7];
      if ( !v8 )
        goto LABEL_9;
LABEL_5:
      v9 = strlen(v8);
      v10 = a1[1];
      v11 = v9;
      v12 = v9;
      if ( v10 )
      {
        --v10;
        v13 = *a1;
        v12 = v9 + v10;
        v14 = v9 + v10 + 1;
        if ( a1[2] >= v14 )
          goto LABEL_7;
      }
      else
      {
        v13 = *a1;
        v14 = v9 + 1;
        if ( a1[2] >= v9 + 1 )
        {
LABEL_7:
          a1[1] = v14;
          *(_BYTE *)(v13 + v12) = 0;
          memmove((void *)(v10 + *a1), v8, v11);
          goto LABEL_9;
        }
      }
      v75 = v14;
      v65 = qvector_reserve(a1, v13, v14, 1);
      v14 = v75;
      *a1 = v65;
      v13 = v65;
      goto LABEL_7;
    }
    goto LABEL_8;
  }
  custom_refinfo = get_custom_refinfo((unsigned int)v7, a2, v7, a4, a5, a6);
  if ( !custom_refinfo )
  {
LABEL_8:
    sub_357520(a1);
    goto LABEL_9;
  }
  v8 = *(const char **)(custom_refinfo + 8);
  if ( v8 )
    goto LABEL_5;
LABEL_9:
  if ( *a3 != -1 )
    sub_357520(a1);
  if ( a3[2] )
    sub_357520(a1);
  v15 = a3[3];
  if ( (v15 & 0x10) != 0 )
  {
    v60 = a1[1];
    if ( v60 )
    {
      v63 = v60 + 6;
      v62 = v60 + 7;
      v61 = *a1;
      --v60;
      if ( a1[2] >= v62 )
        goto LABEL_56;
    }
    else
    {
      v61 = *a1;
      v62 = 8;
      v63 = 7;
      if ( (unsigned __int64)a1[2] >= 8 )
      {
LABEL_56:
        a1[1] = v62;
        *(_BYTE *)(v61 + v63) = 0;
        v64 = (_DWORD *)(*a1 + v60);
        *v64 = 1635152416;
        *(_DWORD *)((char *)v64 + 3) = 1717989217;
        goto LABEL_39;
      }
    }
    v70 = qvector_reserve(a1, v61, v62, 1);
    *a1 = v70;
    v61 = v70;
    goto LABEL_56;
  }
  if ( (v15 & 0x1000) != 0 )
  {
    v16 = a1[1];
    if ( v16 )
    {
      v19 = v16 + 7;
      v18 = v16 + 8;
      v17 = *a1;
      --v16;
      if ( a1[2] >= v18 )
        goto LABEL_17;
    }
    else
    {
      v17 = *a1;
      v18 = 9;
      v19 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_17;
    }
    v66 = qvector_reserve(a1, v17, v18, 1);
    *a1 = v66;
    v17 = v66;
LABEL_17:
    a1[1] = v18;
    *(_BYTE *)(v17 + v19) = 0;
    *(_QWORD *)(*a1 + v16) = 0x666572666C657320LL;
    v20 = a3[3];
    if ( (v20 & 0x20) != 0 )
      goto LABEL_18;
    goto LABEL_40;
  }
  sub_357520(a1);
LABEL_39:
  v20 = a3[3];
  if ( (v20 & 0x20) != 0 )
  {
LABEL_18:
    v21 = a1[1];
    if ( v21 )
    {
      v24 = v21 + 7;
      v23 = v21 + 8;
      v22 = *a1;
      --v21;
      if ( a1[2] >= v23 )
        goto LABEL_20;
    }
    else
    {
      v22 = *a1;
      v23 = 9;
      v24 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_20;
    }
    v67 = qvector_reserve(a1, v22, v23, 1);
    *a1 = v67;
    v22 = v67;
LABEL_20:
    a1[1] = v23;
    *(_BYTE *)(v22 + v24) = 0;
    *(_QWORD *)(*a1 + v21) = 0x646E657473617020LL;
    v20 = a3[3];
    if ( (v20 & 0x40) != 0 )
      goto LABEL_21;
    goto LABEL_41;
  }
LABEL_40:
  if ( (v20 & 0x40) != 0 )
  {
LABEL_21:
    v25 = a1[1];
    if ( v25 )
    {
      v26 = v25 + 6;
      v27 = v25 + 7;
      v28 = *a1;
      --v25;
      if ( a1[2] >= v27 )
        goto LABEL_23;
    }
    else
    {
      v28 = *a1;
      v27 = 8;
      v26 = 7;
      if ( (unsigned __int64)a1[2] >= 8 )
        goto LABEL_23;
    }
    v74 = qvector_reserve(a1, v28, v27, 1);
    *a1 = v74;
    v28 = v74;
LABEL_23:
    a1[1] = v27;
    *(_BYTE *)(v28 + v26) = 0;
    v29 = (_DWORD *)(*a1 + v25);
    *v29 = 1937072928;
    *(_DWORD *)((char *)v29 + 3) = 1836020851;
    v20 = a3[3];
    if ( (v20 & 0x100) != 0 )
      goto LABEL_24;
    goto LABEL_42;
  }
LABEL_41:
  if ( (v20 & 0x100) != 0 )
  {
LABEL_24:
    v30 = a1[1];
    if ( v30 )
    {
      v31 = v30 + 8;
      v32 = v30 + 9;
      v33 = *a1;
      --v30;
      if ( a1[2] >= v32 )
        goto LABEL_26;
    }
    else
    {
      v33 = *a1;
      v32 = 10;
      v31 = 9;
      if ( (unsigned __int64)a1[2] >= 0xA )
        goto LABEL_26;
    }
    v73 = qvector_reserve(a1, v33, v32, 1);
    *a1 = v73;
    v33 = v73;
LABEL_26:
    a1[1] = v32;
    *(_BYTE *)(v33 + v31) = 0;
    v34 = *a1 + v30;
    *(_QWORD *)v34 = 0x6361727462757320LL;
    *(_BYTE *)(v34 + 8) = 116;
    v20 = a3[3];
    if ( (v20 & 0x200) != 0 )
      goto LABEL_27;
    goto LABEL_43;
  }
LABEL_42:
  if ( (v20 & 0x200) != 0 )
  {
LABEL_27:
    v35 = a1[1];
    if ( v35 )
    {
      v36 = v35 + 8;
      v37 = v35 + 9;
      v38 = *a1;
      --v35;
      if ( a1[2] >= v37 )
        goto LABEL_29;
    }
    else
    {
      v38 = *a1;
      v37 = 10;
      v36 = 9;
      if ( (unsigned __int64)a1[2] >= 0xA )
        goto LABEL_29;
    }
    v72 = qvector_reserve(a1, v38, v37, 1);
    *a1 = v72;
    v38 = v72;
LABEL_29:
    a1[1] = v37;
    *(_BYTE *)(v38 + v36) = 0;
    v39 = *a1 + v35;
    *(_QWORD *)v39 = 0x6F64656E67697320LL;
    *(_BYTE *)(v39 + 8) = 112;
    v20 = a3[3];
    if ( (v20 & 0x400) != 0 )
      goto LABEL_30;
    goto LABEL_44;
  }
LABEL_43:
  if ( (v20 & 0x400) != 0 )
  {
LABEL_30:
    v40 = a1[1];
    if ( v40 )
    {
      v41 = v40 + 8;
      v42 = v40 + 9;
      v43 = *a1;
      --v40;
      if ( a1[2] >= v42 )
        goto LABEL_32;
    }
    else
    {
      v43 = *a1;
      v42 = 10;
      v41 = 9;
      if ( (unsigned __int64)a1[2] >= 0xA )
        goto LABEL_32;
    }
    v69 = qvector_reserve(a1, v43, v42, 1);
    *a1 = v69;
    v43 = v69;
LABEL_32:
    a1[1] = v42;
    *(_BYTE *)(v43 + v41) = 0;
    v44 = *a1 + v40;
    *(_QWORD *)v44 = 0x6F72657A206F6E20LL;
    *(_BYTE *)(v44 + 8) = 115;
    if ( (a3[3] & 0x800) != 0 )
      goto LABEL_33;
    goto LABEL_45;
  }
LABEL_44:
  if ( (v20 & 0x800) != 0 )
  {
LABEL_33:
    v45 = a1[1];
    if ( v45 )
    {
      v46 = v45 + 7;
      v47 = v45 + 8;
      v48 = *a1;
      --v45;
      if ( a1[2] >= v47 )
        goto LABEL_35;
    }
    else
    {
      v48 = *a1;
      v47 = 9;
      v46 = 8;
      if ( (unsigned __int64)a1[2] >= 9 )
        goto LABEL_35;
    }
    v68 = qvector_reserve(a1, v48, v47, 1);
    *a1 = v68;
    v48 = v68;
LABEL_35:
    a1[1] = v47;
    *(_BYTE *)(v48 + v46) = 0;
    *(_QWORD *)(*a1 + v45) = 0x73656E6F206F6E20LL;
    v49 = a1[1];
    if ( !v49 )
      goto LABEL_36;
LABEL_46:
    v52 = v49 + 1;
    v51 = v49;
    v50 = *a1;
    --v49;
    if ( a1[2] >= v52 )
      goto LABEL_47;
    goto LABEL_37;
  }
LABEL_45:
  v49 = a1[1];
  if ( v49 )
    goto LABEL_46;
LABEL_36:
  v50 = *a1;
  v51 = 1;
  v52 = 2;
  if ( (unsigned __int64)a1[2] < 2 )
  {
LABEL_37:
    v53 = qvector_reserve(a1, v50, v52, 1);
    *a1 = v53;
    v50 = v53;
  }
LABEL_47:
  a1[1] = v52;
  *(_BYTE *)(v50 + v49) = 32;
  result = *a1;
  *(_BYTE *)(*a1 + v51) = 0;
  return result;
}

