__int64 __fastcall sub_687AF0(unsigned __int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax

  result = *a2;
  v3 = result + a1;
  if ( a1 < result + a1 )
  {
    v4 = a1;
    v5 = 0;
    while ( 1 )
    {
      v6 = is_align_insn(v4);
      if ( !v6 )
        break;
      v4 += v6;
      v5 += v6;
      if ( v4 >= v3 )
        return *a2 - v5;
    }
    if ( v4 >= v3 )
      return *a2 - v5;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = is_align_insn(v4);
        if ( v8 )
          break;
        ++v4;
        v7 = 0;
        if ( v4 >= v3 )
          return *a2 - v5 - v7;
      }
      v4 += v8;
      v7 += v8;
    }
    while ( v4 < v3 );
    return *a2 - v5 - v7;
  }
  return result;
}
