/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C090
// Address: 0x000000000008C090

//----- (000000000008C090) ----------------------------------------------------
unsigned __int64 __fastcall sub_8C090(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  unsigned __int64 result; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rdi
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rbp
  __int64 v40; // r12
  unsigned __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // r10
  __int64 v44; // r12
  unsigned __int64 v45; // r10
  __int64 v46; // r9
  __int64 v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // r11
  __int64 v50; // rdi
  __int64 v51; // r11
  __int64 v52; // rax
  __int64 i; // r15
  unsigned __int64 v54; // rbp
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rbp
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 v65; // r10
  __int64 v66; // rdx
  __int64 v67; // r11
  __int64 v68; // r9
  unsigned __int64 v69; // r12
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // r10
  unsigned __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rt0
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  __int64 v78; // [rsp+0h] [rbp-40h]
  unsigned __int64 v79; // [rsp+8h] [rbp-38h]

  if ( a3 > 0x20 )
  {
    if ( a3 > 0x40 )
    {
      v33 = *(__int64 *)((char *)a2 + a3 - 40);
      v34 = *(__int64 *)((char *)a2 + a3 - 16);
      v35 = *(__int64 *)((char *)a2 + a3 - 56);
      v36 = *(__int64 *)((char *)a2 + a3 - 48);
      v37 = *(__int64 *)((char *)a2 + a3 - 24);
      v38 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (v37 ^ (v36 + a3))) >> 47) ^ v37 ^ (0x9DDFEA08EB382D69LL * (v37 ^ (v36 + a3)))))
           ^ ((0x9DDFEA08EB382D69LL
             * (((0x9DDFEA08EB382D69LL * (v37 ^ (v36 + a3))) >> 47) ^ v37 ^ (0x9DDFEA08EB382D69LL * (v37 ^ (v36 + a3))))) >> 47));
      v39 = a3 + *(__int64 *)((char *)a2 + a3 - 64);
      v40 = v35 + v39;
      v41 = v35 + v34;
      v42 = v36 + v40;
      v43 = __ROL8__(v42, 20);
      v44 = v33 + v42;
      v45 = __ROL8__(v38 + v33 + v39, 43) + v39 + v43;
      v46 = *(__int64 *)((char *)a2 + a3 - 8);
      v47 = v41 + *(__int64 *)((char *)a2 + a3 - 32) - 0x4B6D499041670D8DLL;
      v48 = v34 + v47 + v37;
      v49 = __ROL8__(v48, 20);
      v50 = v46 + v48;
      v51 = __ROL8__(v46 + v33 + v47, 43) + v47 + v49;
      v78 = *a2;
      v52 = *a2 - 0x4B6D499041670D8DLL * v33;
      v79 = (a3 - 1) & 0xFFFFFFFFFFFFFFC0LL;
      for ( i = 64; ; i += 64 )
      {
        v54 = v38;
        v55 = a2[(unsigned __int64)i / 8 - 7];
        v56 = a2[(unsigned __int64)i / 8 - 6];
        v57 = v55 + v41 + v44 + v52;
        v58 = a2[(unsigned __int64)i / 8 - 2];
        v59 = a2[(unsigned __int64)i / 8 - 3];
        v41 = 0xB492B66FBE98F273LL * __ROL8__(v58 + v45 + v41, 22) + v59 + v44;
        v60 = v50 + v54;
        v61 = v78 - 0x4B6D499041670D8DLL * v45;
        v62 = a2[(unsigned __int64)i / 8 - 5];
        v63 = v62 + v61 + v50;
        v64 = v56 + v61 + v55;
        v44 = v62 + v64;
        v65 = __ROL8__(v64, 20) + v61;
        v38 = v51 ^ (0xB492B66FBE98F273LL * __ROL8__(v57, 27));
        v52 = 0xB492B66FBE98F273LL * __ROL8__(v60, 31);
        v45 = __ROL8__(v38 + v63, 43) + v65;
        v66 = a2[(unsigned __int64)i / 8 - 1];
        v67 = a2[(unsigned __int64)i / 8 - 4] + v52 + v51;
        v68 = v58 + v67 + v59;
        v50 = v66 + v68;
        v51 = __ROL8__(v66 + v67 + v41 + v56, 43) + __ROL8__(v68, 20) + v67;
        if ( v79 == i )
          break;
        v78 = a2[(unsigned __int64)i / 8];
      }
      v69 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v50 ^ v44)) >> 47) ^ v50 ^ (0x9DDFEA08EB382D69LL * (v50 ^ v44)));
      v70 = 0x9DDFEA08EB382D69LL * (v69 ^ (v69 >> 47)) + v38 - 0x4B6D499041670D8DLL * (v41 ^ (v41 >> 47));
      v71 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v51 ^ v45)) >> 47) ^ v51 ^ (0x9DDFEA08EB382D69LL * (v51 ^ v45)));
      v72 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * ((v52 - 0x622015F714C7D297LL * (v71 ^ (v71 >> 47))) ^ v70)) >> 47)
           ^ (v52 - 0x622015F714C7D297LL * (v71 ^ (v71 >> 47)))
           ^ (0x9DDFEA08EB382D69LL * ((v52 - 0x622015F714C7D297LL * (v71 ^ (v71 >> 47))) ^ v70)));
      return 0x9DDFEA08EB382D69LL * (v72 ^ (v72 >> 47));
    }
    else
    {
      v5 = a2[2];
      v6 = a2[3];
      v8 = *(__int64 *)((char *)a2 + a3 - 16);
      v9 = *a2 - 0x3C5A37A36834CED9LL * (v8 + a3);
      v10 = __ROL8__(v6 + v9, 12);
      v11 = __ROL8__(v9, 27);
      v12 = a2[1] + v9;
      v13 = v11 + __ROL8__(v12, 57);
      v14 = v5 + v12;
      v15 = v10 + v13 + __ROL8__(v14, 33);
      v16 = *(__int64 *)((char *)a2 + a3 - 32) + v5;
      v17 = v6 + v14;
      v18 = *(__int64 *)((char *)a2 + a3 - 8) + v6;
      v19 = __ROL8__(v18 + v16, 12);
      v20 = __ROL8__(v16, 27);
      v21 = *(__int64 *)((char *)a2 + a3 - 24) + v16;
      v22 = __ROL8__(v21, 57);
      v23 = v8 + v21;
      v24 = __ROL8__(v23, 33) + v19 + v22 + v17 + v20;
      v25 = v15
          - 0x3C5A37A36834CED9LL
          * ((0x9AE16A3B2F90404FLL * v24 - 0x3C5A37A36834CED9LL * (v15 + v23 + v18))
           ^ ((0x9AE16A3B2F90404FLL * v24 - 0x3C5A37A36834CED9LL * (v15 + v23 + v18)) >> 47));
      return 0x9AE16A3B2F90404FLL * (v25 ^ (v25 >> 47));
    }
  }
  else if ( a3 > 0x10 )
  {
    v27 = a2[1];
    v28 = *(__int64 *)((char *)a2 + a3 - 8);
    v29 = 0xC3A5C85C97CB3127LL * *(__int64 *)((char *)a2 + a3 - 16) + __ROL8__(0xB492B66FBE98F273LL * *a2 - v27, 21);
    v30 = a3 - 0x4B6D499041670D8DLL * *a2 - 0x9AE16A3B2F90404FLL * v28;
    v31 = __ROL8__(v27 ^ 0xC949D7C7509E6557LL, 44);
    v32 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL
           * ((v31 + v30) ^ (v29 + (((0x9AE16A3B2F90404FLL * v28) >> 30) | (0xBE41013C00000000LL * v28))))) >> 47)
         ^ (v31 + v30)
         ^ (0x9DDFEA08EB382D69LL
          * ((v31 + v30) ^ (v29 + (((0x9AE16A3B2F90404FLL * v28) >> 30) | (0xBE41013C00000000LL * v28))))));
    return 0x9DDFEA08EB382D69LL * (v32 ^ (v32 >> 47));
  }
  else if ( a3 < 9 )
  {
    if ( a3 < 4 )
    {
      result = 0x9AE16A3B2F90404FLL;
      if ( a3 )
      {
        v77 = (0x9AE16A3B2F90404FLL
             * (*(unsigned __int8 *)a2 | ((unsigned __int64)*((unsigned __int8 *)a2 + (a3 >> 1)) << 8)))
            ^ (0xC949D7C7509E6557LL * ((unsigned int)a3 + 4 * *((unsigned __int8 *)a2 + a3 - 1)));
        return 0x9AE16A3B2F90404FLL * (v77 ^ (v77 >> 47));
      }
    }
    else
    {
      v76 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (*(unsigned int *)((char *)a2 + a3 - 4) ^ (a3 + (unsigned int)(8 * *(_DWORD *)a2)))) >> 47)
           ^ *(unsigned int *)((char *)a2 + a3 - 4)
           ^ (0x9DDFEA08EB382D69LL * (*(unsigned int *)((char *)a2 + a3 - 4) ^ (a3 + (unsigned int)(8 * *(_DWORD *)a2)))));
      return 0x9DDFEA08EB382D69LL * (v76 ^ (v76 >> 47));
    }
  }
  else
  {
    v73 = *(__int64 *)((char *)a2 + a3 - 8);
    v74 = __ROR8__(v73 + a3, a3);
    v75 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v74 ^ *a2)) >> 47) ^ v74 ^ (0x9DDFEA08EB382D69LL * (v74 ^ *a2)));
    return v73 ^ (0x9DDFEA08EB382D69LL * (v75 ^ (v75 >> 47)));
  }
  return result;
}
