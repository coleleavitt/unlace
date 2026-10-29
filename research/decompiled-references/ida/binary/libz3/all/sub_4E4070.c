__int64 __fastcall sub_4E4070(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int64 v7; // r12
  unsigned int v8; // esi
  __int64 v9; // r13
  unsigned int v10; // eax
  _DWORD *v11; // rax
  __int64 v12; // r14
  __int64 (__fastcall *v13)(__int64); // rdx
  char v14; // al
  __int64 v16; // r8
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rbx
  char **exception; // r12
  _QWORD v21[4]; // [rsp+0h] [rbp-1D8h] BYREF
  __m128i v22; // [rsp+20h] [rbp-1B8h] BYREF
  _BYTE v23[8]; // [rsp+30h] [rbp-1A8h] BYREF
  _BYTE v24[416]; // [rsp+38h] [rbp-1A0h] BYREF

  sub_4DC9E0(a1, (_QWORD *)a2, a3);
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 72);
    v6 = *(_DWORD *)(v4 - 4);
    if ( v5 < v6 )
    {
      v7 = *(_QWORD *)(v4 + 8LL * v5);
      if ( v7 )
      {
        v8 = *(_DWORD *)(a1 + 76);
        if ( v8 < v6 )
        {
          v9 = *(_QWORD *)(v4 + 8LL * v8);
          if ( v9 )
          {
            ++*(_DWORD *)(a2 + 72);
            v10 = *(_DWORD *)(v4 - 4);
            if ( v5 >= v10 )
              v7 = 0;
            if ( v8 >= v10 )
              BUG();
            v11 = sub_4D97D0(
                    *(_DWORD **)(a1 + 48),
                    *(_DWORD *)(a1 + 56),
                    *(_DWORD *)(v9 + 24) + ((*(_DWORD *)(v7 + 24) + 1) << 10));
            if ( v11 )
            {
              v12 = *((_QWORD *)v11 + 2);
            }
            else
            {
              v16 = *(_QWORD *)(a1 + 80);
              if ( v16 )
                v17 = *(_DWORD *)(v16 - 4);
              else
                v17 = 0;
              v12 = sub_4C4AE0(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL), v7, v9, v17, v16, *(_QWORD *)(a1 + 88));
              if ( !v12 )
              {
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v22);
                std::__ostream_insert<char,std::char_traits<char>>();
                v19 = sub_39A600((__int64)v23, *(const char **)(*(_QWORD *)(v7 + 8) + 16LL));
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_39A600(v19, *(const char **)(*(_QWORD *)(v9 + 8) + 16LL));
                exception = (char **)__cxa_allocate_exception(0x28u);
                std::stringbuf::str(v21, v24);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v21);
                sub_233E40((__int64)v21);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v18 = *(_DWORD *)(v9 + 24) + ((*(_DWORD *)(v7 + 24) + 1) << 10);
              v22.m128i_i64[1] = v12;
              v22.m128i_i32[0] = v18;
              sub_4E3880(a1 + 48, &v22);
            }
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v7, v9);
            v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL);
            if ( v13 == sub_4C9A90 )
              v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
            else
              v14 = v13(v7);
            if ( v14 )
              sub_4DF2D0(a2, *(_DWORD *)(a1 + 72));
          }
        }
      }
    }
  }
  return 1;
}

