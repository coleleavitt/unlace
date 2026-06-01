unsigned __int64 __fastcall sub_A6AF30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 *v4; // rcx
  bool v5; // cc

  if ( !a2 )
    BUG();
  LODWORD(v3) = 0;
  v4 = *(__int64 **)(a2 + 16);
  if ( (*(_DWORD *)(a2 - 8) & 0x2000000) != 0 )
  {
    v3 = v4[2];
    v5 = *((_DWORD *)v4 + 2) <= 0x40u;
    v4 = (__int64 *)*v4;
    if ( !v5 )
      v4 = (__int64 *)*v4;
  }
  sub_F60170(
    a3,
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a2 + 8),
    (_DWORD)v4,
    v3,
    (*(_WORD *)(a2 - 6) >> 6) & 7,
    (*(_BYTE *)(a2 - 6) >> 3) & 7);
  return sub_985B10(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}
