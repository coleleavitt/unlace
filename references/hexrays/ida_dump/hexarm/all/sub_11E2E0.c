bool __fastcall sub_11E2E0(unsigned __int64 a1)
{
  bool result; // al
  __int64 v2; // rax

  result = 1;
  if ( (unsigned int)a1 <= 0x3B )
  {
    v2 = 0xCFFFC0000000003LL;
    return !_bittest64(&v2, a1);
  }
  return result;
}
