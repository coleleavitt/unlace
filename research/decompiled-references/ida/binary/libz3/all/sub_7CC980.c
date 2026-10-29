__int64 __fastcall sub_7CC980(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  int v4; // ecx
  char *v5; // rax

  v2 = *(_QWORD *)(a1 + 2264);
  v3 = 0;
  if ( !v2 )
    return v3;
  if ( !*(_QWORD *)(v2 + 272) )
    return v3;
  v4 = *(_DWORD *)(v2 + 12);
  v5 = (char *)(a2 + 88);
  if ( *(int *)(a2 + 88) >> 8 == -1 )
    return v3;
  do
  {
    v3 = *v5;
    if ( v4 == v3 )
    {
      LOBYTE(v3) = *(int *)v5 >> 8 != -1;
      return v3;
    }
    v5 = *((char **)v5 + 1);
  }
  while ( v5 );
  return 0;
}

