unsigned __int8 __fastcall is_spec_segm(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax

  result = 0;
  if ( (unsigned __int8)a1 <= 0xBu )
  {
    v2 = 3138;
    return _bittest64(&v2, a1);
  }
  return result;
}
