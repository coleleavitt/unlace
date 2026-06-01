__int64 __fastcall sub_810FE0(__int64 a1, unsigned int a2, __int64 a3)
{
  char *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v3 = (char *)(a3 + 88);
  if ( *(int *)(a3 + 88) >> 8 == -1 )
    return 0x7FFFFFFF;
  while ( *(_DWORD *)(a1 + 12) != *v3 )
  {
    v3 = *((char **)v3 + 1);
    if ( !v3 )
      return 0x7FFFFFFF;
  }
  v4 = (unsigned int)(*(int *)v3 >> 8);
  if ( (_DWORD)v4 == -1 )
    return 0x7FFFFFFF;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 8 * v4);
  result = 0x7FFFFFFF;
  if ( v5 )
  {
    if ( a2 < *(_DWORD *)(v5 - 4) )
      return *(_DWORD *)(v5 + 4LL * a2) >> 1;
  }
  return result;
}

