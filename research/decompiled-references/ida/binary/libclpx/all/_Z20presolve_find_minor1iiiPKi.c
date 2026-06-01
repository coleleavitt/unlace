__int64 __fastcall presolve_find_minor1(int a1, unsigned int a2, int a3, const int *a4)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  char *v6; // rcx
  __int64 result; // rax

  if ( (int)a2 >= a3 || a1 == a4[a2] )
    return a2;
  v4 = (int)(a2 + 1);
  v5 = v4 + a3 - 1 - a2;
  v6 = (char *)a4 + 4LL * (int)a2 - 4 * v4;
  do
  {
    result = (unsigned int)v4;
    if ( v4 == v5 )
      break;
    ++v4;
  }
  while ( *(_DWORD *)&v6[4 * v4] != a1 );
  return result;
}

