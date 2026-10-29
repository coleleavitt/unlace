__int64 __fastcall sub_868AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  _QWORD *v8; // rbx

  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
    while ( v6 != v5 )
    {
      v7 = v5;
      v5 += 40;
      sub_868920(v7, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v8 = *(_QWORD **)(a1 + 48);
  if ( v8 )
  {
    do
    {
      sub_868A10((__int64)v8, a2, a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = (_QWORD *)*v8;
    }
    while ( *(_QWORD **)(a1 + 48) != v8 );
  }
  return a3;
}

