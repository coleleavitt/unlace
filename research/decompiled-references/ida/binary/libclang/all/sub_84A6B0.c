unsigned __int64 __fastcall sub_84A6B0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v2 = sub_6A4120(a1);
  v3 = sub_849B40(*(_QWORD **)a2, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8)));
  v4 = __ROR8__(v3 + 16, 16);
  v5 = 0x9DDFEA08EB382D69LL
     * ((0x9DDFEA08EB382D69LL * (v4 ^ v2 ^ 0xFF51AFD7ED558CCDLL))
      ^ v4
      ^ ((0x9DDFEA08EB382D69LL * (v4 ^ v2 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
  return v3 ^ (0x9DDFEA08EB382D69LL * (v5 ^ (v5 >> 47)));
}

