__int64 __fastcall sub_AB1700(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // r12
  unsigned int *v4; // rbp
  __int64 v6[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a2 + 508) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v6, "Benchmark contains uninterpreted function symbols, but specified logic does not support them.");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v6);
    sub_233E40((__int64)v6);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_15B5DF0(a1[2]);
  v3 = *a1;
  if ( *(_DWORD *)(a1[2] + 252) == 2 )
  {
    v4 = (unsigned int *)sub_186B270(0x668u);
    sub_A44350((__int64)v4, *a1);
  }
  else
  {
    v4 = (unsigned int *)sub_186B270(0x48u);
    sub_A75F00(v4, *a1);
  }
  return sub_8F1E10(v3, v4);
}

