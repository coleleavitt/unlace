char *__fastcall lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::insert(
        char *result,
        unsigned int a2,
        _QWORD *a3)
{
  int v3; // w8
  int v4; // w9
  int v5; // w10
  char *v7; // x19
  char *v8; // x21

  v3 = result[248];
  v4 = v3 & 0x7F;
  if ( v3 >= 0 )
    v5 = 15;
  else
    v5 = 31;
  if ( v4 == v5 )
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::insert();
  if ( v5 == a2 )
    lsl::BTree<char const*,lsl::ConstCharStarCompare,false>::NodeCore<31u,15u>::insert();
  v7 = result;
  v8 = &result[8 * a2];
  if ( v4 != a2 )
  {
    result = (char *)_platform_memmove(&result[8 * a2 + 8], &result[8 * a2], 8LL * (v3 & 0x7F) - 8LL * a2);
    LOBYTE(v3) = v7[248];
  }
  *(_QWORD *)v8 = *a3;
  v7[248] = v3 + 1;
  return result;
}
