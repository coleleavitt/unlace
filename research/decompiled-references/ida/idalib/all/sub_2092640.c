__int64 __fastcall sub_2092640(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r9
  _QWORD *v20; // rbp
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  unsigned __int64 v23; // r12
  __int64 v24; // r11
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // r11
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r10
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // r9
  __int64 v36; // r13
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // r11
  __int64 v44; // r9
  unsigned __int64 v45; // r15
  __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // r8
  unsigned __int64 v51; // r13
  __int64 v52; // r10
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r11
  __int64 v57; // r8
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  _QWORD *v60; // rdi
  unsigned __int64 v61; // rsi
  __int64 v62; // r12
  __int64 v63; // rbp
  __int64 v64; // r14
  __int64 v65; // r15
  __int64 v66; // rsi
  __int64 v67; // r9
  __int64 v68; // rbx
  unsigned __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // rax
  unsigned __int64 v73; // r12
  __int64 v74; // r15
  __int64 v75; // r8
  unsigned __int64 v76; // rbp
  __int64 v77; // r10
  unsigned __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rbp
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // rbx
  __int64 v85; // r9
  __int64 v86; // r8
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rdx
  _QWORD *v89; // [rsp+0h] [rbp-38h]

  v2 = a2;
  if ( 8 * a2 > 0x40 )
  {
    v9 = a1[6];
    v10 = a1[1];
    v11 = a1[5];
    v12 = a1[2];
    v13 = a1[3];
    v14 = __ROL8__(v9 - 0x414BFF9ED66A691CLL, 22);
    v15 = __ROL8__(v10 - 0x73D22641534B4D52LL, 27);
    v16 = v11 + v9;
    v17 = v11 - 0x7323D61940A0DA1FLL;
    v18 = *a1 + 0x298DF016A9F64655LL;
    v89 = (_QWORD *)((char *)a1 + ((v2 * 8) & 0xFFFFFFFFFFFFFFC0LL));
    v19 = v12 + v10 + v18;
    v20 = a1 + 8;
    v21 = v17 - 0x4B6D499041670D8DLL * v14;
    v22 = v13 + v19;
    v23 = (0xB492B66FBE98F273LL * v15) ^ 0xF7ACCA5326449396LL;
    v24 = v19;
    v25 = a1[7];
    v26 = v23 + v18 + v13 - 0xAE502812AB8D92LL;
    v27 = __ROL8__(v24, 20) + v18;
    v28 = a1[4] + 0x4BF62CB950C3753ALL;
    v29 = v27 + __ROR8__(v26, 21);
    v30 = v12 + v25;
    v31 = v28 + v16;
    v32 = v25 + v28 + v16;
    v33 = __ROL8__(v31, 20) + v28 + __ROR8__(v21 + v28 + v30, 21);
    if ( v89 == a1 + 8 )
    {
      v34 = 0x544962662A7EE1A4LL;
      v45 = v23;
    }
    else
    {
      v34 = 0x544962662A7EE1A4LL;
      v35 = v23;
      do
      {
        v36 = v20[6];
        v37 = v21 + v22;
        v38 = v29 + v21;
        v39 = v20[1];
        v40 = v20[5];
        v41 = *v20 - 0x4B6D499041670D8DLL * v29;
        v42 = __ROL8__(v34 + v39 + v37, 27);
        v43 = v35 + v32;
        v44 = v20[3];
        v34 = 0xB492B66FBE98F273LL * __ROL8__(v43, 31);
        v21 = v40 + v22 - 0x4B6D499041670D8DLL * __ROL8__(v36 + v38, 22);
        v45 = v33 ^ (0xB492B66FBE98F273LL * v42);
        v46 = __ROR8__(v45 + v41 + v44 + v32, 21);
        v47 = v41 + v39 + v20[2];
        v22 = v44 + v47;
        v48 = __ROL8__(v47, 20) + v41;
        v49 = v20[4] + v33 + v34;
        v29 = v46 + v48;
        v50 = v20[7];
        v51 = v49 + v40 + v36;
        v52 = __ROR8__(v21 + v49 + v50 + v20[2], 21);
        v32 = v51 + v50;
        v20 += 8;
        v35 = v45;
        v33 = __ROL8__(v51, 20) + v49 + v52;
      }
      while ( v89 != v20 );
    }
    if ( ((v2 * 8) & 0x38) != 0 )
    {
      v60 = &a1[v2];
      v61 = v34 + v21;
      v62 = *(v60 - 7);
      v63 = *(v60 - 2);
      v64 = *(v60 - 3);
      v34 = 0xB492B66FBE98F273LL * __ROL8__(v45 + v32, 31);
      v65 = *(v60 - 8) - 0x4B6D499041670D8DLL * v29;
      v66 = __ROL8__(v22 + v62 + v61, 27);
      v67 = *(v60 - 6);
      v21 = v64 + v22 - 0x4B6D499041670D8DLL * __ROL8__(v63 + v29 + v21, 22);
      v68 = *(v60 - 5);
      v69 = v33 ^ (0xB492B66FBE98F273LL * v66);
      v70 = v68 + v32;
      v71 = v65 + v67 + v62;
      v22 = v71 + v68;
      v72 = v65 + v70;
      v73 = *(v60 - 4) + v33 + v34;
      v74 = __ROL8__(v71, 20) + v65;
      v75 = *(v60 - 1);
      v76 = v73 + v64 + v63;
      v29 = v74 + __ROR8__(v69 + v72, 21);
      v45 = v69;
      v77 = __ROR8__(v21 + v73 + v67 + v75, 21);
      v32 = v76 + v75;
      v33 = __ROL8__(v76, 20) + v73 + v77;
    }
    v53 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v33 ^ v29)) >> 47) ^ v33 ^ (0x9DDFEA08EB382D69LL * (v33 ^ v29)));
    v54 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v32 ^ v22)) >> 47) ^ v32 ^ (0x9DDFEA08EB382D69LL * (v32 ^ v22)));
    v55 = 0xB492B66FBE98F273LL * (((v2 * 8) >> 47) ^ (v2 * 8)) + v34 - 0x622015F714C7D297LL * (v53 ^ (v53 >> 47));
    v56 = 0x9DDFEA08EB382D69LL
        * (v55
         ^ (0x9DDFEA08EB382D69LL
          * (v55 ^ (v45 - 0x4B6D499041670D8DLL * ((v21 >> 47) ^ v21) - 0x622015F714C7D297LL * ((v54 >> 47) ^ v54))))
         ^ ((0x9DDFEA08EB382D69LL
           * (v55 ^ (v45 - 0x4B6D499041670D8DLL * ((v21 >> 47) ^ v21) - 0x622015F714C7D297LL * ((v54 >> 47) ^ v54)))) >> 47));
    return -348639895 * ((unsigned int)v56 ^ (HIDWORD(v56) >> 15));
  }
  else
  {
    if ( v2 * 8 - 4 <= 4 )
    {
      v3 = HIDWORD(a1[v2 - 1]) ^ 0xFF51AFD7ED558CCDLL;
      v4 = v2 * 8 + 8LL * *(unsigned int *)a1;
LABEL_4:
      v5 = 0x9DDFEA08EB382D69LL * ((0x9DDFEA08EB382D69LL * (v3 ^ v4)) ^ v3 ^ ((0x9DDFEA08EB382D69LL * (v3 ^ v4)) >> 47));
      return -348639895 * ((unsigned int)v5 ^ (HIDWORD(v5) >> 15));
    }
    if ( v2 * 8 - 9 <= 7 )
    {
      v57 = a1[v2 - 1];
      v58 = __ROR8__(v2 * 8 + v57, v2 * 8);
      v59 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v58 ^ *a1 ^ 0xFF51AFD7ED558CCDLL))
           ^ v58
           ^ ((0x9DDFEA08EB382D69LL * (v58 ^ *a1 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
      return (unsigned int)v57 ^ (-348639895 * ((unsigned int)v59 ^ (HIDWORD(v59) >> 15)));
    }
    if ( v2 * 8 - 17 <= 0xF )
    {
      v7 = 0xB492B66FBE98F273LL * *a1;
      v8 = a1[1];
      v3 = v7
         + v2 * 8
         - 0xAE502812AA7333LL
         + __ROR8__(v8 ^ 0xC949D7C7509E6557LL, 20)
         - 0x9AE16A3B2F90404FLL * a1[v2 - 1];
      v4 = __ROL8__(v7 - v8, 21)
         - 0x3C5A37A36834CED9LL * a1[v2 - 2]
         + __ROR8__((0x9AE16A3B2F90404FLL * a1[v2 - 1]) ^ 0xFF51AFD7ED558CCDLL, 30);
      goto LABEL_4;
    }
    if ( v2 > 4 )
    {
      v79 = a1[v2 - 2];
      v80 = a1[3];
      v81 = a1[2];
      v82 = *a1 - 0x3C5A37A36834CED9LL * (v2 * 8 + v79);
      v83 = v82 + a1[1];
      v84 = v83 + v81;
      v85 = a1[v2 - 4] + v81;
      v86 = __ROL8__(v80 + v82, 12) + __ROR8__(v83, 7) + __ROL8__(v82, 27) + __ROR8__(v84, 31);
      v87 = 0x9AE16A3B2F90404FLL
          * (__ROR8__(v79 + v85 + a1[v2 - 3], 31)
           + v80
           + __ROL8__(v85, 27)
           + __ROL8__(v85 + a1[v2 - 1], 12)
           + __ROR8__(v85 + a1[v2 - 3], 7)
           + v84)
          - 0x3C5A37A36834CED9LL * (v86 + a1[v2 - 1] + v79 + v85 + a1[v2 - 3]);
      v88 = v86 + ((0xC3A5C85C97CB3127LL * ((v87 >> 47) ^ v87)) ^ 0xFF51AFD7ED558CCDLL);
      return 797982799 * ((unsigned int)v88 ^ (v88 >> 47));
    }
    else
    {
      result = 3267742850LL;
      if ( v2 * 8 )
      {
        v78 = (0xC949D7C7509E6557LL * ((unsigned int)(v2 * 8) + 4 * HIBYTE(a1[v2 - 1])))
            ^ (0x9AE16A3B2F90404FLL * (*(unsigned __int8 *)a1 + (*((unsigned __int8 *)a1 + ((v2 * 8) >> 1)) << 8)))
            ^ 0xFF51AFD7ED558CCDLL;
        return 797982799 * ((unsigned int)v78 ^ (v78 >> 47));
      }
    }
  }
  return result;
}
