__int64 __fastcall sub_BC9C90(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  _QWORD *v9; // rdx
  unsigned int v10; // r12d
  _QWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20[11]; // [rsp+0h] [rbp-58h] BYREF

  v9 = *(_QWORD **)(a1 + 4288);
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v15 = (3 * v10 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v16 || v10 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v20, "Overflow encountered when expanding vector", v5);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v9 - 1, v16);
      v18 = v17[1];
      v9 = v17 + 2;
      *v17 = v15;
      *(_QWORD *)(a1 + 4288) = v17 + 2;
      LODWORD(v17) = v18;
      v11 = &v9[v18];
      v12 = (_DWORD)v17 + 1;
    }
    else
    {
      v11 = &v9[v10];
      v12 = v10 + 1;
    }
  }
  else
  {
    v10 = 0;
    v19 = (_QWORD *)sub_186B270(0x18u);
    v9 = v19 + 1;
    *v19 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 4288) = v9;
    v11 = v9;
  }
  *v11 = a2;
  *((_DWORD *)v9 - 1) = v12;
  while ( v9 )
  {
    v13 = *((_DWORD *)v9 - 1);
    if ( v13 == v10 )
      goto LABEL_11;
LABEL_6:
    result = sub_BC7E60(a1, (unsigned int *)v9[v13 - 1], a3, a4);
    if ( !(_BYTE)result )
      return result;
    v9 = *(_QWORD **)(a1 + 4288);
    if ( *a4 )
      --*((_DWORD *)v9 - 1);
  }
  v13 = 0;
  if ( v10 )
    goto LABEL_6;
LABEL_11:
  sub_14B9B80(a1 + 1192, a4);
  return 1;
}

