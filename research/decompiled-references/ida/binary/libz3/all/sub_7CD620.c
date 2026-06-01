__int64 __fastcall sub_7CD620(const __m128i *a1, __int64 a2, int *a3, double a4, __int64 a5, char a6)
{
  char **exception; // rbx
  __int64 v7; // rdx
  __int64 v10; // rax
  int v11; // edx
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rdi
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // rdi
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( a6 )
    goto LABEL_5;
  if ( a1->m128i_i8[8] )
  {
    v10 = a1[1].m128i_i64[1];
    if ( !v10 )
    {
LABEL_5:
      v11 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    sub_7CC630(a1);
    v10 = a1[1].m128i_i64[1];
    if ( !v10 )
      goto LABEL_5;
  }
  if ( !*(_BYTE *)(v10 + 352) )
    goto LABEL_5;
  sub_7A4170(a1);
  v11 = (_DWORD)a1 + 2344;
LABEL_6:
  v12 = *a3;
  if ( *a3 == 1 )
    return sub_13DBC80((int)a1 + 1592);
  if ( v12 == 2 )
  {
    v14 = *((_QWORD *)a3 + 1);
    sub_13DBC80((_DWORD)a1 + 1592);
    result = a1[9].m128i_i64[0];
    if ( *(_QWORD *)(result + 856) != *(_QWORD *)v14 && *(_QWORD *)v14 != *(_QWORD *)(result + 864) )
    {
      v15 = (_QWORD *)a1[146].m128i_i64[0];
      v16 = (16 * ((*(_DWORD *)(v14 + 24) == -1) + 2 * *(_DWORD *)(v14 + 28))) | 1u;
      if ( v15 )
      {
        v17 = *((_DWORD *)v15 - 1);
        if ( v17 == *((_DWORD *)v15 - 2) )
        {
          v21 = (3 * v17 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v17 + 8 >= (unsigned int)v22 || v17 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_116834(v26, "Overflow encountered when expanding vector", v7);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v26);
            sub_233E40((__int64)v26);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v15 - 1, v22);
          v24 = v23[1];
          v15 = v23 + 2;
          *v23 = v21;
          a1[146].m128i_i64[0] = (__int64)(v23 + 2);
          LODWORD(v23) = v24;
          v19 = &v15[v24];
          result = (unsigned int)((_DWORD)v23 + 1);
        }
        else
        {
          v18 = v17;
          result = v17 + 1;
          v19 = &v15[v18];
        }
      }
      else
      {
        v25 = (_QWORD *)sub_186B270(0x18u);
        v15 = v25 + 1;
        *v25 = 2;
        result = 1;
        a1[146].m128i_i64[0] = (__int64)v15;
        v19 = v15;
      }
      *v19 = v16;
      *((_DWORD *)v15 - 1) = result;
    }
  }
  else
  {
    if ( v12 )
    {
      sub_180B130(a1);
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        sub_180B150(a1, a2);
        v20 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v20, "\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      sub_1872CE0("");
      sub_1873130(114, 423);
    }
    return sub_13DC160((int)a1 + 1592, (int)a1 + 2336, v11);
  }
  return result;
}

