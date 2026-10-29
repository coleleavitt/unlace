unsigned __int64 __fastcall sub_C06D0(__int64 a1)
{
  unsigned __int64 v2; // [rsp+1028h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( (unsigned int)sub_9E0A0() )
    {
      qstrncpy();
      read_config();
      if ( (unsigned int)sub_9E0A0() )
        sub_9E0A0();
    }
  }
  return v2 - __readfsqword(0x28u);
}

