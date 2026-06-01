__int64 __fastcall get_reftype_by_size(__int64 a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( (unsigned __int64)(a1 - 1) <= 0xF )
    return byte_23B1380[a1 - 1];
  return result;
}
