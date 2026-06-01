__int64 __fastcall sub_106F6B0(unsigned __int8 *a1)
{
  __int64 result; // rax

  result = a1[280];
  if ( !(_BYTE)result && (a1[628] & 0x1F) != 0 )
    return ((a1[629] >> 2) ^ 1) & 1;
  return result;
}
