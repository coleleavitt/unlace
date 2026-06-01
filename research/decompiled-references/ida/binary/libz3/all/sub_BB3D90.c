__int64 __fastcall sub_BB3D90(__int64 a1)
{
  char **exception; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4[7]; // [rsp+0h] [rbp-38h] BYREF

  result = sub_966740(a1);
  if ( *(_BYTE *)(a1 + 4168) )
  {
    result = *(_DWORD *)(result + 252) & 0xFFFFFFFB;
    if ( (_DWORD)result != 2 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v4, "illegal arithmetic solver used with string solver", v2);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v4);
      sub_233E40((__int64)v4);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  return result;
}

