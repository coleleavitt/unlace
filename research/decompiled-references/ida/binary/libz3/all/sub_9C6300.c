__int64 __fastcall sub_9C6300(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r12
  char v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 *v12; // rcx
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  char **exception; // rbx
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v17 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(
        v17,
        "Grobner basis computation interrupted. Increase threshold using NL_ARITH_GB_THRESHOLD=<limit>\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 1448);
  v6 = sub_180C100(v4 + 8400, 24);
  v7 = *(_QWORD **)(v4 + 9456);
  v8 = v6;
  *(_QWORD *)v6 = off_1C54EE8;
  *(_QWORD *)(v6 + 8) = a1 + 1448;
  *(_BYTE *)(v6 + 16) = v5;
  if ( v7 )
  {
    v9 = *((_DWORD *)v7 - 1);
    if ( v9 == *((_DWORD *)v7 - 2) )
    {
      v13 = (3 * v9 + 1) >> 1;
      v14 = 8 * v13 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v20, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
      v16 = v15[1];
      v7 = v15 + 2;
      *(_QWORD *)(v4 + 9456) = v15 + 2;
      *v15 = v13;
      LODWORD(v15) = v16;
      v12 = &v7[v16];
      result = (unsigned int)((_DWORD)v15 + 1);
    }
    else
    {
      v10 = v9;
      result = v9 + 1;
      v12 = &v7[v10];
    }
  }
  else
  {
    v18 = (_QWORD *)sub_186B270(0x18u);
    v7 = v18 + 1;
    *v18 = 2;
    result = 1;
    *(_QWORD *)(v4 + 9456) = v7;
    v12 = v7;
  }
  *v12 = v8;
  *((_DWORD *)v7 - 1) = result;
  *(_BYTE *)(a1 + 1448) = 1;
  return result;
}

