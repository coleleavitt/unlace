char *__fastcall sub_1259E80(__m128 *a1, _WORD *a2)
{
  char *result; // rax

  result = (char *)a1->m128_u64[1];
  if ( result == (char *)a1[1].m128_u64[0] )
  {
    sub_1259B60(a1, result, a2);
    return (char *)(a1->m128_u64[1] - 2);
  }
  else
  {
    *(_WORD *)result = *a2;
    a1->m128_u64[1] = (unsigned __int64)(result + 2);
  }
  return result;
}
