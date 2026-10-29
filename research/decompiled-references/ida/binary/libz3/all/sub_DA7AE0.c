__int64 __fastcall sub_DA7AE0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 *v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int *v19; // rbp
  unsigned int *v20; // r12
  unsigned __int64 v21; // r9
  char v22; // r10
  char v23; // cl
  char v24; // si
  char v25; // r14
  unsigned int *v26; // rax
  char v27; // dl
  char v28; // r14
  char v29; // cl
  unsigned int *v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rdi
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rdi
  __int64 v45; // rcx
  _DWORD *v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // rax
  char v49; // si
  char v50; // r14
  unsigned __int64 v51; // r8
  char v52; // si
  char v53; // cl
  char v54; // dl
  unsigned int *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  char v58; // cl
  char v59; // [rsp+0h] [rbp-48h]
  char v60; // [rsp+0h] [rbp-48h]
  char v61; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
  {
    sub_1872CE0("");
    sub_1873130(114, 875);
  }
  if ( (v4 & 1) == 0 )
    goto LABEL_4;
  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 1) == 0 )
    goto LABEL_4;
  v14 = v5 & 0xFFFFFFFFFFFFFFFELL;
  v15 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( !v15 )
    goto LABEL_4;
  v16 = *(_QWORD *)(v14 + 8);
  if ( !v16 )
    goto LABEL_4;
  v17 = *(_QWORD *)(v14 + 16);
  v18 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFELL) + 16);
  v19 = (unsigned int *)(v15 & 0xFFFFFFFFFFFFFFFELL);
  v20 = (unsigned int *)(v16 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v15 & 0xFFFFFFFFFFFFFFFELL) == (v16 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v22 = v16 & 1;
    if ( (v15 & 1) != (v16 & 1) )
    {
      v49 = v18;
      v50 = v17;
      v26 = (unsigned int *)(v18 & 0xFFFFFFFFFFFFFFFELL);
      v51 = v17 & 0xFFFFFFFFFFFFFFFELL;
      v24 = v49 ^ 1;
      v25 = v50 ^ 1;
      if ( (v15 & 1) != 0 )
      {
        v20 = v26;
        v26 = (unsigned int *)v51;
        v27 = v25 & 1;
        v28 = v24 & 1;
        goto LABEL_23;
      }
      v20 = (unsigned int *)v51;
      v58 = (v16 ^ 1) & 1;
LABEL_106:
      v28 = v25 & 1;
      v27 = v24 & 1;
      if ( v58 )
        goto LABEL_24;
      goto LABEL_23;
    }
  }
  if ( v19 == (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v22 = v17 & 1;
    if ( (v15 & 1) != (v17 & 1) )
    {
      v52 = v18;
      v53 = v16 ^ 1;
      v26 = (unsigned int *)(v18 & 0xFFFFFFFFFFFFFFFELL);
      v24 = v52 ^ 1;
      v25 = v53;
      if ( (v15 & 1) != 0 )
      {
        v54 = v53;
        v55 = v20;
        v20 = v26;
        v27 = v54 & 1;
        v28 = v24 & 1;
        v26 = v55;
        goto LABEL_23;
      }
      v58 = (v17 ^ 1) & 1;
      goto LABEL_106;
    }
  }
  v21 = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( v20 == (unsigned int *)(v18 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v22 = v16 & 1;
    if ( (v18 & 1) != (v16 & 1) )
    {
      v24 = v15 ^ 1;
      v25 = v17 ^ 1;
      if ( (v18 & 1) != 0 )
      {
        v20 = (unsigned int *)(v15 & 0xFFFFFFFFFFFFFFFELL);
        v26 = (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL);
        v27 = v25 & 1;
        v28 = v24 & 1;
        v19 = (unsigned int *)v21;
        goto LABEL_23;
      }
      v26 = (unsigned int *)(v15 & 0xFFFFFFFFFFFFFFFELL);
      v19 = (unsigned int *)(v16 & 0xFFFFFFFFFFFFFFFELL);
      v20 = (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL);
      v58 = (v16 ^ 1) & 1;
      goto LABEL_106;
    }
  }
  if ( (v17 & 0xFFFFFFFFFFFFFFFELL) != v21 || (v22 = v17 & 1, (v18 & 1) == (v17 & 1)) )
  {
LABEL_4:
    sub_1872CE0("");
    sub_1873130(114, 875);
  }
  v23 = v16 ^ 1;
  v24 = v15 ^ 1;
  v25 = v23;
  if ( (v18 & 1) == 0 )
  {
    v26 = (unsigned int *)(v15 & 0xFFFFFFFFFFFFFFFELL);
    v19 = (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL);
    v58 = (v17 ^ 1) & 1;
    goto LABEL_106;
  }
  v26 = v20;
  v20 = (unsigned int *)(v15 & 0xFFFFFFFFFFFFFFFELL);
  v27 = v23 & 1;
  v28 = v24 & 1;
  v19 = (unsigned int *)(v17 & 0xFFFFFFFFFFFFFFFELL);
LABEL_23:
  v29 = v27;
  v27 = v28;
  v22 = 0;
  v28 = v29;
  v30 = v20;
  v20 = v26;
  v26 = v30;
LABEL_24:
  if ( v26 != v20 || v28 == v27 )
  {
    v31 = a1[1];
    if ( !v27 )
      goto LABEL_5;
    if ( *((_QWORD *)v26 + 1) )
    {
      v40 = *(_QWORD *)(a1[3] + 8LL * (*v26 - 0x7FFFFFFF));
    }
    else
    {
      v42 = *v26;
      if ( !(_DWORD)v42 )
      {
        v40 = *(_QWORD *)(v31 + 856);
        if ( *(_WORD *)(v40 + 4) )
          goto LABEL_5;
        v41 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
        if ( !v41 )
          goto LABEL_5;
        goto LABEL_56;
      }
      v40 = *(_QWORD *)(*(_QWORD *)(*a1 + 112LL) + 8 * v42);
    }
    if ( *(_WORD *)(v40 + 4) || (v41 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL)) == nullptr )
    {
LABEL_57:
      if ( *(_QWORD *)(v31 + 856) != v40 )
      {
        v59 = v22;
        sub_15E1A70(a1[1]);
        v22 = v59;
      }
LABEL_5:
      if ( !v28 )
        goto LABEL_6;
      v35 = a1[1];
      if ( *((_QWORD *)v20 + 1) )
      {
        v36 = *(_QWORD *)(a1[3] + 8LL * (*v20 - 0x7FFFFFFF));
      }
      else
      {
        v38 = *v20;
        if ( !(_DWORD)v38 )
        {
          v36 = *(_QWORD *)(v35 + 856);
          if ( *(_WORD *)(v36 + 4) )
            goto LABEL_6;
          v37 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL);
          if ( !v37 )
            goto LABEL_6;
          goto LABEL_38;
        }
        v36 = *(_QWORD *)(*(_QWORD *)(*a1 + 112LL) + 8 * v38);
      }
      if ( *(_WORD *)(v36 + 4) || (v37 = *(_DWORD **)(*(_QWORD *)(v36 + 16) + 24LL)) == nullptr )
      {
LABEL_39:
        if ( *(_QWORD *)(v35 + 856) != v36 )
        {
          v61 = v22;
          sub_15E1A70(v35);
          v22 = v61;
        }
LABEL_6:
        if ( !v22 )
        {
LABEL_7:
          result = sub_15E1BF0(v31);
          v7 = result;
          goto LABEL_8;
        }
        v32 = a1[1];
        if ( *((_QWORD *)v19 + 1) )
        {
          v33 = *(_QWORD *)(a1[3] + 8LL * (*v19 - 0x7FFFFFFF));
        }
        else
        {
          v39 = *v19;
          if ( !(_DWORD)v39 )
          {
            v33 = *(_QWORD *)(v32 + 856);
            if ( *(_WORD *)(v33 + 4) )
              goto LABEL_7;
            v34 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL);
            if ( !v34 )
              goto LABEL_7;
LABEL_31:
            if ( !*v34 && v34[1] == 8 )
              goto LABEL_7;
LABEL_32:
            if ( *(_QWORD *)(v32 + 856) != v33 )
              sub_15E1A70(v32);
            goto LABEL_7;
          }
          v33 = *(_QWORD *)(*(_QWORD *)(*a1 + 112LL) + 8 * v39);
        }
        if ( *(_WORD *)(v33 + 4) )
          goto LABEL_32;
        v34 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL);
        if ( !v34 )
          goto LABEL_32;
        goto LABEL_31;
      }
