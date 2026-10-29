/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D570
// Address: 0x000000010004D570

//----- (000000010004D570) ----------------------------------------------------
unsigned __int64 __fastcall sub_10004D570(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r10
  _QWORD *v18; // r12
  __int64 v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r13
  __int64 v37; // r9
  unsigned __int64 v38; // r8
  __int64 v39; // r10
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // r13
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r11
  __int64 v46; // r14
  __int64 v47; // r10
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned __int64 v52; // r15
  __int64 v53; // r11
  __int64 v54; // r12
  unsigned __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // r10
  __int64 v60; // r13
  __int64 v61; // r11
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned __int64 v65; // r13
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  __int64 v70; // [rsp+0h] [rbp-40h]
  unsigned __int64 v71; // [rsp+8h] [rbp-38h]
  _QWORD *v72; // [rsp+10h] [rbp-30h]

  v4 = a3;
  if ( a3 > 0x20 )
  {
    if ( a3 > 0x40 )
    {
      v34 = *(_QWORD *)((char *)a2 + a3 - 40);
      v35 = *(_QWORD *)((char *)a2 + a3 - 16);
      v36 = *(_QWORD *)((char *)a2 + a3 - 56);
      v37 = *(_QWORD *)((char *)a2 + a3 - 48);
      v38 = v35 + v36;
      v39 = *(_QWORD *)((char *)a2 + a3 - 24);
      v40 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL * (v39 ^ (v37 + a3))) ^ v39 ^ ((0x9DDFEA08EB382D69LL * (v39 ^ (v37 + a3))) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * ((0x9DDFEA08EB382D69LL * (v39 ^ (v37 + a3))) ^ v39 ^ ((0x9DDFEA08EB382D69LL * (v39 ^ (v37 + a3))) >> 47))) >> 47));
      v41 = a3 + *(_QWORD *)((char *)a2 + a3 - 64);
      v42 = v41 + v37 + v36;
      v43 = __ROL8__(v40 + v34 + v41, 43) + v41 + __ROL8__(v42, 20);
      v44 = *(_QWORD *)((char *)a2 + a3 - 8);
      v45 = v38 + *(_QWORD *)((char *)a2 + v4 - 32) - 0x4B6D499041670D8DLL;
      v46 = v45 + v35 + v39;
      v47 = v44 + v46;
      v48 = __ROL8__(v45 + v34 + v44, 43);
      v49 = v34 + v42;
      v50 = *a2 - 0x4B6D499041670D8DLL * v34;
      v51 = v48 + v45 + __ROL8__(v46, 20);
      v71 = (v4 - 1) & 0xFFFFFFFFFFFFFFC0LL;
      v72 = a2;
      v52 = 0;
      do
      {
        v53 = v72[v52 / 8 + 1];
        v54 = v72[v52 / 8 + 2];
        v70 = v72[v52 / 8 + 6];
        v55 = v51 ^ (0xB492B66FBE98F273LL * __ROL8__(v53 + v38 + v49 + v50, 27));
        v56 = v72[v52 / 8 + 5];
        v38 = 0xB492B66FBE98F273LL * __ROL8__(v70 + v43 + v38, 22) + v56 + v49;
        v50 = 0xB492B66FBE98F273LL * __ROL8__(v47 + v40, 31);
        v40 = v55;
        v57 = v72[v52 / 8 + 3];
        v58 = v72[v52 / 8] - 0x4B6D499041670D8DLL * v43;
        v59 = v57 + v58 + v47;
        v60 = v58 + v54 + v53;
        v61 = __ROL8__(v60, 20);
        v49 = v57 + v60;
        v62 = v72[v52 / 8 + 4] + v50 + v51;
        v63 = v72[v52 / 8 + 7];
        v43 = __ROL8__(v55 + v59, 43) + v61 + v58;
        v64 = v62 + v70 + v56;
        v47 = v63 + v64;
        v51 = __ROL8__(v63 + v62 + v38 + v54, 43) + __ROL8__(v64, 20) + v62;
        v52 += 64LL;
      }
      while ( v71 != v52 );
      v65 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v47 ^ v49)) ^ v47 ^ ((0x9DDFEA08EB382D69LL * (v47 ^ v49)) >> 47));
      v66 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v51 ^ v43)) ^ v51 ^ ((0x9DDFEA08EB382D69LL * (v51 ^ v43)) >> 47));
      v67 = v50 - 0x622015F714C7D297LL * (v66 ^ (v66 >> 47));
      v68 = 0x9DDFEA08EB382D69LL
          * (v67 ^ (0x9DDFEA08EB382D69LL * (v65 ^ (v65 >> 47)) + v55 - 0x4B6D499041670D8DLL * (v38 ^ (v38 >> 47))));
      return 0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v68 ^ v67 ^ (v68 >> 47)))
            ^ ((0x9DDFEA08EB382D69LL * (v68 ^ v67 ^ (v68 >> 47))) >> 47));
    }
    else
    {
      v8 = a2[2];
      v9 = a2[3];
      v10 = *(_QWORD *)((char *)a2 + a3 - 16);
      v11 = *a2 - 0x3C5A37A36834CED9LL * (v10 + a3);
      v12 = v11 + v9;
      v13 = v11;
      v14 = a2[1] + v11;
      v15 = v8 + v14;
      v16 = *(_QWORD *)((char *)a2 + v4 - 32) + v8;
      v17 = v9 + *(_QWORD *)((char *)a2 + v4 - 8);
      v18 = a2;
      v19 = v17 + v16;
      v20 = v16;
      v21 = *(_QWORD *)((char *)v18 + v4 - 24) + v16;
      v22 = __ROL8__(v21, 57);
      v23 = v10 + v21;
      v24 = v15 + __ROL8__(v23, 33) + __ROL8__(v19, 12) + v22 + v9 + __ROL8__(v20, 27);
      v25 = __ROL8__(v12, 12) + __ROL8__(v13, 27) + __ROL8__(v14, 57) + __ROL8__(v15, 33);
      v26 = v25
          - 0x3C5A37A36834CED9LL
          * ((0x9AE16A3B2F90404FLL * v24 - 0x3C5A37A36834CED9LL * (v25 + v23 + v17))
           ^ ((0x9AE16A3B2F90404FLL * v24 - 0x3C5A37A36834CED9LL * (v25 + v23 + v17)) >> 47));
      return 0x9AE16A3B2F90404FLL * (v26 ^ (v26 >> 47));
    }
  }
  else
  {
    if ( a3 > 0x10 )
    {
      v28 = 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)a2 + a3 - 8);
      v29 = a2[1];
      v30 = 0xC3A5C85C97CB3127LL * *(_QWORD *)((char *)a2 + v4 - 16);
      v4 = __ROL8__(0xB492B66FBE98F273LL * *a2 - v29, 21);
      v31 = __ROL8__(v29 ^ 0xC949D7C7509E6557LL, 44) + a3 - 0x4B6D499041670D8DLL * *a2 - v28;
      v32 = v30 + __ROL8__(v28, 34);
