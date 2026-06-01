__int64 sub_1C79A0()
{
  __int64 result; // rax

  result = (unsigned int)dword_8CAF04;
  if ( dword_8CAF04 > 0 )
    result = (unsigned int)--dword_8CAF04;
  if ( byte_8CAF00 )
  {
    result = (unsigned int)dword_8CAF04;
    if ( !dword_8CAF04 )
    {
      mark_builtin_widgets(-1, -1, 1);
      result = sub_27F680(1);
      byte_8CAF00 = 0;
    }
  }
  return result;
}
