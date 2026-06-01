char *__fastcall sub_10EAF50(__int64 a1, __int64 *a2)
{
  char *result; // rax
  __int64 v3; // rdx

  result = *(char **)(a1 + 8);
  if ( result == *(char **)(a1 + 16) )
  {
    sub_10EACB0(a1, result, a2);
    return (char *)(*(_QWORD *)(a1 + 8) - 8LL);
  }
  else
  {
    v3 = *a2;
    *a2 = 0;
    *(_QWORD *)result = v3;
    *(_QWORD *)(a1 + 8) = result + 8;
  }
  return result;
}
