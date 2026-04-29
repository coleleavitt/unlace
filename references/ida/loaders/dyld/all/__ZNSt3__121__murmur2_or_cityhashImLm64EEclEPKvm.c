unsigned __int64 __fastcall std::__murmur2_or_cityhash<unsigned long,64ul>::operator()(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 v4; // x11
  __int64 v5; // x14
  __int64 v6; // x13
  __int64 v7; // x0
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  unsigned __int64 v11; // x15
  unsigned __int64 v12; // x10
  unsigned __int64 v13; // x16
  __int64 v14; // x11
  __int64 v15; // x12
  unsigned __int64 v16; // x10
  __int64 v17; // x11
  __int64 v18; // x13
  __int64 v19; // t2
  __int64 v20; // x13
  _QWORD *v21; // x1
  __int64 v22; // x17
  __int64 v23; // t1
  __int64 v24; // x11
  unsigned __int64 v25; // x0
  unsigned __int64 i; // x14
  unsigned __int64 v27; // x0
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x7
  __int64 v32; // x12
  unsigned __int64 v33; // x2
  __int64 v34; // x16
  __int64 v35; // x10
  __int64 v36; // x17
  __int64 v37; // x13
  __int64 v38; // x0
  __int64 v39; // x10
  unsigned __int64 v40; // x11
  unsigned __int64 v41; // x12
  unsigned __int64 v42; // x10
  unsigned __int64 v43; // x9

  if ( a3 > 0x20 )
  {
    if ( a3 > 0x40 )
    {
      v4 = *(__int64 *)((char *)a2 + a3 - 48);
      v5 = *(__int64 *)((char *)a2 + a3 - 40);
      v6 = *(__int64 *)((char *)a2 + a3 - 24);
      v8 = *(__int64 *)((char *)a2 + a3 - 64);
      v7 = *(__int64 *)((char *)a2 + a3 - 56);
      v9 = *(__int64 *)((char *)a2 + a3 - 16);
      v10 = *(__int64 *)((char *)a2 + a3 - 8);
      v11 = v7 + v9;
      v12 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v6 ^ (v4 + a3))) ^ v6 ^ ((0x9DDFEA08EB382D69LL * (v6 ^ (v4 + a3))) >> 47));
      v13 = 0x9DDFEA08EB382D69LL * (v12 ^ (v12 >> 47));
      v14 = v8 + a3 + v7 + v4;
      v15 = v14 + v5;
      v16 = __ROR8__(v14, 44) + v8 + a3 + __ROR8__(v5 + v8 + a3 - 0x622015F714C7D297LL * (v12 ^ (v12 >> 47)), 21);
      v17 = v7 + v9 + *(__int64 *)((char *)a2 + a3 - 32) - 0x4B6D499041670D8DLL;
      v18 = v17 + v6 + v9;
      v19 = __ROR8__(v18, 44);
      v20 = v18 + v10;
      v23 = *a2;
      v21 = a2 + 4;
      v22 = v23;
      v24 = v19 + v17 + __ROR8__(v17 + v5 + v10, 21);
      v25 = v23 - 0x4B6D499041670D8DLL * v5;
      for ( i = 64 - ((a3 - 1) & 0xFFFFFFFFFFFFFFC0LL); ; i += 64LL )
      {
        v27 = v25 + v15 + v11;
        v28 = v21[2];
        v29 = v21[3];
        v30 = v21[1];
        v11 = v30 + v15 - 0x4B6D499041670D8DLL * __ROR8__(v11 + v16 + v28, 42);
        v32 = *(v21 - 3);
        v31 = *(v21 - 2);
        v33 = (0xB492B66FBE98F273LL * __ROR8__(v27 + v32, 37)) ^ v24;
        v34 = v13 + v20;
        v35 = v22 - 0x4B6D499041670D8DLL * v16;
        v36 = *(v21 - 1);
        v37 = v35 + v20 + v33 + v36;
        v38 = v35 + v32 + v31;
        v15 = v38 + v36;
        v39 = __ROR8__(v38, 44) + v35;
        v25 = 0xB492B66FBE98F273LL * __ROR8__(v34, 33);
        v16 = v39 + __ROR8__(v37, 21);
        v40 = v25 + v24 + *v21;
        v20 = v40 + v30 + v28 + v29;
        v24 = __ROR8__(v40 + v30 + v28, 44) + v40 + __ROR8__(v11 + v31 + v40 + v29, 21);
        if ( !i )
          break;
        v22 = v21[4];
        v21 += 8;
        v13 = v33;
      }
      v41 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v20 ^ v15)) ^ v20 ^ ((0x9DDFEA08EB382D69LL * (v20 ^ v15)) >> 47));
      v42 = v25
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v24 ^ v16)) ^ v24 ^ ((0x9DDFEA08EB382D69LL * (v24 ^ v16)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v24 ^ v16)) ^ v24 ^ ((0x9DDFEA08EB382D69LL * (v24 ^ v16)) >> 47))) >> 47));
      v43 = 0x9DDFEA08EB382D69LL
          * (v42 ^ (v33 - 0x4B6D499041670D8DLL * (v11 ^ (v11 >> 47)) - 0x622015F714C7D297LL * (v41 ^ (v41 >> 47))));
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v43 ^ v42 ^ (v43 >> 47)))
            ^ ((0x9DDFEA08EB382D69LL * (v43 ^ v42 ^ (v43 >> 47))) >> 47));
    }
    else
    {
      return std::__murmur2_or_cityhash<unsigned long,64ul>::__hash_len_33_to_64(a2, a3);
    }
  }
  else if ( a3 > 0x10 )
  {
    return std::__murmur2_or_cityhash<unsigned long,64ul>::__hash_len_17_to_32(a2, a3);
  }
  else
  {
    return std::__murmur2_or_cityhash<unsigned long,64ul>::__hash_len_0_to_16(a2, a3);
  }
}
