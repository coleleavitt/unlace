__int64 __fastcall sub_668910(unsigned int a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // r14
  int v8; // eax

  v2 = *a2;
  v3 = v2 + a1;
  if ( a1 >= (unsigned int)v2 + a1 )
  {
    v5 = 0;
  }
  else
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
        goto LABEL_13;
    }
    if ( v4 >= v3 )
    {
LABEL_13:
      v2 = *a2;
      return v2 - v5;
    }
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
          goto LABEL_10;
      }
      v4 += v8;
      v7 += v8;
    }
    while ( v4 < v3 );
LABEL_10:
    v2 = *a2;
    v5 += v7;
  }
  return v2 - v5;
}

