__int64 __fastcall sub_E1F150(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 (__fastcall *v13)(_QWORD *, __int64); // rax
  __int64 result; // rax
  unsigned int v16; // r13d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a3 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  ++*(_DWORD *)(a3 + 8);
  v6 = (_QWORD *)a1[13];
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v16 = (3 * v7 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v17 || v7 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_180760(v21, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v21);
        sub_233E40((__int64)v21);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v6 - 1, v17);
      v19 = v18[1];
      v6 = v18 + 2;
      *v18 = v16;
      a1[13] = v18 + 2;
      LODWORD(v18) = v19;
      v10 = &v6[v19];
      v9 = (_DWORD)v18 + 1;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v6[v8];
    }
  }
  else
  {
    v20 = (_QWORD *)sub_186B270(0x18u);
    v6 = v20 + 1;
    *v20 = 2;
    v9 = 1;
    a1[13] = v6;
    v10 = v6;
  }
  *v10 = a3;
  v11 = a1[1];
  *((_DWORD *)v6 - 1) = v9;
  v12 = sub_15E1B70(v11);
  v13 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 144LL);
  if ( !v12 )
    return v13(a1, 0);
  ++*(_DWORD *)(v12 + 8);
  result = v13(a1, v12);
  if ( (*(_DWORD *)(v12 + 8))-- == 1 )
    return sub_15D7BC0(v11, v12);
  return result;
}

