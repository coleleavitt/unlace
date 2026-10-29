__int64 __fastcall sub_4D72E0(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  char **exception; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 result; // rax
  __int64 v10; // r14
  unsigned int v11; // r15d
  __int64 v12; // r13
  __int64 v13; // rsi
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // r8d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // r8
  __int64 *v21; // r13
  __int64 i; // rdi
  __int64 v23; // rsi
  bool v24; // zf
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 *v28; // r8
  __int64 v29; // rsi
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-80h]
  unsigned int v33; // [rsp+10h] [rbp-78h]
  unsigned __int64 v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *a3;
  v8 = (_QWORD *)a3[1];
  v32 = v7;
  result = *a1;
  if ( *a1 )
  {
    v10 = *(unsigned int *)(result - 4);
    v11 = v10 - 1;
    if ( !v8 )
    {
      if ( !(_DWORD)v10 )
        return result;
      LODWORD(v12) = 1;
      v31 = (_QWORD *)sub_186B270(0x18u);
      v8 = v31 + 1;
      *v31 = 0x100000002LL;
      a3[1] = (__int64)(v31 + 1);
      v31[1] = 0;
      if ( (_DWORD)v10 == 1 )
      {
        v11 = 0;
        goto LABEL_22;
      }
      do
      {
LABEL_8:
        v15 = *((_DWORD *)v8 - 1);
        if ( v15 == *((_DWORD *)v8 - 2) )
        {
          v16 = (3 * v15 + 1) >> 1;
          v17 = 8 * v16 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v36, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v33 = (3 * v15 + 1) >> 1;
          v18 = (unsigned int *)sub_186B300(v8 - 1, v17);
          v19 = v18[1];
          v8 = v18 + 2;
          *v18 = v33;
          LODWORD(v18) = v19;
          a3[1] = (__int64)v8;
          v14 = &v8[v19];
          result = (unsigned int)((_DWORD)v18 + 1);
        }
        else
        {
          v13 = v15;
          result = v15 + 1;
          v14 = &v8[v13];
        }
        LODWORD(v12) = v12 + 1;
        *v14 = 0;
        *((_DWORD *)v8 - 1) = result;
      }
      while ( (unsigned int)v12 < (unsigned int)v10 );
      goto LABEL_21;
    }
    v12 = *((unsigned int *)v8 - 1);
    if ( (unsigned int)v10 >= (unsigned int)v12 )
    {
      if ( (unsigned int)v12 >= (unsigned int)v10 )
        goto LABEL_21;
      goto LABEL_8;
    }
    result = (unsigned int)v10;
    v20 = (unsigned __int64)&v8[v12];
    v21 = &v8[(unsigned int)v10];
    if ( (unsigned __int64)v21 >= v20 )
      goto LABEL_20;
  }
  else
  {
    if ( !v8 )
      return result;
    result = *((unsigned int *)v8 - 1);
    if ( !(_DWORD)result )
      return result;
    v20 = (unsigned __int64)&v8[result];
    v21 = v8;
    v11 = -1;
    v10 = 0;
    if ( (unsigned __int64)v8 >= v20 )
    {
      *((_DWORD *)v8 - 1) = 0;
      return result;
    }
  }
  for ( i = v32; ; i = *a3 )
  {
    v23 = *v21;
    if ( *v21 )
    {
      v24 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v24 )
        break;
    }
    if ( (unsigned __int64)++v21 >= v20 )
      goto LABEL_19;
LABEL_15:
    ;
  }
  v34 = v20;
  ++v21;
  result = sub_15D7BC0(i, v23);
  v20 = v34;
  if ( (unsigned __int64)v21 < v34 )
    goto LABEL_15;
LABEL_19:
  v8 = (_QWORD *)a3[1];
  if ( v8 )
LABEL_20:
    *((_DWORD *)v8 - 1) = v10;
LABEL_21:
  if ( (_DWORD)v10 )
  {
LABEL_22:
    v25 = 4 * v10;
    v26 = 0;
    do
    {
      result = *a1;
      v27 = *(unsigned int *)(*a1 + v26);
      if ( (_DWORD)v27 != -1 )
      {
        result = sub_15DB5C0(v32, v27, *(_QWORD *)(*a2 + 2 * v26));
        if ( result )
          ++*(_DWORD *)(result + 8);
        v28 = (__int64 *)(8LL * v11 + a3[1]);
        v29 = *v28;
        if ( *v28 )
        {
          v30 = *a3;
          v24 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v24 )
          {
            v35 = result;
            sub_15D7BC0(v30, v29);
            result = v35;
            v28 = (__int64 *)(a3[1] + 8LL * v11);
          }
        }
        *v28 = result;
      }
      v26 += 4;
      --v11;
    }
    while ( v26 != v25 );
  }
  return result;
}

