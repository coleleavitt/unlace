/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86778
// Address: 0x0000000000086778

//----- (0000000000086778) ----------------------------------------------------
unsigned __int64 __fastcall sub_86778(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // x14
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x12
  __int64 v7; // x15
  __int64 v8; // x8
  __int64 v9; // x16
  __int64 v10; // x12
  __int64 v11; // x13
  __int64 v12; // x10
  __int64 v13; // x9
  __int64 v14; // x14
  __int64 v15; // x16
  __int64 v16; // x8
  __int64 v17; // x14
  __int64 v18; // x9
  unsigned __int64 v19; // x9
  unsigned __int64 result; // x0
  __int64 v21; // x10
  unsigned __int64 v22; // x8
  __int64 v23; // x11
  unsigned __int64 v24; // x9
  __int64 v25; // x10
  unsigned __int64 v26; // x8
  unsigned __int64 v27; // x9
  char *v28; // x10
  __int64 v29; // x12
  __int64 v30; // x13
  __int64 v31; // x17
  __int64 v32; // x15
  __int64 v33; // x16
  unsigned __int64 v34; // x11
  __int64 v35; // x18
  unsigned __int64 v36; // x14
  __int64 v37; // x2
  __int64 v38; // x0
  unsigned __int64 v39; // x18
  __int64 v40; // x10
  unsigned __int64 v41; // x12
  __int64 v42; // x15
  __int64 v43; // x16
  __int64 v44; // x2
  _QWORD *v45; // x1
  __int64 v46; // x17
  __int64 v47; // t1
  __int64 v48; // x10
  unsigned __int64 v49; // x4
  __int64 v50; // x11
  unsigned __int64 v51; // x15
  __int64 v52; // x2
  __int64 v53; // x14
  unsigned __int64 v54; // x16
  unsigned __int64 v55; // x18
  unsigned __int64 v56; // x15
  unsigned __int64 i; // x13
  unsigned __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x15
  unsigned __int64 v61; // x17
  __int64 v62; // t2
  __int64 v63; // x5
  __int64 v64; // x18
  unsigned __int64 v65; // x2
  __int64 v66; // t2
  __int64 v67; // x4
  __int64 v68; // x0
  __int64 v69; // x3
  __int64 v70; // x14
  __int64 v71; // x6
  __int64 v72; // x0
  __int64 v73; // x10
  unsigned __int64 v74; // x17
  __int64 v75; // x11
  unsigned __int64 v76; // x9
  unsigned __int64 v77; // x10
  __int64 v78; // x9
  unsigned __int64 v79; // x10
  __int64 v80; // x8
  unsigned __int64 v81; // x9
  unsigned __int64 v82; // x8

  if ( a3 > 0x20 )
  {
    if ( a3 > 0x40 )
    {
      v28 = (char *)a2 + a3;
      v29 = *(__int64 *)((char *)a2 + a3 - 48);
      v30 = *(__int64 *)((char *)a2 + a3 - 40);
      v31 = *(__int64 *)((char *)a2 + a3 - 56);
      v32 = *(__int64 *)((char *)a2 + a3 - 32);
      v33 = *(__int64 *)((char *)a2 + a3 - 24);
      v34 = a3 - 1;
      v35 = v29 + a3;
      v36 = *(__int64 *)((char *)a2 + a3 - 64) + a3;
      v37 = *(__int64 *)((char *)a2 + a3 - 16);
      v38 = v36 + v31 + v29;
      v39 = (0x9DDFEA08EB382D69LL * (v33 ^ v35)) ^ v33 ^ ((0x9DDFEA08EB382D69LL * (v33 ^ v35)) >> 47);
      v40 = *((_QWORD *)v28 - 1);
      v41 = v31 + v37;
      v42 = v31 + v37 + v32 - 0x4B6D499041670D8DLL;
      v43 = v42 + v33 + v37;
      v44 = v42 + v30 + v40;
      v47 = *a2;
      v45 = a2 + 4;
      v46 = v47;
      v48 = v43 + v40;
      v49 = v34 & 0xFFFFFFFFFFFFFFC0LL;
      v50 = __ROR8__(v43, 44) + v42 + __ROR8__(v44, 21);
      v51 = __ROR8__(v38, 44) + v36;
      v52 = v30 + v36;
      v53 = v38 + v30;
      v54 = v47 - 0x4B6D499041670D8DLL * v30;
      v55 = 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v39) ^ ((0x9DDFEA08EB382D69LL * v39) >> 47));
      v56 = v51 + __ROR8__(v52 + v55, 21);
      for ( i = 64 - v49; ; i += 64LL )
      {
        v58 = v41 + v56;
        v59 = v45[1];
        v60 = v46 - 0x4B6D499041670D8DLL * v56;
        v61 = v54 + v53 + v41;
        v62 = __ROR8__(v55 + v48, 33);
        v64 = v45[2];
        v63 = v45[3];
        v54 = 0xB492B66FBE98F273LL * v62;
        v65 = 0xB492B66FBE98F273LL * v62 + v50 + *v45;
        v66 = __ROR8__(v58 + v64, 42);
        v67 = *(v45 - 1);
        v68 = v65 + v59;
        v41 = v59 + v53 - 0x4B6D499041670D8DLL * v66;
        v70 = *(v45 - 3);
        v69 = *(v45 - 2);
        v71 = v60 + v48 + v67;
        v72 = v68 + v64;
        v73 = v60 + v70 + v69;
        v74 = 0xB492B66FBE98F273LL * __ROR8__(v61 + v70, 37);
        v53 = v73 + v67;
        v55 = v74 ^ v50;
        v75 = __ROR8__(v73, 44) + v60;
        v48 = v72 + v63;
        v56 = v75 + __ROR8__(v71 + v55, 21);
        v50 = __ROR8__(v72, 44) + v65 + __ROR8__(v41 + v69 + v65 + v63, 21);
        if ( !i )
          break;
        v46 = v45[4];
        v45 += 8;
      }
      v76 = v55
          - 0x4B6D499041670D8DLL * (v41 ^ (v41 >> 47))
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v48 ^ v53)) ^ v48 ^ ((0x9DDFEA08EB382D69LL * (v48 ^ v53)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v48 ^ v53)) ^ v48 ^ ((0x9DDFEA08EB382D69LL * (v48 ^ v53)) >> 47))) >> 47));
      v77 = v54
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v50 ^ v56)) ^ v50 ^ ((0x9DDFEA08EB382D69LL * (v50 ^ v56)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v50 ^ v56)) ^ v50 ^ ((0x9DDFEA08EB382D69LL * (v50 ^ v56)) >> 47))) >> 47));
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v77 ^ v76)) ^ v77 ^ ((0x9DDFEA08EB382D69LL * (v77 ^ v76)) >> 47)))
            ^ ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (v77 ^ v76)) ^ v77 ^ ((0x9DDFEA08EB382D69LL * (v77 ^ v76)) >> 47))) >> 47));
    }
    else
    {
      v3 = *(__int64 *)((char *)a2 + a3 - 16);
      v4 = a2[2];
      v5 = a2[3];
      v6 = *a2 - 0x3C5A37A36834CED9LL * (v3 + a3);
      v7 = *(__int64 *)((char *)a2 + a3 - 32) + v4;
      v8 = v6 + a2[1] + v4;
      v9 = *(__int64 *)((char *)a2 + a3 - 8) + v5;
      v10 = __ROR8__(v6 + a2[1], 7) + __ROR8__(v6, 37) + __ROR8__(v6 + v5, 52);
      v11 = v9 + v7;
      v12 = *(__int64 *)((char *)a2 + a3 - 24) + v7;
      v13 = v8 + v5;
      v14 = v12 + v3;
      v15 = v14 + v9;
      v16 = v10 + __ROR8__(v8, 31);
      v17 = __ROR8__(v14, 31);
      v18 = v13 + __ROR8__(v7, 37) + __ROR8__(v12, 7) + __ROR8__(v11, 52);
      v19 = (0xC3A5C85C97CB3127LL * (v15 + v16) - 0x651E95C4D06FBFB1LL * (v18 + v17))
          ^ ((0xC3A5C85C97CB3127LL * (v15 + v16) - 0x651E95C4D06FBFB1LL * (v18 + v17)) >> 47);
      return 0x9AE16A3B2F90404FLL * ((v16 - 0x3C5A37A36834CED9LL * v19) ^ ((v16 - 0x3C5A37A36834CED9LL * v19) >> 47));
    }
  }
  else if ( a3 > 0x10 )
  {
    v21 = a2[1];
    v22 = 0xB492B66FBE98F273LL * *a2;
    v23 = *(__int64 *)((char *)a2 + a3 - 8);
    v24 = v21 ^ 0xC949D7C7509E6557LL;
    v25 = __ROR8__(v22 - v21, 43);
    v26 = v22 + a3 - 0x9AE16A3B2F90404FLL * v23 + __ROR8__(v24, 20);
    v27 = v25
        - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)a2 + a3 - 16)
        + ((0xBE41013C00000000LL * v23) | ((0x9AE16A3B2F90404FLL * v23) >> 30));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v27 ^ v26)) ^ v26 ^ ((0x9DDFEA08EB382D69LL * (v27 ^ v26)) >> 47)))
          ^ ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v27 ^ v26)) ^ v26 ^ ((0x9DDFEA08EB382D69LL * (v27 ^ v26)) >> 47))) >> 47));
  }
  else if ( a3 < 9 )
  {
    if ( a3 < 4 )
    {
      result = 0x9AE16A3B2F90404FLL;
      if ( a3 )
      {
        v82 = (0xC949D7C7509E6557LL * ((unsigned int)a3 + 4 * *((unsigned __int8 *)a2 + a3 - 1)))
            ^ (0x9AE16A3B2F90404FLL
             * (*(unsigned __int8 *)a2 | ((unsigned __int64)*((unsigned __int8 *)a2 + (a3 >> 1)) << 8)));
        return 0x9AE16A3B2F90404FLL * (v82 ^ (v82 >> 47));
      }
    }
    else
    {
      v80 = *(unsigned int *)((char *)a2 + a3 - 4);
      v81 = 0x9DDFEA08EB382D69LL * (((unsigned int)(8 * *(_DWORD *)a2) + a3) ^ v80);
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v81 ^ v80 ^ (v81 >> 47)))
            ^ ((0x9DDFEA08EB382D69LL * (v81 ^ v80 ^ (v81 >> 47))) >> 47));
    }
  }
  else
  {
    v78 = *(__int64 *)((char *)a2 + a3 - 8);
    v79 = ((v78 + a3) << -(char)a3) | ((v78 + a3) >> a3);
    return (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v79 ^ *a2)) ^ v79 ^ ((0x9DDFEA08EB382D69LL * (v79 ^ *a2)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v79 ^ *a2)) ^ v79 ^ ((0x9DDFEA08EB382D69LL * (v79 ^ *a2)) >> 47))) >> 47)))
         ^ v78;
  }
  return result;
}
