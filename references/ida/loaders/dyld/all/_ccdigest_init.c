__int64 __fastcall ccdigest_init(__int64 a1, _QWORD *a2)
{
  char v4; // w8
  char v6; // [xsp+Fh] [xbp-11h] BYREF

  v4 = 0;
  v6 = 0;
  if ( (MEMORY[0xFFFFFC010] & 0x200000000000000LL) != 0 )
  {
    if ( _ReadStatusReg(DIT) == 0x1000000 )
    {
      v4 = 0;
    }
    else
    {
      _WriteStatusReg(DIT, 0x1000000u);
      v4 = 1;
    }
  }
  v6 = v4;
  _platform_memmove(a2 + 1, *(const void **)(a1 + 40), *(_QWORD *)(a1 + 8));
  *a2 = 0;
  *(_DWORD *)((char *)a2 + *(_QWORD *)(a1 + 8) + *(_QWORD *)(a1 + 16) + 8) = 0;
  return cc_disable_dit(&v6);
}
