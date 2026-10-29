__int64 __fastcall sub_1E93D0(__int64 a1, const char **a2, _DWORD *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  const char *v6; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    goto LABEL_10;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v4 + 80 * v3;
  if ( v4 == v5 )
    goto LABEL_10;
  while ( (*(_BYTE *)(v4 + 72) & 4) != 0 )
  {
    v4 += 80;
    if ( v5 == v4 )
      goto LABEL_10;
  }
  if ( v4 )
  {
    v6 = &s1;
    if ( *(_QWORD *)(v4 + 16) )
      v6 = *(const char **)(v4 + 8);
    *a2 = v6;
    result = *(unsigned int *)(v4 + 72);
    *a3 = result;
  }
  else
  {
LABEL_10:
    *a2 = nullptr;
    *a3 = 0;
    return 0;
  }
  return result;
}
