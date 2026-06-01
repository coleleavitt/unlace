unsigned __int64 __fastcall sub_57A60(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  while ( a2 > 0x27 )
  {
    a2 -= 39LL;
    if ( (unsigned int)dwarfstring_append_length() != 1 )
      return v4 - __readfsqword(0x28u);
  }
  dwarfstring_append_length();
  return v4 - __readfsqword(0x28u);
}

