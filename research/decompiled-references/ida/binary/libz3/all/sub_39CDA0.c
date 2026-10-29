unsigned int **__fastcall sub_39CDA0(unsigned int **a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  unsigned int *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  unsigned int v10; // ebp
  __int64 v11; // rax
  int v12; // edx
  __int64 *v13; // rax
  __int64 v14; // r12
  unsigned int v15; // edx
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbp
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // rax
  _QWORD *v34; // rax
  char **exception; // r12
  int v36; // [rsp+0h] [rbp-228h]
  _QWORD *v37; // [rsp+8h] [rbp-220h]
  __int64 *v38; // [rsp+10h] [rbp-218h]
  unsigned int **v39; // [rsp+18h] [rbp-210h]
  __int64 v40; // [rsp+28h] [rbp-200h]
  int v41; // [rsp+30h] [rbp-1F8h]
  int v42; // [rsp+38h] [rbp-1F0h] BYREF
  int v43[2]; // [rsp+40h] [rbp-1E8h] BYREF
  void *v44; // [rsp+48h] [rbp-1E0h]
  int v45[2]; // [rsp+60h] [rbp-1C8h] BYREF
  char v46[8]; // [rsp+70h] [rbp-1B8h] BYREF
  char v47[432]; // [rsp+78h] [rbp-1B0h] BYREF

  v7 = *(unsigned int **)(a2 + 8);
  a1[1] = nullptr;
  v39 = a1;
  *a1 = v7;
  v8 = *(_QWORD *)(a5 + 8);
  v40 = a3;
  v38 = a4;
  if ( v8 )
  {
    v9 = nullptr;
    v10 = 0;
    while ( v10 < *(_DWORD *)(v8 - 4) )
    {
      v14 = sub_15D1F10(*(_QWORD *)(v8 + 8LL * v10));
      if ( v9 )
      {
        v15 = *((_DWORD *)v9 - 1);
        if ( v15 == *((_DWORD *)v9 - 2) )
        {
          v16 = (3 * v15 + 1) >> 1;
          v17 = 8 * v16 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_399470((__int64 *)v45, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v45);
            sub_233E40((__int64)v45);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
          v9 = (__int64 *)(v18 + 2);
          *v18 = v16;
          v19 = v18[1];
          v20 = v19;
          v13 = &v9[v19];
          v12 = v20 + 1;
        }
        else
        {
          v11 = v15;
          v12 = v15 + 1;
          v13 = &v9[v11];
        }
      }
      else
      {
        v34 = (_QWORD *)sub_186B270(0x18u);
        *v34 = 2;
        v13 = v34 + 1;
        v12 = 1;
        v9 = v13;
      }
      *v13 = v14;
      v8 = *(_QWORD *)(a5 + 8);
      ++v10;
      *((_DWORD *)v9 - 1) = v12;
      if ( !v8 )
      {
        v21 = *v38;
        if ( !*v38 )
          goto LABEL_27;
        goto LABEL_12;
      }
    }
    v21 = *v38;
    if ( *v38 )
      goto LABEL_12;
  }
  else
  {
    v21 = *a4;
    v9 = nullptr;
    if ( !*a4 )
      return v39;
LABEL_12:
    v22 = 0;
    do
    {
      if ( v22 >= *(_DWORD *)(v21 - 4) )
        break;
      v23 = *(_QWORD *)(v21 + 8LL * v22);
      if ( v23 )
      {
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v45);
        sub_39A600((__int64)v46, *(const char **)(*(_QWORD *)(*(_QWORD *)(v40 + 40) + 16LL) + 16LL));
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::stringbuf::str(v43, v47);
        sub_180C5A0(&v42, *(_QWORD *)v43);
        sub_233E40((__int64)v43);
        if ( v9 )
          v24 = *((unsigned int *)v9 - 1);
        else
          v24 = 0;
        v25 = sub_15E3510(*(_QWORD *)(a2 + 8), &v42, v24, v9, v23, 0);
        v26 = *(_QWORD *)(a2 + 8);
        v27 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
        v30 = *(_QWORD *)(a5 + 8);
        v31 = v30 ? *(_DWORD *)(v30 - 4) : 0;
        v32 = sub_15DC610(
                *(_QWORD *)(a2 + 8),
                v27,
                v31,
                v30,
                v28,
                v29,
                v36,
                (int)v43,
                (int)v38,
                (int)v39,
                (int)v45,
                v40,
                v41,
                v42,
                v43[0],
                v44);
        *(_QWORD *)v43 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        sub_399930(v39 + 1, v37);
        sub_3993F0(v27, v26);
      }
      else
      {
        *(_QWORD *)v45 = 0;
        sub_399930(v39 + 1, v45);
      }
      ++v22;
      v21 = *v38;
    }
    while ( *v38 );
  }
  if ( v9 )
LABEL_27:
    sub_186B220(v9 - 1);
  return v39;
}

