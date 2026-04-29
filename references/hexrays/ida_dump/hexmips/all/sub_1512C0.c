__int64 __fastcall sub_1512C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // r14d
  unsigned int v5; // r12d
  __int64 v6; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( *(int *)(a1 + 8) <= 0 )
    return 0;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( (get_tinfo_property(*(_QWORD *)(v2 + 24), 2) & 0xF) != 9 )
    {
      ++v4;
      v2 += 80;
      if ( *(_DWORD *)(a1 + 8) <= v4 )
        return v5;
    }
    v6 = v2;
    ++v4;
    v2 += 80;
    v5 |= sub_1510F0(v6, a2);
  }
  while ( *(_DWORD *)(a1 + 8) > v4 );
  return v5;
}
