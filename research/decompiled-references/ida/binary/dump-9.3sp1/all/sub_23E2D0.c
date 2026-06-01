__int64 __fastcall sub_23E2D0(__int64 a1, __int64 a2)
{
  const char *v3; // r12

  if ( *(_DWORD *)(a2 + 8) != 68 )
    return 0;
  v3 = *(const char **)(a2 + 24);
  if ( strcmp(v3, "memcpy") )
    return 0;
  qfree((__int64)v3);
  *(_QWORD *)(a2 + 24) = qstrdup();
  ++*(_DWORD *)(a1 + 64);
  return 0;
}
