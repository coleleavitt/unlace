const __m128i *sub_CB8E0()
{
  __int64 v0; // rbp
  unsigned __int64 v2; // [rsp+8h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  if ( qword_251170 && (unsigned int)sub_9E0A0() )
  {
    v0 = *(_QWORD *)(qword_251170 + 32);
    if ( qword_251170 )
    {
      if ( (unsigned int)sub_9E0A0() )
        sub_9E0A0();
      if ( ((v0 & 0x8000) != 0) != *(_BYTE *)(qword_251170 + 33) >> 7 )
      {
        sub_CB8A0(0);
        return sub_CB8A0(*(_BYTE *)(dbg + 33LL) >> 7);
      }
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
  }
  return (const __m128i *)(v2 - __readfsqword(0x28u));
}

