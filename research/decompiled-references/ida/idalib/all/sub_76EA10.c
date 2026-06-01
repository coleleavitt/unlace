void *__fastcall sub_76EA10(void *src, size_t n)
{
  bool v2; // sf
  __int64 v3; // rax

  v2 = dword_2CD43F4 - (int)n < 0;
  v3 = (unsigned int)(dword_2CD43F4 - n);
  dword_2CD43F4 -= n;
  if ( v2 )
    __longjmp_chk(env, 4294967287LL);
  return memmove((char *)&unk_2CCCDE0 + v3, src, (unsigned int)n);
}
