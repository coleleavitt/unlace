__int64 sub_5FF160()
{
  _BYTE *v0; // rbx
  unsigned int v1; // ebp

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v0 = (_BYTE *)qword_4AD21C8;
  v1 = 0;
  if ( !qword_4AD21C8 || strlen((const char *)qword_4AD21C8) != 1 )
    return 0;
  LOBYTE(v1) = *v0 == 50;
  return v1;
}

