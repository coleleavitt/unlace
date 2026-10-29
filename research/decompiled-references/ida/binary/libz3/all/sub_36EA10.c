__int64 __fastcall sub_36EA10(__int64 a1)
{
  char **exception; // rbx
  _QWORD *v3; // rbp
  _QWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 i; // r14
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *v17; // rsi
  _QWORD *v18; // rbp
  _QWORD *v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned int **v22; // rbp
  unsigned int **j; // r13
  unsigned int v24; // r12d
  unsigned int v25; // r13d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  int v30; // r10d
  int v31; // r9d
  int v32; // esi
  __int64 v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  void (__fastcall ***v38)(void *); // r12
  __int64 result; // rax
  unsigned int v40; // r13d
  __int64 v41; // rbp
  char v42; // al
  _QWORD *v43; // rdx
  char v44; // cl
  _QWORD *v45; // rax
  unsigned int v46; // r13d
  unsigned int v47; // r15d
  __int64 v48; // r14
  char v49; // al
  __int64 v50; // rdx
  char v51; // si
  _QWORD *v52; // r9
  __int64 v53; // rdi
  _QWORD *v54; // r10
  __int64 v55; // r8
  __int64 v56; // rbp
  int v57; // eax
  int v58; // esi
  __int64 v59; // rsi
  int v60; // eax
  int v61; // eax
  int v62; // ebp
  __int64 v63; // rsi
  __int64 v64; // r13
  __int64 *v65; // rcx
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // rdi
  int v69; // eax
  int v70; // esi
  __int64 v71; // rsi
  int v72; // eax
  int v73; // eax
  __int64 v74; // rsi
  __int64 v75; // [rsp+8h] [rbp-80h]
  int v76[2]; // [rsp+8h] [rbp-80h]
  _QWORD *v77; // [rsp+8h] [rbp-80h]
  _QWORD *v78; // [rsp+8h] [rbp-80h]
  _QWORD *v79; // [rsp+10h] [rbp-78h]
  _QWORD *v80; // [rsp+10h] [rbp-78h]
  _QWORD *v81; // [rsp+10h] [rbp-78h]
  __int64 v82; // [rsp+18h] [rbp-70h]
  __int64 v83[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 56);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(_QWORD *)(a1 + 48);
          v7 = (*(_DWORD *)(v5 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_8;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_8:
    v3 = *(_QWORD **)(a1 + 56);
    if ( v3 )
LABEL_9:
      *((_DWORD *)v3 - 1) = 0;
  }
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
  v10 = *(_QWORD *)(v9 + 8);
  for ( i = v9; v10; *((_DWORD *)v13 - 1) = v16 )
  {
    if ( v8 >= *(_DWORD *)(v10 - 4) )
      break;
    v12 = *(_QWORD *)(v10 + 8LL * v8);
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = *(_QWORD **)(a1 + 56);
    if ( v13 )
    {
      v14 = *((_DWORD *)v13 - 1);
      if ( v14 == *((_DWORD *)v13 - 2) )
      {
        v25 = (3 * v14 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v26 || v14 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v83, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v13 - 1, v26);
        v28 = v27[1];
        v13 = v27 + 2;
        *v27 = v25;
        *(_QWORD *)(a1 + 56) = v27 + 2;
        LODWORD(v27) = v28;
        v17 = &v13[v28];
        v10 = *(_QWORD *)(i + 8);
        v16 = (_DWORD)v27 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = &v13[v15];
      }
    }
    else
    {
      v45 = (_QWORD *)sub_186B270(0x18u);
      v13 = v45 + 1;
      *v45 = 2;
      v16 = 1;
      *(_QWORD *)(a1 + 56) = v13;
      v17 = v13;
      v10 = *(_QWORD *)(i + 8);
    }
    *v17 = v12;
    ++v8;
  }
  v18 = *(_QWORD **)(a1 + 40);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(_QWORD *)(a1 + 32);
          v7 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_25;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_25:
    v18 = *(_QWORD **)(a1 + 40);
    if ( v18 )
LABEL_26:
      *((_DWORD *)v18 - 1) = 0;
  }
  v22 = *(unsigned int ***)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16)) + 8);
  if ( v22 )
  {
    for ( j = &v22[*((unsigned int *)v22 - 1)]; j != v22; *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4LL * (v24 >> 5)) |= 1 << v24 )
    {
      v24 = **v22;
      if ( v24 >= *(_DWORD *)(a1 + 168) )
        sub_186B510(a1 + 168, v24 + 1, 0);
      ++v22;
    }
  }
  v29 = *(_QWORD *)(a1 + 56);
  if ( v29 )
  {
    v30 = *(_DWORD *)(v29 - 4);
    v31 = v30 - 1;
    if ( v30 - 1 > 0 )
    {
      v32 = *(_DWORD *)(a1 + 24);
      v33 = v31;
      do
      {
        v32 = 214013 * v32 + 2531011;
        v34 = (__int64 *)(v29 + 8LL * ((HIWORD(v32) & 0x7FFF) % ((int)v33 + 1)));
        v35 = *(_QWORD *)(v29 + 8 * v33);
        v36 = *v34;
        *(_QWORD *)(v29 + 8 * v33--) = *v34;
        *v34 = v35;
      }
      while ( (int)v33 > 0 );
      *(_DWORD *)(a1 + 24) = v32;
      *(_QWORD *)(v29 + 8 * (v31 - (__int64)(v30 - 2))) = v36;
      *v34 = v35;
    }
  }
  v37 = sub_1377B20(*(_QWORD *)(a1 + 112));
  v38 = (void (__fastcall ***)(void *))v37;
  if ( v37 )
  {
    ++*(_DWORD *)(v37 + 16);
    result = *(_QWORD *)(a1 + 56);
    if ( !result )
      goto LABEL_47;
  }
  else
  {
    result = *(_QWORD *)(a1 + 56);
    if ( !result )
      return result;
  }
  v40 = 0;
  while ( 1 )
  {
    if ( v40 >= *(_DWORD *)(result - 4) )
    {
      v46 = 0;
      goto LABEL_54;
    }
    v41 = v40;
    v42 = sub_13742D0(v38, *(_QWORD *)(result + v41 * 8));
    v43 = *(_QWORD **)(a1 + 56);
    v44 = v42;
    result = (__int64)v43;
    if ( v44 )
      break;
    ++v40;
    if ( !v43 )
      goto LABEL_47;
  }
  v64 = *v43;
  v65 = &v43[v41];
  v66 = *(_QWORD *)a1;
  v67 = v43[v41];
  v68 = *(_QWORD *)(a1 + 48);
  if ( !*v43 )
  {
    if ( v67 )
      ++*(_DWORD *)(v67 + 8);
    *v43 = v67;
    v74 = *v65;
    if ( *v65 )
    {
      v7 = (*(_DWORD *)(v74 + 8))-- == 1;
      if ( v7 )
      {
        v78 = &v43[v41];
        sub_15D7BC0(v68, v74);
        result = *(_QWORD *)(a1 + 56);
        *v78 = 0;
        goto LABEL_98;
      }
      *v65 = 0;
    }
LABEL_99:
    v46 = 1;
LABEL_54:
    v47 = v46;
    if ( v46 >= *(_DWORD *)(result - 4) )
    {
LABEL_69:
      v62 = 3;
      while ( result )
      {
        result = *(unsigned int *)(result - 4);
        if ( !(_DWORD)result )
          break;
        result = sub_36E5D0((__int64 *)a1);
        if ( !--v62 )
          break;
        result = *(_QWORD *)(a1 + 56);
      }
      if ( v38 )
        goto LABEL_47;
      return result;
    }
    while ( 1 )
    {
      v48 = 8LL * v47;
      v49 = sub_1374270(v38, *(_QWORD *)(result + v48));
      v50 = *(_QWORD *)(a1 + 56);
      v51 = v49;
      result = v50;
      if ( v51 )
        break;
LABEL_67:
      ++v47;
      if ( !result )
        goto LABEL_47;
      if ( v47 >= *(_DWORD *)(result - 4) )
        goto LABEL_69;
    }
    v52 = (_QWORD *)(v50 + v48);
    v53 = *(_QWORD *)(a1 + 48);
    v54 = (_QWORD *)(v50 + 8LL * v46);
    v55 = *(_QWORD *)(v50 + 8LL * v47);
    ++v46;
    v56 = *v54;
    v75 = *(_QWORD *)a1;
    if ( !*v54 )
    {
      if ( v55 )
        ++*(_DWORD *)(v55 + 8);
      *v54 = v55;
      v63 = *v52;
      if ( *v52 )
      {
        v7 = (*(_DWORD *)(v63 + 8))-- == 1;
        if ( v7 )
        {
          v81 = (_QWORD *)(v50 + v48);
          sub_15D7BC0(v53, v63);
          result = *(_QWORD *)(a1 + 56);
          *v81 = 0;
        }
        else
        {
          *v52 = 0;
        }
      }
      goto LABEL_67;
    }
    v57 = *(_DWORD *)(v56 + 8);
    v58 = v57 + 1;
    *(_DWORD *)(v56 + 8) = v57 + 1;
    if ( v55 )
    {
      ++*(_DWORD *)(v55 + 8);
      v58 = *(_DWORD *)(v56 + 8);
      v57 = v58 - 1;
    }
    *(_DWORD *)(v56 + 8) = v57;
    if ( v57 )
    {
      *v54 = v55;
      *(_DWORD *)(v56 + 8) = v58;
      v59 = *v52;
      if ( !*v52 )
      {
        *v52 = v56;
        *(_DWORD *)(v56 + 8) = v57;
LABEL_66:
        result = v50;
        goto LABEL_67;
      }
    }
    else
    {
      v82 = v55;
      v79 = v54;
      sub_15D7BC0(v53, v56);
      v61 = *(_DWORD *)(v56 + 8);
      v52 = (_QWORD *)(v48 + *(_QWORD *)(a1 + 56));
      v53 = *(_QWORD *)(a1 + 48);
      *v79 = v82;
      v59 = *v52;
      *(_DWORD *)(v56 + 8) = v61 + 1;
      if ( !v59 )
      {
        *v52 = v56;
LABEL_64:
        *(_DWORD *)(v56 + 8) = v61;
        if ( !v61 )
        {
          sub_15D7BC0(v75, v56);
          result = *(_QWORD *)(a1 + 56);
          goto LABEL_67;
        }
        v50 = *(_QWORD *)(a1 + 56);
        goto LABEL_66;
      }
    }
    v7 = (*(_DWORD *)(v59 + 8))-- == 1;
    if ( v7 )
    {
      v80 = v52;
      sub_15D7BC0(v53, v59);
      v60 = *(_DWORD *)(v56 + 8);
      *v80 = v56;
    }
    else
    {
      v60 = *(_DWORD *)(v56 + 8);
      *v52 = v56;
    }
    v61 = v60 - 1;
    goto LABEL_64;
  }
  v69 = *(_DWORD *)(v64 + 8);
  v70 = v69 + 1;
  *(_DWORD *)(v64 + 8) = v69 + 1;
  if ( v67 )
  {
    ++*(_DWORD *)(v67 + 8);
    v70 = *(_DWORD *)(v64 + 8);
    v69 = v70 - 1;
  }
  *(_DWORD *)(v64 + 8) = v69;
  if ( v69 )
  {
    *v43 = v67;
    *(_DWORD *)(v64 + 8) = v70;
    v71 = *v65;
    if ( *v65 )
      goto LABEL_92;
    *v65 = v64;
    *(_DWORD *)(v64 + 8) = v69;
LABEL_97:
    result = (__int64)v43;
  }
  else
  {
    v77 = v43;
    sub_15D7BC0(v68, v64);
    v73 = *(_DWORD *)(v64 + 8);
    v68 = *(_QWORD *)(a1 + 48);
    v65 = (__int64 *)(v41 * 8 + *(_QWORD *)(a1 + 56));
    *v77 = v67;
    v71 = *v65;
    *(_DWORD *)(v64 + 8) = v73 + 1;
    if ( v71 )
    {
LABEL_92:
      v7 = (*(_DWORD *)(v71 + 8))-- == 1;
      if ( v7 )
      {
        *(_QWORD *)v76 = v65;
        sub_15D7BC0(v68, v71);
        v65 = *(__int64 **)v76;
      }
      v72 = *(_DWORD *)(v64 + 8);
      *v65 = v64;
      v73 = v72 - 1;
    }
    else
    {
      *v65 = v64;
    }
    *(_DWORD *)(v64 + 8) = v73;
    if ( v73 )
    {
      v43 = *(_QWORD **)(a1 + 56);
      goto LABEL_97;
    }
    sub_15D7BC0(v66, v64);
    result = *(_QWORD *)(a1 + 56);
  }
LABEL_98:
  if ( result )
    goto LABEL_99;
LABEL_47:
  v7 = (*((_DWORD *)v38 + 4))-- == 1;
  if ( v7 )
  {
    (**v38)(v38);
    return sub_186B220(v38);
  }
  return result;
}

