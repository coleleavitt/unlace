__int64 __fastcall sub_5096E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  const char *v3; // rdx

  if ( *(_DWORD *)(a1 + 56) == -1 || *(_BYTE *)(a1 + 60) )
  {
    sub_509680(a1, a2);
    sub_79B440(a1 + 56, a2, 1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), 0, 83);
    v2 = *(_QWORD *)(a1 + 40);
    v3 = haystack;
    if ( v2 )
      v3 = *(const char **)(a1 + 32);
    sub_79BB40(a1 + 56, a2, v3, v2, 0, 88);
    *(_BYTE *)(a1 + 60) = 0;
  }
  return *(unsigned int *)(a1 + 56);
}

