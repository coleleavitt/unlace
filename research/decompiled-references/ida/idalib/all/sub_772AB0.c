__int64 sub_772AB0()
{
  bool v0; // sf
  __int64 v1; // rax
  _BYTE *v2; // rdx
  __int64 result; // rax

  v0 = dword_2CD43F0 - 1 < 0;
  v1 = (unsigned int)--dword_2CD43F0;
  if ( v0 )
    __longjmp_chk(env, 4294967288LL);
  result = 16 * (v1 + 125);
  v2 = &byte_2CCCDE0[result];
  *(_QWORD *)v2 = "`anonymous namespace'";
  *((_DWORD *)v2 + 2) = 1376256;
  return (unsigned __int16)result;
}
