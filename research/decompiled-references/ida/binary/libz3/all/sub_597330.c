unsigned __int64 __fastcall sub_597330(_QWORD *a1, int a2, _DWORD *a3)
{
  char **exception; // rbx
  int v4; // r8d
  _QWORD *v5; // r15
  unsigned __int64 result; // rax
  __int64 v7; // r14
  _DWORD *v8; // r9
  _DWORD *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  unsigned int v13; // r11d
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rbp
  _QWORD *v18; // r10
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool v21; // zf
  unsigned int v22; // ebx
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // r14
  __int64 v26; // rdx
  _DWORD *v27; // rdi
  char *v28; // rbp
  char *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r9
  unsigned int v35; // ebx
  unsigned int v36; // r15d
  __int64 v37; // r14
  __int64 v38; // rbp
  __int64 v39; // r12
  _QWORD *v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // r10
  _QWORD *v43; // [rsp+0h] [rbp-88h]
  __int64 v44; // [rsp+8h] [rbp-80h]
  unsigned int v45; // [rsp+8h] [rbp-80h]
  unsigned int v46; // [rsp+10h] [rbp-78h]
  int v47; // [rsp+14h] [rbp-74h]
  _DWORD *v48; // [rsp+18h] [rbp-70h]
  __int64 v49[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v5 = a1;
  result = a1[1];
  if ( result )
  {
    v7 = *(unsigned int *)(result - 4);
    v8 = a3;
    v9 = (_DWORD *)a1[1];
    v10 = *a3 + 1;
    v11 = *(_DWORD *)(result - 4) - a2;
    if ( v10 < (unsigned int)v7 )
    {
      v12 = 1;
      v13 = *(_DWORD *)(result - 4) - a2;
      v14 = *(_DWORD *)(result - 4);
      v15 = 8LL * v10;
      if ( a2 != 1 && a3[1] == v10 )
        goto LABEL_14;
      while ( 1 )
      {
        v16 = *(_QWORD *)(result + v15);
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v17 = 8LL * (v10 - v12);
        v18 = (_QWORD *)(result + v17);
        v19 = *(_QWORD *)(result + v17);
        if ( v19 )
        {
          v20 = *v5;
          v21 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v21 )
          {
            v48 = v8;
            v47 = v4;
            v46 = v13;
            v44 = v15;
            sub_15D7BC0(v20, v19);
            result = v5[1];
            v8 = v48;
            v4 = v47;
            v13 = v46;
            v15 = v44;
            v9 = (_DWORD *)result;
            v18 = (_QWORD *)(result + v17);
          }
        }
        ++v10;
        *v18 = v16;
        if ( v10 >= v14 )
        {
LABEL_15:
          v11 = v13;
          goto LABEL_16;
        }
        if ( v4 == v12 )
          break;
        while ( 1 )
        {
          v15 += 8;
          if ( v4 == v12 || v8[v12] != v10 )
            break;
LABEL_14:
          ++v10;
          ++v12;
          if ( v10 >= v14 )
            goto LABEL_15;
        }
      }
      v33 = v10;
      v34 = v5;
      v45 = v13;
      v35 = v10 - v12;
      v36 = v12;
      v37 = 8 * v33;
      do
      {
        v38 = *(_QWORD *)(result + v37);
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        v39 = 8LL * v35;
        v40 = (_QWORD *)(result + v39);
        v41 = *(_QWORD *)(result + v39);
        if ( v41 )
        {
          v42 = *v34;
          v21 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v21 )
          {
            v43 = v34;
            sub_15D7BC0(v42, v41);
            v34 = v43;
            result = v43[1];
            v9 = (_DWORD *)result;
            v40 = (_QWORD *)(result + v39);
          }
        }
        ++v35;
        *v40 = v38;
        v37 += 8;
      }
      while ( v36 + v35 < v14 );
      v11 = v45;
      v5 = v34;
LABEL_16:
      if ( !result )
      {
LABEL_47:
        if ( !v11 )
          return result;
        goto LABEL_38;
      }
      v7 = *(unsigned int *)(result - 4);
    }
    if ( v11 >= (unsigned int)v7 )
      goto LABEL_19;
    v28 = (char *)(result + 8 * v7);
    v29 = (char *)(result + 8LL * v11);
    if ( v29 >= v28 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29 )
        {
          v31 = *v5;
          v21 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v21 )
            break;
        }
        v29 += 8;
        if ( v29 >= v28 )
          goto LABEL_35;
      }
      sub_15D7BC0(v31, v30);
      v29 += 8;
    }
    while ( v29 < v28 );
LABEL_35:
    result = v5[1];
    v9 = (_DWORD *)result;
    if ( result )
    {
      v7 = *(unsigned int *)(result - 4);
LABEL_19:
      if ( (unsigned int)v7 >= v11 )
      {
LABEL_27:
        *(_DWORD *)(result - 4) = v11;
        return result;
      }
      goto LABEL_24;
    }
    goto LABEL_47;
  }
  v11 = -a2;
LABEL_38:
  v7 = 0;
  v32 = (_QWORD *)sub_186B270(0x18u);
  v9 = v32 + 1;
  *v32 = 2;
  v5[1] = v32 + 1;
LABEL_24:
  while ( 1 )
  {
    result = (unsigned int)*(v9 - 2);
    if ( (unsigned int)result >= v11 )
      break;
    v22 = (unsigned int)(3 * result + 1) >> 1;
    v23 = 8 * v22 + 8;
    if ( 8 * (int)result + 8 >= (unsigned int)v23 || (unsigned int)result >= v22 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v49, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v49);
      sub_233E40((__int64)v49);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v24 = (unsigned int *)sub_186B300(v9 - 2, v23);
    v9 = v24 + 2;
    *v24 = v22;
    v5[1] = v24 + 2;
  }
  v25 = 8 * v7;
  *(v9 - 1) = v11;
  v26 = 8LL * v11;
  v27 = &v9[(unsigned __int64)v25 / 4];
  if ( v25 != v26 )
    return (unsigned __int64)memset(v27, 0, v26 - v25);
  return result;
}

