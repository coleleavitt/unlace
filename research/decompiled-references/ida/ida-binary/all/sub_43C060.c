__int64 __fastcall sub_43C060(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rax
  const char *v6; // rdx

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *(_QWORD **)a2;
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( v3 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = *v2 + 48 * v4;
      v6 = &s1;
      if ( *(_QWORD *)(v5 + 8) )
        v6 = *(const char **)v5;
      sub_16FAA0((__int64 *)a1, (__int64)"%s\n", v6);
      if ( ++v4 >= v3 || v4 == 30 )
        break;
      v2 = *(_QWORD **)a2;
    }
    if ( v3 > 0x1E )
      sub_16FAA0((__int64 *)a1, (__int64)"... + %zu more\n", v3 - 30);
  }
  return a1;
}