LABEL_38:
      if ( !*v37 && v37[1] == 8 )
        goto LABEL_6;
      goto LABEL_39;
    }
LABEL_56:
    if ( !*v41 && v41[1] == 8 )
      goto LABEL_5;
    goto LABEL_57;
  }
  v43 = a1[1];
  if ( !v28 )
    goto LABEL_65;
  if ( *((_QWORD *)v26 + 1) )
  {
    v47 = *(_QWORD *)(a1[3] + 8LL * (*v26 - 0x7FFFFFFF));
  }
  else
  {
    v56 = *v26;
    if ( !(_DWORD)v56 )
    {
      v47 = *(_QWORD *)(v43 + 856);
      if ( *(_WORD *)(v47 + 4) )
        goto LABEL_65;
      v48 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL);
      if ( !v48 )
        goto LABEL_65;
      goto LABEL_78;
    }
    v47 = *(_QWORD *)(*(_QWORD *)(*a1 + 112LL) + 8 * v56);
  }
  if ( !*(_WORD *)(v47 + 4) )
  {
    v48 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL);
    if ( v48 )
    {
LABEL_78:
      if ( !*v48 && v48[1] == 8 )
        goto LABEL_65;
    }
  }
  if ( *(_QWORD *)(v43 + 856) != v47 )
  {
    v60 = v22;
    sub_15E1A70(a1[1]);
    v22 = v60;
  }
