__int64 __fastcall sub_509680(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  const char *v4; // rcx

  v3 = a1 + 56;
  if ( *(_DWORD *)(a1 + 56) == -1 )
    sub_79BC40(v3, a2, 0, 0);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v4 = *(const char **)a1;
  return sub_79B440(v3, a2, 0, v4, 0, 83);
}

