__int64 __fastcall sub_3D0700(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v7[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_1859630(
                          **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                          "xform.slice",
                          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                          1) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C88C8(v7, "Invariants are incompatible with slicing. Disable slicing before using invariants", v4);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v7);
    sub_233E40((__int64)v7);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return sub_415F60(*(_QWORD *)(a1 + 552), a2, a3);
}

