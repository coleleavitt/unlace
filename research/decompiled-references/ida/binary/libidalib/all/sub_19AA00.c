__int64 __fastcall sub_19AA00(__int16 a1)
{
  __int64 result; // rax

  result = xmmword_256FB8;
  if ( *((_QWORD *)&xmmword_256FB8 + 1) < (unsigned __int64)(xmmword_256FB8 + 1) )
  {
    qword_256FB0 = (void *)qvector_reserve();
    result = xmmword_256FB8;
  }
  *((_WORD *)qword_256FB0 + xmmword_256FB8) = a1;
  *(_QWORD *)&xmmword_256FB8 = xmmword_256FB8 + 1;
  return result;
}

