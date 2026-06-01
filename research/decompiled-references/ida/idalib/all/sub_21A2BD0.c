__int64 __fastcall sub_21A2BD0(__int64 a1)
{
  __int64 result; // rax

  result = sub_21A2AC0((char **)(a1 + 8), *(char **)(a1 + 16));
  if ( (unsigned __int64)(result + 0x80000000LL) > 0xFFFFFFFF )
    sub_2221C70("LEB is outside Varint32 range", 1);
  return result;
}
