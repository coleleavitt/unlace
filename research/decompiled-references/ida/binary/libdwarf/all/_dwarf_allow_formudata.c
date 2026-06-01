__int64 __fastcall dwarf_allow_formudata(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = 0;
  if ( (unsigned int)a1 <= 0x23 )
  {
    v2 = 0xC020018E0LL;
    return _bittest64(&v2, a1);
  }
  return result;
}

