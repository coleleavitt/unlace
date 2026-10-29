__int64 __fastcall sub_199E00(__int16 a1)
{
  __int64 result; // rax

  result = xmmword_255DF8;
  if ( *((_QWORD *)&xmmword_255DF8 + 1) < (unsigned __int64)(xmmword_255DF8 + 1) )
  {
    qword_255DF0 = (void *)qvector_reserve();
    result = xmmword_255DF8;
  }
  *((_WORD *)qword_255DF0 + xmmword_255DF8) = a1;
  *(_QWORD *)&xmmword_255DF8 = xmmword_255DF8 + 1;
  return result;
}

