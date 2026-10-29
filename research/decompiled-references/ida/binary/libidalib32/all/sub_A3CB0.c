unsigned __int64 __fastcall sub_A3CB0(char a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  dword_250A9C = a1 & 1;
  if ( dbg && (unsigned int)sub_9E0A0() )
    sub_9E0A0();
  return v2 - __readfsqword(0x28u);
}

