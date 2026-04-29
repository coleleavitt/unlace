unsigned __int64 __fastcall std::__murmur2_or_cityhash<unsigned long,64ul>::__hash_len_17_to_32(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x10
  unsigned __int64 v3; // x8
  __int64 v4; // x13
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x9

  v2 = a1[1];
  v3 = 0xB492B66FBE98F273LL * *a1;
  v4 = __ROR8__(0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)a1 + a2 - 8), 30) + __ROR8__(v3 - v2, 43);
  v5 = v3 + a2 + __ROR8__(v2 ^ 0xC949D7C7509E6557LL, 20) - 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)a1 + a2 - 8);
  v6 = 0x9DDFEA08EB382D69LL * (v5 ^ (v4 - 0x3C5A37A36834CED9LL * *(_QWORD *)((char *)a1 + a2 - 16)));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (v6 ^ v5 ^ (v6 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v6 ^ v5 ^ (v6 >> 47))) >> 47));
}
