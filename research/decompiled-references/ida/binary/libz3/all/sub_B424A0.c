int *__fastcall sub_B424A0(_QWORD *a1, __int64 a2)
{
  char **v2; // rbx
  char **v3; // rbx
  char **exception; // r12
  char **v5; // rbx
  __int64 v8; // rax
  int v9; // ebp
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  int v24; // r15d
  _DWORD *v25; // r9
  unsigned int *v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rdi
  int *result; // rax
  int v31; // edx
  int *v32; // rsi
  __int64 v33; // r11
  __int64 v34; // r13
  __int64 v35; // r10
  int *v36; // rcx
  unsigned int v37; // r15d
  unsigned int v38; // r12d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // ebx
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ebx
  size_t v47; // rsi
  unsigned int *v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r10
  unsigned int i; // r8d
  __int64 v54; // rax
  unsigned int *v55; // rax
  unsigned int v56; // r9d
  unsigned int v57; // eax
  unsigned int *v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  unsigned int v62; // [rsp+4h] [rbp-84h]
  unsigned int *v63; // [rsp+8h] [rbp-80h]
  unsigned int v64; // [rsp+10h] [rbp-78h]
  __int64 v65; // [rsp+18h] [rbp-70h]
  __int64 v66[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = a1[6];
  if ( v8 )
  {
    v62 = *(_DWORD *)(v8 - 4);
    v9 = v62;
  }
  else
  {
    v62 = 0;
    v9 = 0;
  }
  v10 = 1;
  v11 = 0;
  v12 = (_QWORD *)sub_186B270(0x18u);
  v12[1] = a2;
  v13 = v12 + 1;
  *v12 = 0x100000002LL;
  do
  {
    v14 = v10 - 1;
    v15 = (unsigned int *)v13[v14];
    --v10;
    *((_DWORD *)v13 - 1) = v14;
    v16 = *(_QWORD *)(a1[1] + 8656LL);
    if ( v16 && (v17 = *v15, (unsigned int)v17 < *(_DWORD *)(v16 - 4)) && (v18 = *(_QWORD *)(v16 + 8 * v17)) != 0 )
    {
      v19 = *(_DWORD *)(v18 + 36);
      if ( v11 < v19 )
        v11 = v19;
    }
    else if ( !*((_WORD *)v15 + 2) && v15[6] )
    {
      v52 = *((_QWORD *)v15 + 4);
      for ( i = 0; ; v52 = *(_QWORD *)&v15[2 * i + 8] )
      {
        if ( *((_DWORD *)v13 - 2) == v10 )
        {
          v56 = (3 * v10 + 1) >> 1;
          v57 = 8 * v56 + 8;
          if ( 8 * v10 + 8 >= v57 || v10 >= v56 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v66, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v66);
            sub_233E40((__int64)v66);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = v52;
          v64 = i;
          v63 = v15;
          v58 = (unsigned int *)sub_186B300(v13 - 1, v57);
          v13 = v58 + 2;
          v15 = v63;
          i = v64;
          v52 = v65;
          *v58 = (3 * v10 + 1) >> 1;
          v59 = v58[1];
          v55 = &v58[2 * v59 + 2];
          v10 = v59 + 1;
        }
        else
        {
          v54 = v10++;
          v55 = (unsigned int *)&v13[v54];
        }
        *(_QWORD *)v55 = v52;
        ++i;
        *((_DWORD *)v13 - 1) = v10;
        if ( i >= v15[6] )
          break;
      }
    }
  }
  while ( v10 );
  sub_186B220(v13 - 1);
  v20 = (_QWORD *)a1[6];
  if ( v20 )
  {
    v21 = *((unsigned int *)v20 - 1);
    if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
    {
      v42 = (unsigned int)(3 * v21 + 1) >> 1;
      v43 = 16 * v42 + 8;
      if ( 16 * (int)v21 + 8 >= (unsigned int)v43 || (unsigned int)v21 >= v42 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v44 = (unsigned int *)sub_186B300(v20 - 1, v43);
      v20 = v44 + 2;
      *v44 = v42;
      v45 = v44[1];
      a1[6] = v20;
      v22 = &v20[2 * v45];
    }
    else
    {
      v22 = &v20[2 * v21];
    }
  }
  else
  {
    v61 = (_QWORD *)sub_186B270(0x28u);
    v20 = v61 + 1;
    *v61 = 2;
    a1[6] = v61 + 1;
    v22 = v61 + 1;
  }
  *v22 = a2;
  v23 = (_QWORD *)a1[11];
  *((_DWORD *)v22 + 2) = v11;
  v24 = v9 + 1;
  *((_DWORD *)v22 + 3) = -1;
  ++*((_DWORD *)v20 - 1);
  if ( v23 )
  {
    v10 = *((_DWORD *)v23 - 1);
    if ( v24 <= (int)v10 )
      goto LABEL_15;
    if ( v10 >= v24 )
    {
      *((_DWORD *)v23 - 1) = v24;
      goto LABEL_15;
    }
  }
  else
  {
    if ( v24 <= 0 )
      goto LABEL_15;
    v60 = (_QWORD *)sub_186B270(0x10u);
    v23 = v60 + 1;
    *v60 = 2;
    a1[11] = v60 + 1;
  }
  while ( 1 )
  {
    v49 = *((_DWORD *)v23 - 2);
    if ( v49 >= v24 )
      break;
    v46 = (3 * v49 + 1) >> 1;
    v47 = 4 * v46 + 8;
    if ( 4 * v49 + 8 >= (unsigned int)v47 || v49 >= v46 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v66, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v66);
      sub_233E40((__int64)v66);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v48 = (unsigned int *)sub_186B300(v23 - 1, v47);
    v23 = v48 + 2;
    *v48 = v46;
    a1[11] = v48 + 2;
  }
  *((_DWORD *)v23 - 1) = v24;
  v50 = 4LL * v10;
  v51 = 4LL * (unsigned int)v24;
  if ( v50 != v51 )
    memset((char *)v23 + v50, 0, v51 - v50);
LABEL_15:
  v25 = (_DWORD *)a1[10];
  v26 = (unsigned int *)v23 + v62;
  if ( v25 )
  {
    v27 = *(v25 - 1);
    *v26 = v27;
    v28 = (unsigned int)*(v25 - 1);
    if ( (_DWORD)v28 == *(v25 - 2) )
    {
      v38 = (unsigned int)(3 * v28 + 1) >> 1;
      v39 = 4 * v38 + 8;
      if ( 4 * (int)v28 + 8 >= (unsigned int)v39 || (unsigned int)v28 >= v38 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v66, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v66);
        sub_233E40((__int64)v66);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v25 - 2, v39);
      v29 = v27;
      v25 = v40 + 2;
      *v40 = v38;
      v41 = v40[1];
      v31 = (int)v27 >> 1;
      a1[10] = v25;
      v23 = (_QWORD *)a1[11];
      v32 = &v25[v27];
      result = &v25[v41];
    }
    else
    {
      v29 = v27;
      result = &v25[v28];
      v31 = (int)v27 >> 1;
      v32 = &v25[v27];
    }
    *result = v9;
    ++*(v25 - 1);
    v33 = (unsigned int)*v32;
    v9 = *v32;
    if ( v31 )
    {
      v34 = *(_QWORD *)(a1[9] + 48LL);
      v35 = v34 + 16 * v33;
      while ( 1 )
      {
        v32 = &v25[v31];
        v36 = (int *)(unsigned int)*v32;
        result = v36;
        v37 = *(_DWORD *)(v34 + 16LL * (_QWORD)v36 + 8);
        if ( *(_DWORD *)(v35 + 8) == v37 )
        {
          if ( v9 >= (int)v36 )
          {
LABEL_25:
            v32 = &v25[v29];
            goto LABEL_26;
          }
        }
        else if ( *(_DWORD *)(v35 + 8) >= v37 )
        {
          goto LABEL_25;
        }
        v25[v29] = (_DWORD)v36;
        *((_DWORD *)v23 + (_QWORD)v36) = v27;
        v27 = v31;
        v31 >>= 1;
        if ( !v31 )
          break;
        v29 = v27;
      }
      v27 = 1;
    }
  }
  else
  {
    *v26 = 0;
    v27 = 0;
    result = (int *)sub_186B270(0x10u);
    v23 = (_QWORD *)a1[11];
    v33 = (unsigned int)v9;
    v32 = result + 2;
    *(_QWORD *)result = 2;
    a1[10] = result + 2;
    ++result[1];
    result[2] = v9;
  }
LABEL_26:
  *v32 = v9;
  *((_DWORD *)v23 + v33) = v27;
  return result;
}

