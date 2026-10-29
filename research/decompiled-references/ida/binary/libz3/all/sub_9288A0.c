_DWORD *__fastcall sub_9288A0(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  _DWORD *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // edx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16[7]; // [rsp+0h] [rbp-38h] BYREF

  sub_966D90();
  v1 = (_QWORD *)a1[27];
  if ( v1 )
  {
    v2 = *((unsigned int *)v1 - 1);
    if ( (_DWORD)v2 == *((_DWORD *)v1 - 2) )
    {
      v10 = (unsigned int)(3 * v2 + 1) >> 1;
      v11 = 4 * (v10 + ((3 * (_DWORD)v2 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * (int)v2 + 8 >= (unsigned int)v11 || (unsigned int)v2 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v1 - 1, v11);
      v1 = v12 + 2;
      *v12 = v10;
      v13 = v12[1];
      a1[27] = v1;
      v3 = (_QWORD *)((char *)v1 + 12 * v13);
    }
    else
    {
      v3 = (_QWORD *)((char *)v1 + 12 * v2);
    }
  }
  else
  {
    v14 = (_QWORD *)sub_186B270(0x20u);
    v1 = v14 + 1;
    *v14 = 2;
    a1[27] = v14 + 1;
    v3 = v14 + 1;
  }
  *v3 = 0;
  *((_DWORD *)v3 + 2) = 0;
  v4 = *((unsigned int *)v1 - 1);
  *((_DWORD *)v1 - 1) = v4 + 1;
  result = (_DWORD *)v1 + 3 * v4;
  v6 = a1[21];
  if ( v6 )
  {
    *result = *(_DWORD *)(v6 - 4);
    v7 = a1[23];
    if ( v7 )
    {
LABEL_6:
      v8 = *(_DWORD *)(v7 - 4);
      goto LABEL_7;
    }
  }
  else
  {
    *result = 0;
    v7 = a1[23];
    if ( v7 )
      goto LABEL_6;
  }
  v8 = 0;
LABEL_7:
  result[1] = v8;
  v9 = a1[26];
  if ( v9 )
    result[2] = *(_DWORD *)(v9 - 4);
  else
    result[2] = 0;
  return result;
}

