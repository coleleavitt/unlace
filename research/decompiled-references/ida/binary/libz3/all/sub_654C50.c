__int64 __fastcall sub_654C50(__int64 a1, __int64 a2, __int64 *a3)
{
  char **exception; // rbp
  char **v4; // rbp
  __int64 v5; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r13d
  __int64 i; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 *v18; // rsi
  __int64 result; // rax
  __int64 *v20; // rbx
  unsigned __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned int v25; // r8d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // rax
  unsigned int v30; // [rsp+Ch] [rbp-1ECh]
  __int64 v31; // [rsp+10h] [rbp-1E8h] BYREF
  _QWORD *v32; // [rsp+18h] [rbp-1E0h]
  __int64 v33[2]; // [rsp+30h] [rbp-1C8h] BYREF
  char v34[8]; // [rsp+40h] [rbp-1B8h] BYREF
  char v35[432]; // [rsp+48h] [rbp-1B0h] BYREF

  v8 = *(_DWORD **)(a2 + 24);
  if ( v8 && *v8 != -1 )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v33);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_39A600((__int64)v34, *(const char **)(a2 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(&v31, v35);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v31);
    sub_233E40((__int64)&v31);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  sub_653BE0((__int64 *)a1, 0);
  if ( *(_DWORD *)(a1 + 3024) )
  {
    v9 = *(_QWORD *)a1;
    v10 = 0;
    v32 = nullptr;
    v31 = v9;
    for ( i = *a3; *a3; i = *a3 )
    {
      if ( v10 >= *(_DWORD *)(i - 4) )
        break;
      v12 = sub_1625BE0(a1 + 56, *(_QWORD *)(i + 8LL * v10), *(_QWORD *)(a2 + 8LL * v10 + 48));
      v13 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v14 = v32;
      if ( v32 )
      {
        v15 = *((_DWORD *)v32 - 1);
        if ( v15 == *((_DWORD *)v32 - 2) )
        {
          v25 = (3 * v15 + 1) >> 1;
          v26 = 8 * v25 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v26 || v15 >= v25 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_104888(v33, "Overflow encountered when expanding vector", v5);
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v30 = (3 * v15 + 1) >> 1;
          v27 = (unsigned int *)sub_186B300(v32 - 1, v26);
          v28 = v27[1];
          v14 = v27 + 2;
          v32 = v27 + 2;
          *v27 = v30;
          LODWORD(v27) = v28;
          v18 = &v14[v28];
          v17 = (_DWORD)v27 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = &v32[v16];
        }
      }
      else
      {
        v29 = (_QWORD *)sub_186B270(0x18u);
        v14 = v29 + 1;
        *v29 = 2;
        v17 = 1;
        v32 = v14;
        v18 = v14;
      }
      *v18 = v13;
      ++v10;
      *((_DWORD *)v14 - 1) = v17;
    }
    result = sub_6549B0(a1, a2, &v31);
    v20 = v32;
    if ( v32 )
    {
      result = *((unsigned int *)v32 - 1);
      v21 = (unsigned __int64)&v32[result];
      if ( (unsigned __int64)v32 >= v21 )
        return sub_186B220(v20 - 1);
      do
      {
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 )
          {
            v23 = v31;
            if ( (*(_DWORD *)(v22 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v20 >= v21 )
            goto LABEL_19;
        }
        result = sub_15D7BC0(v23, v22);
        ++v20;
      }
      while ( (unsigned __int64)v20 < v21 );
LABEL_19:
      v20 = v32;
      if ( v32 )
        return sub_186B220(v20 - 1);
    }
  }
  else
  {
    sub_654200(a1, 0);
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 2968) + 280LL))(
             *(_QWORD *)(a1 + 2968),
             a2,
             a3);
  }
  return result;
}

