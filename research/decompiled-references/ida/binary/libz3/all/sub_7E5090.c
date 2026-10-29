__int64 __fastcall sub_7E5090(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  char *v4; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v2 )
  {
    v3 = *a2;
    if ( (unsigned int)v3 >= *(_DWORD *)(v2 - 4) )
      v2 = 0;
    else
      v2 = *(_QWORD *)(v2 + 8 * v3);
  }
  v4 = (char *)(v2 + 88);
  if ( *(int *)(v2 + 88) >> 8 == -1 )
    return 0xFFFFFFFFLL;
  while ( *(_DWORD *)(a1 + 12) != *v4 )
  {
    v4 = *((char **)v4 + 1);
    if ( !v4 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)(*(int *)v4 >> 8);
}

