unsigned __int64 __fastcall sub_A3BD0(char a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  dword_2440D8 = a1 & 0x1F;
  if ( dbg && (unsigned int)sub_9E0A0() )
    sub_9E0A0();
  return v2 - __readfsqword(0x28u);
}

