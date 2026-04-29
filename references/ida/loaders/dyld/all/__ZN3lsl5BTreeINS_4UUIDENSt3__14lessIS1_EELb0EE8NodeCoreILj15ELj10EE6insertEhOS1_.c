__n128 __fastcall lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::insert(
        __int64 a1,
        unsigned int a2,
        __n128 *a3)
{
  int v3; // w8
  int v4; // w9
  __n128 *v7; // x21
  __n128 result; // q0

  v3 = *(_BYTE *)(a1 + 248) & 0x7F;
  if ( *(char *)(a1 + 248) >= 0 )
    v4 = 10;
  else
    v4 = 15;
  if ( v3 == v4 )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::insert();
  if ( v4 == a2 )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::insert();
  v7 = (__n128 *)(a1 + 16LL * a2);
  if ( v3 != a2 )
    _platform_memmove(
      (void *)(a1 + 16LL * a2 + 16),
      (const void *)(a1 + 16LL * a2),
      16LL * (*(_BYTE *)(a1 + 248) & 0x7F) - 16LL * a2);
  result = *a3;
  *v7 = *a3;
  ++*(_BYTE *)(a1 + 248);
  return result;
}
