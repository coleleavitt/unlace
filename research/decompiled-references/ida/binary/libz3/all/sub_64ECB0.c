_DWORD *__fastcall sub_64ECB0(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  char **v4; // rbx
  __int64 v5; // rdx
  char **exception; // rbx
  __int64 v7; // rdx
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int *v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rax
  _DWORD *result; // rax
  unsigned int v19; // r14d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r13d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29[9]; // [rsp+0h] [rbp-48h] BYREF

  v29[0] = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_64DC20(a1 + 364, v29);
  v11 = (_QWORD *)a1[365];
  if ( v11 )
  {
    v12 = *((_DWORD *)v11 - 1);
    if ( v12 == *((_DWORD *)v11 - 2) )
    {
      v19 = (3 * v12 + 1) >> 1;
      v20 = 8 * v19 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v20 || v12 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v29, "Overflow encountered when expanding vector", v7);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v29);
        sub_233E40((__int64)v29);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v11 - 1, v20);
      v22 = v21[1];
      v11 = v21 + 2;
      *v21 = v19;
      a1[365] = v21 + 2;
      v15 = &v21[2 * v22 + 2];
      v14 = v22 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = (unsigned int *)&v11[v13];
    }
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x18u);
    v11 = v27 + 1;
    *v27 = 2;
    v14 = 1;
    a1[365] = v11;
    v15 = (unsigned int *)v11;
  }
  v16 = (_QWORD *)a1[366];
  *(_QWORD *)v15 = *a3;
  *((_DWORD *)v11 - 1) = v14;
  if ( v16 )
  {
    v17 = *((unsigned int *)v16 - 1);
    if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
    {
      v23 = (unsigned int)(3 * v17 + 1) >> 1;
      v24 = 4 * v23 + 8;
      if ( 4 * (int)v17 + 8 >= (unsigned int)v24 || (unsigned int)v17 >= v23 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v29, "Overflow encountered when expanding vector", v5);
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v29);
        sub_233E40((__int64)v29);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v16 - 1, v24);
      v16 = v25 + 2;
      *v25 = v23;
      v26 = v25[1];
      a1[366] = v16;
      result = (_DWORD *)v16 + v26;
    }
    else
    {
      result = (_DWORD *)v16 + v17;
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x10u);
    v16 = v28 + 1;
    *v28 = 2;
    a1[366] = v28 + 1;
    result = v28 + 1;
  }
  *result = a4;
  ++*((_DWORD *)v16 - 1);
  return result;
}

