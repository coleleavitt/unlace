void *__fastcall sub_76EB60(_DWORD *a1, __int64 (__fastcall *a2)(_BYTE *), unsigned int a3)
{
  bool v3; // cf
  bool v4; // sf
  unsigned int v5; // eax
  __int64 v6; // rbp
  char *v7; // r12
  signed int v8; // edx
  void *v9; // rcx
  void *result; // rax
  __int64 v11; // rax

  v3 = dword_2CD43F4 < a3;
  *a1 = 0;
  if ( !v3 )
    a3 = a2(byte_2CCCDE0);
  v4 = dword_2CD43F0 - 1 < 0;
  v5 = --dword_2CD43F0;
  if ( v4 )
    __longjmp_chk(env, 4294967288LL);
  v6 = 16 * (v5 + 125LL);
  v7 = &byte_2CCCDE0[v6];
  *(_QWORD *)v7 = byte_2CCCDE0;
  *((_WORD *)v7 + 4) = 0;
  *((_WORD *)v7 + 5) = a3;
  if ( a3 > 8 )
  {
    v4 = (int)(dword_2CD43F4 - a3) < 0;
    v11 = dword_2CD43F4 - a3;
    dword_2CD43F4 -= a3;
    if ( v4 )
      __longjmp_chk(env, 4294967287LL);
    result = memmove(&byte_2CCCDE0[v11], byte_2CCCDE0, a3);
    *(_WORD *)a1 = v6;
    *(_QWORD *)v7 = result;
  }
  else
  {
    v8 = a3 - 1;
    v9 = (void *)v8;
    do
    {
      *((_BYTE *)v9 + (_QWORD)v7) = byte_2CCCDE0[(_QWORD)v9];
      result = v9;
      v9 = (char *)v9 - 1;
    }
    while ( (void *)(v8 - (unsigned __int64)(unsigned int)v8) != result );
    *(_WORD *)a1 = v6;
  }
  return result;
}
