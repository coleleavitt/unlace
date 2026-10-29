__int64 __fastcall sub_A73FB0(__int64 a1, int a2, char a3)
{
  char **exception; // rbx
  __int64 v6; // r12
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // r13d
  size_t v11; // rsi
  unsigned int *v12; // rax
  _QWORD *v13; // rax
  char *v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD **)(v6 + 176);
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( (_DWORD)v8 == *((_DWORD *)v7 - 2) )
    {
      v10 = (unsigned int)(3 * v8 + 1) >> 1;
      v11 = 8 * v10 + 8;
      if ( 8 * (int)v8 + 8 >= (unsigned int)v11 || (unsigned int)v8 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_137C7A(v14);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v14);
        sub_233E40((__int64)v14);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
      v7 = v12 + 2;
      *(_QWORD *)(v6 + 176) = v12 + 2;
      *v12 = v10;
      result = (__int64)&v12[2 * v12[1] + 2];
    }
    else
    {
      result = (__int64)&v7[v8];
    }
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    v7 = v13 + 1;
    *v13 = 2;
    *(_QWORD *)(v6 + 176) = v13 + 1;
    result = (__int64)(v13 + 1);
  }
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = a3;
  ++*((_DWORD *)v7 - 1);
  return result;
}

