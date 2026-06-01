__int64 __fastcall sub_52C6B0(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rdi
  _QWORD *v15; // rax
  char **exception; // rbx
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = (_QWORD *)*a1;
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 == *((_DWORD *)v4 - 2) )
    {
      v10 = (3 * v5 + 1) >> 1;
      v11 = 8 * v10 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v11 || v5 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v4 - 1, v11);
      v13 = v12[1];
      v14 = v12 + 2;
      *v12 = v10;
      *a1 = v12 + 2;
      result = (unsigned int)(v13 + 1);
      *(_QWORD *)&v14[2 * v13] = a2;
      *(v14 - 1) = result;
      v9 = a1[1];
      if ( v9 )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2);
      return result;
    }
    v6 = v5;
    result = v5 + 1;
    v8 = &v4[v6];
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v4 = v15 + 1;
    *v15 = 2;
    result = 1;
    *a1 = v4;
    v8 = v4;
  }
  *v8 = a2;
  *((_DWORD *)v4 - 1) = result;
  v9 = a1[1];
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2);
  return result;
}

