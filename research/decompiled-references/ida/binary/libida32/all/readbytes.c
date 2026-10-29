__int64 __fastcall readbytes(__int64 a1, unsigned int *a2, int a3, char a4)
{
  if ( a3 != (unsigned int)qread(a1, a2, a3) )
    return 0xFFFFFFFFLL;
  if ( a4 )
    *a2 = _byteswap_ulong(*a2);
  return 0;
}

