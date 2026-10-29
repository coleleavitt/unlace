__int64 __fastcall sub_A399F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r10
  __int64 *v6; // rcx
  bool v7; // cc

  if ( !a2 )
    BUG();
  LODWORD(v5) = 0;
  v6 = *(__int64 **)(a2 + 16);
  if ( (*(_DWORD *)(a2 - 8) & 0x2000000) != 0 )
  {
    v5 = v6[2];
    v7 = *((_DWORD *)v6 + 2) <= 0x40u;
    v6 = (__int64 *)*v6;
    if ( !v7 )
      v6 = (__int64 *)*v6;
  }
  sub_F3C430(
    a5,
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a2 + 8),
    (_DWORD)v6,
    v5,
    (*(_WORD *)(a2 - 6) >> 6) & 7,
    (*(_BYTE *)(a2 - 6) >> 3) & 7);
  return sub_21FF190(a5, a3);
}

