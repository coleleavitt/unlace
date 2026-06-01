char *sub_76E9D0()
{
  bool v0; // sf
  __int64 v1; // rax

  v0 = dword_2CD43F0 - 1 < 0;
  v1 = (unsigned int)--dword_2CD43F0;
  if ( v0 )
    __longjmp_chk(env, 4294967288LL);
  return (char *)&unk_2CCCDE0 + 16 * v1 + 2000;
}
