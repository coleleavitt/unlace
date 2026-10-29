unsigned int **__fastcall sub_7968A0(__int64 a1, unsigned int **a2)
{
  _QWORD *v4; // rbp
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  unsigned int **result; // rax
  __int64 v8; // r13
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  size_t v11; // rsi
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r13
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int ***v21; // rdx
  unsigned int ***v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int ***v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 *v31; // rbp
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rsi
  unsigned int **v38; // r15
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  unsigned int ***v42; // rcx
  _QWORD *v43; // rcx
  __int64 v44; // r12
  unsigned int v45; // eax
  unsigned int v46; // ebp
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int v49; // r13d
  unsigned int *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rdi
  unsigned int v57; // edi
  unsigned int v58; // ebp
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  unsigned int v64; // ebp
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // ebp
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  char **exception; // rbp
  __int64 v76; // [rsp+0h] [rbp-78h]
  unsigned int v77; // [rsp+0h] [rbp-78h]
  _QWORD *v78; // [rsp+0h] [rbp-78h]
  int v79; // [rsp+Ch] [rbp-6Ch]
  __int64 v80[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  v5 = **a2;
  if ( v4 )
  {
    if ( v5 < *((_DWORD *)v4 - 1) )
    {
      v6 = *((_DWORD *)v4 + v5);
      if ( v6 != -1 )
      {
        result = *(unsigned int ***)(a1 + 8);
        if ( result && (v5 >= *((_DWORD *)result - 1) || *((_DWORD *)result + v5) == -1) )
        {
          v54 = *(_QWORD *)(a1 + 40);
          if ( v54 )
          {
            for ( LODWORD(v55) = *(_DWORD *)(v54 - 4); (_DWORD)v55; *(_DWORD *)(v54 - 4) = v55 )
            {
              v55 = (unsigned int)(v55 - 1);
              v56 = ***(unsigned int ***)(v54 + 8 * v55);
              if ( (unsigned int)v56 >= *((_DWORD *)result - 1) )
                break;
              v57 = *((_DWORD *)result + v56);
              if ( v57 == -1 )
                break;
              if ( v6 >= v57 )
                break;
            }
          }
        }
        return result;
      }
    }
  }
  result = *(unsigned int ***)(a1 + 56);
  if ( !result )
    return result;
  if ( v5 >= *((_DWORD *)result - 1) )
    return result;
  v76 = v5;
  if ( !result[v5] )
    return result;
  if ( v4 )
  {
    v8 = *((unsigned int *)v4 - 1);
    if ( v5 >= (unsigned int)v8 )
    {
      v9 = v5 + 1;
      goto LABEL_17;
    }
  }
  else
  {
    v9 = v5 + 1;
    v8 = 0;
    v62 = (_QWORD *)sub_186B270(0x10u);
    v4 = v62 + 1;
    *v62 = 2;
    *(_QWORD *)(a1 + 16) = v62 + 1;
LABEL_17:
    while ( 1 )
    {
      v13 = *((_DWORD *)v4 - 2);
      if ( v13 >= v9 )
        break;
      v10 = (3 * v13 + 1) >> 1;
      v11 = 4 * v10 + 8;
      if ( 4 * v13 + 8 >= (unsigned int)v11 || v13 >= v10 )
        goto LABEL_85;
      v12 = (unsigned int *)sub_186B300(v4 - 1, v11);
      v4 = v12 + 2;
      *v12 = v10;
      *(_QWORD *)(a1 + 16) = v12 + 2;
    }
    v14 = 4 * v8;
    *((_DWORD *)v4 - 1) = v9;
    v15 = 4LL * v9;
    if ( v14 != v15 )
      memset((char *)v4 + v14, 255, v15 - v14);
  }
  v16 = *(_DWORD *)(a1 + 48);
  v17 = *(_QWORD **)(a1 + 32);
  *((_DWORD *)v4 + v76) = v16;
  *(_DWORD *)(a1 + 48) = v16 + 1;
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v68 = (3 * v18 + 1) >> 1;
      v69 = 8 * v68 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v69 || v18 >= v68 )
        goto LABEL_85;
      v70 = (unsigned int *)sub_186B300(v17 - 1, v69);
      v71 = v70[1];
      v17 = v70 + 2;
      *v70 = v68;
      *(_QWORD *)(a1 + 32) = v70 + 2;
      LODWORD(v70) = v71;
      v21 = (unsigned int ***)&v17[v71];
      v20 = (_DWORD)v70 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = (unsigned int ***)&v17[v19];
    }
  }
  else
  {
    v74 = (_QWORD *)sub_186B270(0x18u);
    v17 = v74 + 1;
    *v74 = 2;
    v20 = 1;
    *(_QWORD *)(a1 + 32) = v17;
    v21 = (unsigned int ***)v17;
  }
  *v21 = a2;
  v22 = *(unsigned int ****)(a1 + 40);
  *((_DWORD *)v17 - 1) = v20;
  if ( !v22 )
  {
    v73 = (_QWORD *)sub_186B270(0x18u);
    v22 = (unsigned int ***)(v73 + 1);
    *v73 = 2;
    v25 = 1;
    *(_QWORD *)(a1 + 40) = v22;
    v26 = v22;
    goto LABEL_26;
  }
  v23 = *((_DWORD *)v22 - 1);
  if ( v23 == *((_DWORD *)v22 - 2) )
  {
    v64 = (3 * v23 + 1) >> 1;
    v65 = 8 * v64 + 8;
    if ( 8 * v23 + 8 < (unsigned int)v65 && v23 < v64 )
    {
      v66 = (unsigned int *)sub_186B300(v22 - 1, v65);
      v67 = v66[1];
      v22 = (unsigned int ***)(v66 + 2);
      *v66 = v64;
      *(_QWORD *)(a1 + 40) = v66 + 2;
      LODWORD(v66) = v67;
      v26 = &v22[v67];
      v25 = (_DWORD)v66 + 1;
      goto LABEL_26;
    }
LABEL_85:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v80, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v80);
    sub_233E40((__int64)v80);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v24 = v23;
  v25 = v23 + 1;
  v26 = &v22[v24];
