__int64 __fastcall sub_F60130(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = (*(_WORD *)(a1 + 18) >> 3) & 0x7F;
  return sub_F5FF30(
           a2,
           *(_QWORD *)(a1 + 24),
           (unsigned __int64 *)(a1 + 48),
           v2,
           (unsigned __int64 *)(a1 + 8 * v2 + 48),
           *(_BYTE *)(a1 + 19) >> 2,
           *(_BYTE *)(a1 + 20) & 1);
}
