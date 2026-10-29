__int64 __fastcall sub_143F5A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // rsi
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // r12
  __int64 v36; // r11
  unsigned __int64 v37; // rbx
  __int64 v38; // r9
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r10
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // r8
  _QWORD *v48; // r11
  unsigned __int64 v49; // r9
  __int64 v50; // rbp
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r12
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rbp
  __int64 v58; // r10
  __int64 v59; // rsi
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // r12
  __int64 v63; // rsi
  __int64 v64; // r8
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r10
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rdx
  unsigned __int64 v71; // rdx
  char *v72; // rcx
  unsigned __int64 v73; // rdi
  __int64 v74; // rbp
  __int64 v75; // rbx
  __int64 v76; // r14
  __int64 v77; // r13
  __int64 v78; // rdi
  __int64 v79; // r11
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // rax
  unsigned __int64 v84; // rbp
  __int64 v85; // r13
  __int64 v86; // rsi
  unsigned __int64 v87; // rbx
  __int64 v88; // r8
  unsigned __int64 v89; // rdx
  __int64 v90; // rbx
  __int64 v91; // rbp
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rdi
  __int64 v95; // r11
  __int64 v96; // r8
  __int64 v97; // rdi
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rdx
  __int64 v100; // [rsp+0h] [rbp-48h]
  _QWORD *v101; // [rsp+8h] [rbp-40h]

  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v6;
  v7 = HIDWORD(v6);
  v8 = *(unsigned int *)(a3 + 12);
  v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v9;
  if ( v9 + 1 > v8 )
  {
    sub_2237220(a3, a3 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v9) = v7;
  v10 = *(unsigned int *)(a3 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_2237220(a3, a3 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = v5;
  v12 = HIDWORD(v5);
  v13 = *(unsigned int *)(a3 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a3, a3 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v14) = v12;
  v15 = *(_QWORD **)a3;
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v17 = 4 * v16;
  *(_DWORD *)(a3 + 8) = v16;
  v100 = v16;
  if ( (unsigned __int64)(4 * v16) > 0x40 )
  {
    v31 = v15[1];
    v32 = v15[6];
    v33 = v15[5];
    v34 = v15[2];
    v35 = v15[3];
    v101 = (_QWORD *)((char *)v15 + (v17 & 0xFFFFFFFFFFFFFFC0LL));
    v36 = v15[4] + 0x4BF62CB950C3753ALL;
    v37 = (0xB492B66FBE98F273LL * __ROL8__(v31 - 0x73D22641534B4D52LL, 27)) ^ 0xF7ACCA5326449396LL;
    v38 = *v15 + 0x298DF016A9F64655LL;
    v39 = v33 - 0x7323D61940A0DA1FLL - 0x4B6D499041670D8DLL * __ROL8__(v32 - 0x414BFF9ED66A691CLL, 22);
    v40 = v34 + v31 + v38;
    v41 = v35 + v40;
    v42 = __ROL8__(v40, 20) + v38 + __ROR8__(v37 + v38 + v35 - 0xAE502812AB8D92LL, 21);
    v43 = v15[7];
    v44 = v34 + v43;
    v45 = v36 + v33 + v32;
    v46 = v43 + v45;
    v47 = __ROL8__(v45, 20) + v36 + __ROR8__(v39 + v36 + v44, 21);
    v48 = v15 + 8;
    if ( v101 == v15 + 8 )
    {
      v49 = 0x544962662A7EE1A4LL;
      v60 = v37;
    }
    else
    {
      v49 = 0x544962662A7EE1A4LL;
      do
      {
        v50 = v48[1];
        v51 = v39 + v41;
        v52 = __ROL8__(v48[6] + v42 + v39, 22);
        v53 = v48[5];
        v54 = v48[2];
        v55 = *v48 - 0x4B6D499041670D8DLL * v42;
        v56 = __ROL8__(v49 + v50 + v51, 27);
        v57 = v55 + v54 + v50;
        v39 = v53 + v41 - 0x4B6D499041670D8DLL * v52;
        v58 = v48[3];
        v49 = 0xB492B66FBE98F273LL * __ROL8__(v37 + v46, 31);
        v59 = v58 + v46;
        v41 = v57 + v58;
        v60 = v47 ^ (0xB492B66FBE98F273LL * v56);
        v61 = v48[4] + v47 + v49;
        v62 = v61 + v48[6] + v53;
        v42 = __ROR8__(v60 + v55 + v59, 21) + __ROL8__(v57, 20) + v55;
        v63 = v48[7];
        v64 = v54 + v63;
        v46 = v62 + v63;
        v48 += 8;
        v47 = __ROL8__(v62, 20) + v61 + __ROR8__(v39 + v61 + v64, 21);
        v37 = v60;
      }
      while ( v101 != v48 );
    }
    if ( (v17 & 0x3C) != 0 )
    {
      v72 = (char *)v15 + v17;
      v73 = v49 + v39;
      v74 = *((_QWORD *)v72 - 7);
      v75 = *((_QWORD *)v72 - 2);
      v76 = *((_QWORD *)v72 - 3);
      v49 = 0xB492B66FBE98F273LL * __ROL8__(v60 + v46, 31);
      v77 = *((_QWORD *)v72 - 8) - 0x4B6D499041670D8DLL * v42;
      v78 = __ROL8__(v41 + v74 + v73, 27);
      v79 = *((_QWORD *)v72 - 6);
      v39 = v76 + v41 - 0x4B6D499041670D8DLL * __ROL8__(v75 + v42 + v39, 22);
      v80 = *((_QWORD *)v72 - 5);
      v81 = v80 + v46;
      v82 = v77 + v79 + v74;
      v41 = v82 + v80;
      v60 = v47 ^ (0xB492B66FBE98F273LL * v78);
      v83 = v77 + v81;
      v84 = *((_QWORD *)v72 - 4) + v47 + v49;
      v85 = __ROL8__(v82, 20) + v77;
      v86 = *((_QWORD *)v72 - 1);
      v87 = v84 + v76 + v75;
      v42 = v85 + __ROR8__(v60 + v83, 21);
      v88 = __ROR8__(v39 + v84 + v79 + v86, 21);
      v46 = v87 + v86;
      v47 = __ROL8__(v87, 20) + v84 + v88;
    }
    v65 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v47 ^ v42)) >> 47) ^ v47 ^ (0x9DDFEA08EB382D69LL * (v47 ^ v42)));
    v66 = 0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v46 ^ v41)) >> 47) ^ v46 ^ (0x9DDFEA08EB382D69LL * (v46 ^ v41)));
    v67 = 0xD24AD9BEFA63C9CCLL * v100 + v49 - 0x622015F714C7D297LL * ((v65 >> 47) ^ v65);
    v68 = 0x9DDFEA08EB382D69LL
        * (v67 ^ (v60 - 0x4B6D499041670D8DLL * (v39 ^ (v39 >> 47)) - 0x622015F714C7D297LL * ((v66 >> 47) ^ v66)));
    return -348639895
         * ((-348639895 * ((unsigned int)v68 ^ (unsigned int)v67 ^ (v68 >> 47)))
          ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v68 ^ v67 ^ (v68 >> 47))) >> 32) >> 15));
  }
  else if ( v17 - 4 > 4 )
  {
    if ( v17 - 9 <= 7 )
    {
      v69 = *(_QWORD *)((char *)v15 + v17 - 8);
      v70 = __ROR8__(v17 + v69, v17);
      v71 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v70 ^ *v15 ^ 0xFF51AFD7ED558CCDLL)) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (v70 ^ *v15 ^ 0xFF51AFD7ED558CCDLL))
           ^ v70);
      return (unsigned int)v69 ^ (-348639895 * ((unsigned int)v71 ^ (HIDWORD(v71) >> 15)));
    }
    else if ( v17 - 17 > 0xF )
    {
      if ( v17 > 0x20 )
      {
        v90 = *(_QWORD *)((char *)v15 + v17 - 16);
        v91 = v15[3];
        v92 = v15[2];
        v93 = *v15 - 0x3C5A37A36834CED9LL * (v17 + v90);
        v94 = v93 + v15[1];
        v95 = v94 + v92;
        v96 = *(_QWORD *)((char *)v15 + v17 - 32) + v92;
        v97 = __ROL8__(v91 + v93, 12) + __ROR8__(v94, 7) + __ROL8__(v93, 27) + __ROR8__(v95, 31);
        v98 = 0x9AE16A3B2F90404FLL
            * (__ROR8__(v96 + *(_QWORD *)((char *)v15 + v17 - 24) + v90, 31)
             + v91
             + __ROL8__(v96, 27)
             + __ROL8__(v96 + *(_QWORD *)((char *)v15 + v17 - 8), 12)
             + __ROR8__(v96 + *(_QWORD *)((char *)v15 + v17 - 24), 7)
             + v95)
            - 0x3C5A37A36834CED9LL
            * (v97 + *(_QWORD *)((char *)v15 + v17 - 8) + v96 + *(_QWORD *)((char *)v15 + v17 - 24) + v90);
        v99 = v97 + ((0xC3A5C85C97CB3127LL * ((v98 >> 47) ^ v98)) ^ 0xFF51AFD7ED558CCDLL);
        return 797982799 * ((unsigned int)v99 ^ (v99 >> 47));
      }
      else
      {
        result = 3267742850LL;
        if ( v17 )
        {
          v89 = (0xC949D7C7509E6557LL * ((unsigned int)v17 + 4 * *((unsigned __int8 *)v15 + v17 - 1)))
              ^ (0x9AE16A3B2F90404FLL * (*(unsigned __int8 *)v15 + (*((unsigned __int8 *)v15 + (v17 >> 1)) << 8)))
              ^ 0xFF51AFD7ED558CCDLL;
          return 797982799 * ((unsigned int)v89 ^ (v89 >> 47));
        }
      }
    }
    else
    {
      v21 = 0xB492B66FBE98F273LL * *v15;
      v22 = v15[1];
      v23 = v21 - 0xAE502812AA7333LL;
      v24 = __ROL8__(v21 - v22, 21);
      v25 = v17 + v23 + __ROR8__(v22 ^ 0xC949D7C7509E6557LL, 20);
      v26 = 0xC3A5C85C97CB3127LL * *(_QWORD *)((char *)v15 + v17 - 16);
      v27 = 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)v15 + v17 - 8);
      v28 = v25 - v27;
      v29 = __ROR8__(v27 ^ 0xFF51AFD7ED558CCDLL, 30);
      v30 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v28 ^ (v24 + v26 + v29))) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (v28 ^ (v24 + v26 + v29)))
           ^ v28);
      return -348639895 * ((unsigned int)v30 ^ (v30 >> 47));
    }
  }
  else
  {
    v18 = *(unsigned int *)((char *)v15 + v17 - 4) ^ 0xFF51AFD7ED558CCDLL;
    v19 = 0x9DDFEA08EB382D69LL * (v18 ^ (v17 + 8LL * *(unsigned int *)v15));
    return -348639895
         * ((-348639895 * ((unsigned int)v19 ^ (unsigned int)v18 ^ (v19 >> 47)))
          ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v19 ^ v18 ^ (v19 >> 47))) >> 32) >> 15));
  }
  return result;
}
