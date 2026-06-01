__int64 __fastcall sub_DEAC30(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  char **exception; // rbx
  __int64 v9[7]; // [rsp+2h] [rbp-38h] BYREF

  v6 = *(unsigned int *)(a1 + 32);
  if ( (unsigned int)v6 >= a3 )
  {
    v9[6] = v5;
    v9[5] = v4;
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v9, "type parameter was not declared");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v9);
    sub_233E40((__int64)v9);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return *(_QWORD *)(a4 + 8 * v6);
}

