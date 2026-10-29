bool __fastcall sub_4A3680(__int64 **a1, unsigned int **a2)
{
  unsigned int *v2; // rbx
  unsigned int v3; // r12d
  __int64 *v5; // rbp

  v2 = *a2;
  v3 = **a2;
  if ( !v3 )
    return 0;
  v5 = *a1;
  if ( !(unsigned __int8)sub_4A2760(**a1, *a2, *((unsigned int *)*a1 + 2), *((_DWORD *)*a1 + 3), 1) )
  {
    if ( *((_BYTE *)v5 + 16) )
    {
      if ( !under_debugger )
        interr(2071);
      BUG();
    }
    *(_BYTE *)v5[3] = 0;
    return 0;
  }
  return *v2 != v3;
}
