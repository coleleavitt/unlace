__int64 __fastcall sub_112BDC0(__int64 a1)
{
  void **v1; // rbp
  size_t v2; // rax
  int v3; // edx
  __int64 v4; // rcx
  int v6; // eax
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars10[16]; // [rsp+10h] [rbp+10h] BYREF
  void *vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 _30; // [rsp+30h] [rbp+30h] BYREF
  unsigned int vars40; // [rsp+40h] [rbp+40h]

  v1 = vars0;
  vars0[0] = vars10;
  v2 = j__strlen("x86_64-unknown-linux-gnu");
  sub_112B570(vars0, "x86_64-unknown-linux-gnu", (__int64)&aX8664UnknownLi[v2]);
  sub_22B9ED0(&vars20, vars0);
  if ( vars0[0] != vars10 )
    operator delete(vars0[0]);
  v3 = *(_DWORD *)(a1 + 48);
  if ( vars40 <= 0x24 && (v4 = 0x1800000006LL, _bittest64(&v4, vars40)) )
  {
    v6 = v3 - 1;
    LOBYTE(v1) = (unsigned int)(v3 - 1) > 1;
    LOBYTE(v6) = (unsigned int)(v3 - 35) > 1;
    LODWORD(v1) = v6 & (unsigned int)v1;
  }
  else
  {
    LOBYTE(v1) = vars40 != v3;
  }
  if ( vars20 != &_30 )
    operator delete(vars20);
  return (unsigned int)v1;
}
