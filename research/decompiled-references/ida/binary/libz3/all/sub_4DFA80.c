__int64 __fastcall sub_4DFA80(__int64 a1, _QWORD *a2, double a3)
{
  int v3; // r14d
  __int64 v5; // rbp
  unsigned int *v6; // r15
  unsigned int *v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 (*v9)(void); // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdi

  v3 = 0;
  v5 = (__int64)a2;
  sub_4DC9E0(a1, a2, a3);
  while ( 2 )
  {
    v6 = *(unsigned int **)(a1 + 72);
    if ( !v6 )
      return 1;
    v7 = &v6[*(v6 - 1)];
    if ( v6 == v7 )
      return 1;
    while ( 2 )
    {
      v10 = *(_QWORD *)(v5 + 8);
      while ( 1 )
      {
        v11 = *v6;
        if ( !v10 )
          return 1;
        if ( (unsigned int)v11 < *(_DWORD *)(v10 - 4) )
          break;
        if ( v7 == ++v6 )
          return 1;
      }
      v8 = *(_QWORD *)(v10 + 8 * v11);
      if ( !v8 )
        goto LABEL_9;
      v9 = *(unsigned __int8 (**)(void))(*(_QWORD *)v8 + 32LL);
      if ( (char *)v9 != (char *)sub_4C9A90 )
      {
        if ( !v9() )
          goto LABEL_16;
LABEL_9:
        if ( v7 == ++v6 )
          return 1;
        continue;
      }
      break;
    }
    if ( (*(unsigned __int8 (**)(void))(*(_QWORD *)v8 + 24LL))() )
      goto LABEL_9;
LABEL_16:
    if ( (unsigned int)sub_180B130(v8) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(v8, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v13 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v13, "\n");
      }
      else
      {
        sub_180B150(v8, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      ++v3;
    }
    a2 = (_QWORD *)v5;
    result = sub_4DB670(*(__int64 ***)(a1 + 80), v5);
    if ( (_BYTE)result )
      continue;
    return result;
  }
}

