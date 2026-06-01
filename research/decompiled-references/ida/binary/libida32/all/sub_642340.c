__int64 __fastcall sub_642340(__int64 *a1, const char *a2, const char *a3, char a4, char a5)
{
  __int64 result; // rax
  __int64 v8; // r8
  __int64 v11; // r13
  int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r13
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rsi
  size_t v19; // rax
  size_t v20; // r8
  size_t v21; // r9
  __int64 v22; // rsi
  size_t v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // r13
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  size_t v28; // rax
  __int64 v29; // rbp
  size_t v30; // r12
  size_t v31; // r13
  __int64 v32; // rsi
  size_t v33; // rdx
  __int64 v34; // rbp
  __int64 v35; // r13
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rbp
  size_t v39; // rax
  __int64 v40; // r8
  size_t v41; // r12
  size_t v42; // r13
  __int64 v43; // rsi
  size_t v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rbp
  unsigned __int64 v47; // r13
  __int64 v48; // r8
  __int64 v49; // rsi
  __int64 v50; // rbp
  unsigned __int64 v51; // r13
  __int64 v52; // r8
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbp
  unsigned __int64 v57; // r12
  __int64 v58; // r13
  __int64 v59; // rsi
  __int64 v60; // rbp
  unsigned __int64 v61; // r12
  __int64 v62; // r13
  __int64 v63; // rsi
  __int64 v64; // rbp
  __int64 v65; // r13
  unsigned __int64 v66; // r12
  __int64 v67; // rsi
  __int64 v68; // rbp
  unsigned __int64 v69; // r12
  __int64 v70; // r13
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // [rsp+0h] [rbp-50h]
  size_t v83; // [rsp+0h] [rbp-50h]
  __int64 v84; // [rsp+0h] [rbp-50h]
  unsigned __int64 v85; // [rsp+0h] [rbp-50h]
  unsigned __int64 v86; // [rsp+0h] [rbp-50h]
  __int64 v87; // [rsp+0h] [rbp-50h]
  size_t v88; // [rsp+8h] [rbp-48h]
  __int64 v89; // [rsp+8h] [rbp-48h]
  __int64 v90; // [rsp+8h] [rbp-48h]
  __int64 v91; // [rsp+8h] [rbp-48h]
  size_t v92; // [rsp+10h] [rbp-40h]

  if ( !a2 )
    return 0;
  result = 0;
  if ( *a2 )
  {
    v8 = a1[1];
    v11 = v8;
    if ( a4 == 37 )
    {
      v82 = a1[1];
      v12 = strncmp(a2, &byte_22B2890, 5u);
      v8 = v11;
      if ( !v12 )
      {
        v39 = strlen(a2);
        v40 = v82;
        v41 = v39;
        v42 = v39;
        if ( v82 )
        {
          v40 = v82 - 1;
          v42 = v39 + v82 - 1;
        }
        v43 = *a1;
        v44 = v42 + 1;
        if ( a1[2] < v42 + 1 )
        {
          v91 = v40;
          v77 = qvector_reserve(a1, v43, v44, 1);
          v40 = v91;
          v44 = v42 + 1;
          *a1 = v77;
          v43 = v77;
        }
        a1[1] = v44;
        *(_BYTE *)(v43 + v42) = 0;
        memmove((void *)(v40 + *a1), a2, v41);
        goto LABEL_20;
      }
    }
    else if ( !a4 )
    {
LABEL_15:
      v19 = strlen(a2);
      v20 = v19;
      v21 = v19;
      if ( v11 )
      {
        --v11;
        v21 = v19 + v11;
      }
      v22 = *a1;
      v23 = v21 + 1;
      if ( a1[2] < v21 + 1 )
      {
        v92 = v19;
        v88 = v21;
        v83 = v21 + 1;
        v45 = qvector_reserve(a1, v22, v23, 1);
        v20 = v92;
        v21 = v88;
        *a1 = v45;
        v23 = v83;
        v22 = v45;
      }
      a1[1] = v23;
      *(_BYTE *)(v22 + v21) = 0;
      memmove((void *)(v11 + *a1), a2, v20);
      if ( a4 )
      {
        v46 = a1[1];
        if ( v46 )
        {
          v47 = v46 + 1;
          v48 = a1[1];
          --v46;
        }
        else
        {
          v48 = 1;
          v47 = 2;
        }
        v49 = *a1;
        if ( a1[2] < v47 )
        {
          v87 = v48;
          v76 = qvector_reserve(a1, v49, v47, 1);
          v48 = v87;
          *a1 = v76;
          v49 = v76;
        }
        a1[1] = v47;
        *(_BYTE *)(v49 + v46) = 2;
        *(_BYTE *)(*a1 + v48) = 0;
        v50 = a1[1];
        if ( v50 )
        {
          v51 = v50 + 1;
          v52 = a1[1];
          --v50;
        }
        else
        {
          v52 = 1;
          v51 = 2;
        }
        v53 = *a1;
        if ( a1[2] < v51 )
        {
          v84 = v52;
          v73 = qvector_reserve(a1, v53, v51, 1);
          v52 = v84;
          *a1 = v73;
          v53 = v73;
        }
        a1[1] = v51;
        *(_BYTE *)(v53 + v50) = a4;
        *(_BYTE *)(*a1 + v52) = 0;
      }
LABEL_20:
      if ( a3 && *a3 )
      {
        if ( a5 )
        {
          v56 = a1[1];
          if ( v56 )
          {
            v57 = v56 + 1;
            v58 = a1[1];
            --v56;
          }
          else
          {
            v58 = 1;
            v57 = 2;
          }
          v59 = *a1;
          if ( a1[2] < v57 )
          {
            v78 = qvector_reserve(a1, v59, v57, 1);
            *a1 = v78;
            v59 = v78;
          }
          a1[1] = v57;
          *(_BYTE *)(v59 + v56) = 1;
          *(_BYTE *)(*a1 + v58) = 0;
          v60 = a1[1];
          if ( v60 )
          {
            v61 = v60 + 1;
            v62 = a1[1];
            --v60;
          }
          else
          {
            v62 = 1;
            v61 = 2;
          }
          v63 = *a1;
          if ( a1[2] < v61 )
          {
            v81 = qvector_reserve(a1, v63, v61, 1);
            *a1 = v81;
            v63 = v81;
          }
          a1[1] = v61;
          *(_BYTE *)(v63 + v60) = a5;
          *(_BYTE *)(*a1 + v62) = 0;
        }
        v24 = a1[1];
        if ( v24 )
        {
          v25 = v24 + 3;
          v26 = v24 + 4;
          --v24;
        }
        else
        {
          v26 = 5;
          v25 = 4;
        }
        v27 = *a1;
        if ( a1[2] < v26 )
        {
          v55 = qvector_reserve(a1, v27, v26, 1);
          *a1 = v55;
          v27 = v55;
        }
        a1[1] = v26;
        *(_BYTE *)(v27 + v25) = 0;
        *(_DWORD *)(*a1 + v24) = 539635488;
        v28 = strlen(a3);
        v29 = a1[1];
        v30 = v28;
        v31 = v28;
        if ( v29 )
        {
          --v29;
          v31 = v28 + v29;
        }
        v32 = *a1;
        v33 = v31 + 1;
        if ( a1[2] < v31 + 1 )
        {
          v54 = qvector_reserve(a1, v32, v33, 1);
          v33 = v31 + 1;
          *a1 = v54;
          v32 = v54;
        }
        a1[1] = v33;
        *(_BYTE *)(v32 + v31) = 0;
        memmove((void *)(v29 + *a1), a3, v30);
        v34 = a1[1];
        if ( v34 )
        {
          v35 = v34 + 2;
          v36 = v34 + 3;
          --v34;
        }
        else
        {
          v36 = 4;
          v35 = 3;
        }
        v37 = *a1;
        if ( a1[2] < v36 )
        {
          v72 = qvector_reserve(a1, v37, v36, 1);
          *a1 = v72;
          v37 = v72;
        }
        a1[1] = v36;
        *(_BYTE *)(v37 + v35) = 0;
        v38 = *a1 + v34;
        *(_WORD *)v38 = 10784;
        *(_BYTE *)(v38 + 2) = 47;
        if ( a5 )
        {
          v64 = a1[1];
          if ( v64 )
          {
            v66 = v64 + 1;
            v65 = a1[1];
            --v64;
          }
          else
          {
            v65 = 1;
            v66 = 2;
          }
          v67 = *a1;
          if ( a1[2] < v66 )
          {
            v79 = qvector_reserve(a1, v67, v66, 1);
            *a1 = v79;
            v67 = v79;
          }
          a1[1] = v66;
          *(_BYTE *)(v67 + v64) = 2;
          *(_BYTE *)(*a1 + v65) = 0;
          v68 = a1[1];
          if ( v68 )
          {
            v69 = v68 + 1;
            v70 = a1[1];
            --v68;
          }
          else
          {
            v70 = 1;
            v69 = 2;
          }
          v71 = *a1;
          if ( a1[2] < v69 )
          {
            v80 = qvector_reserve(a1, v71, v69, 1);
            *a1 = v80;
            v71 = v80;
          }
          a1[1] = v69;
          *(_BYTE *)(v71 + v68) = a5;
          *(_BYTE *)(*a1 + v70) = 0;
        }
      }
      return 1;
    }
    if ( v11 )
    {
      v13 = v11 + 1;
      v8 = v11 - 1;
    }
    else
    {
      v11 = 1;
      v13 = 2;
    }
    v14 = *a1;
    if ( a1[2] < v13 )
    {
      v90 = v8;
      v86 = v13;
      v75 = qvector_reserve(a1, v14, v13, 1);
      v8 = v90;
      v13 = v86;
      *a1 = v75;
      v14 = v75;
    }
    a1[1] = v13;
    *(_BYTE *)(v14 + v8) = 1;
    *(_BYTE *)(*a1 + v11) = 0;
    v15 = a1[1];
    if ( v15 )
    {
      v16 = v15 + 1;
      v17 = a1[1];
      --v15;
    }
    else
    {
      v17 = 1;
      v16 = 2;
    }
    v18 = *a1;
    if ( a1[2] < v16 )
    {
      v89 = v17;
      v85 = v16;
      v74 = qvector_reserve(a1, v18, v16, 1);
      v17 = v89;
      v16 = v85;
      *a1 = v74;
      v18 = v74;
    }
    a1[1] = v16;
    *(_BYTE *)(v18 + v15) = a4;
    *(_BYTE *)(*a1 + v17) = 0;
    v11 = a1[1];
    goto LABEL_15;
  }
  return result;
}

