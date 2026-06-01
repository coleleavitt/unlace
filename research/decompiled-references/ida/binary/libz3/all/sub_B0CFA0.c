__int64 __fastcall sub_B0CFA0(__int64 a1, unsigned int a2, int a3)
{
  char **exception; // rbx
  unsigned int v4; // eax
  char v5; // r13
  _QWORD *v7; // rbx
  unsigned int v8; // ebp
  char v9; // r13
  __int64 v10; // r15
  int *v11; // rbx
  int v12; // ebp
  __int64 result; // rax
  unsigned int v14; // edx
  size_t v15; // rsi
  unsigned int v16; // r15d
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // [rsp+8h] [rbp-60h]
  unsigned int v24; // [rsp+Ch] [rbp-5Ch]
  __int64 v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a2 >> 1;
  v5 = a2;
  v7 = *(_QWORD **)(a1 + 856);
  v23 = a2 >> 1;
  if ( v7 )
  {
    v8 = v4 + 1;
    v24 = *((_DWORD *)v7 - 1);
    if ( v4 < v24 )
      goto LABEL_3;
  }
  else
  {
    v8 = v4 + 1;
    v21 = (_QWORD *)sub_186B270(0x10u);
    v24 = 0;
    v7 = v21 + 1;
    *v21 = 2;
    *(_QWORD *)(a1 + 856) = v21 + 1;
  }
  while ( 1 )
  {
    v18 = *((_DWORD *)v7 - 2);
    if ( v18 >= v8 )
      break;
    v14 = (3 * v18 + 1) >> 1;
    v15 = 4 * v14 + 8;
    v16 = v14;
    if ( 4 * v18 + 8 >= (unsigned int)v15 || v18 >= v14 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_B035D0(v25, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v17 = (unsigned int *)sub_186B300(v7 - 1, v15);
    v7 = v17 + 2;
    *v17 = v16;
    *(_QWORD *)(a1 + 856) = v17 + 2;
  }
  *((_DWORD *)v7 - 1) = v8;
  v19 = 4LL * v8;
  v20 = 4LL * v24;
  if ( v20 != v19 )
    memset((char *)v7 + v20, 0, v19 - v20);
LABEL_3:
  v9 = v5 & 1;
  v10 = 4LL * v23;
  v11 = (int *)((char *)v7 + v10);
  v12 = *v11;
  if ( !*v11 )
  {
    result = *(_QWORD *)(a1 + 864);
    if ( !result || (v22 = *(unsigned int *)(result - 4), (_DWORD)v22 == *(_DWORD *)(result - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 864));
      result = *(_QWORD *)(a1 + 864);
      v11 = (int *)(v10 + *(_QWORD *)(a1 + 856));
      *(_DWORD *)(result + 4LL * (unsigned int)(*(_DWORD *)(result - 4))++) = v23;
      if ( v9 )
        goto LABEL_22;
    }
    else
    {
      *(_DWORD *)(result + 4 * v22) = v23;
      ++*(_DWORD *)(result - 4);
      if ( v9 )
      {
LABEL_22:
        result = (unsigned int)-a3;
        *v11 = result;
        a3 = -a3;
        goto LABEL_23;
      }
    }
    *v11 = a3;
    return result;
  }
  if ( v9 )
    a3 = -a3;
  result = (unsigned int)(a3 + v12);
  *v11 = result;
  if ( v12 > 0 && a3 < 0 )
  {
    if ( (int)result < 0 )
      result = 0;
    *(_DWORD *)(a1 + 872) -= v12 - result;
    return result;
  }
LABEL_23:
  if ( v12 < 0 && a3 > 0 )
  {
    if ( (int)result > 0 )
      LODWORD(result) = 0;
    result = (unsigned int)(result - v12);
    *(_DWORD *)(a1 + 872) -= result;
  }
  return result;
}

