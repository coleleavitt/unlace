void *__fastcall sub_74E550(void *src, size_t n)
{
  bool v2; // sf
  __int64 v3; // rax

  v2 = dword_2CAA4F4 - (int)n < 0;
  v3 = (unsigned int)(dword_2CAA4F4 - n);
  dword_2CAA4F4 -= n;
  if ( v2 )
    __longjmp_chk();
  return memmove((char *)&unk_2CA2EE0 + v3, src, (unsigned int)n);
}

