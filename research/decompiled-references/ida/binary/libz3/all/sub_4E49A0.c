__int64 __fastcall sub_4E49A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  _DWORD *v11; // rax
  __int64 v12; // r12
  void *v13; // rax
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int32 v17; // eax
  char **exception; // rbp
  _QWORD v19[4]; // [rsp-20h] [rbp-1D8h] BYREF
  __m128i v20; // [rsp+0h] [rbp-1B8h] BYREF
  _BYTE v21[8]; // [rsp+10h] [rbp-1A8h] BYREF
  _BYTE v22[416]; // [rsp+18h] [rbp-1A0h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 1;
  v6 = *(unsigned int *)(a1 + 76);
  v7 = *(_DWORD *)(v3 - 4);
  if ( (unsigned int)v6 < v7 && *(_QWORD *)(v3 + 8 * v6) )
  {
    sub_4DC9E0(a1, (_QWORD *)a2, a3);
    v8 = *(_QWORD *)(a2 + 8);
    ++*(_DWORD *)(a2 + 84);
    if ( !v8 || (v9 = *(unsigned int *)(a1 + 76), (unsigned int)v9 >= *(_DWORD *)(v8 - 4)) )
      BUG();
    v10 = *(_QWORD *)(v8 + 8 * v9);
    v11 = sub_4D97D0(*(_DWORD **)(a1 + 48), *(_DWORD *)(a1 + 56), *(_DWORD *)(v10 + 24));
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 2);
    }
    else
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL);
      if ( *(_BYTE *)(a1 + 72) )
        v12 = sub_4C4920(v16, v10);
      else
        v12 = sub_4C4930(v16, v10);
      if ( !v12 )
      {
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v20);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::operator<<<std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_39A600((__int64)v21, *(const char **)(*(_QWORD *)(v10 + 8) + 16LL));
        exception = (char **)__cxa_allocate_exception(0x28u);
        std::stringbuf::str(v19, v22);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = *(_DWORD *)(v10 + 24);
      v20.m128i_i64[1] = v12;
      v20.m128i_i32[0] = v17;
      sub_4E3880(a1 + 48, &v20);
    }
    v13 = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v10);
    sub_4DF0F0(a2, *(_DWORD *)(a1 + 88), v13);
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 88);
    if ( v15 < v7 && *(_QWORD *)(v3 + 8LL * v15) )
      sub_4DF0F0(a2, v15, nullptr);
  }
  return 1;
}

