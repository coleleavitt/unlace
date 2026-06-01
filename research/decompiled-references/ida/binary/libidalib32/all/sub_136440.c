__int64 sub_136440()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  const char *v2; // r8
  const char *v4; // rsi
  const char *v5; // rsi

  v0 = sub_163B20();
  if ( !v0 )
    return 0;
  v1 = v0;
  if ( !(unsigned int)sub_1631D0(v0) )
    return 0;
  if ( qword_2532B0 == v1 )
  {
    v5 = s1;
    if ( (_QWORD)xmmword_2508F8 )
      v5 = (const char *)qword_2508F0;
    if ( (unsigned int)get_name_ea() != -1 )
      sub_921F0(
        (__int64)"IDA has detected that you want to find a label in the program.\n"
                 "While the text search can find labels, it is hundreds times faster\n"
                 "to use specialized commands to find labels: to find a label definition,\n"
                 "use Jump to Address (G) and enter the label name\n"
                 "or use Jump to Name (Ctrl-L) and select the label.\n"
                 "To find all places where the label is used, position the cursor\n"
                 "on the label and use Jump to Cross-References (X) command",
        v5);
  }
  if ( (_WORD)xmmword_244090 )
  {
    v2 = s1;
    if ( (_QWORD)xmmword_2508F8 )
      v2 = (const char *)qword_2508F0;
    return sub_136180(v1, 2, 0xFFFFFFFFLL, (__int64)"Occurrences of: %s", v2);
  }
  else
  {
    v4 = s1;
    if ( (_QWORD)xmmword_2508F8 )
      v4 = (const char *)qword_2508F0;
    sub_15C210(v1 + 592, v4, 0);
    return (unsigned __int8)sub_163220(v1, 2);
  }
}

