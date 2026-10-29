__int64 __fastcall sub_B38240(__int64 a1)
{
  char **v1; // rbp
  __int64 v2; // rdx
  char **v3; // rbp
  __int64 v4; // rdx
  char **exception; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned int v13; // eax
  __int64 v14; // r14
  int v15; // r15d
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rbp
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // r14d
  __int64 v26; // r12
  int v27; // r15d
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rbp
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 result; // rax
  __int64 *v34; // rcx
  unsigned int v35; // ebp
  __int64 v36; // rdx
  __int64 v37; // r14
  int v38; // r15d
  __int64 v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // r12
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 *v45; // rcx
  unsigned int v46; // r13d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rsi
  unsigned int v51; // eax
  _DWORD *v52; // r8
  unsigned int v53; // ecx
  __int64 v54; // rax
  unsigned int v55; // r15d
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // r15d
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67[11]; // [rsp+0h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 384);
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  if ( *(_DWORD *)(a1 + 368) == v8 )
  {
    v9 = *(_QWORD *)(a1 + 480);
    v10 = v9 ? *(_DWORD *)(v9 - 4) : 0;
    if ( *(_DWORD *)(a1 + 496) == v10 )
    {
      v54 = *(_QWORD *)(a1 + 520);
      result = v54 ? *(unsigned int *)(v54 - 4) : 0LL;
      if ( *(_DWORD *)(a1 + 528) == (_DWORD)result )
        return result;
    }
  }
  sub_B34CD0(a1);
  v11 = *(_QWORD *)(a1 + 520);
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 528);
    v13 = *(_DWORD *)(v11 - 4);
    if ( v12 < v13 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        if ( v12 >= v13 || *(_QWORD *)(v14 + 8984) != qword_1C7ED40 || *(_BYTE *)(v14 + 2416) )
          break;
        v63 = v12++;
        sub_B34B80(a1, 16 * v63 + v11);
        v11 = *(_QWORD *)(a1 + 520);
        if ( !v11 )
        {
          v14 = *(_QWORD *)(a1 + 16);
          break;
        }
        v13 = *(_DWORD *)(v11 - 4);
      }
      v15 = *(_DWORD *)(a1 + 528);
      v16 = sub_180C100(v14 + 8400, 24);
      v17 = *(_QWORD **)(v14 + 9456);
      *(_QWORD *)v16 = &off_1C4C070;
      v18 = v16;
      *(_QWORD *)(v16 + 8) = a1 + 528;
      *(_DWORD *)(v16 + 16) = v15;
      if ( v17 )
      {
        v19 = *((_DWORD *)v17 - 1);
        if ( v19 == *((_DWORD *)v17 - 2) )
        {
          v55 = (3 * v19 + 1) >> 1;
          v56 = 8 * v55 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v56 || v19 >= v55 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_147B96(v67, "Overflow encountered when expanding vector", v6);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (unsigned int *)sub_186B300(v17 - 1, v56);
          v58 = v57[1];
          v17 = v57 + 2;
          *(_QWORD *)(v14 + 9456) = v57 + 2;
          *v57 = v55;
          LODWORD(v57) = v58;
          v22 = &v17[v58];
          v21 = (_DWORD)v57 + 1;
        }
        else
        {
          v20 = v19;
          v21 = v19 + 1;
          v22 = &v17[v20];
        }
      }
      else
      {
        v65 = (_QWORD *)sub_186B270(0x18u);
        v17 = v65 + 1;
        *v65 = 2;
        v21 = 1;
        *(_QWORD *)(v14 + 9456) = v17;
        v22 = v17;
      }
      *v22 = v18;
      *((_DWORD *)v17 - 1) = v21;
      v23 = *(_QWORD *)(a1 + 480);
      *(_DWORD *)(a1 + 528) = v12;
      if ( !v23 )
        goto LABEL_15;
      goto LABEL_24;
    }
  }
  v23 = *(_QWORD *)(a1 + 480);
  if ( v23 )
  {
LABEL_24:
    v35 = *(_DWORD *)(a1 + 496);
    if ( v35 < *(_DWORD *)(v23 - 4) )
    {
      do
      {
        v36 = v35++;
        sub_B35EF0(a1, *(unsigned int **)(v23 + 8 * v36), 1);
        v23 = *(_QWORD *)(a1 + 480);
      }
      while ( v23 && v35 < *(_DWORD *)(v23 - 4) );
      v37 = *(_QWORD *)(a1 + 16);
      v38 = *(_DWORD *)(a1 + 496);
      v39 = sub_180C100(v37 + 8400, 24);
      v40 = *(_QWORD **)(v37 + 9456);
      *(_QWORD *)v39 = &off_1C4C070;
      v41 = v39;
      *(_QWORD *)(v39 + 8) = a1 + 496;
      *(_DWORD *)(v39 + 16) = v38;
      if ( v40 )
      {
        v42 = *((_DWORD *)v40 - 1);
        if ( v42 == *((_DWORD *)v40 - 2) )
        {
          v59 = (3 * v42 + 1) >> 1;
          v60 = 8 * v59 + 8;
          if ( 8 * v42 + 8 >= (unsigned int)v60 || v42 >= v59 )
          {
            v1 = (char **)__cxa_allocate_exception(0x28u);
            sub_147B96(v67, "Overflow encountered when expanding vector", v2);
            *v1 = (char *)off_1C63128;
            sub_2333C0(v1 + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300(v40 - 1, v60);
          v62 = v61[1];
          v40 = v61 + 2;
          *(_QWORD *)(v37 + 9456) = v61 + 2;
          *v61 = v59;
          LODWORD(v61) = v62;
          v45 = &v40[v62];
          v44 = (_DWORD)v61 + 1;
        }
        else
        {
          v43 = v42;
          v44 = v42 + 1;
          v45 = &v40[v43];
        }
      }
      else
      {
        v66 = (_QWORD *)sub_186B270(0x18u);
        v40 = v66 + 1;
        *v66 = 2;
        v44 = 1;
        *(_QWORD *)(v37 + 9456) = v40;
        v45 = v40;
      }
      *v45 = v41;
      *((_DWORD *)v40 - 1) = v44;
      *(_DWORD *)(a1 + 496) = v35;
    }
  }
LABEL_15:
  v24 = *(_QWORD *)(a1 + 384);
  v25 = *(_DWORD *)(a1 + 368);
  if ( v24 )
  {
    do
    {
      v26 = *(_QWORD *)(a1 + 16);
      if ( v25 >= *(_DWORD *)(v24 - 4) || *(_QWORD *)(v26 + 8984) != qword_1C7ED40 || *(_BYTE *)(v26 + 2416) )
      {
        v27 = *(_DWORD *)(a1 + 368);
        goto LABEL_19;
      }
      v50 = 48LL * v25 + v24;
      v51 = *(_DWORD *)(v50 + 40);
      if ( v51 == -1 )
      {
        sub_B37010(a1, (unsigned int ***)v50);
      }
      else
      {
        v52 = *(_DWORD **)(v50 + 32);
        if ( v52 )
          v53 = *(v52 - 1);
        else
          v53 = 0;
        sub_B35800(a1, v51, *(_QWORD *)(v50 + 8), v53, v52);
      }
      v24 = *(_QWORD *)(a1 + 384);
      ++*(_DWORD *)(a1 + 432);
      ++v25;
    }
    while ( v24 );
    v26 = *(_QWORD *)(a1 + 16);
    v27 = *(_DWORD *)(a1 + 368);
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 16);
    v27 = *(_DWORD *)(a1 + 368);
  }
LABEL_19:
  v28 = sub_180C100(v26 + 8400, 24);
  v29 = *(_QWORD **)(v26 + 9456);
  *(_QWORD *)v28 = &off_1C4C070;
  v30 = v28;
  *(_QWORD *)(v28 + 8) = a1 + 368;
  *(_DWORD *)(v28 + 16) = v27;
  if ( v29 )
  {
    v31 = *((_DWORD *)v29 - 1);
    if ( v31 == *((_DWORD *)v29 - 2) )
    {
      v46 = (3 * v31 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v31 + 8 >= (unsigned int)v47 || v31 >= v46 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_147B96(v67, "Overflow encountered when expanding vector", v4);
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v67);
        sub_233E40((__int64)v67);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v29 - 1, v47);
      v49 = v48[1];
      v29 = v48 + 2;
      *(_QWORD *)(v26 + 9456) = v48 + 2;
      *v48 = v46;
      LODWORD(v48) = v49;
      v34 = &v29[v49];
      result = (unsigned int)((_DWORD)v48 + 1);
    }
    else
    {
      v32 = v31;
      result = v31 + 1;
      v34 = &v29[v32];
    }
  }
  else
  {
    v64 = (_QWORD *)sub_186B270(0x18u);
    v29 = v64 + 1;
    *v64 = 2;
    result = 1;
    *(_QWORD *)(v26 + 9456) = v29;
    v34 = v29;
  }
  *v34 = v30;
  *((_DWORD *)v29 - 1) = result;
  *(_DWORD *)(a1 + 368) = v25;
  return result;
}

