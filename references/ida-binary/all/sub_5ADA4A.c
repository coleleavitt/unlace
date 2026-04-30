int __fastcall sub_5ADA4A(__int64 a1)
{
  int result; // eax
  char v2; // cl
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  result = sub_5AD97E();
  for ( i = 0; i <= 0xF; ++i )
  {
    v2 = rand();
    result = a1 + i;
    *(_BYTE *)(a1 + i) = v2;
  }
  return result;
}
