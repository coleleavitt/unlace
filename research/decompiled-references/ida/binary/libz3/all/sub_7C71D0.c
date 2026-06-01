unsigned __int64 __fastcall sub_7C71D0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned __int64 result; // rax
  __int64 v4[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, a2)
    || (result = (unsigned __int64)sub_182D020(qword_1C7F2C0, a2) >> 32) != 0 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v4, "unsigned coefficient expected");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v4);
    sub_233E40((__int64)v4);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return result;
}

