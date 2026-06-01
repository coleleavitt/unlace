unsigned __int64 __fastcall sub_2287CD0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int128 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int128 v8; // rax
  unsigned __int128 v9; // rax
  unsigned __int128 v10; // rax
  unsigned __int128 v11; // rax
  unsigned __int128 v12; // rax
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax

  if ( a2 > 0x10 )
  {
    if ( a2 <= 0x80 )
    {
      v5 = (a1[1] ^ 0x1CAD21F72C81017CuLL) * (unsigned __int128)(*a1 ^ 0xBE4BA423396CFEB8LL);
      v6 = (*((_QWORD *)&v5 + 1) ^ v5) - 0x61C8864E7A143579LL * a2;
      v7 = (((*(_QWORD *)((char *)a1 + a2 - 16) ^ 0xDB979083E96DD4DELL)
           * (unsigned __int128)(*(_QWORD *)((char *)a1 + a2 - 8) ^ 0x1F67B3B7A4A44072uLL)) >> 64)
         ^ ((*(_QWORD *)((char *)a1 + a2 - 16) ^ 0xDB979083E96DD4DELL)
          * (*(_QWORD *)((char *)a1 + a2 - 8) ^ 0x1F67B3B7A4A44072LL));
      if ( a2 > 0x20 )
      {
        v8 = (a1[3] ^ 0x2172FFCC7DD05A82uLL) * (unsigned __int128)(a1[2] ^ 0x78E5C0CC4EE679CBuLL);
        v6 += *((_QWORD *)&v8 + 1) ^ v8;
        v9 = (*(_QWORD *)((char *)a1 + a2 - 24) ^ 0x4C263A81E69035E0uLL)
           * (unsigned __int128)(*(_QWORD *)((char *)a1 + a2 - 32) ^ 0x8E2443F7744608B8LL);
        v7 += *((_QWORD *)&v9 + 1) ^ v9;
        if ( a2 > 0x40 )
        {
          v10 = (a1[5] ^ 0xA32E531B8B65D088LL) * (unsigned __int128)(a1[4] ^ 0xCB00C391BB52283CLL);
          v6 += *((_QWORD *)&v10 + 1) ^ v10;
          v11 = (*(_QWORD *)((char *)a1 + a2 - 40) ^ 0xD8ACDEA946EF1938LL)
              * (unsigned __int128)(*(_QWORD *)((char *)a1 + a2 - 48) ^ 0x4EF90DA297486471uLL);
          v7 += *((_QWORD *)&v11 + 1) ^ v11;
          if ( a2 > 0x60 )
          {
            v12 = (a1[7] ^ 0x1D4F0BC7C7BBDCF9uLL) * (unsigned __int128)(a1[6] ^ 0x3F349CE33F76FAA8uLL);
            v6 += *((_QWORD *)&v12 + 1) ^ v12;
            v13 = (*(_QWORD *)((char *)a1 + a2 - 56) ^ 0x647378D9C97E9FC8uLL)
                * (unsigned __int128)(*(_QWORD *)((char *)a1 + a2 - 64) ^ 0x3159B4CD4BE0518AuLL);
            v7 += *((_QWORD *)&v13 + 1) ^ v13;
          }
        }
      }
      v3 = ((unsigned __int64)(v6 + v7) >> 37) ^ (v6 + v7);
      return ((0x165667919E3779F9LL * v3) >> 32) ^ (0x165667919E3779F9LL * v3);
    }
    if ( a2 > 0xF0 )
      return sub_22875B0((__int64)a1, a2);
    else
      return sub_22873B0(a1, a2);
  }
  else
  {
    if ( a2 > 8 )
    {
      v2 = _byteswap_uint64(*a1 ^ 0x6782737BEA4239B9LL)
         + a2
         + (*(_QWORD *)((char *)a1 + a2 - 8) ^ 0xAF56BC3B0996523ALL)
         + ((((*(_QWORD *)((char *)a1 + a2 - 8) ^ 0xAF56BC3B0996523ALL)
            * (unsigned __int128)(*a1 ^ 0x6782737BEA4239B9uLL)) >> 64)
          ^ ((*(_QWORD *)((char *)a1 + a2 - 8) ^ 0xAF56BC3B0996523ALL) * (*a1 ^ 0x6782737BEA4239B9LL)));
      v3 = (v2 >> 37) ^ v2;
      return ((0x165667919E3779F9LL * v3) >> 32) ^ (0x165667919E3779F9LL * v3);
    }
    if ( a2 <= 3 )
    {
      if ( a2 )
        v16 = ((*((unsigned __int8 *)a1 + (a2 >> 1)) << 24)
             | *((unsigned __int8 *)a1 + a2 - 1)
             | ((_DWORD)a2 << 8)
             | (*(unsigned __int8 *)a1 << 16))
            ^ 0x87275A9B;
      else
        v16 = 0x8726F9101E516154LL;
      v17 = 0x165667B19E3779F9LL * (((0xC2B2AE3D27D4EB4FLL * v16) >> 29) ^ (0xC2B2AE3D27D4EB4FLL * v16));
      return HIDWORD(v17) ^ v17;
    }
    else
    {
      v14 = (((unsigned __int64)*(unsigned int *)a1 << 32) | *(unsigned int *)((char *)a1 + a2 - 4))
          ^ 0xC73AB174C5ECD5A2LL;
      v15 = 0x9FB21C651E98DF25LL * (__ROL8__(v14, 24) ^ __ROR8__(v14, 15) ^ v14);
      return (0x9FB21C651E98DF25LL * (((v15 >> 35) + a2) ^ v15))
           ^ ((0x9FB21C651E98DF25LL * (((v15 >> 35) + a2) ^ v15)) >> 28);
    }
  }
}
