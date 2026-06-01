void sub_1A4CBD()
{
  stack_t v0; // [rsp+0h] [rbp-40h] BYREF
  stack_t v1; // [rsp+20h] [rbp-20h] BYREF

  if ( byte_256318 == 1 && (unsigned int)sub_1A4921(nullptr, &v1) != -1 )
  {
    if ( v1.ss_sp == ptr )
    {
      if ( qword_2562E0 )
      {
        if ( (unsigned int)sub_1A4921((const stack_t *)&qword_2562E0, nullptr) == -1 )
          return;
      }
      else
      {
        v0.ss_flags = 2;
        if ( (unsigned int)sub_1A4921(&v0, nullptr) == -1 )
          return;
      }
    }
    free(ptr);
    byte_256318 = 0;
  }
}

