int *__fastcall sub_8CFFE0(__int64 *a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v5; // esi
  int *v6; // rcx
  int v7; // edi
  int v9; // ecx
  int v10; // r10d

  v2 = *((unsigned int *)a1 + 4);
  v3 = *a1;
  if ( (_DWORD)v2 )
  {
    v5 = (v2 - 1) & (37 * a2);
    v6 = (int *)(v3 + 16LL * v5);
    v7 = *v6;
    if ( a2 == *v6 )
      return v6;
    v9 = 1;
    while ( v7 != -1 )
    {
      v10 = v9 + 1;
      v5 = (v2 - 1) & (v9 + v5);
      v6 = (int *)(v3 + 16LL * v5);
      v7 = *v6;
      if ( *v6 == a2 )
        return v6;
      v9 = v10;
    }
  }
  return (int *)(16 * v2 + v3);
}

