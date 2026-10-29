_BYTE *__fastcall cc_disable_dit(_BYTE *result)
{
  if ( (MEMORY[0xFFFFFC010] & 0x200000000000000LL) != 0 )
  {
    if ( *result )
      _WriteStatusReg(DIT, 0);
  }
  return result;
}
