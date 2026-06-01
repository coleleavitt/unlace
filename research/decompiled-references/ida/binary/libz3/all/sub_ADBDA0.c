_DWORD *__fastcall sub_ADBDA0(_QWORD *a1)
{
  char **exception; // rbx
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  _DWORD *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rdx
  unsigned int v11; // ebp
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = (_QWORD *)a1[134];
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 == *((_DWORD *)v2 - 2) )
    {
      v11 = (unsigned int)(3 * v3 + 1) >> 1;
      v12 = 4 * (v11 + ((3 * (_DWORD)v3 + 1) & 0xFFFFFFFE)) + 8;
      if ( 12 * (int)v3 + 8 >= (unsigned int)v12 || (unsigned int)v3 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v2 - 1, v12);
      v2 = v13 + 2;
      *v13 = v11;
      v14 = v13[1];
      a1[134] = v2;
      v4 = (_QWORD *)((char *)v2 + 12 * v14);
    }
    else
    {
      v4 = (_QWORD *)((char *)v2 + 12 * v3);
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x20u);
    v2 = v15 + 1;
    *v15 = 2;
    a1[134] = v15 + 1;
    v4 = v15 + 1;
  }
  *v4 = 0;
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((unsigned int *)v2 - 1);
  *((_DWORD *)v2 - 1) = v5 + 1;
  result = (_DWORD *)v2 + 3 * v5;
  v7 = a1[130];
  if ( v7 )
  {
    *result = *(_DWORD *)(v7 - 4);
    v8 = a1[132];
    if ( v8 )
    {
LABEL_6:
      v9 = *(_DWORD *)(v8 - 4);
      goto LABEL_7;
    }
  }
  else
  {
    *result = 0;
    v8 = a1[132];
    if ( v8 )
      goto LABEL_6;
  }
  v9 = 0;
LABEL_7:
  result[1] = v9;
  v10 = a1[133];
  if ( v10 )
    result[2] = *(_DWORD *)(v10 - 4);
  else
    result[2] = 0;
  return result;
}

