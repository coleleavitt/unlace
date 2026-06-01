__int64 __fastcall sub_1192E0(void *a1, _DWORD *a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v6; // rbx
  _DWORD *v7; // rax
  unsigned __int8 *v8; // rcx
  _DWORD *v9; // r8
  unsigned int v10; // edx
  __int64 result; // rax
  unsigned int v12; // ecx

  LODWORD(v6) = *a2;
  v7 = memset(a1, 0, 4LL * (unsigned int)(*a2 + 1));
  if ( a4 )
  {
    v8 = &a3[a4];
    v9 = v7;
    if ( a3 < &a3[a4] )
    {
      do
        ++v7[*a3++];
      while ( v8 != a3 );
    }
    if ( !v7[(unsigned int)v6] )
    {
      do
        v6 = (unsigned int)(v6 - 1);
      while ( !v7[v6] );
    }
    *a2 = v6;
    v10 = 0;
    result = 0;
    do
    {
      v12 = v9[v10];
      if ( (unsigned int)result < v12 )
        result = v12;
      ++v10;
    }
    while ( v10 <= (unsigned int)v6 );
  }
  else
  {
    *a2 = 0;
    return 0;
  }
  return result;
}

