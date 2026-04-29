unsigned __int8 __fastcall sub_32F040(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x33 )
  {
    v2 = 0xAC15800000000LL;
    return _bittest64(&v2, a1);
  }
  return result;
}
