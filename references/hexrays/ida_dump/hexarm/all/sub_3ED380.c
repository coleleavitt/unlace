unsigned __int8 __fastcall sub_3ED380(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax

  result = 0;
  if ( (unsigned __int8)a1 <= 0x12u )
  {
    v2 = 294968;
    return _bittest64(&v2, a1);
  }
  return result;
}
