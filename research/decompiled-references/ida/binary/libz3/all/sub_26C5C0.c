__int64 __fastcall sub_26C5C0(__int64 a1)
{
  __int64 result; // rax
  char **exception; // rbx
  __int64 v3; // rdx
  int i; // ebp
  int v5; // edx
  __int64 v6[7]; // [rsp+0h] [rbp-38h] BYREF

  result = *(unsigned int *)(a1 + 16);
  if ( (int)result <= 47 || (int)result > 57 && ((unsigned int)result & 0xFFFFFFDF) - 65 > 5 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_ACE4E(v6, "invalid ptr", v3);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v6);
    sub_233E40((__int64)v6);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  *(_QWORD *)(a1 + 72) = 0;
  for ( i = 0; ; ++i )
  {
    if ( (unsigned int)(result - 48) <= 9 )
    {
      *(_QWORD *)(a1 + 72) = (int)result - 48 + 16LL * *(_QWORD *)(a1 + 72);
      goto LABEL_7;
    }
    v5 = result - 97;
    if ( (unsigned int)(result - 97) <= 5 || (v5 = result - 65, (unsigned int)(result - 65) <= 5) )
    {
      *(_QWORD *)(a1 + 72) = 16LL * *(_QWORD *)(a1 + 72) + v5 + 10;
      goto LABEL_7;
    }
    if ( i != 1 )
      break;
    result = (unsigned int)result & 0xFFFFFFDF;
    if ( (_DWORD)result != 88 )
      break;
LABEL_7:
    result = std::istream::get(*(std::istream **)(a1 + 8));
    *(_DWORD *)(a1 + 16) = result;
  }
  return result;
}

