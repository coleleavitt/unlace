__int64 sub_19A9B0()
{
  unsigned int v0; // ebx

  if ( (_QWORD)xmmword_256FB8 )
  {
    v0 = *(unsigned __int16 *)qword_256FB0;
    memmove(qword_256FB0, (char *)qword_256FB0 + 2, 2 * xmmword_256FB8 - 2);
    *(_QWORD *)&xmmword_256FB8 = xmmword_256FB8 - 1;
  }
  else
  {
    return (unsigned __int16)word_2513C0++;
  }
  return v0;
}

