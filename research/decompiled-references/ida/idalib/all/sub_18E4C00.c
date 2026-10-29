__int64 __fastcall sub_18E4C00(__int64 *a1, unsigned __int64 a2, __int64 a3, double a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx

  v6 = (*(_BYTE *)(a3 + 28) & 0x7Fu) - 34;
  if ( (unsigned int)v6 > 5 )
    return sub_18E4600(*a1, a2, a3, v6, a6, a4);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 48);
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) == 0 )
    return a2;
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 > 3 )
  {
    *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xF9 | 2;
    return a2;
  }
  if ( sub_B979F0((_QWORD *)a3) )
    *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xF9 | 2;
  return a2;
}
