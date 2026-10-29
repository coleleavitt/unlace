const __m128i *sub_CCE60()
{
  __int64 v0; // rbp
  unsigned __int64 v2; // [rsp+8h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  if ( qword_252250 && (unsigned int)sub_9E1E0() )
  {
    v0 = *(_QWORD *)(qword_252250 + 32);
    if ( qword_252250 )
    {
      if ( (unsigned int)sub_9E1E0() )
        sub_9E1E0();
      if ( ((v0 & 0x8000) != 0) != *(_BYTE *)(qword_252250 + 33) >> 7 )
      {
        sub_CCE20(0);
        return sub_CCE20(*(_BYTE *)(dbg + 33LL) >> 7);
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

