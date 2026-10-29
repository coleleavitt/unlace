void *sub_C3110()
{
  void *result; // rax

  result = qword_2515B0;
  if ( !qword_2515B0 || *((_QWORD *)qword_2515B0 + 7) )
  {
    if ( under_debugger )
      goto LABEL_11;
    interr();
LABEL_9:
    if ( !under_debugger )
    {
      interr();
      return (void *)sub_C3180(40192);
    }
LABEL_11:
    BUG();
  }
  if ( *((_DWORD *)qword_2515B0 + 20) == 8 )
    return result;
  if ( *((_DWORD *)qword_2515B0 + 20) != 4 )
    goto LABEL_9;
  *((_DWORD *)qword_2515B0 + 20) = 2;
  return result;
}

