void sub_1A58BD()
{
  stack_t v0; // [rsp+0h] [rbp-40h] BYREF
  stack_t v1; // [rsp+20h] [rbp-20h] BYREF

  if ( byte_2574D8 == 1 && (unsigned int)sub_1A5521(nullptr, &v1) != -1 )
  {
    if ( v1.ss_sp == ptr )
    {
      if ( qword_2574A0 )
      {
        if ( (unsigned int)sub_1A5521((const stack_t *)&qword_2574A0, nullptr) == -1 )
          return;
      }
      else
      {
        v0.ss_flags = 2;
        if ( (unsigned int)sub_1A5521(&v0, nullptr) == -1 )
          return;
      }
    }
    free(ptr);
    byte_2574D8 = 0;
  }
}

