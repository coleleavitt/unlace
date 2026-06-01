__int64 __fastcall sub_BB9090(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // r14
  __int64 *v4; // r13
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 v7; // rbx
  char v8; // r15
  __int64 *v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // r14
  __int64 v12; // rdx

  v3 = (__int64 *)a3[1];
  if ( !v3 || (v4 = &v3[*((unsigned int *)v3 - 1)], v4 == v3) )
  {
    v8 = 1;
  }
  else
  {
    v5 = *v3;
    v6 = v3 + 1;
    sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v5, 2);
    while ( v4 != v6 )
    {
      v7 = *v6;
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v6;
      sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v7, 2);
    }
    v8 = 0;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v9 = (__int64 *)a3[3];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v10 != v9 )
    {
      v11 = *v9;
      if ( !v8 )
        goto LABEL_11;
      v12 = *v9++;
      sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v12, 2);
      while ( v10 != v9 )
      {
        v11 = *v9;
LABEL_11:
        ++v9;
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v11, 2);
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return sub_BB8CF0(a1, a2, a3[5]);
}

