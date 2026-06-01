__int64 sub_136970()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  const char *v2; // r8
  const char *v4; // rsi
  const char *v5; // rsi

  v0 = sub_164460();
  if ( !v0 )
    return 0;
  v1 = v0;
  if ( !(unsigned int)sub_163B10(v0) )
    return 0;
  if ( qword_254470 == v1 )
  {
    v5 = s1;
    if ( (_QWORD)xmmword_251968 )
      v5 = (const char *)qword_251960;
    if ( get_name_ea() != -1 )
      sub_922D0(
        (__int64)"IDA has detected that you want to find a label in the program.\n"
                 "While the text search can find labels, it is hundreds times faster\n"
                 "to use specialized commands to find labels: to find a label definition,\n"
                 "use Jump to Address (G) and enter the label name\n"
                 "or use Jump to Name (Ctrl-L) and select the label.\n"
                 "To find all places where the label is used, position the cursor\n"
                 "on the label and use Jump to Cross-References (X) command",
        v5);
  }
  if ( (_WORD)xmmword_2450B0 )
  {
    v2 = s1;
    if ( (_QWORD)xmmword_251968 )
      v2 = (const char *)qword_251960;
    return sub_1366B0(v1, 2, 0xFFFFFFFFLL, (__int64)"Occurrences of: %s", v2);
  }
  else
  {
    v4 = s1;
    if ( (_QWORD)xmmword_251968 )
      v4 = (const char *)qword_251960;
    sub_15CAD0(v1 + 592, v4, 0);
    return (unsigned __int8)sub_163B60(v1, 2);
  }
}

