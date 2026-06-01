void *sub_C4310()
{
  void *result; // rax

  result = qword_252758;
  if ( !qword_252758 || *((_QWORD *)qword_252758 + 8) )
  {
    if ( under_debugger )
      goto LABEL_11;
    interr();
LABEL_9:
    if ( !under_debugger )
    {
      interr();
      return (void *)sub_C4380(40192);
    }
LABEL_11:
    BUG();
  }
  if ( *((_DWORD *)qword_252758 + 22) == 8 )
    return result;
  if ( *((_DWORD *)qword_252758 + 22) != 4 )
    goto LABEL_9;
  *((_DWORD *)qword_252758 + 22) = 2;
  return result;
}

