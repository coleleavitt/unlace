__int64 __fastcall sub_3A97E0(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  char **exception; // rbp
  const char *v11; // rax
  __int64 v12[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_399410(*a4, a4[1]);
  *a4 = 0;
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    *(_QWORD *)(a1 + 120) = a2;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    if ( (unsigned __int8)sub_3A7D10(a1, a2, 3) )
    {
      v7 = 0x7FFFFFFF8LL;
      v8 = *(_QWORD *)(a1 + 56);
      if ( v8 )
        v7 = 8LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
      v9 = *(_QWORD *)(v8 + v7);
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      sub_399450(*a3, a3[1]);
      *a3 = v9;
      return sub_39BF70((__int64 *)(a1 + 48));
    }
    else
    {
      return sub_399AC0(a1, a3);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_39AF50(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v11 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_399470(v12, v11);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v12);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v12);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
    }
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    result = sub_399450(*a3, a3[1]);
    *a3 = a2;
  }
  return result;
}

