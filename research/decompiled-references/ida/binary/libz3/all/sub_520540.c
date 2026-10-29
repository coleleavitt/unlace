__int64 __fastcall sub_520540(__int64 a1, int a2, int a3, int a4, char a5, _QWORD *a6)
{
  char **exception; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // r12d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !a5 )
  {
    v16 = sub_4DAF30(a2, a3, a4);
    return sub_52C6B0(a6, v16);
  }
  v8 = sub_4DB010(a2, a3, a4);
  v9 = (_QWORD *)*a6;
  v10 = v8;
  if ( *a6 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v17 = (3 * v11 + 1) >> 1;
      v18 = 8 * v17 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v18 || v11 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v23, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v23);
        sub_233E40((__int64)v23);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v9 - 1, v18);
      v20 = v19[1];
      v21 = v19 + 2;
      *v19 = v17;
      *a6 = v19 + 2;
      result = (unsigned int)(v20 + 1);
      *(_QWORD *)&v21[2 * v20] = v10;
      *(v21 - 1) = result;
      v15 = a6[1];
      if ( v15 )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v10);
      return result;
    }
    v12 = v11;
    result = v11 + 1;
    v14 = &v9[v12];
  }
  else
  {
    v22 = (_QWORD *)sub_186B270(0x18u);
    v9 = v22 + 1;
    *v22 = 2;
    result = 1;
    *a6 = v9;
    v14 = v9;
  }
  *v14 = v10;
  *((_DWORD *)v9 - 1) = result;
  v15 = a6[1];
  if ( v15 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v10);
  return result;
}

