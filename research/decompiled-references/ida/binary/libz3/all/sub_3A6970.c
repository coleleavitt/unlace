_DWORD *__fastcall sub_3A6970(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *result; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r13
  _QWORD *v7; // rbp
  __int64 v8; // rax
  int v9; // esi
  unsigned int v10; // r15d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16[11]; // [rsp+0h] [rbp-58h] BYREF

  result = *(_DWORD **)(a1 + 160);
  if ( result )
    *(result - 1) = 0;
  v5 = *(_QWORD **)(a1 + 528);
  if ( v5 )
    *((_DWORD *)v5 - 1) = 0;
  if ( a2 )
  {
    v6 = a3;
    v7 = &a3[a2];
    while ( 1 )
    {
      if ( !result || (v9 = *(result - 1), v9 == *(result - 2)) )
      {
        sub_23A6F0((unsigned int **)(a1 + 160));
        result = *(_DWORD **)(a1 + 160);
        v5 = *(_QWORD **)(a1 + 528);
        v9 = *(result - 1);
      }
      *(_QWORD *)&result[2 * v9] = *v6;
      *(result - 1) = v9 + 1;
      if ( !v5 )
        break;
      v8 = *((unsigned int *)v5 - 1);
      if ( (_DWORD)v8 != *((_DWORD *)v5 - 2) )
      {
        result = (_DWORD *)v5 + v8;
        goto LABEL_10;
      }
      v10 = (unsigned int)(3 * v8 + 1) >> 1;
      v11 = 4 * v10 + 8;
      if ( 4 * (int)v8 + 8 >= (unsigned int)v11 || (unsigned int)v8 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_399470(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v6;
      v12 = (unsigned int *)sub_186B300(v5 - 1, v11);
      v5 = v12 + 2;
      *v12 = v10;
      v13 = v12[1];
      *(_QWORD *)(a1 + 528) = v5;
      result = (_DWORD *)v5 + v13;
      *result = a2;
      ++*((_DWORD *)v5 - 1);
      if ( v7 == v6 )
        return result;
LABEL_11:
      result = *(_DWORD **)(a1 + 160);
    }
    v14 = (_QWORD *)sub_186B270(0x10u);
    v5 = v14 + 1;
    *v14 = 2;
    *(_QWORD *)(a1 + 528) = v14 + 1;
    result = v14 + 1;
LABEL_10:
    ++v6;
    *result = a2;
    ++*((_DWORD *)v5 - 1);
    if ( v7 == v6 )
      return result;
    goto LABEL_11;
  }
  return result;
}

