__int64 __fastcall sub_1007EB0(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a2 < 3u )
    return 0;
  result = 1;
  if ( a2 > 4u )
    return 3 * (unsigned int)(a2 == 7);
  return result;
}

