char __fastcall sub_C10590(unsigned __int64 a1)
{
  __int64 v1; // rdx
  char result; // al

  if ( (int)a1 > 29 )
    return (unsigned int)(a1 - 23) <= 2;
  v1 = 812384256;
  result = 1;
  if ( !_bittest64(&v1, a1) )
    return (unsigned int)(a1 - 23) <= 2;
  return result;
}
