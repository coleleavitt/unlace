char *__fastcall sub_407290(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    return "";
  v2 = *a2;
  if ( !*a2 )
    return "";
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 8) + 60LL) == 1 || *(_DWORD *)(*(_QWORD *)(v2 + 8) + 60LL) == -1 )
    return *(char **)(v2 + 32);
  return (char *)(v2 + 32);
}

