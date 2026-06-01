__int64 __fastcall log2floor(unsigned __int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( HIDWORD(a1) )
  {
    a1 >>= 32;
    result = 32;
  }
  if ( a1 > 0xFFFF )
  {
    a1 >>= 16;
    result = (unsigned int)result | 0x10;
  }
  if ( a1 > 0xFF )
  {
    a1 >>= 8;
    result = (unsigned int)result | 8;
  }
  if ( a1 > 0xF )
  {
    a1 >>= 4;
    result = (unsigned int)result | 4;
  }
  if ( a1 > 3 )
  {
    a1 >>= 2;
    result = (unsigned int)result | 2;
  }
  if ( a1 > 1 )
    return (unsigned int)result | 1;
  return result;
}
