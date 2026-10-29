__int64 __fastcall sub_646A80(__int64 *a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned int v10; // r15d
  unsigned int v11; // r8d
  __int64 v12; // r14
  __int64 v13; // rsi
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // r9d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // r9
  __int64 *v21; // r14
  unsigned int v22; // r14d
  __int64 v23; // rdi
  int v24; // r12d
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 *v27; // r8
  __int64 v28; // rsi
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rax
  int v33; // [rsp+4h] [rbp-84h]
  __int64 v34; // [rsp+8h] [rbp-80h]
  unsigned int v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+10h] [rbp-78h]
  unsigned int v37; // [rsp+10h] [rbp-78h]
  unsigned int v38; // [rsp+10h] [rbp-78h]
  unsigned int v39; // [rsp+18h] [rbp-70h]
  __int64 *v40; // [rsp+18h] [rbp-70h]
  unsigned __int64 v41; // [rsp+18h] [rbp-70h]
  __int64 v42[11]; // [rsp+30h] [rbp-58h] BYREF

  result = *a1;
  v6 = a1[1];
  v7 = (_QWORD *)a2[1];
  v34 = result;
  if ( !v6 )
  {
    if ( !v7 )
    {
      v33 = -1;
      v10 = 0;
      v8 = 0;
      v11 = 1;
      goto LABEL_47;
    }
    v12 = *((unsigned int *)v7 - 1);
    if ( (unsigned int)v12 <= 1 )
    {
      if ( (_DWORD)v12 )
        return result;
      v33 = -1;
      v10 = 0;
      v8 = 0;
      v11 = 1;
      goto LABEL_14;
    }
    v20 = (unsigned __int64)&v7[v12];
    v21 = v7 + 1;
    if ( (unsigned __int64)(v7 + 1) >= v20 )
    {
LABEL_40:
      *((_DWORD *)v7 - 1) = 1;
      return result;
    }
    v33 = -1;
    v11 = 1;
    v8 = 0;
    v10 = 0;
    while ( 1 )
    {
LABEL_32:
      v30 = *v21;
      if ( !*v21 )
        goto LABEL_31;
      v31 = *a2;
      v29 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v29 )
      {
        v41 = v20;
        v37 = v11;
        sub_15D7BC0(v31, v30);
        v20 = v41;
        v11 = v37;
LABEL_31:
        if ( (unsigned __int64)++v21 >= v20 )
          goto LABEL_35;
      }
      else if ( (unsigned __int64)++v21 >= v20 )
      {
LABEL_35:
        result = a2[1];
        if ( result )
          *(_DWORD *)(result - 4) = v11;
        goto LABEL_37;
      }
    }
  }
  v8 = *(_DWORD *)(v6 - 4);
  result = v8 - 1;
  v33 = v8 - 1;
  if ( !v8 )
  {
    if ( !v7 )
    {
      v33 = -1;
      v10 = 0;
      v11 = 1;
      goto LABEL_47;
    }
    v12 = *((unsigned int *)v7 - 1);
    if ( (unsigned int)v12 <= 1 )
    {
      v33 = -1;
      v10 = 0;
      v11 = 1;
      if ( (_DWORD)v12 )
        return result;
      goto LABEL_14;
    }
    v20 = (unsigned __int64)&v7[v12];
    v21 = v7 + 1;
    v10 = 0;
    v33 = -1;
    v11 = 1;
    if ( (unsigned __int64)(v7 + 1) < v20 )
      goto LABEL_32;
    goto LABEL_40;
  }
  v9 = v6;
  v10 = 0;
  do
  {
    if ( *(_QWORD *)v9 && v10 < *(_DWORD *)(*(_QWORD *)v9 + 16LL) )
      v10 = *(_DWORD *)(*(_QWORD *)v9 + 16LL);
    v9 += 8;
  }
  while ( v6 + 8LL * v8 != v9 );
  v11 = v10 + 1;
  if ( !v7 )
  {
    if ( v10 == -1 )
    {
      v10 = -1;
      goto LABEL_20;
    }
LABEL_47:
    v38 = v11;
    LODWORD(v12) = 0;
    v32 = (_QWORD *)sub_186B270(0x18u);
    v11 = v38;
    v7 = v32 + 1;
    *v32 = 2;
    result = 1;
    a2[1] = (__int64)v7;
    v14 = v7;
    goto LABEL_13;
  }
  v12 = *((unsigned int *)v7 - 1);
  if ( v11 < (unsigned int)v12 )
  {
    v20 = (unsigned __int64)&v7[v12];
    v21 = &v7[v11];
    if ( (unsigned __int64)v21 < v20 )
      goto LABEL_32;
    *((_DWORD *)v7 - 1) = v11;
    goto LABEL_20;
  }
  if ( (unsigned int)v12 >= v11 )
  {
LABEL_20:
    v22 = 0;
    while ( 1 )
    {
      result = v33 - v22;
      v23 = *(_QWORD *)(v6 + 8 * result);
      if ( v23 )
      {
        v24 = *(_DWORD *)(v23 + 16);
        v25 = sub_15D1F10(v23);
        result = sub_15DB5C0(v34, v22, v25);
        v26 = *a2;
        v27 = (__int64 *)(a2[1] + 8LL * (v10 - v24));
        if ( result )
          ++*(_DWORD *)(result + 8);
        v28 = *v27;
        if ( *v27 )
        {
          v29 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v29 )
          {
            v40 = v27;
            v36 = result;
            sub_15D7BC0(v26, v28);
            v27 = v40;
            result = v36;
          }
        }
        *v27 = result;
      }
      if ( ++v22 == v8 )
        break;
      v6 = a1[1];
    }
    return result;
  }
  do
  {
LABEL_14:
    v15 = *((_DWORD *)v7 - 1);
    if ( v15 == *((_DWORD *)v7 - 2) )
    {
      v16 = (3 * v15 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v42, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v42);
        sub_233E40((__int64)v42);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (3 * v15 + 1) >> 1;
      v35 = v11;
      v18 = (unsigned int *)sub_186B300(v7 - 1, v17);
      v11 = v35;
      v19 = v18[1];
      v7 = v18 + 2;
      *v18 = v39;
      LODWORD(v18) = v19;
      a2[1] = (__int64)v7;
      v14 = &v7[v19];
      result = (unsigned int)((_DWORD)v18 + 1);
    }
    else
    {
      v13 = v15;
      result = v15 + 1;
      v14 = &v7[v13];
    }
LABEL_13:
    LODWORD(v12) = v12 + 1;
    *v14 = 0;
    *((_DWORD *)v7 - 1) = result;
  }
  while ( (unsigned int)v12 < v11 );
LABEL_37:
  if ( v8 )
  {
    v6 = a1[1];
    goto LABEL_20;
  }
  return result;
}

