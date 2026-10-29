void *__fastcall sub_8BBD50(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  size_t v4; // rdx
  const char *v5; // r15
  __int64 v6; // rax
  const char *v7; // rbx
  size_t v8; // rdx

  v2 = 0;
  v3 = a1[3];
  sub_407AD0(a2, v3);
  if ( v3 )
  {
    do
    {
      v5 = haystack;
      v6 = a1[2] + 24 * v2;
      if ( *(_QWORD *)(v6 + 8) )
        v5 = *(const char **)v6;
      if ( v5 )
      {
        v4 = strlen(v5) + 1;
      }
      else
      {
        v4 = 1;
        v5 = &byte_22CD811;
      }
      ++v2;
      sub_8B3AA0(a2, v5, v4);
    }
    while ( v3 != v2 );
  }
  v7 = haystack;
  if ( a1[6] )
    v7 = (const char *)a1[5];
  if ( v7 )
  {
    v8 = strlen(v7) + 1;
  }
  else
  {
    v8 = 1;
    v7 = &byte_22CD811;
  }
  return sub_8B3AA0(a2, v7, v8);
}

