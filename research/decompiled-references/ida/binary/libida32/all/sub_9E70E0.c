unsigned __int64 __fastcall sub_9E70E0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx

  v2 = __ROR8__(*a2 + 16LL, 16);
  v3 = 0x9DDFEA08EB382D69LL
     * (((0x9DDFEA08EB382D69LL * (v2 ^ *a1 ^ 0xFF51AFD7ED558CCDLL)) >> 47)
      ^ (0x9DDFEA08EB382D69LL * (v2 ^ *a1 ^ 0xFF51AFD7ED558CCDLL))
      ^ v2);
  return *a2 ^ (0x9DDFEA08EB382D69LL * (v3 ^ (v3 >> 47)));
}

