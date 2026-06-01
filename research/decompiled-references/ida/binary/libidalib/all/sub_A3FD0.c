unsigned __int64 __fastcall sub_A3FD0(char a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  dword_245124 = a1 & 0x1F;
  if ( dbg && (unsigned int)sub_9E1E0() )
    sub_9E1E0();
  return v2 - __readfsqword(0x28u);
}

