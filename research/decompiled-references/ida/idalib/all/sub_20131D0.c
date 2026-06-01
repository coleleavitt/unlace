unsigned __int64 __fastcall sub_20131D0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx

  v2 = 0x9DDFEA08EB382D69LL
     * (((0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (a1[6] ^ a1[4])) ^ a1[6] ^ ((0x9DDFEA08EB382D69LL * (a1[6] ^ a1[4])) >> 47))) >> 47)
      ^ (0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * (a1[6] ^ a1[4])) ^ a1[6] ^ ((0x9DDFEA08EB382D69LL * (a1[6] ^ a1[4])) >> 47))))
     + *a1
     - 0x4B6D499041670D8DLL * ((a2 >> 47) ^ a2);
  v3 = 0x9DDFEA08EB382D69LL
     * (v2
      ^ (a1[2]
       - 0x4B6D499041670D8DLL * (a1[1] ^ (a1[1] >> 47))
       - 0x622015F714C7D297LL
       * (((0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (a1[5] ^ a1[3])) ^ a1[5] ^ ((0x9DDFEA08EB382D69LL * (a1[5] ^ a1[3])) >> 47))) >> 47)
        ^ (0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * (a1[5] ^ a1[3])) ^ a1[5] ^ ((0x9DDFEA08EB382D69LL * (a1[5] ^ a1[3])) >> 47))))));
  return 0x9DDFEA08EB382D69LL
       * (((0x9DDFEA08EB382D69LL * ((v3 >> 47) ^ v2 ^ v3)) >> 47) ^ (0x9DDFEA08EB382D69LL * ((v3 >> 47) ^ v2 ^ v3)));
}
