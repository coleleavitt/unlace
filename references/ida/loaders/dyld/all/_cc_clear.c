__int64 __fastcall cc_clear(rsize_t __smax, void *__s)
{
  char v2; // w9
  char v4; // [xsp+Fh] [xbp-1h] BYREF

  v2 = 0;
  v4 = 0;
  if ( (MEMORY[0xFFFFFC010] & 0x200000000000000LL) != 0 )
  {
    if ( _ReadStatusReg(DIT) == 0x1000000 )
    {
      v2 = 0;
    }
    else
    {
      _WriteStatusReg(DIT, 0x1000000u);
      v2 = 1;
    }
  }
  v4 = v2;
  memset_s(__s, __smax, 0, __smax);
  return cc_disable_dit(&v4);
}
