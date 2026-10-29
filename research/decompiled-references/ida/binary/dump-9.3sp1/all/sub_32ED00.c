unsigned __int8 __fastcall sub_32ED00(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x34 )
  {
    v2 = 0x1522A400000000LL;
    return _bittest64(&v2, a1);
  }
  return result;
}