LABEL_26:
  *v26 = a2;
  *((_DWORD *)v22 - 1) = v25;
  v27 = *(_QWORD *)(a1 + 56);
  if ( !v27 )
    goto LABEL_43;
  v28 = **a2;
  if ( (unsigned int)v28 >= *(_DWORD *)(v27 - 4) )
    goto LABEL_41;
  v29 = *(_QWORD *)(v27 + 8 * v28);
  v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v29 <= 7 )
    goto LABEL_41;
  v31 = *(__int64 **)v30;
  v32 = *(_QWORD *)v30 + 8LL * *(unsigned int *)(v30 + 8);
  if ( *(_QWORD *)v30 == v32 )
    goto LABEL_41;
  while ( (unsigned __int64)*v31 <= 1 )
  {
    if ( (__int64 *)v32 == ++v31 )
      goto LABEL_41;
  }
  if ( v31 == (__int64 *)v32 )
    goto LABEL_41;
  v33 = *v31;
  do
  {
    sub_7968A0(a1, v33);
    v34 = v31 + 1;
    if ( (__int64 *)v32 == v31 + 1 )
      break;
    while ( 1 )
    {
      v33 = *v34;
      v31 = v34;
      if ( (unsigned __int64)*v34 > 1 )
        break;
      if ( (__int64 *)v32 == ++v34 )
        goto LABEL_40;
    }
  }
  while ( v34 != (__int64 *)v32 );
LABEL_40:
  v22 = *(unsigned int ****)(a1 + 40);
  if ( v22 )
LABEL_41:
    result = v22[*((_DWORD *)v22 - 1) - 1];
  else
    result = (unsigned int **)MEMORY[0x7FFFFFFF8];
  if ( a2 == result )
  {
LABEL_43:
    v35 = *(_QWORD **)(a1 + 24);
    if ( v35 )
      v79 = *((_DWORD *)v35 - 1);
    else
      v79 = 0;
    while ( 1 )
    {
      v36 = *(_QWORD *)(a1 + 32);
      v37 = (unsigned int)(*(_DWORD *)(v36 - 4) - 1);
      v38 = *(unsigned int ***)(v36 + 8 * v37);
      *(_DWORD *)(v36 - 4) = v37;
      if ( v35 )
      {
        v39 = *((_DWORD *)v35 - 1);
        if ( v39 == *((_DWORD *)v35 - 2) )
        {
          v58 = (3 * v39 + 1) >> 1;
          v59 = 8 * v58 + 8;
          if ( 8 * v39 + 8 >= (unsigned int)v59 || v39 >= v58 )
            goto LABEL_85;
          v60 = (unsigned int *)sub_186B300(v35 - 1, v59);
          v61 = v60[1];
          v35 = v60 + 2;
          *v60 = v58;
          *(_QWORD *)(a1 + 24) = v60 + 2;
          LODWORD(v60) = v61;
          v42 = (unsigned int ***)&v35[v61];
          v41 = (_DWORD)v60 + 1;
        }
        else
        {
          v40 = v39;
          v41 = v39 + 1;
          v42 = (unsigned int ***)&v35[v40];
        }
      }
      else
      {
        v72 = (_QWORD *)sub_186B270(0x18u);
        v35 = v72 + 1;
        *v72 = 2;
        v41 = 1;
        *(_QWORD *)(a1 + 24) = v35;
        v42 = (unsigned int ***)v35;
      }
      *v42 = v38;
      v43 = *(_QWORD **)(a1 + 8);
      *((_DWORD *)v35 - 1) = v41;
      v44 = **v38;
      if ( v43 )
      {
        v45 = *((_DWORD *)v43 - 1);
        v77 = v45;
        if ( (unsigned int)v44 >= v45 )
        {
          v46 = v44 + 1;
          if ( v45 < (int)v44 + 1 )
            goto LABEL_55;
          *((_DWORD *)v43 - 1) = v46;
        }
      }
      else
      {
        v46 = v44 + 1;
        if ( (_DWORD)v44 != -1 )
        {
          v63 = (_QWORD *)sub_186B270(0x10u);
          v77 = 0;
          v43 = v63 + 1;
          *v63 = 2;
          *(_QWORD *)(a1 + 8) = v63 + 1;
LABEL_55:
          while ( 1 )
          {
            v51 = *((_DWORD *)v43 - 2);
            if ( v51 >= v46 )
              break;
            v47 = (3 * v51 + 1) >> 1;
            v48 = 4 * v47 + 8;
            v49 = v47;
            if ( 4 * v51 + 8 >= (unsigned int)v48 || v51 >= v47 )
              goto LABEL_85;
            v50 = (unsigned int *)sub_186B300(v43 - 1, v48);
            v43 = v50 + 2;
            *v50 = v49;
            *(_QWORD *)(a1 + 8) = v50 + 2;
          }
          *((_DWORD *)v43 - 1) = v46;
          v52 = 4LL * v46;
          v53 = 4LL * v77;
          if ( v53 != v52 )
          {
            v78 = v43;
            memset((char *)v43 + v53, 255, v52 - v53);
            v43 = v78;
          }
        }
      }
      *((_DWORD *)v43 + v44) = v79;
      if ( v38 == a2 )
        break;
      v35 = *(_QWORD **)(a1 + 24);
    }
    result = *(unsigned int ***)(a1 + 40);
    --*((_DWORD *)result - 1);
  }
  return result;
}

