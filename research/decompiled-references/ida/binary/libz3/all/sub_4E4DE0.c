__int64 __fastcall sub_4E4DE0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r14
  _DWORD *v15; // rax
  __int64 v16; // r15
  __int64 (__fastcall *v17)(__int64); // rdx
  char v18; // al
  _DWORD *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64, __int64); // rdx
  __int64 (__fastcall *v25)(__int64); // rcx
  __int64 v26; // rsi
  void *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 (__fastcall *v34)(__int64, __int64); // rdx
  __int64 (__fastcall *v35)(__int64); // rcx
  __int64 v36; // rsi
  void *v37; // rdx
  __int64 v38; // rdi
  int v39; // eax
  __int64 v40; // rbx
  char **v41; // r12
  __int64 v42; // r13
  char **exception; // r12
  _QWORD v44[4]; // [rsp-20h] [rbp-1E8h] BYREF
  __m128i v45; // [rsp+0h] [rbp-1C8h] BYREF
  char v46[8]; // [rsp+10h] [rbp-1B8h] BYREF
  _BYTE v47[432]; // [rsp+18h] [rbp-1B0h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v5 = *(unsigned int *)(a1 + 72);
    if ( (unsigned int)v5 >= *(_DWORD *)(v3 - 4) || !*(_QWORD *)(v3 + 8 * v5) )
      return 1;
    sub_4DC9E0(a1, (_QWORD *)a2, a3);
    v7 = *(_QWORD *)(a2 + 8);
    ++*(_DWORD *)(a2 + 88);
    if ( !v7 )
      BUG();
    v8 = *(unsigned int *)(a1 + 72);
    v9 = *(_DWORD *)(v7 - 4);
    v10 = *(unsigned int *)(a1 + 76);
    if ( (unsigned int)v8 >= v9 )
      v11 = 0;
    else
      v11 = *(_QWORD *)(v7 + 8 * v8);
    if ( (unsigned int)v10 < v9 && *(_QWORD *)(v7 + 8 * v10) )
    {
      v12 = *(unsigned int *)(a1 + 80);
    }
    else
    {
      v32 = *(_QWORD *)(v11 + 8);
      v33 = *(_QWORD *)v32;
      v34 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 56LL);
      if ( v34 == sub_4DDB00 )
      {
        v35 = *(__int64 (__fastcall **)(__int64))(v33 + 48);
        v36 = v11 + 16;
        if ( v35 == sub_4DD980 )
          v37 = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(v33 + 40))(v32, v36);
        else
          v37 = (void *)((__int64 (__fastcall *)(__int64, __int64, _QWORD))v35)(v32, v36, *(unsigned int *)(v11 + 24));
      }
      else
      {
        v37 = (void *)v34(v32, v11);
      }
      sub_4DF0F0(a2, *(_DWORD *)(a1 + 76), v37);
      v7 = *(_QWORD *)(a2 + 8);
      if ( !v7 )
      {
        if ( *(_DWORD *)(a1 + 80) != -1 )
          BUG();
        v13 = 0;
        goto LABEL_23;
      }
      v10 = *(unsigned int *)(a1 + 76);
      v9 = *(_DWORD *)(v7 - 4);
      v12 = *(unsigned int *)(a1 + 80);
      if ( (unsigned int)v10 >= v9 )
      {
        v13 = 0;
        if ( (_DWORD)v12 == -1 )
          goto LABEL_23;
LABEL_11:
        if ( (unsigned int)v12 < v9 && *(_QWORD *)(v7 + 8 * v12) )
        {
          v14 = *(_QWORD *)(v7 + 8 * v12);
          if ( v14 )
          {
LABEL_14:
            v15 = sub_4D97D0(
                    *(_DWORD **)(a1 + 48),
                    *(_DWORD *)(a1 + 56),
                    *(_DWORD *)(v14 + 24) + ((*(_DWORD *)(v11 + 24) + ((*(_DWORD *)(v13 + 24) + 1) << 10)) << 10));
            if ( v15 )
            {
              v16 = *((_QWORD *)v15 + 2);
            }
            else
            {
              v38 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 24LL);
              if ( *(_BYTE *)(a1 + 84) )
                v16 = sub_4C49F0(v38, v13, v11, v14);
              else
                v16 = sub_4C4940(v38, v13, v11, v14);
              if ( !v16 )
              {
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v45);
                std::operator<<<std::char_traits<char>>();
                v42 = sub_39A600((__int64)v46, *(const char **)(*(_QWORD *)(v13 + 8) + 16LL));
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_39A600(v42, *(const char **)(*(_QWORD *)(v11 + 8) + 16LL));
                std::operator<<<std::char_traits<char>>();
                sub_39A600((__int64)v46, *(const char **)(*(_QWORD *)(v14 + 8) + 16LL));
                exception = (char **)__cxa_allocate_exception(0x28u);
                std::stringbuf::str(v44, v47);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v44);
                sub_233E40((__int64)v44);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v39 = *(_DWORD *)(v14 + 24) + ((*(_DWORD *)(v11 + 24) + ((*(_DWORD *)(v13 + 24) + 1) << 10)) << 10);
              v45.m128i_i64[1] = v16;
              v45.m128i_i32[0] = v39;
              sub_4E3880(a1 + 48, &v45);
            }
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, v13, v11, v14);
            v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL);
            if ( v17 == sub_4C9A90 )
              v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
            else
              v18 = v17(v14);
            if ( v18 )
              sub_4DF2D0(a2, *(_DWORD *)(a1 + 80));
            return 1;
          }
        }
        else
        {
          v22 = *(_QWORD *)(v13 + 8);
          v23 = *(_QWORD *)v22;
          v24 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 56LL);
          if ( v24 == sub_4DDB00 )
          {
            v25 = *(__int64 (__fastcall **)(__int64))(v23 + 48);
            v26 = v13 + 16;
            if ( v25 == sub_4DD980 )
              v27 = (void *)(*(__int64 (__fastcall **)(__int64, __int64))(v23 + 40))(v22, v26);
            else
              v27 = (void *)((__int64 (__fastcall *)(__int64, __int64, _QWORD))v25)(
                              v22,
                              v26,
                              *(unsigned int *)(v13 + 24));
          }
          else
          {
            v27 = (void *)v24(v22, v13);
          }
          sub_4DF0F0(a2, *(_DWORD *)(a1 + 80), v27);
          v28 = *(unsigned int *)(a1 + 80);
          if ( (_DWORD)v28 != -1 )
          {
            v29 = *(_QWORD *)(a2 + 8);
            if ( v29 )
            {
              if ( (unsigned int)v28 < *(_DWORD *)(v29 - 4) )
              {
                v14 = *(_QWORD *)(v29 + 8 * v28);
                if ( v14 )
                  goto LABEL_14;
              }
            }
          }
        }
