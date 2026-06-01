unsigned __int64 __fastcall sub_A4170(char a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  dword_251B20 = a1 & 1;
  if ( dbg && (unsigned int)sub_9E1E0() )
    sub_9E1E0();
  return v2 - __readfsqword(0x28u);
}

