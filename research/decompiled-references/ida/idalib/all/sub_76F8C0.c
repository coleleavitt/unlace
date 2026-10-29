void __fastcall sub_76F8C0(_DWORD *a1, unsigned __int8 a2)
{
  bool v2; // sf
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx

  *a1 = 0;
  if ( a2 )
  {
    v2 = dword_2CD43F0 - 1 < 0;
    v3 = (unsigned int)--dword_2CD43F0;
    if ( v2 )
      __longjmp_chk(env, 4294967288LL);
    v4 = 16 * (v3 + 125);
    v5 = &byte_2CCCDE0[v4];
    *(_WORD *)a1 = v4;
    *v5 = a2;
    v5[2] = (_DWORD)&stru_10000;
  }
}
