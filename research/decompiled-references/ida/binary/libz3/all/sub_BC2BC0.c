__int64 __fastcall sub_BC2BC0(__int64 a1, __int64 a2, __m128 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  unsigned __int64 *v7; // r12
  unsigned __int64 *v8; // r15
  char v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  char v12; // al
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // rdi
  unsigned int v17; // ebx
  _DWORD *v18; // rax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // r12
  unsigned int v26; // [rsp+4h] [rbp-84h]
  unsigned __int8 v27; // [rsp+13h] [rbp-75h]
  unsigned int v28; // [rsp+14h] [rbp-74h]
  unsigned __int64 v29; // [rsp+18h] [rbp-70h]
  unsigned int v30; // [rsp+24h] [rbp-64h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-60h] BYREF
  __int64 v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v27 = *(_BYTE *)(a1 + 4168);
  if ( !v27 )
    return 0;
  v5 = *(unsigned __int64 **)(a2 + 8);
  v30 = 0;
  v31 = 0;
  if ( !v5 || (v7 = &v5[*((unsigned int *)v5 - 1)], v7 == v5) )
  {
    sub_966740(a1);
    return 0;
  }
  v8 = v5;
  v9 = 0;
  v26 = -1;
  v29 = 0;
  v10 = a1 + 1848;
  v28 = 0;
  do
  {
    while ( 1 )
    {
      v11 = a1 + 2168;
      v12 = sub_1407860(v10, a1 + 2168, *v8);
      if ( !v12 )
        break;
      v9 = v12;
LABEL_6:
      if ( v7 == ++v8 )
        goto LABEL_11;
    }
    v11 = *v8;
    if ( !(unsigned __int8)sub_14077E0(v10, *v8, &v30, &v31) )
      goto LABEL_6;
    if ( v30 >= v26 )
    {
      if ( v30 == v26 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        ++v28;
        v15 = 214013 * *(_DWORD *)(v14 + 7504) + 2531011;
        *(_DWORD *)(v14 + 7504) = v15;
        if ( !((HIWORD(v15) & 0x7FFFu) % v28) )
          v29 = v31;
      }
      goto LABEL_6;
    }
    ++v8;
    v26 = v30;
    v28 = 0;
    v29 = v31;
  }
  while ( v7 != v8 );
LABEL_11:
  if ( v26 < *(_DWORD *)(sub_966740(a1) + 448) )
  {
    ++*(_DWORD *)(a1 + 4152);
    v16 = v29;
    v17 = 2 * v26;
    v18 = *(_DWORD **)(sub_15D1F10(v29) + 24);
    if ( v18 )
    {
      if ( *(_DWORD *)(a1 + 1720) == *v18 && !v18[1] )
      {
        v11 = v29;
        v16 = a1 + 1728;
        v22 = sub_163C3C0(a1 + 1728, v29);
        if ( v17 < v22 )
          v17 = v22;
      }
    }
    if ( (unsigned int)sub_180B130(v16) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
      {
        sub_186A4C0(*(double *)a3.m128_u64);
        v23 = sub_180B150(v16, v11);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v23, *(_QWORD *)(a1 + 24), v29, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        v24 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v24, ")\n");
      }
      else
      {
        v25 = sub_180B150(v16, v11);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v25, *(_QWORD *)(a1 + 24), v29, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
      }
    }
    sub_BC1270(a1, v29, v17, 0, v19, v20, a3);
  }
  else if ( v9 )
  {
    *(_DWORD *)(a1 + 4152) = (unsigned int)(3 * *(_DWORD *)(a1 + 4152) + 1) >> 1;
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
      {
        sub_186A4C0(*(double *)a3.m128_u64);
        sub_180B150(a1, v11);
        std::__ostream_insert<char,std::char_traits<char>>();
        v21 = std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v21, ")\n");
      }
      else
      {
        sub_180B150(a1, v11);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::operator<<<std::char_traits<char>>();
      }
    }
  }
  else
  {
    if ( v26 != -1 && v26 >= *(_DWORD *)(sub_966740(a1) + 448) )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_154526(v32, "reached max unfolding", v4);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v32);
      sub_233E40((__int64)v32);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    return 0;
  }
  return v27;
}

