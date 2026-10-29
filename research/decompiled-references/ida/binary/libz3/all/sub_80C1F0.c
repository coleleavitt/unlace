unsigned int *__fastcall sub_80C1F0(__int64 a1, unsigned int ***a2, int a3, char *a4)
{
  bool v4; // zf
  __int64 v5; // rdi

  v4 = *(_BYTE *)(a1 + 376) == 0;
  v5 = a1 - 32;
  if ( v4 )
    return (unsigned int *)sub_80BAE0(v5, a2, a3, a4);
  else
    return sub_808160(v5, a2, a3, (__int64 *)a4);
}

