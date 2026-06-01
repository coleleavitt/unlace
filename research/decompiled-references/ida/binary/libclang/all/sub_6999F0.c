unsigned __int64 __fastcall sub_6999F0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // r10
  unsigned __int64 v29; // rbp
  __int64 v30; // r12
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // r9
  __int64 v35; // r13
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // r9
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rsi
  __int64 v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // r9
  __int64 v55; // r13
  __int64 v56; // r11
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rbx
  __int64 v60; // r12
  __int64 v61; // r13
  unsigned __int64 v62; // rdi
  __int64 v63; // r8
  unsigned __int64 v64; // r10
  unsigned __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // r10
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // r11
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned __int64 v77; // rax
  _QWORD *v78; // [rsp+0h] [rbp-48h]
  unsigned __int64 v79; // [rsp+8h] [rbp-40h]

  v3 = a2 - (_QWORD)a1;
  if ( (unsigned __int64)(a2 - (_QWORD)a1) > 0x40 )
  {
    v8 = a1[6];
    v9 = a1[5];
    v10 = a1[2];
    v11 = a1[3];
    v78 = (_QWORD *)((char *)a1 + (v3 & 0xFFFFFFFFFFFFFFC0LL));
    v12 = a1[1];
    v13 = a1 + 8;
    v14 = *(v13 - 8) + 0x298DF016A9F64655LL;
    v15 = __ROL8__(v12 - 0x73D22641534B4D52LL, 27);
    v16 = v14 + v10 + v12;
    v17 = __ROL8__(v16, 20);
    v18 = (0xB492B66FBE98F273LL * v15) ^ 0xF7ACCA5326449396LL;
    v19 = v9 - 0x7323D61940A0DA1FLL - 0x4B6D499041670D8DLL * __ROL8__(v8 - 0x414BFF9ED66A691CLL, 22);
    v20 = v11 - 0xAE502812AB8D92LL;
    v21 = v16 + v11;
    v22 = *(v13 - 1);
    v23 = v14 + v17 + __ROR8__(v18 + v14 + v20, 21);
    v24 = *(v13 - 4) + 0x4BF62CB950C3753ALL;
    v25 = v24 + v9 + v8;
    v26 = v19 + v24 + v10 + v22;
    v27 = v25 + v22;
    v28 = v24 + __ROL8__(v25, 20) + __ROR8__(v26, 21);
    v29 = 0x544962662A7EE1A4LL;
    if ( (v3 & 0xFFFFFFFFFFFFFFC0LL) == 0x40 )
      goto LABEL_15;
    v79 = v3;
    do
    {
      v30 = v13[6];
      v31 = v18;
      v32 = v21 + v19;
      v33 = v23 + v19;
      v34 = v13[1];
      v35 = v13[5];
      v36 = *v13 - 0x4B6D499041670D8DLL * v23;
      v37 = __ROL8__(v29 + v34 + v32, 27);
      v29 = 0xB492B66FBE98F273LL * __ROL8__(v27 + v31, 31);
      v38 = v13[2];
      v19 = v35 + v21 - 0x4B6D499041670D8DLL * __ROL8__(v30 + v33, 22);
      v39 = v13[3];
      v18 = v28 ^ (0xB492B66FBE98F273LL * v37);
      v40 = v36 + v34 + v38;
      v41 = v29 + v13[4] + v28;
      v21 = v39 + v40;
      v42 = v41 + v35 + v30;
      v23 = __ROR8__(v18 + v36 + v39 + v27, 21) + __ROL8__(v40, 20) + v36;
      v43 = v13[7];
      v44 = __ROR8__(v19 + v41 + v43 + v38, 21);
      v13 += 8;
      v27 = v42 + v43;
      v28 = v44 + v41 + __ROL8__(v42, 20);
    }
    while ( v78 != v13 );
    v3 = v79;
    if ( (v79 & 0x3F) != 0 )
    {
LABEL_15:
      v54 = *(_QWORD *)(a2 - 16);
      v55 = *(_QWORD *)(a2 - 56);
      v56 = *(_QWORD *)(a2 - 24);
      v57 = __ROL8__(v29 + v55 + v21 + v19, 27);
      v29 = 0xB492B66FBE98F273LL * __ROL8__(v27 + v18, 31);
      v58 = *(_QWORD *)(a2 - 48);
      v19 = v56 + v21 - 0x4B6D499041670D8DLL * __ROL8__(v54 + v23 + v19, 22);
      v59 = *(_QWORD *)(a2 - 40);
      v60 = *(_QWORD *)(a2 - 64) - 0x4B6D499041670D8DLL * v23;
      v61 = v60 + v58 + v55;
      v62 = v28 ^ (0xB492B66FBE98F273LL * v57);
      v63 = v60 + v59 + v27;
      v64 = v29 + *(_QWORD *)(a2 - 32) + v28;
      v21 = v61 + v59;
      v65 = v64 + v56 + v54;
      v23 = v60 + __ROL8__(v61, 20) + __ROR8__(v62 + v63, 21);
      v66 = *(_QWORD *)(a2 - 8);
      v67 = __ROR8__(v19 + v64 + v66 + v58, 21);
      v27 = v65 + v66;
      v28 = v67 + __ROL8__(v65, 20) + v64;
      v18 = v62;
    }
    v45 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v28 ^ v23)) >> 47) ^ v28 ^ (0x9DDFEA08EB382D69LL * (v28 ^ v23)));
    v46 = 0x9DDFEA08EB382D69LL * ((v45 >> 47) ^ v45) + v29 - 0x4B6D499041670D8DLL * ((v3 >> 47) ^ v3);
    v47 = 0x9DDFEA08EB382D69LL
        * (v46
         ^ (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * (v27 ^ (0x9DDFEA08EB382D69LL * (v27 ^ v21)) ^ ((0x9DDFEA08EB382D69LL * (v27 ^ v21)) >> 47)))
           ^ ((0x9DDFEA08EB382D69LL
             * (v27 ^ (0x9DDFEA08EB382D69LL * (v27 ^ v21)) ^ ((0x9DDFEA08EB382D69LL * (v27 ^ v21)) >> 47))) >> 47))
          + 0xB492B66FBE98F273LL * (v19 ^ (v19 >> 47))
          + v18));
    return 0x9DDFEA08EB382D69LL
         * (((0x9DDFEA08EB382D69LL * (v47 ^ v46 ^ (v47 >> 47))) >> 47)
          ^ (0x9DDFEA08EB382D69LL * (v47 ^ v46 ^ (v47 >> 47))));
  }
  else
  {
    if ( v3 - 4 <= 4 )
    {
      v4 = *(unsigned int *)(a2 - 4) ^ 0xFF51AFD7ED558CCDLL;
      v5 = v3 + 8LL * *(unsigned int *)a1;
LABEL_4:
      v6 = 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * (v4 ^ v5)) ^ v4 ^ ((0x9DDFEA08EB382D69LL * (v4 ^ v5)) >> 47));
      return 0x9DDFEA08EB382D69LL * ((v6 >> 47) ^ v6);
    }
    if ( v3 - 9 <= 7 )
    {
      v51 = *(_QWORD *)(a2 - 8);
      v52 = __ROR8__(v3 + v51, v3);
      v53 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v52 ^ *a1 ^ 0xFF51AFD7ED558CCDLL))
           ^ v52
           ^ ((0x9DDFEA08EB382D69LL * (v52 ^ *a1 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
      return v51 ^ (0x9DDFEA08EB382D69LL * (v53 ^ (v53 >> 47)));
    }
    else
    {
      if ( v3 - 17 <= 0xF )
      {
        v48 = 0xB492B66FBE98F273LL * *a1;
        v49 = a1[1];
        v50 = 0x9AE16A3B2F90404FLL * *(_QWORD *)(a2 - 8);
        v4 = v48 + v3 - 0xAE502812AA7333LL + __ROR8__(v49 ^ 0xC949D7C7509E6557LL, 20) - v50;
        v5 = __ROR8__(v50 ^ 0xFF51AFD7ED558CCDLL, 30)
           + __ROL8__(v48 - v49, 21)
           - 0x3C5A37A36834CED9LL * *(_QWORD *)(a2 - 16);
        goto LABEL_4;
      }
      if ( v3 > 0x20 )
      {
        v69 = *(_QWORD *)(a2 - 16);
        v70 = a1[3];
        v71 = a1[2];
        v72 = *a1 - 0x3C5A37A36834CED9LL * (v3 + v69);
        v73 = v72 + a1[1];
        v74 = v73 + v71;
        v75 = *(_QWORD *)(a2 - 32) + v71;
        v76 = __ROR8__(v74, 31) + __ROL8__(v72, 27) + __ROR8__(v73, 7) + __ROL8__(v70 + v72, 12);
        v77 = 0xC3A5C85C97CB3127LL * (v76 + *(_QWORD *)(a2 - 8) + v75 + *(_QWORD *)(a2 - 24) + v69)
            - 0x651E95C4D06FBFB1LL
            * (v74
             + __ROR8__(v75 + *(_QWORD *)(a2 - 24) + v69, 31)
             + __ROR8__(v75 + *(_QWORD *)(a2 - 24), 7)
             + v70
             + __ROL8__(v75, 27)
             + __ROL8__(v75 + *(_QWORD *)(a2 - 8), 12));
        return 0x9AE16A3B2F90404FLL
             * ((v76 + ((0xC3A5C85C97CB3127LL * (v77 ^ (v77 >> 47))) ^ 0xFF51AFD7ED558CCDLL))
              ^ ((v76 + ((0xC3A5C85C97CB3127LL * (v77 ^ (v77 >> 47))) ^ 0xFF51AFD7ED558CCDLL)) >> 47));
      }
      else
      {
        result = 0x65B0C5ECC2C5CC82LL;
        if ( v3 )
        {
          v68 = (0xC949D7C7509E6557LL * ((unsigned int)v3 + 4 * *(unsigned __int8 *)(a2 - 1)))
              ^ (0x9AE16A3B2F90404FLL * (*(unsigned __int8 *)a1 + (*((unsigned __int8 *)a1 + (v3 >> 1)) << 8)))
              ^ 0xFF51AFD7ED558CCDLL;
          return 0x9AE16A3B2F90404FLL * (v68 ^ (v68 >> 47));
        }
      }
    }
  }
  return result;
}

