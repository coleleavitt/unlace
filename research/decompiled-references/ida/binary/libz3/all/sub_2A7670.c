__int64 __fastcall sub_2A7670(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  int v7; // r13d
  unsigned __int64 v8; // r14
  __int64 *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_168BD50(a1, a2);
  result = a1[154];
  if ( result )
  {
    v5 = (unsigned int *)(result + 4LL * (*(_DWORD *)(result - 4) - a2));
    v6 = a1[153];
    if ( !v6 )
    {
LABEL_12:
      *(_DWORD *)(result - 4) -= a2;
      return result;
    }
  }
  else
  {
    v6 = a1[153];
    v5 = (unsigned int *)(4LL * -a2);
    if ( !v6 )
      return result;
  }
  v7 = *v5;
  v8 = v6 + 8LL * *(unsigned int *)(v6 - 4);
  v9 = (__int64 *)(v6 + 8LL * *v5);
  if ( (unsigned __int64)v9 >= v8 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 )
      {
        v11 = a1[152];
        if ( (*(_DWORD *)(v10 + 8))-- == 1 )
          break;
      }
      if ( (unsigned __int64)++v9 >= v8 )
        goto LABEL_9;
    }
    sub_15D7BC0(v11, v10);
    ++v9;
  }
  while ( (unsigned __int64)v9 < v8 );
LABEL_9:
  v6 = a1[153];
  result = a1[154];
  if ( v6 )
LABEL_10:
    *(_DWORD *)(v6 - 4) = v7;
  if ( result )
    goto LABEL_12;
  return result;
}