LABEL_8:
      v33 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v31 ^ (v4 + v32))) ^ v31 ^ ((0x9DDFEA08EB382D69LL * (v31 ^ (v4 + v32))) >> 47));
      return 0x9DDFEA08EB382D69LL * (v33 ^ (v33 >> 47));
    }
    if ( a3 >= 9 )
    {
      v5 = *(_QWORD *)((char *)a2 + a3 - 8);
      v6 = __ROR8__(v5 + v4, v4);
      return v5
           ^ (0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL * (v6 ^ *a2)) ^ v6 ^ ((0x9DDFEA08EB382D69LL * (v6 ^ *a2)) >> 47)))
             ^ ((0x9DDFEA08EB382D69LL
               * ((0x9DDFEA08EB382D69LL * (v6 ^ *a2)) ^ v6 ^ ((0x9DDFEA08EB382D69LL * (v6 ^ *a2)) >> 47))) >> 47)));
    }
    if ( a3 >= 4 )
    {
      v31 = *(unsigned int *)((char *)a2 + a3 - 4);
      v32 = (unsigned int)(8 * *(_DWORD *)a2);
      goto LABEL_8;
    }
    result = 0x9AE16A3B2F90404FLL;
    if ( a3 )
    {
      v69 = (0x9AE16A3B2F90404FLL
           * (*(unsigned __int8 *)a2 | (unsigned __int64)(*((unsigned __int8 *)a2 + (a3 >> 1)) << 8)))
          ^ (0xC949D7C7509E6557LL * (a3 | (4 * (unsigned int)*((unsigned __int8 *)a2 + a3 - 1))));
      return 0x9AE16A3B2F90404FLL * (v69 ^ (v69 >> 47));
    }
  }
  return result;
}
