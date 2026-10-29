_DWORD *__fastcall sub_3A67B0(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *result; // rax
  _QWORD *v6; // rdx
  _QWORD *i; // r13
  __int64 v8; // rax
  _QWORD *v9; // rcx
  int v10; // ecx
  unsigned int v11; // r15d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  char **exception; // rbx
  __int64 v17[11]; // [rsp+0h] [rbp-58h] BYREF

  result = *(_DWORD **)(a1 + 160);
  if ( result )
    *(result - 1) = 0;
  v6 = *(_QWORD **)(a1 + 528);
  if ( v6 )
    *((_DWORD *)v6 - 1) = 0;
  if ( a2 )
  {
    for ( i = &a3[a2 - 1]; ; i = v9 )
    {
      if ( !result || (v10 = *(result - 1), v10 == *(result - 2)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 160));
        result = *(_DWORD **)(a1 + 160);
        v6 = *(_QWORD **)(a1 + 528);
        v10 = *(result - 1);
      }
      *(_QWORD *)&result[2 * v10] = *i;
      *(result - 1) = v10 + 1;
      if ( !v6 )
        break;
      v8 = *((unsigned int *)v6 - 1);
      if ( (_DWORD)v8 != *((_DWORD *)v6 - 2) )
      {
        result = (_DWORD *)v6 + v8;
        goto LABEL_10;
      }
      v11 = (unsigned int)(3 * v8 + 1) >> 1;
      v12 = 4 * v11 + 8;
      if ( 4 * (int)v8 + 8 >= (unsigned int)v12 || (unsigned int)v8 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_399470(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
      v9 = i - 1;
      v6 = v13 + 2;
      *v13 = v11;
      v14 = v13[1];
      *(_QWORD *)(a1 + 528) = v6;
      result = (_DWORD *)v6 + v14;
      *result = a2;
      ++*((_DWORD *)v6 - 1);
      if ( a3 == i )
        return result;
LABEL_11:
      result = *(_DWORD **)(a1 + 160);
    }
    v15 = (_QWORD *)sub_186B270(0x10u);
    v6 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 528) = v15 + 1;
    result = v15 + 1;
LABEL_10:
    *result = a2;
    v9 = i - 1;
    ++*((_DWORD *)v6 - 1);
    if ( a3 == i )
      return result;
    goto LABEL_11;
  }
  return result;
}

