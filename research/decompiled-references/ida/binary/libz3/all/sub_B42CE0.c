__int64 __fastcall sub_B42CE0(_QWORD *a1, unsigned int a2)
{
  char **v2; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  int v8; // ebx
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  _QWORD *v11; // rbp
  __int64 v12; // r14
  unsigned int v13; // r14d
  __int64 v14; // rax
  _DWORD *v15; // r9
  unsigned int *v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int *v20; // rdx
  unsigned int *v21; // rsi
  __int64 result; // rax
  __int64 v23; // r11
  __int64 *v24; // rdx
  __int64 v25; // r10
  double v26; // xmm0_8
  unsigned int *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r10
  _DWORD *v30; // r8
  unsigned int *v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // r9
  int v35; // edx
  unsigned int *v36; // rsi
  __int64 v37; // rbp
  __int64 *v38; // rax
  __int64 v39; // r11
  double v40; // xmm0_8
  unsigned int *v41; // rdi
  unsigned int v42; // r15d
  size_t v43; // rsi
  unsigned int *v44; // rax
  unsigned int v45; // eax
  __int64 v46; // r14
  __int64 v47; // rdx
  unsigned int v48; // r14d
  size_t v49; // rsi
  unsigned int *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rbp
  __int64 v53; // rdx
  char *v54; // rdi
  unsigned int v55; // ebp
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rax
  unsigned int v59; // ebp
  size_t v60; // rsi
  unsigned int *v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = a2 + 1;
  v9 = (_QWORD *)a1[5];
  if ( v9 )
  {
    v10 = *((unsigned int *)v9 - 1);
    if ( v8 <= (int)v10 )
      goto LABEL_3;
    if ( (unsigned int)v10 >= v8 )
    {
      *((_DWORD *)v9 - 1) = v8;
      goto LABEL_3;
    }
  }
  else
  {
    if ( v8 <= 0 )
    {
      v11 = (_QWORD *)a1[8];
      if ( !v11 )
      {
        v11 = nullptr;
        goto LABEL_5;
      }
      goto LABEL_4;
    }
    v10 = 0;
    v63 = (_QWORD *)sub_186B270(0x10u);
    v9 = v63 + 1;
    *v63 = 2;
    a1[5] = v63 + 1;
  }
  while ( 1 )
  {
    v51 = *((_DWORD *)v9 - 2);
    if ( v51 >= v8 )
      break;
    v48 = (3 * v51 + 1) >> 1;
    v49 = 4 * v48 + 8;
    if ( 4 * v51 + 8 >= (unsigned int)v49 || v51 >= v48 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v65, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v65);
      sub_233E40((__int64)v65);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v50 = (unsigned int *)sub_186B300(v9 - 1, v49);
    v9 = v50 + 2;
    *v50 = v48;
    a1[5] = v50 + 2;
  }
  v52 = 4 * v10;
  *((_DWORD *)v9 - 1) = v8;
  v53 = 4LL * (unsigned int)v8;
  v54 = (char *)v9 + v52;
  if ( v52 == v53 )
  {
LABEL_3:
    v11 = (_QWORD *)a1[8];
    if ( v11 )
      goto LABEL_4;
LABEL_40:
    if ( v8 <= 0 )
    {
      v11 = nullptr;
      goto LABEL_5;
    }
    v12 = 0;
    v64 = (_QWORD *)sub_186B270(0x10u);
    v11 = v64 + 1;
    *v64 = 2;
    a1[8] = v64 + 1;
    goto LABEL_29;
  }
  memset(v54, 0, v53 - v52);
  v11 = (_QWORD *)a1[8];
  if ( !v11 )
    goto LABEL_40;
LABEL_4:
  v12 = *((unsigned int *)v11 - 1);
  if ( v8 <= (int)v12 )
    goto LABEL_5;
  if ( (unsigned int)v12 >= v8 )
  {
    *((_DWORD *)v11 - 1) = v8;
    goto LABEL_5;
  }
LABEL_29:
  while ( 1 )
  {
    v45 = *((_DWORD *)v11 - 2);
    if ( v45 >= v8 )
      break;
    v42 = (3 * v45 + 1) >> 1;
    v43 = 4 * v42 + 8;
    if ( 4 * v45 + 8 >= (unsigned int)v43 || v45 >= v42 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v65, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v65);
      sub_233E40((__int64)v65);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v44 = (unsigned int *)sub_186B300(v11 - 1, v43);
    v11 = v44 + 2;
    *v44 = v42;
    a1[8] = v44 + 2;
  }
  v46 = 4 * v12;
  *((_DWORD *)v11 - 1) = v8;
  v47 = 4LL * (unsigned int)v8;
  if ( v46 != v47 )
    memset((char *)v11 + v46, 0, v47 - v46);
LABEL_5:
  v13 = a2;
  v14 = 4LL * a2;
  if ( *(_BYTE *)(a1[1] + 10320LL) )
  {
    v15 = (_DWORD *)a1[7];
    v16 = (unsigned int *)((char *)v11 + v14);
    if ( v15 )
    {
      v17 = *(v15 - 1);
      *v16 = v17;
      v18 = (unsigned int)*(v15 - 1);
      if ( (_DWORD)v18 == *(v15 - 2) )
      {
        v55 = (unsigned int)(3 * v18 + 1) >> 1;
        v56 = 4 * v55 + 8;
        if ( 4 * (int)v18 + 8 >= (unsigned int)v56 || (unsigned int)v18 >= v55 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v65, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v15 - 2, v56);
        v19 = v17;
        v15 = v57 + 2;
        *v57 = v55;
        v58 = v57[1];
        a1[7] = v15;
        v11 = (_QWORD *)a1[8];
        v21 = &v15[v17];
        v20 = &v15[v58];
        result = (unsigned int)((int)v17 >> 1);
      }
      else
      {
        v19 = v17;
        v20 = &v15[v18];
        v21 = &v15[v17];
        result = (unsigned int)((int)v17 >> 1);
      }
      *v20 = a2;
      ++*(v15 - 1);
      v23 = *v21;
      v13 = *v21;
      if ( (_DWORD)result )
      {
        v24 = (__int64 *)a1[6];
        v25 = *v24;
        v26 = *(double *)(*v24 + 8 * v23);
        while ( 1 )
        {
          v21 = &v15[v19];
          v27 = &v15[(unsigned int)result];
          v28 = *v27;
          if ( v26 <= *(double *)(v25 + 8 * v28) )
            break;
          *v21 = v28;
          *((_DWORD *)v11 + v28) = v17;
          v17 = result;
          result = (unsigned int)((int)result >> 1);
          if ( !(_DWORD)result )
          {
            v21 = v27;
            v17 = 1;
            break;
          }
          v19 = v17;
        }
      }
    }
    else
    {
      *v16 = 0;
      result = sub_186B270(0x10u);
      v23 = a2;
      v11 = (_QWORD *)a1[8];
      v17 = 0;
      v21 = (unsigned int *)(result + 8);
      *(_QWORD *)result = 2;
      a1[7] = result + 8;
      ++*(_DWORD *)(result + 4);
      *(_DWORD *)(result + 8) = a2;
    }
    *v21 = v13;
    *((_DWORD *)v11 + v23) = v17;
  }
  else
  {
    v29 = a1[5];
    v30 = (_DWORD *)a1[4];
    v31 = (unsigned int *)(v29 + v14);
    if ( v30 )
    {
      v32 = *(v30 - 1);
      *v31 = v32;
      v33 = (unsigned int)*(v30 - 1);
      if ( (_DWORD)v33 == *(v30 - 2) )
      {
        v59 = (unsigned int)(3 * v33 + 1) >> 1;
        v60 = 4 * v59 + 8;
        if ( 4 * (int)v33 + 8 >= (unsigned int)v60 || (unsigned int)v33 >= v59 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v65, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (unsigned int *)sub_186B300(v30 - 2, v60);
        v34 = v32;
        v29 = a1[5];
        v30 = v61 + 2;
        *v61 = v59;
        v62 = v61[1];
        v35 = (int)v32 >> 1;
        a1[4] = v30;
        v36 = &v30[v32];
        result = (__int64)&v30[v62];
      }
      else
      {
        v34 = v32;
        result = (__int64)&v30[v33];
        v35 = (int)v32 >> 1;
        v36 = &v30[v32];
      }
      *(_DWORD *)result = a2;
      ++*(v30 - 1);
      v37 = *v36;
      v13 = *v36;
      if ( v35 )
      {
        v38 = (__int64 *)a1[3];
        v39 = *v38;
        v40 = *(double *)(*v38 + 8 * v37);
        while ( 1 )
        {
          v36 = &v30[v34];
          v41 = &v30[v35];
          result = *v41;
          if ( v40 <= *(double *)(v39 + 8 * result) )
            break;
          *v36 = result;
          *(_DWORD *)(v29 + 4 * result) = v32;
          v32 = v35;
          v35 >>= 1;
          if ( !v35 )
          {
            *v41 = v13;
            *(_DWORD *)(v29 + 4 * v37) = 1;
            return result;
          }
          v34 = v32;
        }
      }
    }
    else
    {
      *v31 = 0;
      v37 = a2;
      v32 = 0;
      result = sub_186B270(0x10u);
      v29 = a1[5];
      v36 = (unsigned int *)(result + 8);
      *(_QWORD *)result = 2;
      a1[4] = result + 8;
      ++*(_DWORD *)(result + 4);
      *(_DWORD *)(result + 8) = a2;
    }
    *v36 = v13;
    *(_DWORD *)(v29 + 4 * v37) = v32;
  }
  return result;
}

