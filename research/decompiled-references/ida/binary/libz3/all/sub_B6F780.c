void __fastcall sub_B6F780(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  _QWORD *exception; // rbx
  char **v17; // rbx
  __int64 v18; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v23[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_186AF30(a1, a2) )
  {
    exception = __cxa_allocate_exception(0x10u);
    sub_182AE00(exception, 101);
    *exception = &off_1C72BF8;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'smt::oom_exception, sub_B6F920);
  }
  v23[0] = (unsigned int *)a2;
  sub_B6E7E0(a1, v23, a4, a5, a6);
  if ( *(_WORD *)(a2 + 4) == 1 )
  {
    v17 = (char **)__cxa_allocate_exception(0x28u);
    sub_14E142((__int64 *)v23, "Formulas should not contain unbound variables", v18);
    *v17 = (char *)off_1C63128;
    sub_2333C0(v17 + 1, v23);
    sub_233E40((__int64)v23);
    __cxa_throw(v17, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( (unsigned __int8)sub_15D2CB0(a1[13], a2) )
  {
    sub_B6CE00(
      a1,
      (unsigned int *)a2,
      a3,
      *(double *)a4.m128_u64,
      a5,
      a6,
      v20,
      v21,
      v22,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16);
  }
  else if ( *(_WORD *)(a2 + 4) == 2 && *(_DWORD *)(a2 + 16) == 2 )
  {
    sub_B6D160((__int64)a1, (unsigned int *)a2, *(double *)a4.m128_u64, a5, a6);
  }
  else
  {
    sub_B6E0D0(a1, (unsigned int *)a2, *(double *)a4.m128_u64, a5, a6);
  }
}

