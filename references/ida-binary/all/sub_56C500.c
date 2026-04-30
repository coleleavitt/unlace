unsigned __int64 __fastcall sub_56C500(
        __int64 *a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)sub_56B600(a1, a2, a3, a4, 0, 0, a5, 0, 0, 0, 0, a6);
  if ( (result & 1) != 0 )
    result |= 0x20u;
  else
    *(_BYTE *)(result + 45) |= 2u;
  return result;
}
