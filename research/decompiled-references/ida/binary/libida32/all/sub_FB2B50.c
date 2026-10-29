unsigned __int64 __fastcall sub_FB2B50(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  v2 = *a2;
  v3 = __ROR8__(v2 + 16, 16);
  v4 = 0x9DDFEA08EB382D69LL
     * (((0x9DDFEA08EB382D69LL * (v3 ^ a1 ^ 0xFF51AFD7ED558CCDLL)) >> 47)
      ^ (0x9DDFEA08EB382D69LL * (v3 ^ a1 ^ 0xFF51AFD7ED558CCDLL))
      ^ v3);
  return v2 ^ (0x9DDFEA08EB382D69LL * (v4 ^ (v4 >> 47)));
}

