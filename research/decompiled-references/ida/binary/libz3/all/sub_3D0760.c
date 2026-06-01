__int64 __fastcall sub_3D0760(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v5[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)sub_1859630(
                          **(_QWORD **)(*(_QWORD *)(a2 + 48) + 32LL),
                          "xform.slice",
                          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 32LL) + 8LL,
                          1) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C88C8(v5, "Invariants are incompatible with slicing. Disable slicing before using invariants", v3);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v5);
    sub_233E40((__int64)v5);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_40A7D0(a1);
  return a1;
}

