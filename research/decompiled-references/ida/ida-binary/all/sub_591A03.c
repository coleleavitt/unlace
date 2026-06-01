void sub_591A03()
{
  stack_t v0; // [rsp+0h] [rbp-40h] BYREF
  stack_t v1; // [rsp+20h] [rbp-20h] BYREF

  if ( byte_8D29D8 == 1 && (unsigned int)sub_591667(nullptr, &v1) != -1 )
  {
    if ( v1.ss_sp == qword_8D29C0 )
    {
      if ( qword_8D29A0 )
      {
        if ( (unsigned int)sub_591667((const stack_t *)&qword_8D29A0, nullptr) == -1 )
          return;
      }
      else
      {
        v0.ss_flags = 2;
        if ( (unsigned int)sub_591667(&v0, nullptr) == -1 )
          return;
      }
    }
    free(qword_8D29C0);
    byte_8D29D8 = 0;
  }
}
