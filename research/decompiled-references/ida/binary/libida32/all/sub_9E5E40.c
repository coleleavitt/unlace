unsigned __int64 *__fastcall sub_9E5E40(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  a1[1] = a3;
  *a1 = 0;
  a1[3] = __ROL8__(a3 ^ 0xB492B66FBE98F273LL, 15);
  v3 = 0xB492B66FBE98F273LL * a3;
  a1[4] = 0xB492B66FBE98F273LL * a3;
  a1[2] = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL
           * (((0x9DDFEA08EB382D69LL * (a3 ^ 0xB492B66FBE98F273LL)) >> 47)
            ^ (0x9DDFEA08EB382D69LL * (a3 ^ 0xB492B66FBE98F273LL))
            ^ 0xB492B66FBE98F273LL)) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (a3 ^ 0xB492B66FBE98F273LL)) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (a3 ^ 0xB492B66FBE98F273LL))
           ^ 0xB492B66FBE98F273LL)));
  v4 = (a3 >> 47) ^ a3;
  a1[5] = v4;
  v5 = 0x9DDFEA08EB382D69LL * (((0x9DDFEA08EB382D69LL * (v4 ^ v3)) >> 47) ^ v4 ^ (0x9DDFEA08EB382D69LL * (v4 ^ v3)));
  a1[6] = 0x9DDFEA08EB382D69LL * ((v5 >> 47) ^ v5);
  sub_9931E0(a1, a2);
  return a1;
}

