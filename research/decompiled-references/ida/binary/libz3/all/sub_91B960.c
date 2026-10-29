_DWORD *__fastcall sub_91B960(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  int v6; // edx
  _DWORD *result; // rax
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rdx
  unsigned int v11; // ebp
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  char **exception; // rbx
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = (_QWORD *)a1[16];
  if ( v2 )
  {
    v3 = *((unsigned int *)v2 - 1);
    if ( (_DWORD)v3 == *((_DWORD *)v2 - 2) )
    {
      v11 = (unsigned int)(3 * v3 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * (int)v3 + 8 >= (unsigned int)v12 || (unsigned int)v3 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v2 - 1, v12);
      v2 = v13 + 2;
      *v13 = v11;
      v14 = v13[1];
      a1[16] = v2;
      v4 = &v2[v14];
    }
    else
    {
      v4 = &v2[v3];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v2 = v15 + 1;
    *v15 = 2;
    a1[16] = v15 + 1;
    v4 = v15 + 1;
  }
  *v4 = 0;
  v5 = *((unsigned int *)v2 - 1);
  v6 = v5 + 1;
  result = &v2[v5];
  *((_DWORD *)v2 - 1) = v6;
  v8 = a1[4];
  if ( v8 )
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  *result = v9;
  v10 = a1[15];
  if ( v10 )
    result[1] = *(_DWORD *)(v10 - 4);
  else
    result[1] = 0;
  return result;
}

