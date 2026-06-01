void sub_1A57D9()
{
  if ( !byte_2574D8 )
  {
    memset(&qword_2574A0, 0, 0x18u);
    memset(&ptr, 0, 0x18u);
    if ( (unsigned int)sub_1A5521(nullptr, (stack_t *)&qword_2574A0) == -1
      || !qword_2574A0
      || (unsigned __int64)qword_2574B0 <= 0x3FFF )
    {
      ptr = calloc(1u, 0x4000u);
      qword_2574D0 = 0x4000;
      if ( (unsigned int)sub_1A5521((const stack_t *)&ptr, nullptr) == -1 )
        free(ptr);
      else
        byte_2574D8 = 1;
    }
  }
}

