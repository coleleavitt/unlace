_DWORD *__fastcall sub_772C60(__int64 *a1)
{
  bool v1; // sf
  __int64 v2; // rax
  _DWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( *((_WORD *)a1 + 4) >= *((_WORD *)a1 + 5) )
    sub_76E6C0();
  v1 = dword_2CD43F0 - 1 < 0;
  v2 = (unsigned int)--dword_2CD43F0;
  if ( v1 )
    __longjmp_chk(env, 4294967288LL);
  result = &byte_2CCCDE0[16 * v2 + 2000];
  *result = 0;
  v4 = *((unsigned __int16 *)a1 + 4);
  v5 = *a1;
  *((_WORD *)a1 + 4) = v4 + 1;
  *(_QWORD *)(v5 + 8 * v4) = result;
  return result;
}
