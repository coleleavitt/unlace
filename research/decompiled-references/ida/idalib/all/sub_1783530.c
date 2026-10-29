char *__fastcall sub_1783530(__int64 a1)
{
  char v1; // dl
  char *result; // rax

  v1 = (*(_BYTE *)(a1 + 10) >> 2) & 3;
  if ( v1 == 1 )
    return "co_await";
  result = "co_return";
  if ( v1 )
    return "co_yield";
  return result;
}
