unsigned __int64 __fastcall sub_C2E770(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 *v23; // rbp
  unsigned __int64 v24; // r10
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rsi
  __int64 v30; // rdi
  unsigned __int64 v31; // r8
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // r11
  unsigned __int64 *v34; // r15
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  char *v50; // rsi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // r10
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rax
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 *v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // r10
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // rcx
  __int64 v77; // rsi
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v82; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v83; // [rsp+8h] [rbp-C0h]
  __int64 v84; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v85; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v86; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v87; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v88; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v89; // [rsp+28h] [rbp-A0h]
  __int64 v90; // [rsp+30h] [rbp-98h]
  char *v91; // [rsp+38h] [rbp-90h]
  void *dest; // [rsp+40h] [rbp-88h]
  unsigned __int64 v93; // [rsp+48h] [rbp-80h]
  unsigned __int64 v94; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v95; // [rsp+58h] [rbp-70h]
  unsigned __int64 v96; // [rsp+60h] [rbp-68h]
  unsigned __int64 v97; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v98; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v99; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v100; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v101; // [rsp+88h] [rbp-40h] BYREF
  _BYTE v102[56]; // [rsp+90h] [rbp-38h] BYREF

  if ( a1 == a2 )
    return 0x65B0C5ECC2C5CC82LL;
  v2 = HIDWORD(*a1);
  v3 = 0x9DDFEA08EB382D69LL * (v2 ^ (((8 * *a1) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v4 = 0x9DDFEA08EB382D69LL
     * (((0x9DDFEA08EB382D69LL * (v2 ^ v3 ^ (v3 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v2 ^ v3 ^ (v3 >> 47))));
  v94 = v4;
  if ( a2 == a1 + 1 )
  {
    v62 = HIDWORD(v94) ^ 0xFF51AFD7ED558CCDLL;
    v63 = 0x9DDFEA08EB382D69LL * (v62 ^ (8LL * (unsigned int)v94 + 8));
    return 0x9DDFEA08EB382D69LL
         * (((0x9DDFEA08EB382D69LL * (v63 ^ v62 ^ (v63 >> 47))) >> 47)
          ^ (0x9DDFEA08EB382D69LL * (v63 ^ v62 ^ (v63 >> 47))));
  }
  v5 = HIDWORD(a1[1]);
  v6 = 0x9DDFEA08EB382D69LL * (v5 ^ (((8 * a1[1]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v7 = 0x9DDFEA08EB382D69LL
     * (((0x9DDFEA08EB382D69LL * (v6 ^ v5 ^ (v6 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v6 ^ v5 ^ (v6 >> 47))));
  v95 = v7;
  if ( a2 == a1 + 2 )
  {
    v64 = __ROR8__(v7 + 16, 16);
    v65 = 0x9DDFEA08EB382D69LL
        * (v64
         ^ (0x9DDFEA08EB382D69LL * (v64 ^ v4 ^ 0xFF51AFD7ED558CCDLL))
         ^ ((0x9DDFEA08EB382D69LL * (v64 ^ v4 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
    return (0x9DDFEA08EB382D69LL * ((v65 >> 47) ^ v65)) ^ v7;
  }
  v8 = HIDWORD(a1[2]);
  v9 = 0x9DDFEA08EB382D69LL * (v8 ^ (((8 * a1[2]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v10 = 0x9DDFEA08EB382D69LL
      * (((0x9DDFEA08EB382D69LL * (v9 ^ v8 ^ (v9 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v9 ^ v8 ^ (v9 >> 47))));
  v96 = v10;
  if ( a2 == a1 + 3 )
  {
    dest = &v94;
    v66 = &v97;
    goto LABEL_34;
  }
  v11 = HIDWORD(a1[3]);
  v12 = 0x9DDFEA08EB382D69LL * (v11 ^ (((8 * a1[3]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v13 = 0x9DDFEA08EB382D69LL
      * ((0x9DDFEA08EB382D69LL * (v12 ^ v11 ^ (v12 >> 47))) ^ ((0x9DDFEA08EB382D69LL * (v12 ^ v11 ^ (v12 >> 47))) >> 47));
  v97 = v13;
  if ( a2 == a1 + 4 )
  {
    dest = &v94;
    v66 = &v98;
    goto LABEL_34;
  }
  v14 = HIDWORD(a1[4]);
  v15 = 0x9DDFEA08EB382D69LL * (v14 ^ (((8 * a1[4]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v87 = 0x9DDFEA08EB382D69LL
      * (((0x9DDFEA08EB382D69LL * (v15 ^ v14 ^ (v15 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v15 ^ v14 ^ (v15 >> 47))));
  v98 = v87;
  if ( a2 == a1 + 5 )
  {
    dest = &v94;
    v66 = &v99;
    goto LABEL_34;
  }
  v16 = HIDWORD(a1[5]);
  v17 = 0x9DDFEA08EB382D69LL * (v16 ^ (((8 * a1[5]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v81 = 0x9DDFEA08EB382D69LL
      * (((0x9DDFEA08EB382D69LL * (v17 ^ v16 ^ (v17 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v17 ^ v16 ^ (v17 >> 47))));
  v99 = v81;
  if ( a2 == a1 + 6 )
  {
    dest = &v94;
    v66 = &v100;
    goto LABEL_34;
  }
  v18 = HIDWORD(a1[6]);
  v19 = 0x9DDFEA08EB382D69LL * (v18 ^ (((8 * a1[6]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v83 = 0x9DDFEA08EB382D69LL
      * (((0x9DDFEA08EB382D69LL * (v19 ^ v18 ^ (v19 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v19 ^ v18 ^ (v19 >> 47))));
  v100 = v83;
  if ( a2 == a1 + 7 )
  {
    dest = &v94;
    v66 = &v101;
LABEL_34:
    v67 = (char *)v66 - (_BYTE *)dest;
    if ( v67 - 17 > 0xF )
    {
      if ( v67 <= 0x20 )
      {
        if ( v67 )
        {
          v80 = (0x9AE16A3B2F90404FLL * ((unsigned __int8)v94 + (*((unsigned __int8 *)&v94 + (v67 >> 1)) << 8)))
              ^ (0xC949D7C7509E6557LL * ((unsigned int)v67 + 4 * *((unsigned __int8 *)&v93 + v67 + 7)))
              ^ 0xFF51AFD7ED558CCDLL;
          return 0x9AE16A3B2F90404FLL * (v80 ^ (v80 >> 47));
        }
        else
        {
          return 0x65B0C5ECC2C5CC82LL;
        }
      }
      else
      {
        v73 = *(__int64 *)((char *)&dest + v67);
        v74 = v94 - 0x3C5A37A36834CED9LL * (v73 + v67);
        v75 = v74 + v95 + v96;
        v76 = *(__int64 *)((char *)&v90 + v67) + v96;
        v77 = __ROR8__(v74 + v95, 7) + __ROL8__(v97 + v74, 12) + __ROL8__(v74, 27) + __ROR8__(v75, 31);
        v78 = 0xC3A5C85C97CB3127LL
            * (_QWORD)&(*(char **)((char *)&v91 + v67))[v76 + v73 + *(unsigned __int64 *)((char *)&v93 + v67) + v77]
            - 0x651E95C4D06FBFB1LL
            * (v75
             + __ROR8__(&(*(char **)((char *)&v91 + v67))[v76 + v73], 31)
             + __ROR8__(&(*(char **)((char *)&v91 + v67))[v76], 7)
             + v97
             + __ROL8__(v76, 27)
             + __ROL8__(v76 + *(unsigned __int64 *)((char *)&v93 + v67), 12));
        v79 = v77 + ((0xC3A5C85C97CB3127LL * ((v78 >> 47) ^ v78)) ^ 0xFF51AFD7ED558CCDLL);
        return 0x9AE16A3B2F90404FLL * (v79 ^ (v79 >> 47));
      }
    }
    else
    {
      v68 = 0x9AE16A3B2F90404FLL * *(unsigned __int64 *)((char *)&v93 + v67);
      v69 = v67 + 0xB492B66FBE98F273LL * v94 - 0xAE502812AA7333LL + __ROR8__(v95 ^ 0xC949D7C7509E6557LL, 20) - v68;
      v70 = 0xC3A5C85C97CB3127LL * *(_QWORD *)((char *)&dest + v67) + __ROL8__(0xB492B66FBE98F273LL * v94 - v95, 21);
      v71 = __ROR8__(v68 ^ 0xFF51AFD7ED558CCDLL, 30);
      v72 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v69 ^ (v70 + v71))) ^ v69 ^ ((0x9DDFEA08EB382D69LL * (v69 ^ (v70 + v71))) >> 47));
      return 0x9DDFEA08EB382D69LL * (v72 ^ (v72 >> 47));
    }
  }
  v20 = HIDWORD(a1[7]);
  v21 = 0x9DDFEA08EB382D69LL * (v20 ^ (((8 * a1[7]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
  v22 = v21 ^ v20 ^ (v21 >> 47);
  v23 = a1 + 8;
  v24 = 0x9DDFEA08EB382D69LL * (((0x9DDFEA08EB382D69LL * v22) >> 47) ^ (0x9DDFEA08EB382D69LL * v22));
  v101 = v24;
  if ( a2 == a1 + 8 )
  {
    v66 = (unsigned __int64 *)v102;
    dest = &v94;
    goto LABEL_34;
  }
  v93 = 64;
  v26 = a1[8];
  v86 = (0xB492B66FBE98F273LL * __ROL8__(v7 - 0x73D22641534B4D52LL, 27)) ^ 0xF7ACCA5326449396LL;
  v27 = v4 + 0x298DF016A9F64655LL;
  v28 = 0xB492B66FBE98F273LL * __ROL8__(v83 - 0x414BFF9ED66A691CLL, 22) + v81 - 0x7323D61940A0DA1FLL;
  v29 = v10 + v7 + v27;
  v85 = __ROR8__(v86 + v27 + v13 - 0xAE502812AB8D92LL, 21) + __ROL8__(v29, 20) + v27;
  v30 = v87 + 0x4BF62CB950C3753ALL + v81 + v83;
  v31 = v30 + v24;
  v84 = __ROR8__(v28 + v87 + 0x4BF62CB950C3753ALL + v24 + v10, 21) + __ROL8__(v30, 20) + v87 + 0x4BF62CB950C3753ALL;
  v82 = 0x544962662A7EE1A4LL;
  dest = &v94;
  v91 = v102;
  v32 = a2;
  v33 = v29 + v13;
  v34 = v32;
  while ( 1 )
  {
    v35 = 0x9DDFEA08EB382D69LL * (HIDWORD(v26) ^ (((8 * v26) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
    v36 = 0x9DDFEA08EB382D69LL * (v35 ^ HIDWORD(v26) ^ (v35 >> 47));
    v94 = 0x9DDFEA08EB382D69LL * ((v36 >> 47) ^ v36);
    if ( v34 == v23 + 1 )
    {
      v23 = v34;
      v90 = 8;
      v50 = (char *)dest + 8;
    }
    else
    {
      v37 = HIDWORD(v23[1]);
      v38 = 0x9DDFEA08EB382D69LL * (v37 ^ (((8 * v23[1]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
      v95 = 0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * ((v38 >> 47) ^ v37 ^ v38)) >> 47)
           ^ (0x9DDFEA08EB382D69LL * ((v38 >> 47) ^ v37 ^ v38)));
      if ( v34 == v23 + 2 )
      {
        v23 = v34;
        v90 = 16;
        v50 = (char *)dest + 16;
      }
      else
      {
        v39 = HIDWORD(v23[2]);
        v40 = 0x9DDFEA08EB382D69LL * (v39 ^ (((8 * v23[2]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
        v96 = 0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (v40 ^ v39 ^ (v40 >> 47))) >> 47)
             ^ (0x9DDFEA08EB382D69LL * (v40 ^ v39 ^ (v40 >> 47))));
        if ( v34 == v23 + 3 )
        {
          v23 = v34;
          v90 = 24;
          v50 = (char *)dest + 24;
        }
        else
        {
          v41 = HIDWORD(v23[3]);
          v42 = 0x9DDFEA08EB382D69LL * (v41 ^ (((8 * v23[3]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
          v97 = 0x9DDFEA08EB382D69LL
              * (((0x9DDFEA08EB382D69LL * (v42 ^ v41 ^ (v42 >> 47))) >> 47)
               ^ (0x9DDFEA08EB382D69LL * (v42 ^ v41 ^ (v42 >> 47))));
          if ( v34 == v23 + 4 )
          {
            v23 = v34;
            v90 = 32;
            v50 = (char *)dest + 32;
          }
          else
          {
            v43 = HIDWORD(v23[4]);
            v44 = 0x9DDFEA08EB382D69LL * (v43 ^ (((8 * v23[4]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
            v98 = 0x9DDFEA08EB382D69LL
                * (((0x9DDFEA08EB382D69LL * (v44 ^ v43 ^ (v44 >> 47))) >> 47)
                 ^ (0x9DDFEA08EB382D69LL * (v44 ^ v43 ^ (v44 >> 47))));
            if ( v34 == v23 + 5 )
            {
              v23 = v34;
              v90 = 40;
              v50 = (char *)dest + 40;
            }
            else
            {
              v45 = HIDWORD(v23[5]);
              v46 = 0x9DDFEA08EB382D69LL * (v45 ^ (((8 * v23[5]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
              v99 = 0x9DDFEA08EB382D69LL
                  * (((0x9DDFEA08EB382D69LL * (v46 ^ v45 ^ (v46 >> 47))) >> 47)
                   ^ (0x9DDFEA08EB382D69LL * (v46 ^ v45 ^ (v46 >> 47))));
              if ( v34 == v23 + 6 )
              {
                v23 = v34;
                v90 = 48;
                v50 = (char *)dest + 48;
              }
              else
              {
                v47 = HIDWORD(v23[6]);
                v48 = 0x9DDFEA08EB382D69LL * (v47 ^ (((8 * v23[6]) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
                v100 = 0x9DDFEA08EB382D69LL
                     * (((0x9DDFEA08EB382D69LL * (v48 ^ v47 ^ (v48 >> 47))) >> 47)
                      ^ (0x9DDFEA08EB382D69LL * (v48 ^ v47 ^ (v48 >> 47))));
                if ( v34 == v23 + 7 )
                {
                  v23 = v34;
                  v90 = 56;
                  v50 = (char *)dest + 56;
                }
                else
                {
                  v49 = v23[7];
                  v50 = v91;
                  v23 += 8;
                  v90 = 64;
                  v51 = 0x9DDFEA08EB382D69LL * (HIDWORD(v49) ^ (((8 * v49) & 0x7FFFFFFF8LL) - 0xAE502812AA7333LL));
                  v52 = 0x9DDFEA08EB382D69LL * (v51 ^ HIDWORD(v49) ^ (v51 >> 47));
                  v101 = 0x9DDFEA08EB382D69LL * ((v52 >> 47) ^ v52);
                }
              }
            }
          }
        }
      }
    }
    v89 = v31;
    v88 = v33;
    sub_C10AA0((char *)dest, v50, v91);
    v53 = v94 - 0x4B6D499041670D8DLL * v85;
    v54 = v84 ^ (0xB492B66FBE98F273LL * __ROL8__(v82 + v95 + v28 + v88, 27));
    v28 = 0xB492B66FBE98F273LL * __ROL8__(v100 + v28 + v85, 22) + v99 + v88;
    v82 = 0xB492B66FBE98F273LL * __ROL8__(v89 + v86, 31);
    v55 = v53 + v96 + v95;
    v33 = v55 + v97;
    v56 = v82 + v98 + v84;
    v85 = __ROR8__(v54 + v53 + v97 + v89, 21) + __ROL8__(v55, 20) + v53;
    v31 = v101 + v56 + v100 + v99;
    v93 += v90;
    v57 = __ROL8__(v56 + v100 + v99, 20) + v56 + __ROR8__(v28 + v56 + v101 + v96, 21);
    v84 = v57;
    if ( v23 == v34 )
      break;
    v86 = v54;
    v26 = *v23;
  }
  v58 = v101 + v56 + v100 + v99;
  v59 = v82
      - 0x4B6D499041670D8DLL * (v93 ^ (v93 >> 47))
      - 0x622015F714C7D297LL
      * (((0x9DDFEA08EB382D69LL
         * (((0x9DDFEA08EB382D69LL * (v57 ^ v85)) >> 47) ^ v57 ^ (0x9DDFEA08EB382D69LL * (v57 ^ v85)))) >> 47)
       ^ (0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v57 ^ v85)) >> 47) ^ v57 ^ (0x9DDFEA08EB382D69LL * (v57 ^ v85)))));
  v60 = 0x9DDFEA08EB382D69LL
      * (v59
       ^ (v54
        - 0x4B6D499041670D8DLL * (v28 ^ (v28 >> 47))
        - 0x622015F714C7D297LL
        * (((0x9DDFEA08EB382D69LL
           * ((0x9DDFEA08EB382D69LL * (v58 ^ v33)) ^ v58 ^ ((0x9DDFEA08EB382D69LL * (v58 ^ v33)) >> 47))) >> 47)
         ^ (0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL * (v58 ^ v33)) ^ v58 ^ ((0x9DDFEA08EB382D69LL * (v58 ^ v33)) >> 47))))));
  return 0x9DDFEA08EB382D69LL
       * (((0x9DDFEA08EB382D69LL * (v59 ^ v60 ^ (v60 >> 47))) >> 47) ^ (0x9DDFEA08EB382D69LL * (v59 ^ v60 ^ (v60 >> 47))));
}
