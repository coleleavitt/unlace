char *__fastcall sub_20D0AC0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rsi
  char *v5; // rax
  size_t v6; // rdi
  size_t v7; // rsi
  char *result; // rax

  v2 = a2[2];
  v4 = a2[3];
  v5 = (char *)a2[1];
  if ( v2 + 9 > v4 )
  {
    v6 = v2 + 1001;
    v7 = 2 * v4;
    if ( v6 > v7 )
    {
      a2[3] = v6;
      v7 = v6;
    }
    else
    {
      a2[3] = v7;
    }
    v5 = (char *)realloc(v5, v7);
    a2[1] = v5;
    if ( !v5 )
      abort();
    v2 = a2[2];
  }
  result = &v5[v2];
  *(_QWORD *)result = 0x656D616E65707974LL;
  result[8] = 32;
  a2[2] += 9LL;
  return result;
}
