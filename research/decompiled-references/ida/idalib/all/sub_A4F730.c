unsigned __int64 __fastcall sub_A4F730(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rsi

  v1 = *a1;
  v2 = *a1 & 3;
  if ( v2 == 3 || v2 == 2 )
  {
    v3 = 0x9DDFEA08EB382D69LL * (HIDWORD(v1) ^ (((8 * v1) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
    v4 = 0x9DDFEA08EB382D69LL * ((v3 >> 47) ^ HIDWORD(v1) ^ v3);
    return 0x9DDFEA08EB382D69LL * ((v4 >> 47) ^ v4);
  }
  else
  {
    v6 = a1[1];
    v7 = __ROR8__(v6 + 16, 16);
    return v6
         ^ (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * (v7
             ^ (0x9DDFEA08EB382D69LL * (v7 ^ v1 ^ 0xFF51AFD7ED558CCDLL))
             ^ ((0x9DDFEA08EB382D69LL * (v7 ^ v1 ^ 0xFF51AFD7ED558CCDLL)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * (v7
              ^ (0x9DDFEA08EB382D69LL * (v7 ^ v1 ^ 0xFF51AFD7ED558CCDLL))
              ^ ((0x9DDFEA08EB382D69LL * (v7 ^ v1 ^ 0xFF51AFD7ED558CCDLL)) >> 47))) >> 47)));
  }
}
