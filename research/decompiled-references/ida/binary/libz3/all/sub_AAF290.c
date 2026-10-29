__int64 __fastcall sub_AAF290(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // r13
  unsigned int *v4; // r12
  __int64 result; // rax
  __int64 v6[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a2 + 518) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(
      v6,
      "Benchmark has real variables but it is marked as QF_UFLIA (uninterpreted functions and linear integer arithmetic).");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v6);
    sub_233E40((__int64)v6);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
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
  sub_8F1E10(v3, v4);
  result = sub_15B6070(a1[2]);
  if ( *(_BYTE *)(a2 + 519) )
  {
    sub_15B60B0(a1[2]);
    return sub_AAE7F0(a1);
  }
  return result;
}

