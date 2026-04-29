__int64 __fastcall sub_3E22A0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( a2 - 8 < 0x40 )
    return a2 & 0xFFFFFFFC;
  return result;
}
