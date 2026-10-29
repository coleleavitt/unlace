unsigned __int64 __fastcall sub_69CB60(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r11

  v2 = *(_QWORD **)(*a1 + 1840LL);
  v3 = sub_69C0D0(v2, a2);
  if ( v3 == (unsigned __int64 *)(v2[2] + 16LL * v2[3]) )
    return 0;
  if ( v4 == -1 )
    return *v3;
  if ( (*(_BYTE *)(a1[2] + 12LL) & 8) != 0 )
    v4 &= ~1uLL;
  if ( v4 < *v3 )
    return 0;
  else
    return *v3;
}
