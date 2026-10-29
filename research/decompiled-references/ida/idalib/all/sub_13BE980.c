__int64 __fastcall sub_13BE980(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( *(_BYTE *)(a1 + 8) )
    return _byteswap_ulong(a2);
  return result;
}
