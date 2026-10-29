void __cdecl __bzero(void *a1, size_t a2)
{
  unsigned __int64 v2; // x3
  char *v3; // x2
  bool v8; // cc
  char *v9; // x3

  if ( a2 < 0x40 )
    JUMPOUT(0x9B54);
  if ( a2 < 0x8000 )
    JUMPOUT(0x9B0C);
  *(_OWORD *)a1 = 0;
  *((_OWORD *)a1 + 1) = 0;
  *((_OWORD *)a1 + 2) = 0;
  *((_OWORD *)a1 + 3) = 0;
  v2 = ((unsigned __int64)a1 + 64) & 0xFFFFFFFFFFFFFFC0LL;
  v3 = (char *)a1 + a2 - v2 - 64;
  if ( (unsigned __int64)a1 + a2 > v2 + 64 )
  {
    do
    {
      __asm { DC              ZVA, X3 }
      v2 += 64LL;
      v8 = (unsigned __int64)v3 > 0x40;
      v3 -= 64;
    }
    while ( v8 );
  }
  v9 = &v3[v2];
  *(_OWORD *)v9 = 0;
  *((_OWORD *)v9 + 1) = 0;
  *((_OWORD *)v9 + 2) = 0;
  *((_OWORD *)v9 + 3) = 0;
}
