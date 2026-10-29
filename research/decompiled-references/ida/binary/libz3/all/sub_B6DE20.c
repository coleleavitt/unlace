void __fastcall sub_B6DE20(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        double a4,
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
  char **exception; // rbx
  __int64 v17; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_WORD *)(a2 + 4) == 1 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_14E142(v22, "Formulas should not contain unbound variables", v17);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v22);
    sub_233E40((__int64)v22);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( (unsigned __int8)sub_15D2CB0(a1[13], a2) )
  {
    sub_B6CE00(a1, (unsigned int *)a2, a3, a4, a5, a6, v19, v20, v21, a10, a11, a12, a13, a14, a15, a16);
  }
  else if ( *(_WORD *)(a2 + 4) == 2 && *(_DWORD *)(a2 + 16) == 2 )
  {
    sub_B6D160((__int64)a1, (unsigned int *)a2, a4, a5, a6);
  }
  else
  {
    sub_B6E0D0((int)a1);
  }
}

