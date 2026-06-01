_DWORD *__fastcall sub_772BE0(__int64 *a1, _WORD *a2)
{
  _DWORD *result; // rax
  bool v3; // sf
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !*a2 )
    sub_76E6C0();
  result = (_DWORD *)*((unsigned __int16 *)a1 + 5);
  if ( *((_WORD *)a1 + 4) < (unsigned __int16)result )
  {
    v3 = dword_2CD43F0 - 1 < 0;
    v4 = (unsigned int)--dword_2CD43F0;
    if ( v3 )
      __longjmp_chk(env, 4294967288LL);
    result = &byte_2CCCDE0[16 * v4 + 2000];
    *result = *(_DWORD *)a2;
    v5 = *((unsigned __int16 *)a1 + 4);
    v6 = *a1;
    *((_WORD *)a1 + 4) = v5 + 1;
    *(_QWORD *)(v6 + 8 * v5) = result;
  }
  return result;
}
