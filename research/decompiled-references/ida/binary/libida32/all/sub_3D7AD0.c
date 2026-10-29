__int64 __fastcall sub_3D7AD0(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  const char *v5; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1368LL);
  v3 = *(_QWORD *)(v2 + 48);
  v4 = v3 + 32LL * *(_QWORD *)(v2 + 56);
  if ( v4 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = haystack;
    if ( *(_QWORD *)(v3 + 8) )
      v5 = *(const char **)v3;
    if ( !strcmp(v5, a2) )
      break;
    v3 += 32;
    if ( v4 == v3 )
      return 0;
  }
  return *(unsigned int *)(v3 + 24);
}

