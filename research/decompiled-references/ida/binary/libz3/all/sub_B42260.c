__int64 __fastcall sub_B42260(_QWORD *a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 result; // rax
  int v5; // r15d
  _QWORD *v8; // rbp
  __int64 v9; // r13
  _DWORD *v10; // r9
  unsigned int v11; // r13d
  unsigned int *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int *v16; // rdx
  unsigned int *v17; // rsi
  __int64 v18; // r11
  __int64 *v19; // rdx
  __int64 v20; // r10
  double v21; // xmm0_8
  unsigned int *v22; // r8
  __int64 v23; // rdx
  _QWORD *v24; // rax
  unsigned int v25; // ebx
  size_t v26; // rsi
  unsigned int *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // r13
  __int64 v30; // rdx
  unsigned int v31; // ebp
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rax
  __int64 v35[11]; // [rsp+2h] [rbp-58h] BYREF

  result = a1[1];
  if ( !*(_BYTE *)(result + 10320) )
    return result;
  v5 = a2 + 1;
  v8 = (_QWORD *)a1[8];
  if ( !v8 )
  {
    if ( v5 <= 0 )
      goto LABEL_4;
    v9 = 0;
    v24 = (_QWORD *)sub_186B270(0x10u);
    v8 = v24 + 1;
    *v24 = 2;
    a1[8] = v24 + 1;
LABEL_20:
    while ( 1 )
    {
      v28 = *((_DWORD *)v8 - 2);
      if ( v28 >= v5 )
        break;
      v25 = (3 * v28 + 1) >> 1;
      v26 = 4 * v25 + 8;
      if ( 4 * v28 + 8 >= (unsigned int)v26 || v28 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v8 - 1, v26);
      v8 = v27 + 2;
      *v27 = v25;
      a1[8] = v27 + 2;
    }
    v29 = 4 * v9;
    *((_DWORD *)v8 - 1) = v5;
    v30 = 4LL * (unsigned int)v5;
    if ( v29 != v30 )
      memset((char *)v8 + v29, 0, v30 - v29);
    goto LABEL_4;
  }
  v9 = *((unsigned int *)v8 - 1);
  if ( v5 > (int)v9 )
  {
    if ( (unsigned int)v9 >= v5 )
    {
      *((_DWORD *)v8 - 1) = v5;
      goto LABEL_4;
    }
    goto LABEL_20;
  }
LABEL_4:
  v10 = (_DWORD *)a1[7];
  v11 = a2;
  v12 = (unsigned int *)v8 + a2;
  if ( v10 )
  {
    v13 = *(v10 - 1);
    *v12 = v13;
    v14 = (unsigned int)*(v10 - 1);
    if ( (_DWORD)v14 == *(v10 - 2) )
    {
      v31 = (unsigned int)(3 * v14 + 1) >> 1;
      v32 = 4 * v31 + 8;
      if ( 4 * (int)v14 + 8 >= (unsigned int)v32 || (unsigned int)v14 >= v31 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v10 - 2, v32);
      v15 = v13;
      v10 = v33 + 2;
      *v33 = v31;
      v34 = v33[1];
      a1[7] = v10;
      v8 = (_QWORD *)a1[8];
      v17 = &v10[v13];
      v16 = &v10[v34];
      result = (unsigned int)((int)v13 >> 1);
    }
    else
    {
      v15 = v13;
      v16 = &v10[v14];
      v17 = &v10[v13];
      result = (unsigned int)((int)v13 >> 1);
    }
    *v16 = a2;
    ++*(v10 - 1);
    v18 = *v17;
    v11 = *v17;
    if ( (_DWORD)result )
    {
      v19 = (__int64 *)a1[6];
      v20 = *v19;
      v21 = *(double *)(*v19 + 8 * v18);
      while ( 1 )
      {
        v17 = &v10[v15];
        v22 = &v10[(unsigned int)result];
        v23 = *v22;
        if ( v21 <= *(double *)(v20 + 8 * v23) )
          break;
        *v17 = v23;
        *((_DWORD *)v8 + v23) = v13;
        v13 = result;
        result = (unsigned int)((int)result >> 1);
        if ( !(_DWORD)result )
        {
          v17 = v22;
          v13 = 1;
          break;
        }
        v15 = v13;
      }
    }
  }
  else
  {
    *v12 = 0;
    result = sub_186B270(0x10u);
    v18 = a2;
    v8 = (_QWORD *)a1[8];
    v13 = 0;
    v17 = (unsigned int *)(result + 8);
    *(_QWORD *)result = 2;
    a1[7] = result + 8;
    ++*(_DWORD *)(result + 4);
    *(_DWORD *)(result + 8) = a2;
  }
  *v17 = v11;
  *((_DWORD *)v8 + v18) = v13;
  return result;
}

