__int64 __fastcall sub_23E2D0(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) != 68 )
    return 0;
  if ( strcmp(*(const char **)(a2 + 24), "memcpy") )
    return 0;
  qfree();
  *(_QWORD *)(a2 + 24) = qstrdup();
  ++*(_DWORD *)(a1 + 64);
  return 0;
}
