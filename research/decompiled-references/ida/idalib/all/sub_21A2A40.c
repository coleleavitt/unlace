unsigned __int64 __fastcall sub_21A2A40(__int64 a1)
{
  unsigned __int64 result; // rax

  result = sub_21A29A0((char **)(a1 + 8), *(char **)(a1 + 16));
  if ( result > 0xFFFFFFFF )
    sub_2221C70("LEB is outside Varuint32 range", 1);
  return result;
}