LABEL_65:
  if ( v22 )
  {
    v44 = a1[1];
    if ( *((_QWORD *)v19 + 1) )
    {
      v45 = *(_QWORD *)(a1[3] + 8LL * (*v19 - 0x7FFFFFFF));
    }
    else
    {
      v57 = *v19;
      if ( !(_DWORD)v57 )
      {
        v45 = *(_QWORD *)(v44 + 856);
        if ( *(_WORD *)(v45 + 4) )
          goto LABEL_66;
        v46 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
        if ( !v46 )
          goto LABEL_66;
LABEL_71:
        if ( !*v46 && v46[1] == 8 )
          goto LABEL_66;
LABEL_72:
        if ( *(_QWORD *)(v44 + 856) != v45 )
          sub_15E1A70(v44);
        goto LABEL_66;
      }
      v45 = *(_QWORD *)(*(_QWORD *)(*a1 + 112LL) + 8 * v57);
    }
    if ( *(_WORD *)(v45 + 4) )
      goto LABEL_72;
    v46 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
    if ( !v46 )
      goto LABEL_72;
    goto LABEL_71;
  }
LABEL_66:
  result = sub_15E1B70(v43);
  v7 = result;
LABEL_8:
  v8 = (unsigned int)(*(_DWORD *)a2 - 0x7FFFFFFF);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v9 = 8 * v8;
  v10 = (__int64 *)(v9 + a1[3]);
  v11 = *v10;
  if ( *v10 )
  {
    v12 = a1[2];
    if ( (*(_DWORD *)(v11 + 8))-- == 1 )
    {
      result = sub_15D7BC0(v12, v11);
      v10 = (__int64 *)(v9 + a1[3]);
    }
  }
  *v10 = v7;
  return result;
}

