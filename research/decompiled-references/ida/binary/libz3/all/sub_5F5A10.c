__int64 __fastcall sub_5F5A10(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v9; // edx
  int v11; // r13d
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 *v17; // rdx
  unsigned __int8 v18; // dl
  __int64 v19; // rax
  int v20; // r12d
  int v21; // r14d
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rax
  unsigned int v25; // r12d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r13
  char v31; // dl
  unsigned __int8 v32; // r14
  int v33; // r12d
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 *v36; // rax
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  unsigned int v42; // r15d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 *v50; // rcx
  __int64 v51; // rax
  int v52; // edx
  _QWORD *v53; // rax
  unsigned int v54; // r12d
  unsigned int v55; // ecx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  _QWORD *v58; // rax
  unsigned int v59; // r13d
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 v62; // rsi
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  char **exception; // r13
  char **v66; // rbx
  __int64 v67[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v13 = (_QWORD *)a1[7];
    if ( v13 )
    {
      v14 = *((_DWORD *)v13 - 1);
      if ( v14 == *((_DWORD *)v13 - 2) )
      {
        v25 = (3 * v14 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v26 || v14 >= v25 )
          goto LABEL_76;
        v27 = (unsigned int *)sub_186B300(v13 - 1, v26);
        v28 = v27[1];
        v13 = v27 + 2;
        *v27 = v25;
        a1[7] = v27 + 2;
        LODWORD(v27) = v28;
        v17 = &v13[v28];
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
      v53 = (_QWORD *)sub_186B270(0x18u);
      v13 = v53 + 1;
      *v53 = 2;
      v16 = 1;
      a1[7] = v13;
      v17 = v13;
    }
    *v17 = a2;
    *((_DWORD *)v13 - 1) = v16;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v11 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_16:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
        goto LABEL_34;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
      v7 = a1[7];
LABEL_7:
      v8 = a1[1];
      *(_DWORD *)(a2 + 8) += 2;
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 - 4);
        if ( v9 == *(_DWORD *)(v7 - 8) )
        {
          v59 = (3 * v9 + 1) >> 1;
          v60 = 8 * v59 + 8;
          if ( 8 * v9 + 8 >= v60 || v9 >= v59 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v67, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v61 = (unsigned int *)sub_186B300((void *)(v7 - 8), v60);
          v62 = v61[1];
          *v61 = v59;
          a1[7] = v61 + 2;
          *(_QWORD *)&v61[2 * v62 + 2] = a2;
          v61[1] = v62 + 1;
        }
        else
        {
          *(_QWORD *)(v7 + 8LL * v9) = a2;
          *(_DWORD *)(v7 - 4) = v9 + 1;
        }
      }
      else
      {
        v41 = (_QWORD *)sub_186B270(0x18u);
        v41[1] = a2;
        a1[7] = v41 + 1;
        *v41 = 0x100000002LL;
      }
      if ( (*(_DWORD *)(a2 + 8))-- == 1 )
        sub_15D7BC0(v8, a2);
      return 1;
    }
    v29 = sub_1680FB0(a1[4], a2, 0);
    v30 = v29;
    if ( v29 )
    {
      v46 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v29 + 8);
      if ( v46 )
      {
        v47 = *((_DWORD *)v46 - 1);
        if ( v47 == *((_DWORD *)v46 - 2) )
        {
          v54 = (3 * v47 + 1) >> 1;
          v55 = 8 * v54 + 8;
          if ( 8 * v47 + 8 >= v55 || v47 >= v54 )
            goto LABEL_76;
          v56 = (unsigned int *)sub_186B300(v46 - 1, v55);
          v57 = v56[1];
          v46 = v56 + 2;
          *v56 = v54;
          a1[7] = v56 + 2;
          LODWORD(v56) = v57;
          v50 = &v46[v57];
          v49 = (_DWORD)v56 + 1;
        }
        else
        {
          v48 = v47;
          v49 = v47 + 1;
          v50 = &v46[v48];
        }
      }
      else
      {
        v64 = (_QWORD *)sub_186B270(0x18u);
        *v64 = 2;
        v49 = 1;
        v46 = v64 + 1;
        a1[7] = v46;
        v50 = v46;
      }
      *v50 = v30;
      *((_DWORD *)v46 - 1) = v49;
      if ( a2 != v30 )
      {
        v51 = a1[5];
        if ( v51 )
        {
          v52 = *(_DWORD *)(v51 - 4);
          if ( v52 )
            *(_BYTE *)(v51 + 16LL * (unsigned int)(v52 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v11 = 1;
  }
  if ( v5 == 1 )
  {
LABEL_34:
    sub_5F54D0(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v18 = 3;
    if ( a3 != 3 )
      v18 = (a3 - 1) & 3;
    v19 = a1[7];
    v20 = v18;
    if ( v19 )
      v21 = *(_DWORD *)(v19 - 4);
    else
      v21 = 0;
    v22 = (_QWORD *)a1[5];
    if ( v22 )
    {
      v23 = *((unsigned int *)v22 - 1);
      if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
      {
        v37 = (unsigned int)(3 * v23 + 1) >> 1;
        v38 = 16 * v37 + 8;
        if ( 16 * (int)v23 + 8 >= (unsigned int)v38 || (unsigned int)v23 >= v37 )
          goto LABEL_76;
        v39 = (unsigned int *)sub_186B300(v22 - 1, v38);
        v22 = v39 + 2;
        *v39 = v37;
        v40 = v39[1];
        a1[5] = v22;
        v24 = &v22[2 * v40];
      }
      else
      {
        v24 = &v22[2 * v23];
      }
    }
    else
    {
      v58 = (_QWORD *)sub_186B270(0x28u);
      v22 = v58 + 1;
      *v58 = 2;
      a1[5] = v58 + 1;
      v24 = v58 + 1;
    }
    *v24 = a2;
    *((_DWORD *)v24 + 3) = v21;
    *((_DWORD *)v24 + 2) = v11 | (16 * v20);
    ++*((_DWORD *)v22 - 1);
    return 0;
  }
  if ( v5 )
    goto LABEL_16;
  v7 = a1[7];
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_7;
  v31 = 3;
  if ( a3 != 3 )
    v31 = (a3 - 1) & 3;
  v32 = v31;
  if ( v7 )
    v33 = *(_DWORD *)(v7 - 4);
  else
    v33 = 0;
  v34 = (_QWORD *)a1[5];
  if ( !v34 )
  {
    v63 = (_QWORD *)sub_186B270(0x28u);
    v34 = v63 + 1;
    *v63 = 2;
    a1[5] = v63 + 1;
    v36 = v63 + 1;
    goto LABEL_48;
  }
  v35 = *((unsigned int *)v34 - 1);
  if ( (_DWORD)v35 == *((_DWORD *)v34 - 2) )
  {
    v42 = (unsigned int)(3 * v35 + 1) >> 1;
    v43 = 16 * v42 + 8;
    if ( 16 * (int)v35 + 8 < (unsigned int)v43 && (unsigned int)v35 < v42 )
    {
      v44 = (unsigned int *)sub_186B300(v34 - 1, v43);
      v34 = v44 + 2;
      *v44 = v42;
      v45 = v44[1];
      a1[5] = v34;
      v36 = &v34[2 * v45];
      goto LABEL_48;
    }
LABEL_76:
    v66 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v67, "Overflow encountered when expanding vector");
    *v66 = (char *)off_1C63128;
    sub_2333C0(v66 + 1, v67);
    sub_233E40((__int64)v67);
    __cxa_throw(v66, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v36 = &v34[2 * v35];
LABEL_48:
  *v36 = a2;
  *((_DWORD *)v36 + 3) = v33;
  *((_DWORD *)v36 + 2) = (16 * v32) | v11;
  ++*((_DWORD *)v34 - 1);
  return 0;
}

