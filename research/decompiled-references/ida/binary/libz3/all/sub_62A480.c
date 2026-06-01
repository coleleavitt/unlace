__int64 __fastcall sub_62A480(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx

  v3 = *(_DWORD *)(a1 + 68);
  if ( a3 )
    v3 = *(_DWORD *)(a1 + 64);
  if ( !v3 )
    return 0;
  v4 = a1 + 8LL * v3;
  while ( *(_QWORD *)((*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16) != a2 )
  {
    a1 += 8;
    if ( v4 == a1 )
      return 0;
  }
  return 1;
}

