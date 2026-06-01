__int64 __fastcall sub_A80300(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int *v4; // rbx
  unsigned int *v5; // r14
  char v6; // r12
  unsigned int v7; // eax
  void *v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 256) + 24LL * a3;
  v4 = *(unsigned int **)v3;
  v5 = *(unsigned int **)(v3 + 8);
  if ( *(unsigned int **)v3 != v5 )
  {
    v6 = 1;
    do
    {
      if ( !(unsigned __int8)sub_FFADE0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), *v4) )
      {
        if ( (v4[3] & 1) == 0 )
        {
          v7 = v4[2];
          if ( v7 == 1 )
          {
            if ( (v4[7] & 1) == 0 && v4[6] == 1 && !v6 )
              std::operator<<<std::char_traits<char>>();
          }
          else if ( v7 == -1 && (v4[7] & 1) == 0 && v4[6] == 1 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 504LL) + 16LL))(
          &v9,
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL),
          *v4);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v9 != &v10 )
          operator delete(v9, v10 + 1);
        v6 = 0;
      }
      v4 += 10;
    }
    while ( v5 != v4 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

