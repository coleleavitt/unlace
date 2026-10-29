__int64 __fastcall sub_7B1910(__int64 a1, char *a2, double a3)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  unsigned int v5; // r12d
  __int64 v6; // r15
  int v7; // ebp
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdi
  char *s; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 752);
  s = a2;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    v5 = v4 >> 1;
    if ( v4 >> 1 >= v4 )
      goto LABEL_12;
    v6 = a1;
    v7 = 0;
    v8 = 8LL * v5;
    v9 = 8 * (v5 + (unsigned __int64)(v4 - 1 - v5) + 1);
    do
    {
      v10 = *(_QWORD **)(v6 + 760);
      v11 = *(_QWORD *)(v3 + v8);
      if ( v10 && (v12 = &v10[*((unsigned int *)v10 - 1)], v10 != v12) )
      {
        while ( v11 != *v10 )
        {
          if ( v12 == ++v10 )
            goto LABEL_15;
        }
        v13 = v5++;
        *(_QWORD *)(v3 + 8 * v13) = v11;
      }
      else
      {
LABEL_15:
        ++v7;
        sub_7AFFA0(v6, *(_BYTE **)(v3 + v8), "gc", a3);
        a2 = *(char **)(v11 + 40);
        a1 = v6 + 224;
        sub_17E9C40(v6 + 224, a2, v11 - 8);
        v3 = *(_QWORD *)(v6 + 752);
      }
      v8 += 8;
    }
    while ( v9 != v8 );
    *(_DWORD *)(v6 + 208) += v7;
    if ( v3 )
LABEL_12:
      *(_DWORD *)(v3 - 4) = v5;
  }
  result = sub_180B130(a1);
  if ( (unsigned int)result > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( s )
      {
        strlen(s);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v15 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v15, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( s )
      {
        strlen(s);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

