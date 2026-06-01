__int64 __fastcall sub_2F2590(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rax
  __int64 v6[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 160) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_2EB560(v6, "adding hard constraints is not supported during callbacks");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v6);
    sub_233E40((__int64)v6);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v6[0] = a3;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  sub_2F13A0((_QWORD *)(a1 + 584), v6);
  v4 = sub_15E1B70(*(_QWORD *)(a1 + 8));
  v6[0] = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  sub_2F13A0((_QWORD *)(a1 + 568), v6);
  return sub_2EC9E0(a1);
}

