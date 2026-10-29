void __fastcall sub_C0F3E0(_QWORD *a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r12
  void *v10; // [rsp+0h] [rbp-28h]
  int v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]

  v3 = a1[117];
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 - 4);
    if ( (_DWORD)v4 )
    {
      v6 = v3 + 24 * v4;
      do
      {
        v7 = *(_QWORD *)(v3 + 8);
        v3 += 24;
        sub_164ACB0(a2, *a1, v7, a3, 1, 0, v10, v11, v12);
      }
      while ( v3 != v6 );
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = a1[117];
      if ( v8 )
      {
        v9 = v8 + 24LL * *(unsigned int *)(v8 - 4);
        while ( v8 != v9 )
        {
          v8 += 24;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
}

