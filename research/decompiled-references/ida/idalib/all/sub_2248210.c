unsigned __int64 __fastcall sub_2248210(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r10
  __int64 v17; // r8
  _QWORD *v18; // rdi
  __int64 v19; // rbp
  unsigned __int64 v20; // r11
  __int64 v21; // r14
  __int64 v22; // r9
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // rbp
  _QWORD *v34; // r8
  __int64 v35; // r10
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rcx
  _QWORD *v38; // r15
  __int64 v39; // rbp
  __int64 v40; // r9
  __int64 v41; // r8
  unsigned __int64 v42; // rsi
  __int64 v43; // r12
  __int64 v44; // r11
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  __int64 v47; // r14
  __int64 v48; // rcx
  unsigned __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // r9
  __int64 v54; // rdx
  unsigned __int64 v55; // rbp
  __int64 v56; // r10
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // r9
  unsigned __int64 v65; // rdi
  __int64 v66; // r13
  __int64 v67; // rbp
  __int64 v68; // r14
  __int64 v69; // r8
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // r13
  __int64 v74; // r11
  __int64 v75; // rbx
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // r11
  unsigned __int64 v80; // r9
  unsigned __int64 v81; // r10
  unsigned __int64 v82; // rdx
  __int64 v83; // r10
  __int64 v84; // r11
  unsigned __int64 v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // rsi
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // rsi
  unsigned __int64 v91; // rdx
  unsigned __int64 v92; // rdx
  _QWORD *v93; // [rsp+0h] [rbp-40h]
  unsigned __int64 v94; // [rsp+0h] [rbp-40h]
  __int64 v95; // [rsp+8h] [rbp-38h]

  v2 = a2;
  v3 = a2 - (_QWORD)a1;
  if ( (unsigned __int64)(a2 - (_QWORD)a1) > 0x40 )
  {
    v13 = a1[1];
    v14 = a1[6];
    v15 = a1[3];
    v16 = *a1 + 0x298DF016A9F64655LL;
    v93 = (_QWORD *)((char *)a1 + (v3 & 0xFFFFFFFFFFFFFFC0LL));
    v17 = a1[2];
    v18 = a1 + 8;
    v19 = *(v18 - 4) + 0x4BF62CB950C3753ALL;
    v20 = (0xB492B66FBE98F273LL * __ROL8__(v13 - 0x73D22641534B4D52LL, 27)) ^ 0xF7ACCA5326449396LL;
    v21 = *(v18 - 3);
    v22 = v17 + v13 + v16;
    v23 = v21 - 0x7323D61940A0DA1FLL - 0x4B6D499041670D8DLL * __ROL8__(v14 - 0x414BFF9ED66A691CLL, 22);
    v24 = v16 + v15 - 0xAE502812AB8D92LL;
    v25 = __ROL8__(v22, 20) + v16;
    v26 = v15 + v22;
    v27 = *(v18 - 1);
    v28 = v25 + __ROR8__(v20 + v24, 21);
    v29 = v17 + v27;
    v30 = v19 + v21 + v14;
    v31 = v27 + v30;
    v32 = v19 + v29;
    v33 = __ROL8__(v30, 20) + v19;
    v34 = v93;
    v35 = v33 + __ROR8__(v23 + v32, 21);
    if ( v93 == v18 )
    {
      v36 = 0x544962662A7EE1A4LL;
      v49 = v20;
    }
    else
    {
      v36 = 0x544962662A7EE1A4LL;
      v94 = v3;
      v37 = v20;
      v95 = v2;
      v38 = v34;
      do
      {
        v39 = v18[6];
        v40 = v18[1];
        v41 = v23 + v26;
        v42 = v28 + v23;
        v43 = v18[5];
        v44 = v18[3];
        v45 = *v18 - 0x4B6D499041670D8DLL * v28;
        v46 = v36 + v40 + v41;
        v47 = v37 + v31;
        v48 = v18[2];
        v36 = 0xB492B66FBE98F273LL * __ROL8__(v47, 31);
        v23 = v43 + v26 - 0x4B6D499041670D8DLL * __ROL8__(v39 + v42, 22);
        v49 = v35 ^ (0xB492B66FBE98F273LL * __ROL8__(v46, 27));
        v50 = v45 + v40 + v48;
        v26 = v44 + v50;
        v51 = __ROR8__(v49 + v45 + v44 + v31, 21);
        v52 = __ROL8__(v50, 20) + v45;
        v53 = v18[4] + v35 + v36;
        v28 = v51 + v52;
        v54 = v18[7];
        v55 = v53 + v43 + v39;
        v56 = v48 + v54;
        v37 = v49;
        v35 = __ROL8__(v55, 20) + v53 + __ROR8__(v23 + v53 + v56, 21);
        v18 += 8;
        v31 = v55 + v54;
      }
      while ( v38 != v18 );
      v3 = v94;
      v2 = v95;
    }
    if ( (v3 & 0x3F) != 0 )
    {
      v64 = *(_QWORD *)(v2 - 16);
      v65 = v36 + v23;
      v66 = *(_QWORD *)(v2 - 56);
      v67 = *(_QWORD *)(v2 - 24);
      v68 = v49 + v31;
      v69 = *(_QWORD *)(v2 - 48);
      v70 = v64 + v28 + v23;
      v71 = *(_QWORD *)(v2 - 64) - 0x4B6D499041670D8DLL * v28;
      v72 = __ROL8__(v26 + v66 + v65, 27);
      v73 = v71 + v69 + v66;
      v36 = 0xB492B66FBE98F273LL * __ROL8__(v68, 31);
      v74 = v71;
      v23 = v67 + v26 - 0x4B6D499041670D8DLL * __ROL8__(v70, 22);
      v75 = *(_QWORD *)(v2 - 40);
      v76 = v35 ^ (0xB492B66FBE98F273LL * v72);
      v77 = v75 + v31;
      v26 = v73 + v75;
      v78 = *(_QWORD *)(v2 - 8);
      v28 = __ROL8__(v73, 20) + v74 + __ROR8__(v76 + v74 + v77, 21);
      v79 = *(_QWORD *)(v2 - 32) + v35 + v36;
      v80 = v79 + v67 + v64;
      v81 = v79 + v69 + v78;
      v49 = v76;
      v35 = __ROL8__(v80, 20) + v79 + __ROR8__(v23 + v81, 21);
      v31 = v80 + v78;
    }
    v57 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v35 ^ v28)) >> 47) ^ v35 ^ (0x9DDFEA08EB382D69LL * (v35 ^ v28)));
    v58 = 0x9DDFEA08EB382D69LL * ((v57 >> 47) ^ v57) + 0xB492B66FBE98F273LL * ((v3 >> 47) ^ v3) + v36;
    v59 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v31 ^ v26)) >> 47) ^ v31 ^ (0x9DDFEA08EB382D69LL * (v31 ^ v26)));
    v60 = 0x9DDFEA08EB382D69LL
        * (v58 ^ (v49 - 0x4B6D499041670D8DLL * ((v23 >> 47) ^ v23) - 0x622015F714C7D297LL * ((v59 >> 47) ^ v59)));
    v12 = v60 ^ v58 ^ (v60 >> 47);
    return 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v12) ^ ((0x9DDFEA08EB382D69LL * v12) >> 47));
  }
  if ( v3 - 4 <= 4 )
  {
    v4 = *(unsigned int *)(a2 - 4) ^ 0xFF51AFD7ED558CCDLL;
    v5 = 0x9DDFEA08EB382D69LL * (v4 ^ (v3 + 8LL * *(unsigned int *)a1));
    return 0x9DDFEA08EB382D69LL
         * ((0x9DDFEA08EB382D69LL * ((v5 >> 47) ^ v5 ^ v4)) ^ ((0x9DDFEA08EB382D69LL * ((v5 >> 47) ^ v5 ^ v4)) >> 47));
  }
  if ( v3 - 9 <= 7 )
  {
    v61 = *(_QWORD *)(a2 - 8);
    v62 = __ROR8__(v3 + v61, v3);
    v63 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v62 ^ *a1 ^ 0xFF51AFD7ED558CCDLL))
         ^ v62
         ^ ((0x9DDFEA08EB382D69LL * (v62 ^ *a1 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
    return v61 ^ (0x9DDFEA08EB382D69LL * (v63 ^ (v63 >> 47)));
  }
  if ( v3 - 17 <= 0xF )
  {
    v7 = 0xB492B66FBE98F273LL * *a1;
    v8 = a1[1];
    v9 = 0x9AE16A3B2F90404FLL * *(_QWORD *)(a2 - 8);
    v10 = __ROR8__(v8 ^ 0xC949D7C7509E6557LL, 20) + v7 + v3 - 0xAE502812AA7333LL - v9;
    v11 = 0x9DDFEA08EB382D69LL
        * (v10
         ^ (__ROL8__(v7 - v8, 21) - 0x3C5A37A36834CED9LL * *(_QWORD *)(a2 - 16) + __ROR8__(
                                                                                    v9 ^ 0xFF51AFD7ED558CCDLL,
                                                                                    30)));
    v12 = v11 ^ v10 ^ (v11 >> 47);
    return 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * v12) ^ ((0x9DDFEA08EB382D69LL * v12) >> 47));
  }
  if ( v3 > 0x20 )
  {
    v83 = *(_QWORD *)(a2 - 16);
    v84 = a1[3];
    v85 = 0xC3A5C85C97CB3127LL * (v83 + v3) + *a1;
    v86 = a1[2];
    v87 = v85 + a1[1];
    v88 = v87 + v86;
    v89 = *(_QWORD *)(v2 - 32) + v86;
    v90 = __ROL8__(v84 + v85, 12) + __ROR8__(v87, 7) + __ROL8__(v85, 27) + __ROR8__(v88, 31);
    v91 = 0x9AE16A3B2F90404FLL
        * (v88
         + __ROR8__(v89 + *(_QWORD *)(v2 - 24) + v83, 31)
         + v84
         + __ROL8__(v89, 27)
         + __ROL8__(v89 + *(_QWORD *)(v2 - 8), 12)
         + __ROR8__(v89 + *(_QWORD *)(v2 - 24), 7))
        - 0x3C5A37A36834CED9LL * (v90 + *(_QWORD *)(v2 - 8) + v89 + *(_QWORD *)(v2 - 24) + v83);
    v92 = v90 + ((0xC3A5C85C97CB3127LL * ((v91 >> 47) ^ v91)) ^ 0xFF51AFD7ED558CCDLL);
    return 0x9AE16A3B2F90404FLL * (v92 ^ (v92 >> 47));
  }
  else
  {
    result = 0x65B0C5ECC2C5CC82LL;
    if ( v3 )
    {
      v82 = (0xC949D7C7509E6557LL * ((unsigned int)v3 + 4 * *(unsigned __int8 *)(a2 - 1)))
          ^ (0x9AE16A3B2F90404FLL * ((*((unsigned __int8 *)a1 + (v3 >> 1)) << 8) + (unsigned int)*(unsigned __int8 *)a1))
          ^ 0xFF51AFD7ED558CCDLL;
      return 0x9AE16A3B2F90404FLL * (v82 ^ (v82 >> 47));
    }
  }
  return result;
}
