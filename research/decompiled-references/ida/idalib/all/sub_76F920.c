__int64 __fastcall sub_76F920(_DWORD *a1, unsigned __int16 a2)
{
  int v2; // eax
  int v3; // eax
  __int64 result; // rax
  _DWORD *v5; // rdx

  v2 = dword_2CD43F0;
  *a1 = 0;
  v3 = v2 - 1;
  dword_2CD43F0 = v3;
  if ( v3 < 0 )
    __longjmp_chk(env, 4294967288LL);
  result = 16 * ((unsigned int)v3 + 125LL);
  v5 = &byte_2CCCDE0[result];
  *(_WORD *)a1 = result;
  *v5 = a2;
  v5[2] = (_DWORD)&stru_20000;
  return result;
}
