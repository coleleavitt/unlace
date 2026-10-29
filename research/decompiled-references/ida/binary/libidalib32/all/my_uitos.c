unsigned __int64 __fastcall my_uitos(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned int i; // [rsp+20h] [rbp-4h]

  result = a3;
  for ( i = a3; i; --i )
  {
    *(_BYTE *)(i - 1 + a1) = a2 % 0xA + 48;
    result = a2 / 0xA;
    a2 /= 0xAu;
  }
  return result;
}

