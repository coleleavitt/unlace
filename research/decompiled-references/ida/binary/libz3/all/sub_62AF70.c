void __fastcall sub_62AF70(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  char **exception; // rbp
  _QWORD v7[2]; // [rsp-10h] [rbp-1D8h] BYREF
  _BYTE v8[32]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v9[8]; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v10[384]; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v11; // [rsp+1A8h] [rbp-20h]
  __int64 v12; // [rsp+1B0h] [rbp-18h]
  __int64 v13; // [rsp+1B8h] [rbp-10h]
  __int64 v14; // [rsp+1C0h] [rbp-8h]

  if ( *(_WORD *)(a2 + 4) )
  {
    v14 = v5;
    v13 = v4;
    v12 = v3;
    v11 = v2;
    std::ostringstream::basic_ostringstream(v9);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v7, a2, *a1, 0, 0, 0);
    sub_160E8B0(v9, v7);
    sub_18572D0(v8);
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v7, v10);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v7);
    sub_233E40((__int64)v7);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
}

