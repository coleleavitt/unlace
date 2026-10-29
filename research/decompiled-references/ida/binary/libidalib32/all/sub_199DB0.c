__int64 sub_199DB0()
{
  unsigned int v0; // ebx

  if ( (_QWORD)xmmword_255DF8 )
  {
    v0 = *(unsigned __int16 *)qword_255DF0;
    memmove(qword_255DF0, (char *)qword_255DF0 + 2, 2 * xmmword_255DF8 - 2);
    *(_QWORD *)&xmmword_255DF8 = xmmword_255DF8 - 1;
  }
  else
  {
    return (unsigned __int16)word_250360++;
  }
  return v0;
}

