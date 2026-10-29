__int64 __fastcall sub_893820(_QWORD *a1, _BYTE *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _BYTE *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  _BYTE *v9; // rcx
  unsigned int v10; // ebx
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (_BYTE *)*a1;
  if ( *a1 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v10 = (3 * v6 + 1) >> 1;
      v11 = v10 + 8;
      if ( v6 + 8 >= (unsigned int)v11 || v6 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v15, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v5 - 8, v11);
      v13 = v12[1];
      v5 = v12 + 2;
      *v12 = v10;
      *a1 = v12 + 2;
      LODWORD(v12) = v13;
      v9 = &v5[v13];
      result = (unsigned int)((_DWORD)v12 + 1);
    }
    else
    {
      v7 = v6;
      result = v6 + 1;
      v9 = &v5[v7];
    }
  }
  else
  {
    v14 = (_QWORD *)sub_186B270(0xAu);
    v5 = v14 + 1;
    *v14 = 2;
    result = 1;
    *a1 = v5;
    v9 = v5;
  }
  *v9 = *a2;
  *((_DWORD *)v5 - 1) = result;
  return result;
}

