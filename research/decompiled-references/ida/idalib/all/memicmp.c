__int64 __fastcall memicmp(unsigned __int8 *a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rbp
  __int64 v5; // r13
  int v6; // edi
  int v7; // ebx
  unsigned int v8; // ebx

  if ( a3 <= 0 )
  {
    return 0;
  }
  else
  {
    v3 = a1;
    v5 = (__int64)&a1[a3 - 1 + 1];
    do
    {
      v6 = *v3;
      ++a2;
      ++v3;
      v7 = tolower(v6);
      v8 = v7 - tolower(*(unsigned __int8 *)(a2 - 1));
    }
    while ( !v8 && v3 != (unsigned __int8 *)v5 );
  }
  return v8;
}
