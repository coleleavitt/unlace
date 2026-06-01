__int64 __fastcall sub_3E1F20(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  char **exception; // rbp
  const char *v16; // rax
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *a4;
  if ( *a4 )
  {
    v9 = a4[1];
    if ( (*(_DWORD *)(v8 + 8))-- == 1 )
      sub_15D7BC0(v9, v8);
  }
  *a4 = 0;
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
  {
    *(_QWORD *)(a1 + 120) = a2;
    *(_DWORD *)(a1 + 128) = 0;
    *(_DWORD *)(a1 + 152) = 0;
    if ( (unsigned __int8)sub_3DF0A0(a1, a2, 3) )
    {
      v12 = 0x7FFFFFFF8LL;
      v13 = *(_QWORD *)(a1 + 56);
      if ( v13 )
        v12 = 8LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
      v14 = *(_QWORD *)(v13 + v12);
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      sub_3D2CD0(*a3, a3[1]);
      *a3 = v14;
      return sub_39BF70((__int64 *)(a1 + 48));
    }
    else
    {
      return sub_3DA7C0(a1, a3);
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      sub_3DBA80(a1);
      exception = (char **)__cxa_allocate_exception(0x28u);
      v16 = (const char *)sub_1829130(*(_QWORD *)(a1 + 8));
      sub_3D2D40(v17, v16);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      *exception = (char *)off_1C650D8;
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
    }
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    result = sub_3D2CD0(*a3, a3[1]);
    *a3 = a2;
  }
  return result;
}

