__int64 __fastcall sub_BB0CC0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *i; // r12

  v2 = (_QWORD *)a1[2];
  if ( v2 )
  {
    result = 3LL * *((unsigned int *)v2 - 1);
    for ( i = &v2[3 * *((unsigned int *)v2 - 1)]; i != v2; v2 += 3 )
    {
      if ( *v2 )
      {
        sub_1648CA0(a2, *a1, *v2, 2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(a2, *a1, v2[1], 2);
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return result;
}

