__int64 __fastcall sub_AAFA00(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // r12
  unsigned int *v4; // rbp
  __int64 v6[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a2 + 518) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(
      v6,
      "Benchmark has real variables but it is marked as AUFLIA (arrays, uninterpreted functions and linear integer arithmetic).");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v6);
    sub_233E40((__int64)v6);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_15B6220(a1[2]);
  sub_15B61B0(a1[2], 1);
  v3 = *a1;
  v4 = (unsigned int *)sub_186B270(0x608u);
  sub_A51C30((__int64)v4, *a1);
  sub_8F1E10(v3, v4);
  return sub_AAF350(a1);
}

