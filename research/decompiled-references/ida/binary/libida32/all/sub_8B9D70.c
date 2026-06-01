void *__fastcall sub_8B9D70(_QWORD *a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v4; // rdx
  const char *v5; // rsi
  const char *v6; // r12
  size_t v7; // rax

  v2 = haystack;
  if ( a1[3] )
    v2 = (const char *)a1[2];
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = &byte_22CD811;
  }
  v5 = v2;
  v6 = haystack;
  sub_8B3AA0(a2, v5, v4);
  if ( a1[6] )
    v6 = (const char *)a1[5];
  if ( !v6 )
    return sub_8B3AA0(a2, &byte_22CD811, 1u);
  v7 = strlen(v6);
  return sub_8B3AA0(a2, v6, v7 + 1);
}

