char *__fastcall sub_20CFD70(__int64 a1)
{
  char *result; // rax
  unsigned __int64 v2; // rsi
  char *v3; // rax
  size_t v4; // rsi

  result = *(char **)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int64)(result + 1) > v2 )
  {
    v3 = result + 993;
    v4 = 2 * v2;
    if ( (unsigned __int64)v3 > v4 )
    {
      *(_QWORD *)(a1 + 24) = v3;
      v4 = (size_t)v3;
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v4;
    }
    result = (char *)realloc(*(void **)(a1 + 8), v4);
    *(_QWORD *)(a1 + 8) = result;
    if ( !result )
      abort();
  }
  return result;
}
