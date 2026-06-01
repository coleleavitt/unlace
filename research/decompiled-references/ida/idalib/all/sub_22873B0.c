unsigned __int64 __fastcall sub_22873B0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax
  __int64 v3; // rcx
  unsigned __int128 v4; // rax
  __int64 v5; // r11
  unsigned __int128 v6; // rax
  unsigned __int64 v7; // r8
  int v8; // ecx
  unsigned int v9; // r9d
  int v10; // edx
  __int64 v11; // rax
  unsigned __int128 v12; // rax
  unsigned __int128 v13; // rax

  v2 = (a1[3] ^ 0x1F67B3B7A4A44072uLL) * (unsigned __int128)(a1[2] ^ 0xDB979083E96DD4DELL);
  v3 = (((a1[1] ^ 0x1CAD21F72C81017CLL) * (*a1 ^ 0xBE4BA423396CFEB8LL))
      ^ (((a1[1] ^ 0x1CAD21F72C81017CuLL) * (unsigned __int128)(*a1 ^ 0xBE4BA423396CFEB8LL)) >> 64))
     + (*((_QWORD *)&v2 + 1) ^ v2)
     - 0x61C8864E7A143579LL * a2;
  v4 = (a1[4] ^ 0x78E5C0CC4EE679CBuLL) * (unsigned __int128)(a1[5] ^ 0x2172FFCC7DD05A82uLL);
  v5 = ((((a1[12] ^ 0x3F349CE33F76FAA8uLL) * (unsigned __int128)(a1[13] ^ 0x1D4F0BC7C7BBDCF9uLL)) >> 64)
      ^ ((a1[12] ^ 0x3F349CE33F76FAA8LL) * (a1[13] ^ 0x1D4F0BC7C7BBDCF9LL)))
     + ((((a1[11] ^ 0xD8ACDEA946EF1938LL) * (unsigned __int128)(a1[10] ^ 0x4EF90DA297486471uLL)) >> 64)
      ^ ((a1[11] ^ 0xD8ACDEA946EF1938LL) * (a1[10] ^ 0x4EF90DA297486471LL)))
     + (((a1[9] ^ 0xA32E531B8B65D088LL) * (a1[8] ^ 0xCB00C391BB52283CLL))
      ^ (((a1[9] ^ 0xA32E531B8B65D088LL) * (unsigned __int128)(a1[8] ^ 0xCB00C391BB52283CLL)) >> 64))
     + (((a1[7] ^ 0x4C263A81E69035E0LL) * (a1[6] ^ 0x8E2443F7744608B8LL))
      ^ (((a1[7] ^ 0x4C263A81E69035E0uLL) * (unsigned __int128)(a1[6] ^ 0x8E2443F7744608B8LL)) >> 64))
     + (*((_QWORD *)&v4 + 1) ^ v4)
     + v3;
  v6 = (a1[14] ^ 0x3159B4CD4BE0518AuLL) * (unsigned __int128)(a1[15] ^ 0x647378D9C97E9FC8uLL);
  v7 = ((0x165667919E3779F9LL
       * (((v5 + (*((_QWORD *)&v6 + 1) ^ (unsigned __int64)v6)) >> 37)
        ^ (v5 + (*((_QWORD *)&v6 + 1) ^ (unsigned __int64)v6)))) >> 32)
     ^ (0x165667919E3779F9LL
      * (((v5 + (*((_QWORD *)&v6 + 1) ^ (unsigned __int64)v6)) >> 37) ^ (v5 + (*((_QWORD *)&v6 + 1) ^ v6))));
  if ( (unsigned int)(a2 >> 4) > 8 )
  {
    v8 = 8;
    v9 = 0;
    do
    {
      v10 = v8;
      v11 = v9;
      ++v8;
      v9 += 16;
      v12 = (*(_QWORD *)((char *)a1 + (unsigned int)(16 * v10)) ^ *(unsigned __int64 *)((char *)&qword_26FB360 + v11 + 3))
          * (unsigned __int128)(*(_QWORD *)((char *)a1 + (unsigned int)(16 * v10) + 8)
                              ^ *(unsigned __int64 *)((char *)&qword_26FB360 + v11 + 11));
      v7 += *((_QWORD *)&v12 + 1) ^ v12;
    }
    while ( (unsigned int)(a2 >> 4) != v8 );
  }
  v13 = (*(_QWORD *)((char *)a1 + a2 - 8) ^ 0xEBD33483ACC5EA64LL)
      * (unsigned __int128)(*(_QWORD *)((char *)a1 + a2 - 16) ^ 0x7378D9C97E9FC831uLL);
  *(_QWORD *)&v13 = 0x165667919E3779F9LL
                  * (((v7 + (*((_QWORD *)&v13 + 1) ^ (unsigned __int64)v13)) >> 37)
                   ^ (v7 + (*((_QWORD *)&v13 + 1) ^ v13)));
  return DWORD1(v13) ^ v13;
}
