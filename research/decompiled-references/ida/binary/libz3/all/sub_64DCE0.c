__int64 __fastcall sub_64DCE0(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4[7]; // [rsp+0h] [rbp-38h] BYREF

  result = sub_6430A0(a1 + 2360);
  if ( !(_BYTE)result )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_104888(v4, "Negation is not stratified!", v2);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v4);
    sub_233E40((__int64)v4);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  *(_BYTE *)(a1 + 2984) = 1;
  return result;
}

