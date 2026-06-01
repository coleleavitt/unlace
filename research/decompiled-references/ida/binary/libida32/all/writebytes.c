__int64 __fastcall writebytes(__int64 a1, unsigned int a2, int a3, char a4)
{
  unsigned __int32 v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v5[0] = a2;
  if ( a4 )
    v5[0] = _byteswap_ulong(a2);
  return (unsigned int)-(a3 != (unsigned int)qwrite(a1, v5, a3));
}

