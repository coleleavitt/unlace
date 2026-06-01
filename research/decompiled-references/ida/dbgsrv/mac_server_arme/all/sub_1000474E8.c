/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000474E8
// Address: 0x00000001000474E8

//----- (00000001000474E8) ----------------------------------------------------
unsigned __int64 __fastcall sub_1000474E8(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // x9
  __int64 v4; // x10
  unsigned __int64 result; // x0
  __int64 v6; // x9
  __int64 v7; // x11
  __int64 v8; // x13
  __int64 v9; // x15
  __int64 v10; // x16
  __int64 v11; // x11
  __int64 v12; // x14
  __int64 v13; // x11
  __int64 v14; // x15
  __int64 v15; // x8
  __int64 v16; // x10
  __int64 v17; // x16
  __int64 v18; // x17
  __int64 v19; // x8
  __int64 v20; // x9
  unsigned __int64 v21; // x10
  __int64 v22; // x11
  unsigned __int64 v23; // x8
  unsigned __int64 v24; // x8
  __int64 v25; // x10
  unsigned __int64 v26; // x8
  __int64 v27; // x12
  unsigned __int64 v28; // x8
  unsigned __int64 v29; // x9
  unsigned __int64 v30; // x8
  __int64 v31; // x12
  __int64 v32; // x14
  __int64 v33; // x15
  unsigned __int64 v34; // x10
  __int64 v35; // x0
  __int64 v36; // x17
  __int64 v37; // x3
  unsigned __int64 v38; // x11
  unsigned __int64 v39; // x16
  unsigned __int64 v40; // x11
  unsigned __int64 v41; // x12
  __int64 v42; // t2
  __int64 v43; // x12
  unsigned __int64 v44; // x11
  unsigned __int64 v45; // x13
  __int64 v46; // x0
  unsigned __int64 v47; // x14
  __int64 v48; // x15
  unsigned __int64 v49; // x13
  _QWORD *v50; // x1
  __int64 v51; // t1
  unsigned __int64 v52; // x17
  __int64 v53; // x14
  __int64 v54; // x2
  __int64 v55; // x4
  __int64 v56; // x5
  unsigned __int64 v57; // x0
  __int64 v58; // x6
  __int64 v59; // x11
  __int64 v60; // x12
  __int64 v61; // x16
  __int64 v62; // x15
  __int64 v63; // x2
  unsigned __int64 v64; // x13
  unsigned __int64 v65; // x9
  unsigned __int64 v66; // x10
  __int64 v67; // x9
  unsigned __int64 v68; // x8
  unsigned __int64 v69; // x8

  if ( a3 > 0x20 )
  {
    if ( a3 <= 0x40 )
    {
      v6 = *(__int64 *)((char *)a2 + a3 - 16);
      v7 = *a2 - 0x3C5A37A36834CED9LL * (v6 + a3);
      v9 = a2[2];
      v8 = a2[3];
      v10 = __ROR8__(v7 + v8, 52);
      v11 = v7 + a2[1];
      v12 = v11 + v9;
      v13 = __ROR8__(v11, 7) + __ROR8__(*a2 - 0x3C5A37A36834CED9LL * (v6 + a3), 37) + v10;
      v14 = *(__int64 *)((char *)a2 + a3 - 32) + v9;
      v15 = *(__int64 *)((char *)a2 + a3 - 24) + v14;
      v16 = *(__int64 *)((char *)a2 + a3 - 8) + v8;
      v17 = __ROR8__(v16 + v14, 52);
      v18 = __ROR8__(v15, 7);
      v19 = v15 + v6;
      v20 = v19 + v16;
      v21 = 0x9AE16A3B2F90404FLL;
      v22 = v13 + __ROR8__(v12, 31);
      v23 = 0xC3A5C85C97CB3127LL * (v20 + v22)
          - 0x651E95C4D06FBFB1LL * (v12 + v8 + __ROR8__(v14, 37) + v18 + v17 + __ROR8__(v19, 31));
      v24 = v22 - 0x3C5A37A36834CED9LL * (v23 ^ (v23 >> 47));
      return (v24 ^ (v24 >> 47)) * v21;
    }
    v31 = *(__int64 *)((char *)a2 + a3 - 56);
    v32 = *(__int64 *)((char *)a2 + a3 - 16);
    v33 = *(__int64 *)((char *)a2 + a3 - 8);
    v34 = v31 + v32;
    v35 = *(__int64 *)((char *)a2 + a3 - 48);
    v36 = *(__int64 *)((char *)a2 + a3 - 40);
    v37 = *(__int64 *)((char *)a2 + a3 - 24);
    v38 = 0x9DDFEA08EB382D69LL
        * (v37 ^ ((0x9DDFEA08EB382D69LL * (v37 ^ (v35 + a3))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v37 ^ (v35 + a3))));
    v39 = 0x9DDFEA08EB382D69LL * (v38 ^ (v38 >> 47));
    v40 = *(__int64 *)((char *)a2 + a3 - 64) + a3;
    v41 = v40 + v31 + v35;
    v42 = __ROR8__(v41, 44);
    v43 = v41 + v36;
    v44 = v42 + v40 + __ROR8__(v36 + v40 + v39, 21);
    v45 = v34 + *(__int64 *)((char *)a2 + a3 - 32) - 0x4B6D499041670D8DLL;
    v46 = __ROR8__(v45 + v36 + v33, 21);
    v47 = v45 + v37 + v32;
    v48 = v47 + v33;
    v49 = __ROR8__(v47, 44) + v45 + v46;
    v51 = *a2;
    v50 = a2 + 4;
    v52 = v51 - 0x4B6D499041670D8DLL * v36;
    v53 = -(__int64)((a3 - 1) & 0xFFFFFFFFFFFFFFC0LL);
    do
    {
      v54 = *(v50 - 3);
      v55 = v50[2];
      v56 = v50[3];
      v57 = (0xB492B66FBE98F273LL * __ROR8__(v52 + v43 + v34 + v54, 37)) ^ v49;
      v58 = v50[1];
      v34 = v58 + v43 - 0x4B6D499041670D8DLL * __ROR8__(v34 + v44 + v55, 42);
      v52 = 0xB492B66FBE98F273LL * __ROR8__(v39 + v48, 33);
      v59 = *(v50 - 4) - 0x4B6D499041670D8DLL * v44;
      v61 = *(v50 - 2);
      v60 = *(v50 - 1);
      v62 = __ROR8__(v59 + v48 + v60 + v57, 21);
      v63 = v59 + v54 + v61;
      v43 = v63 + v60;
      v44 = __ROR8__(v63, 44) + v59 + v62;
      v64 = v52 + v49 + *v50;
      v48 = v64 + v58 + v55 + v56;
      v49 = __ROR8__(v64 + v58 + v55, 44) + v64 + __ROR8__(v34 + v61 + v64 + v56, 21);
      v50 += 8;
      v39 = v57;
      v53 += 64;
    }
    while ( v53 );
    v65 = v57
        - 0x4B6D499041670D8DLL * (v34 ^ (v34 >> 47))
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * (v48 ^ ((0x9DDFEA08EB382D69LL * (v48 ^ v43)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v48 ^ v43))))
         ^ ((0x9DDFEA08EB382D69LL
           * (v48 ^ ((0x9DDFEA08EB382D69LL * (v48 ^ v43)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v48 ^ v43)))) >> 47));
    v66 = v52
        - 0x622015F714C7D297LL
        * ((0x9DDFEA08EB382D69LL
          * (v49 ^ ((0x9DDFEA08EB382D69LL * (v49 ^ v44)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v49 ^ v44))))
         ^ ((0x9DDFEA08EB382D69LL
           * (v49 ^ ((0x9DDFEA08EB382D69LL * (v49 ^ v44)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v49 ^ v44)))) >> 47));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL
           * (v66 ^ ((0x9DDFEA08EB382D69LL * (v66 ^ v65)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v66 ^ v65))))
          ^ ((0x9DDFEA08EB382D69LL
            * (v66 ^ ((0x9DDFEA08EB382D69LL * (v66 ^ v65)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v66 ^ v65)))) >> 47));
  }
  else
  {
    if ( a3 > 0x10 )
    {
      v25 = a2[1];
      v26 = 0xB492B66FBE98F273LL * *a2;
      v27 = __ROR8__(0x9AE16A3B2F90404FLL * *(__int64 *)((char *)a2 + a3 - 8), 30) + __ROR8__(v26 - v25, 43);
      v28 = v26
          + a3
          + __ROR8__(v25 ^ 0xC949D7C7509E6557LL, 20)
          - 0x9AE16A3B2F90404FLL * *(__int64 *)((char *)a2 + a3 - 8);
      v21 = 0x9DDFEA08EB382D69LL;
      v29 = 0x9DDFEA08EB382D69LL * ((v27 - 0x3C5A37A36834CED9LL * *(__int64 *)((char *)a2 + a3 - 16)) ^ v28);
      v30 = v28 ^ (v29 >> 47) ^ v29;
LABEL_8:
      v24 = 0x9DDFEA08EB382D69LL * v30;
      return (v24 ^ (v24 >> 47)) * v21;
    }
    if ( a3 >= 9 )
    {
      v3 = *(__int64 *)((char *)a2 + a3 - 8);
      v4 = __ROR8__(v3 + a3, a3);
      return (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL
              * (v4 ^ ((0x9DDFEA08EB382D69LL * (v4 ^ *a2)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v4 ^ *a2))))
             ^ ((0x9DDFEA08EB382D69LL
               * (v4 ^ ((0x9DDFEA08EB382D69LL * (v4 ^ *a2)) >> 47) ^ (0x9DDFEA08EB382D69LL * (v4 ^ *a2)))) >> 47)))
           ^ v3;
    }
    if ( a3 >= 4 )
    {
      v67 = *(unsigned int *)((char *)a2 + a3 - 4);
      v21 = 0x9DDFEA08EB382D69LL;
      v68 = 0x9DDFEA08EB382D69LL * (((unsigned int)(8 * *(_DWORD *)a2) + a3) ^ v67);
      v30 = v67 ^ (v68 >> 47) ^ v68;
      goto LABEL_8;
    }
    result = 0x9AE16A3B2F90404FLL;
    if ( a3 )
    {
      v69 = (0xC949D7C7509E6557LL * (a3 | (4LL * *((unsigned __int8 *)a2 + a3 - 1))))
          ^ (0x9AE16A3B2F90404FLL
           * (*(unsigned __int8 *)a2 | ((unsigned __int64)*((unsigned __int8 *)a2 + (a3 >> 1)) << 8)));
      return 0x9AE16A3B2F90404FLL * (v69 ^ (v69 >> 47));
    }
  }
  return result;
}
