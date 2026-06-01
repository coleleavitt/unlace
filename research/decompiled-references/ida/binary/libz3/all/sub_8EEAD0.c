__int64 __fastcall sub_8EEAD0(__int64 a1, __int64 *a2, void **a3)
{
  char **exception; // rbx
  __int64 result; // rax
  _DWORD *v5; // rbx
  __int64 v6; // r12
  unsigned int v10; // edx
  size_t v11; // rsi
  unsigned int v12; // r14d
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // ecx
  _QWORD *v21; // rax
  unsigned int v22; // [rsp+Ch] [rbp-5Ch]
  __int64 v23[11]; // [rsp+10h] [rbp-58h] BYREF

  result = *a2;
  v5 = *a3;
  if ( *a2 )
  {
    v6 = *(unsigned int *)(result - 4);
    if ( v5 )
    {
      result = (unsigned int)*(v5 - 1);
      v22 = result;
      if ( (unsigned int)result >= (unsigned int)v6 )
      {
        *(v5 - 1) = v6;
        if ( !(_DWORD)v6 )
          return result;
        v17 = *(_QWORD *)(a1 + 8832);
        if ( !v17 )
          return (__int64)memset(v5, 255, 4LL * (unsigned int)(v6 - 1) + 4);
        goto LABEL_12;
      }
    }
    else
    {
      if ( !(_DWORD)v6 )
        return result;
      v21 = (_QWORD *)sub_186B270(0x10u);
      v22 = 0;
      v5 = v21 + 1;
      *v21 = 2;
      *a3 = v21 + 1;
    }
    while ( 1 )
    {
      v14 = *(v5 - 2);
      if ( v14 >= (unsigned int)v6 )
        break;
      v10 = (3 * v14 + 1) >> 1;
      v11 = 4 * v10 + 8;
      v12 = v10;
      if ( 4 * v14 + 8 >= (unsigned int)v11 || v14 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_8E4EB0(v23, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v5 - 2, v11);
      v5 = v13 + 2;
      *v13 = v12;
      *a3 = v13 + 2;
    }
    *(v5 - 1) = v6;
    v15 = 4LL * (unsigned int)v6;
    v16 = 4LL * v22;
    if ( v16 != v15 )
      memset(&v5[(unsigned __int64)v16 / 4], 0, v15 - v16);
    v17 = *(_QWORD *)(a1 + 8832);
    if ( !v17 )
      return (__int64)memset(v5, 255, 4LL * (unsigned int)(v6 - 1) + 4);
LABEL_12:
    v18 = *a2;
    v19 = 0;
    do
    {
      v20 = -1;
      result = **(unsigned int **)(v18 + 8 * v19);
      if ( (unsigned int)result < *(_DWORD *)(v17 - 4) )
      {
        result = *(unsigned int *)(v17 + 4 * result);
        if ( (_DWORD)result != 0x7FFFFFFF )
        {
          result = *(_QWORD *)(a1 + 8872) + 16 * result;
          v20 = *(_DWORD *)(result + 8) & 0xFFFFFF;
        }
      }
      v5[v19++] = v20;
    }
    while ( v6 != v19 );
    return result;
  }
  if ( v5 )
    *(v5 - 1) = 0;
  return result;
}

