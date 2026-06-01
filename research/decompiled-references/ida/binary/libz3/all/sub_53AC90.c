__int64 __fastcall sub_53AC90(_QWORD *a1, _BYTE *a2)
{
  _BYTE *v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE *v7; // rcx
  unsigned int v8; // ebx
  size_t v9; // rsi
  unsigned int *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char **exception; // rbx
  __int64 v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = (_BYTE *)*a1;
  if ( *a1 )
  {
    v4 = *((_DWORD *)v3 - 1);
    if ( v4 == *((_DWORD *)v3 - 2) )
    {
      v8 = (3 * v4 + 1) >> 1;
      v9 = v8 + 8;
      if ( v4 + 8 >= (unsigned int)v9 || v4 >= v8 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v14, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v14);
        sub_233E40((__int64)v14);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = (unsigned int *)sub_186B300(v3 - 8, v9);
      v11 = v10[1];
      v3 = v10 + 2;
      *v10 = v8;
      *a1 = v10 + 2;
      LODWORD(v10) = v11;
      v7 = &v3[v11];
      result = (unsigned int)((_DWORD)v10 + 1);
    }
    else
    {
      v5 = v4;
      result = v4 + 1;
      v7 = &v3[v5];
    }
  }
  else
  {
    v12 = (_QWORD *)sub_186B270(0xAu);
    v3 = v12 + 1;
    *v12 = 2;
    result = 1;
    *a1 = v3;
    v7 = v3;
  }
  *v7 = *a2;
  *((_DWORD *)v3 - 1) = result;
  return result;
}

