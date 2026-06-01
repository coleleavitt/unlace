__int64 __fastcall sub_BB75F0(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **v5; // rbx
  __int64 v6; // rdx
  char **exception; // rbx
  __int64 v8; // rdx
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 result; // rax
  _QWORD *v22; // rcx
  unsigned int v23; // r15d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r12d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33[11]; // [rsp+0h] [rbp-58h] BYREF

  v13 = (_DWORD *)a1[11];
  if ( v13 )
  {
    v14 = *(v13 - 1);
    if ( v14 == *(v13 - 2) )
    {
      v23 = (3 * v14 + 1) >> 1;
      v24 = 4 * v23 + 8;
      if ( 4 * v14 + 8 >= (unsigned int)v24 || v14 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v33, "Overflow encountered when expanding vector", v8);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v13 - 2, v24);
      v26 = v25[1];
      v13 = v25 + 2;
      *v25 = v23;
      a1[11] = v25 + 2;
      LODWORD(v25) = v26;
      v17 = &v13[v26];
      v16 = (_DWORD)v25 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v31 = (_QWORD *)sub_186B270(0x10u);
    v13 = v31 + 1;
    *v31 = 2;
    v16 = 1;
    a1[11] = v13;
    v17 = v13;
  }
  *v17 = a2;
  *(v13 - 1) = v16;
  v33[0] = a3;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_BB70A0(a1 + 7, v33);
  v33[0] = a4;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  sub_BB70A0(a1 + 9, v33);
  v18 = (_QWORD *)a1[10];
  if ( v18 )
  {
    v19 = *((_DWORD *)v18 - 1);
    if ( v19 == *((_DWORD *)v18 - 2) )
    {
      v27 = (3 * v19 + 1) >> 1;
      v28 = 8 * v27 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v28 || v19 >= v27 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v33, "Overflow encountered when expanding vector", v6);
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v33);
        sub_233E40((__int64)v33);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v18 - 1, v28);
      v30 = v29[1];
      v18 = v29 + 2;
      *v29 = v27;
      a1[10] = v29 + 2;
      LODWORD(v29) = v30;
      v22 = &v18[v30];
      result = (unsigned int)((_DWORD)v29 + 1);
    }
    else
    {
      v20 = v19;
      result = v19 + 1;
      v22 = &v18[v20];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v18 = v32 + 1;
    *v32 = 2;
    result = 1;
    a1[10] = v18;
    v22 = v18;
  }
  *v22 = a5;
  *((_DWORD *)v18 - 1) = result;
  return result;
}

