__int64 __fastcall sub_3D06A0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v9[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int8)sub_1859630(
                          **(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL),
                          "xform.slice",
                          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 8LL,
                          1) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C88C8(v9, "Covers are incompatible with slicing. Disable slicing before using covers", v5);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v9);
    sub_233E40((__int64)v9);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return sub_415DF0(*(_QWORD *)(a1 + 552), a2, a3, a4, 0);
}

