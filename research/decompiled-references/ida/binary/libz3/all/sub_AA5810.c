__int64 __fastcall sub_AA5810(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int **v6; // rbx
  unsigned int **i; // r13
  unsigned int *v8; // rdi

  v4 = a3;
  sub_AA4870(a2, a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  result = a1[1107];
  v6 = *(unsigned int ***)(result + 8 * v4);
  if ( v6 )
  {
    for ( i = (unsigned int **)((char *)v6 + *((unsigned int *)v6 - 3));
          v6 != i;
          result = std::__ostream_insert<char,std::char_traits<char>>() )
    {
      v8 = *v6++;
      sub_AA42F0(v8, a2, a1[13], a1[1105]);
    }
  }
  return result;
}

