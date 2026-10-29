__int64 __fastcall sub_FB0D30(__int64 a1, unsigned int a2)
{
  bool v2; // al
  int v4; // eax
  unsigned __int16 *v5; // rax

  if ( a2 <= 0x233B )
  {
    v5 = sub_FAEEC0(a2);
    if ( !v5 || ((*((_BYTE *)v5 + 2) >> 3) & 7u) <= 4 )
      return 0;
    if ( (a2 & 0xFFFFFFFD) == 0x14D8 )
      return 0;
  }
  else if ( ((*(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020)) >> 3) & 7u) <= 4 )
  {
    return 0;
  }
  v2 = sub_FB0C60(a2);
  if ( a2 != 3030 && v2 )
    return 0;
  LOBYTE(v4) = sub_FB0CB0(a2);
  return v4 ^ 1u;
}

