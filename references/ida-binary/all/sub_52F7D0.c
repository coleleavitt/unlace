unsigned __int8 __fastcall sub_52F7D0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 result; // al
  __int64 v3; // rax

  result = 1;
  if ( (_DWORD)a2 != 35 )
  {
    result = (_DWORD)a2 != 3 && (unsigned int)a2 <= 0x13;
    if ( result )
    {
      result = 0;
      if ( (a2 & 0xFFFFFFF7) != 2 )
        return (_DWORD)a2 != 13 && (_DWORD)a2 != 1;
    }
    else if ( (unsigned int)a2 <= 0x38 )
    {
      v3 = 0x1F2021000000000LL;
      return _bittest64(&v3, a2);
    }
  }
  return result;
}
