__int64 __fastcall sub_175500(__int64 a1, __int64 a2, unsigned int a3)
{
  const char *v4; // rax
  const char *v5; // r12
  const char *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  const char *v10; // r13
  unsigned int i; // ebx

  v4 = sub_173080(a2 + 8);
  if ( v4 )
  {
    v5 = v4;
    v6 = &s1;
    if ( *(_QWORD *)(a2 + 16) )
      v6 = *(const char **)(a2 + 8);
    v7 = tag_advance(v6, a3);
    v8 = v7;
    v9 = v7;
    v10 = (const char *)v7;
    if ( (unsigned __int64)v5 <= v7 )
      v8 = (unsigned __int64)v5;
    if ( (unsigned __int64)v5 >= v7 )
      v9 = (unsigned __int64)v5;
    for ( i = 0; v8 < v9; v8 = tag_advance(v8, 1) )
      ++i;
    if ( v10 >= v5 )
    {
      if ( !*v10 )
      {
        if ( *(_QWORD *)(a2 + 16) )
          i += a3 - tag_strlen(*(_QWORD *)(a2 + 8));
        else
          i += a3 - tag_strlen(&s1);
      }
    }
    else
    {
      return -i;
    }
  }
  else
  {
    return (unsigned int)-32768;
  }
  return i;
}
