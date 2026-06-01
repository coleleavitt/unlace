void sub_1A4BD9()
{
  if ( !byte_256318 )
  {
    memset(&qword_2562E0, 0, 0x18u);
    memset(&ptr, 0, 0x18u);
    if ( (unsigned int)sub_1A4921(nullptr, (stack_t *)&qword_2562E0) == -1
      || !qword_2562E0
      || (unsigned __int64)qword_2562F0 <= 0x3FFF )
    {
      ptr = calloc(1u, 0x4000u);
      qword_256310 = 0x4000;
      if ( (unsigned int)sub_1A4921((const stack_t *)&ptr, nullptr) == -1 )
        free(ptr);
      else
        byte_256318 = 1;
    }
  }
}