LABEL_23:
        v20 = sub_4D97D0(
                *(_DWORD **)(a1 + 48),
                *(_DWORD *)(a1 + 56),
                *(_DWORD *)(v11 + 24) + ((*(_DWORD *)(v13 + 24) + 1) << 10));
        if ( v20 )
        {
          v21 = *((_QWORD *)v20 + 2);
        }
        else
        {
          v30 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 24LL);
          if ( *(_BYTE *)(a1 + 84) )
            v21 = sub_4C49F0(v30, v13, v11, 0);
          else
            v21 = sub_4C4940(v30, v13, v11, 0);
          if ( !v21 )
          {
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v45);
            std::__ostream_insert<char,std::char_traits<char>>();
            v40 = sub_39A600((__int64)v46, *(const char **)(*(_QWORD *)(v13 + 8) + 16LL));
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_39A600(v40, *(const char **)(*(_QWORD *)(v11 + 8) + 16LL));
            v41 = (char **)__cxa_allocate_exception(0x28u);
            std::stringbuf::str(v44, v47);
            *v41 = (char *)off_1C63128;
            sub_2333C0(v41 + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(v41, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = *(_DWORD *)(v11 + 24) + ((*(_DWORD *)(v13 + 24) + 1) << 10);
          v45.m128i_i64[1] = v21;
          v45.m128i_i32[0] = v31;
          sub_4E3880(a1 + 48, &v45);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v21 + 16LL))(v21, v13, v11, 0);
        return 1;
      }
    }
    v13 = *(_QWORD *)(v7 + 8 * v10);
    if ( (_DWORD)v12 == -1 )
      goto LABEL_23;
    goto LABEL_11;
  }
  return 1;
}

