__int64 __fastcall sub_13D14D0(unsigned __int8 a1, __int64 a2)
{
  int v2; // esi
  __int64 result; // rax

  v2 = *(unsigned __int8 *)(a2 + 4);
  result = 1;
  if ( !byte_23F75C0[a1] )
  {
    LOBYTE(result) = a1 == 36;
    return v2 & (unsigned int)result;
  }
  return result;
}
