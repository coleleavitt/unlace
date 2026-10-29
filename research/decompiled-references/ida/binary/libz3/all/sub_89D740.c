unsigned __int64 __fastcall sub_89D740(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rax
  int v4; // edx
  unsigned __int64 result; // rax
  char **exception; // rbp
  __int64 v7; // rdx
  __int64 v8[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_WORD *)(a2 + 4)
    || (v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v2 != 5
    || (result = (unsigned int)v2[1], (_DWORD)result) )
  {
    v3 = sub_15D1F10(a2);
    v4 = *(_DWORD *)(a1 + 736);
    result = *(_QWORD *)(v3 + 24);
    if ( result && *(_DWORD *)result == 5 && *(_DWORD *)(result + 4) == 1 )
    {
      if ( v4 != 2 )
      {
        *(_DWORD *)(a1 + 736) = 1;
        return result;
      }
    }
    else if ( v4 != 1 )
    {
      *(_DWORD *)(a1 + 736) = 2;
      return result;
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_12D192(v8, "difference logic does not work with mixed sorts", v7);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v8);
    sub_233E40((__int64)v8);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return result;
}

