void sub_59191F()
{
  if ( !byte_8D29D8 )
  {
    memset(&qword_8D29A0, 0, 0x18u);
    memset(&qword_8D29C0, 0, 0x18u);
    if ( (unsigned int)sub_591667(nullptr, (stack_t *)&qword_8D29A0) == -1
      || !qword_8D29A0
      || (unsigned __int64)qword_8D29B0 <= 0x3FFF )
    {
      qword_8D29C0 = calloc(1u, 0x4000u);
      qword_8D29D0 = 0x4000;
      if ( (unsigned int)sub_591667((const stack_t *)&qword_8D29C0, nullptr) == -1 )
        free(qword_8D29C0);
      else
        byte_8D29D8 = 1;
    }
  }
}
