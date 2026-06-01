unsigned __int64 __fastcall sub_849B40(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  __int64 v17; // rsi
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r9
  __int64 v20; // rsi
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  _QWORD *v26; // rbp
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r9
  __int64 v35; // r11
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r10
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 *v53; // rsi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 result; // rax
  unsigned __int64 *v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  __int64 v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // r11
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // r8
  unsigned __int64 v79; // rdx
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v83; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v84; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v85; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v86; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v87; // [rsp+20h] [rbp-A8h]
  __int64 v88; // [rsp+28h] [rbp-A0h]
  __int64 v89; // [rsp+30h] [rbp-98h]
  char *v90; // [rsp+38h] [rbp-90h]
  unsigned __int64 v91; // [rsp+40h] [rbp-88h]
  void *dest; // [rsp+48h] [rbp-80h]
  unsigned __int64 v93; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v94; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v95; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v96; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v97; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v98; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v99; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v100; // [rsp+88h] [rbp-40h] BYREF
  _BYTE v101[56]; // [rsp+90h] [rbp-38h] BYREF

  if ( a1 == a2 )
    return 0x65B0C5ECC2C5CC82LL;
  v4 = HIDWORD(*a1);
  v5 = 0x9DDFEA08EB382D69LL * (v4 ^ (8LL * (unsigned int)*a1 - 0xAE502812AA7333LL));
  v6 = 0x9DDFEA08EB382D69LL
     * ((0x9DDFEA08EB382D69LL * ((v5 >> 47) ^ v4 ^ v5)) ^ ((0x9DDFEA08EB382D69LL * ((v5 >> 47) ^ v4 ^ v5)) >> 47));
  v93 = v6;
  if ( a2 == a1 + 1 )
  {
    v65 = &v94;
  }
  else
  {
    v7 = a1[1];
    v8 = 0x9DDFEA08EB382D69LL
       * (((0x9DDFEA08EB382D69LL * (HIDWORD(v7) ^ (8LL * (unsigned int)v7 - 0xAE502812AA7333LL))) >> 47)
        ^ HIDWORD(v7)
        ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v7) ^ (8LL * (unsigned int)v7 - 0xAE502812AA7333LL))));
    v9 = 0x9DDFEA08EB382D69LL * (v8 ^ (v8 >> 47));
    v94 = v9;
    if ( a2 == a1 + 2 )
    {
      v65 = &v95;
    }
    else
    {
      v10 = a1[2];
      v11 = (unsigned int)v10;
      v10 >>= 32;
      v12 = 0x9DDFEA08EB382D69LL
          * ((0x9DDFEA08EB382D69LL
            * (((0x9DDFEA08EB382D69LL * (v10 ^ (8 * v11 - 0xAE502812AA7333LL))) >> 47)
             ^ v10
             ^ (0x9DDFEA08EB382D69LL * (v10 ^ (8 * v11 - 0xAE502812AA7333LL)))))
           ^ ((0x9DDFEA08EB382D69LL
             * (((0x9DDFEA08EB382D69LL * (v10 ^ (8 * v11 - 0xAE502812AA7333LL))) >> 47)
              ^ v10
              ^ (0x9DDFEA08EB382D69LL * (v10 ^ (8 * v11 - 0xAE502812AA7333LL))))) >> 47));
      v95 = v12;
      if ( a2 == a1 + 3 )
      {
        v65 = &v96;
      }
      else
      {
        v13 = a1[3];
        v14 = (unsigned int)v13;
        v13 >>= 32;
        v15 = 0x9DDFEA08EB382D69LL
            * ((0x9DDFEA08EB382D69LL
              * (((0x9DDFEA08EB382D69LL * (v13 ^ (8 * v14 - 0xAE502812AA7333LL))) >> 47)
               ^ v13
               ^ (0x9DDFEA08EB382D69LL * (v13 ^ (8 * v14 - 0xAE502812AA7333LL)))))
             ^ ((0x9DDFEA08EB382D69LL
               * (((0x9DDFEA08EB382D69LL * (v13 ^ (8 * v14 - 0xAE502812AA7333LL))) >> 47)
                ^ v13
                ^ (0x9DDFEA08EB382D69LL * (v13 ^ (8 * v14 - 0xAE502812AA7333LL))))) >> 47));
        v96 = v15;
        if ( a2 == a1 + 4 )
        {
          v65 = &v97;
        }
        else
        {
          v16 = a1[4];
          v17 = (unsigned int)v16;
          v16 >>= 32;
          v18 = 0x9DDFEA08EB382D69LL
              * ((0x9DDFEA08EB382D69LL
                * (((0x9DDFEA08EB382D69LL * (v16 ^ (8 * v17 - 0xAE502812AA7333LL))) >> 47)
                 ^ v16
                 ^ (0x9DDFEA08EB382D69LL * (v16 ^ (8 * v17 - 0xAE502812AA7333LL)))))
               ^ ((0x9DDFEA08EB382D69LL
                 * (((0x9DDFEA08EB382D69LL * (v16 ^ (8 * v17 - 0xAE502812AA7333LL))) >> 47)
                  ^ v16
                  ^ (0x9DDFEA08EB382D69LL * (v16 ^ (8 * v17 - 0xAE502812AA7333LL))))) >> 47));
          v97 = v18;
          if ( a2 == a1 + 5 )
          {
            v65 = &v98;
          }
          else
          {
            v19 = a1[5];
            v20 = (unsigned int)v19;
            v19 >>= 32;
            v21 = 0x9DDFEA08EB382D69LL
                * ((0x9DDFEA08EB382D69LL
                  * (((0x9DDFEA08EB382D69LL * (v19 ^ (8 * v20 - 0xAE502812AA7333LL))) >> 47)
                   ^ v19
                   ^ (0x9DDFEA08EB382D69LL * (v19 ^ (8 * v20 - 0xAE502812AA7333LL)))))
                 ^ ((0x9DDFEA08EB382D69LL
                   * (((0x9DDFEA08EB382D69LL * (v19 ^ (8 * v20 - 0xAE502812AA7333LL))) >> 47)
                    ^ v19
                    ^ (0x9DDFEA08EB382D69LL * (v19 ^ (8 * v20 - 0xAE502812AA7333LL))))) >> 47));
            v98 = v21;
            if ( a2 == a1 + 6 )
            {
              v65 = &v99;
            }
            else
            {
              v22 = a1[6];
              v23 = (unsigned int)v22;
              v22 >>= 32;
              v24 = 0x9DDFEA08EB382D69LL
                  * ((0x9DDFEA08EB382D69LL
                    * (v22
                     ^ (0x9DDFEA08EB382D69LL * (v22 ^ (8 * v23 - 0xAE502812AA7333LL)))
                     ^ ((0x9DDFEA08EB382D69LL * (v22 ^ (8 * v23 - 0xAE502812AA7333LL))) >> 47)))
                   ^ ((0x9DDFEA08EB382D69LL
                     * (v22
                      ^ (0x9DDFEA08EB382D69LL * (v22 ^ (8 * v23 - 0xAE502812AA7333LL)))
                      ^ ((0x9DDFEA08EB382D69LL * (v22 ^ (8 * v23 - 0xAE502812AA7333LL))) >> 47))) >> 47));
              v99 = v24;
              if ( a2 == a1 + 7 )
              {
                v65 = &v100;
              }
              else
              {
                v25 = a1[7];
                v26 = a1 + 8;
                v27 = 0x9DDFEA08EB382D69LL * (HIDWORD(v25) ^ (8LL * (unsigned int)v25 - 0xAE502812AA7333LL));
                v28 = 0x9DDFEA08EB382D69LL * ((v27 >> 47) ^ HIDWORD(v25) ^ v27);
                v85 = 0x9DDFEA08EB382D69LL * (v28 ^ (v28 >> 47));
                v100 = v85;
                if ( a2 != v26 )
                {
                  v91 = 64;
                  v83 = (0xB492B66FBE98F273LL * __ROL8__(v9 - 0x73D22641534B4D52LL, 27)) ^ 0xF7ACCA5326449396LL;
                  v29 = 0xB492B66FBE98F273LL * __ROL8__(v24 - 0x414BFF9ED66A691CLL, 22) + v21 - 0x7323D61940A0DA1FLL;
                  v30 = v6 + 0x298DF016A9F64655LL;
                  v31 = v30 + v12 + v9;
                  v82 = v15 + v31;
                  v32 = v18 + 0x4BF62CB950C3753ALL + v21 + v24;
                  v33 = __ROR8__(v30 + v83 + v15 - 0xAE502812AB8D92LL, 21) + v30 + __ROL8__(v31, 20);
                  v34 = v85 + v32;
                  v35 = __ROR8__(v29 + v18 + 0x4BF62CB950C3753ALL + v85 + v12, 21)
                      + __ROL8__(v32, 20)
                      + v18
                      + 0x4BF62CB950C3753ALL;
                  dest = &v93;
                  v90 = v101;
                  v36 = v29;
                  v37 = 0x544962662A7EE1A4LL;
                  while ( 1 )
                  {
                    v38 = HIDWORD(*v26);
                    v39 = 0x9DDFEA08EB382D69LL * (v38 ^ (8LL * (unsigned int)*v26 - 0xAE502812AA7333LL));
                    v93 = 0x9DDFEA08EB382D69LL
                        * (((0x9DDFEA08EB382D69LL * (v39 ^ v38 ^ (v39 >> 47))) >> 47)
                         ^ (0x9DDFEA08EB382D69LL * (v39 ^ v38 ^ (v39 >> 47))));
                    if ( a2 == v26 + 1 )
                    {
                      v89 = 8;
                      v26 = a2;
                      v53 = &v94;
                    }
                    else
                    {
                      v40 = v26[1];
                      v41 = 0x9DDFEA08EB382D69LL
                          * (HIDWORD(v40)
                           ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v40) ^ (8LL * (unsigned int)v40 - 0xAE502812AA7333LL)))
                           ^ ((0x9DDFEA08EB382D69LL * (HIDWORD(v40) ^ (8LL * (unsigned int)v40 - 0xAE502812AA7333LL))) >> 47));
                      v94 = 0x9DDFEA08EB382D69LL * ((v41 >> 47) ^ v41);
                      if ( a2 == v26 + 2 )
                      {
                        v89 = 16;
                        v26 = a2;
                        v53 = &v95;
                      }
                      else
                      {
                        v42 = v26[2];
                        v43 = 0x9DDFEA08EB382D69LL
                            * (((0x9DDFEA08EB382D69LL * (HIDWORD(v42) ^ (8LL * (unsigned int)v42 - 0xAE502812AA7333LL))) >> 47)
                             ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v42) ^ (8LL * (unsigned int)v42 - 0xAE502812AA7333LL)))
                             ^ HIDWORD(v42));
                        v95 = 0x9DDFEA08EB382D69LL * ((v43 >> 47) ^ v43);
                        if ( a2 == v26 + 3 )
                        {
                          v89 = 24;
                          v26 = a2;
                          v53 = &v96;
                        }
                        else
                        {
                          v44 = v26[3];
                          v45 = 0x9DDFEA08EB382D69LL
                              * (((0x9DDFEA08EB382D69LL * (HIDWORD(v44) ^ (8LL * (unsigned int)v44 - 0xAE502812AA7333LL))) >> 47)
                               ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v44) ^ (8LL * (unsigned int)v44 - 0xAE502812AA7333LL)))
                               ^ HIDWORD(v44));
                          v96 = 0x9DDFEA08EB382D69LL * ((v45 >> 47) ^ v45);
                          if ( a2 == v26 + 4 )
                          {
                            v89 = 32;
                            v26 = a2;
                            v53 = &v97;
                          }
                          else
                          {
                            v46 = v26[4];
                            v47 = 0x9DDFEA08EB382D69LL
                                * (((0x9DDFEA08EB382D69LL
                                   * (HIDWORD(v46) ^ (8LL * (unsigned int)v46 - 0xAE502812AA7333LL))) >> 47)
                                 ^ (0x9DDFEA08EB382D69LL
                                  * (HIDWORD(v46) ^ (8LL * (unsigned int)v46 - 0xAE502812AA7333LL)))
                                 ^ HIDWORD(v46));
                            v97 = 0x9DDFEA08EB382D69LL * ((v47 >> 47) ^ v47);
                            if ( a2 == v26 + 5 )
                            {
                              v89 = 40;
                              v26 = a2;
                              v53 = &v98;
                            }
                            else
                            {
                              v48 = v26[5];
                              v49 = 0x9DDFEA08EB382D69LL
                                  * (((0x9DDFEA08EB382D69LL
                                     * (HIDWORD(v48) ^ (8LL * (unsigned int)v48 - 0xAE502812AA7333LL))) >> 47)
                                   ^ (0x9DDFEA08EB382D69LL
                                    * (HIDWORD(v48) ^ (8LL * (unsigned int)v48 - 0xAE502812AA7333LL)))
                                   ^ HIDWORD(v48));
                              v98 = 0x9DDFEA08EB382D69LL * ((v49 >> 47) ^ v49);
                              if ( a2 == v26 + 6 )
                              {
                                v89 = 48;
                                v26 = a2;
                                v53 = &v99;
                              }
                              else
                              {
                                v50 = v26[6];
                                v51 = 0x9DDFEA08EB382D69LL
                                    * (((0x9DDFEA08EB382D69LL
                                       * (HIDWORD(v50) ^ (8LL * (unsigned int)v50 - 0xAE502812AA7333LL))) >> 47)
                                     ^ (0x9DDFEA08EB382D69LL
                                      * (HIDWORD(v50) ^ (8LL * (unsigned int)v50 - 0xAE502812AA7333LL)))
                                     ^ HIDWORD(v50));
                                v99 = 0x9DDFEA08EB382D69LL * ((v51 >> 47) ^ v51);
                                if ( a2 == v26 + 7 )
                                {
                                  v89 = 56;
                                  v26 = a2;
                                  v53 = &v100;
                                }
                                else
                                {
                                  v52 = v26[7];
                                  v53 = (unsigned __int64 *)v90;
                                  v26 += 8;
                                  v89 = 64;
                                  v54 = HIDWORD(v52);
                                  v55 = 0x9DDFEA08EB382D69LL
                                      * (HIDWORD(v52) ^ (8LL * (unsigned int)v52 - 0xAE502812AA7333LL));
                                  v100 = 0x9DDFEA08EB382D69LL
                                       * (((0x9DDFEA08EB382D69LL * ((v55 >> 47) ^ v55 ^ v54)) >> 47)
                                        ^ (0x9DDFEA08EB382D69LL * ((v55 >> 47) ^ v55 ^ v54)));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    v88 = v35;
                    v87 = v34;
                    v86 = v33;
                    v84 = v37;
                    sub_820AE0((char *)dest, (char *)v53, v90);
                    v56 = v93 - 0x4B6D499041670D8DLL * v86;
                    v57 = __ROL8__(v84 + v94 + v82 + v36, 27);
                    v36 = 0xB492B66FBE98F273LL * __ROL8__(v99 + v36 + v86, 22) + v98 + v82;
                    v58 = v88 ^ (0xB492B66FBE98F273LL * v57);
                    v37 = 0xB492B66FBE98F273LL * __ROL8__(v87 + v83, 31);
                    v59 = v56 + v95 + v94;
                    v82 = v96 + v59;
                    v33 = __ROR8__(v56 + v58 + v87 + v96, 21) + v56 + __ROL8__(v59, 20);
                    v60 = v88 + v37 + v97;
                    v35 = __ROR8__(v36 + v60 + v100 + v95, 21) + v60 + __ROL8__(v60 + v98 + v99, 20);
                    v34 = v100 + v60 + v98 + v99;
                    v91 += v89;
                    if ( a2 == v26 )
                      break;
                    v83 = v58;
                  }
                  v61 = v37
                      - 0x622015F714C7D297LL
                      * (((0x9DDFEA08EB382D69LL
                         * (v35 ^ (0x9DDFEA08EB382D69LL * (v35 ^ v33)) ^ ((0x9DDFEA08EB382D69LL * (v35 ^ v33)) >> 47))) >> 47)
                       ^ (0x9DDFEA08EB382D69LL
                        * (v35 ^ (0x9DDFEA08EB382D69LL * (v35 ^ v33)) ^ ((0x9DDFEA08EB382D69LL * (v35 ^ v33)) >> 47))))
                      - 0x4B6D499041670D8DLL * (v91 ^ (v91 >> 47));
                  v62 = 0x9DDFEA08EB382D69LL
                      * (v61
                       ^ (0x9DDFEA08EB382D69LL
                        * ((0x9DDFEA08EB382D69LL
                          * (v34 ^ (0x9DDFEA08EB382D69LL * (v34 ^ v82)) ^ ((0x9DDFEA08EB382D69LL * (v34 ^ v82)) >> 47)))
                         ^ ((0x9DDFEA08EB382D69LL
                           * (v34 ^ (0x9DDFEA08EB382D69LL * (v34 ^ v82)) ^ ((0x9DDFEA08EB382D69LL * (v34 ^ v82)) >> 47))) >> 47))
                        + v58
                        - 0x4B6D499041670D8DLL * (v36 ^ (v36 >> 47))));
                  v63 = v62 ^ v61 ^ (v62 >> 47);
                  return 0x9DDFEA08EB382D69LL * (((0x9DDFEA08EB382D69LL * v63) >> 47) ^ (0x9DDFEA08EB382D69LL * v63));
                }
                v65 = (unsigned __int64 *)v101;
              }
            }
          }
        }
      }
    }
  }
  v66 = (char *)v65 - (char *)&v93;
  v67 = v66;
  if ( v66 - 4 <= 4 )
  {
    v68 = HIDWORD(v93) ^ 0xFF51AFD7ED558CCDLL;
    v69 = 0x9DDFEA08EB382D69LL * (v68 ^ (8LL * (unsigned int)v93 + 8));
    return 0x9DDFEA08EB382D69LL
         * (((0x9DDFEA08EB382D69LL * (v69 ^ v68 ^ (v69 >> 47))) >> 47)
          ^ (0x9DDFEA08EB382D69LL * (v69 ^ v68 ^ (v69 >> 47))));
  }
  if ( v66 == 16 )
  {
    v70 = __ROR8__(v94 + 16, 16);
    v71 = 0x9DDFEA08EB382D69LL
        * ((0x9DDFEA08EB382D69LL * (v70 ^ v93 ^ 0xFF51AFD7ED558CCDLL))
         ^ v70
         ^ ((0x9DDFEA08EB382D69LL * (v70 ^ v93 ^ 0xFF51AFD7ED558CCDLL)) >> 47));
    return v94 ^ (0x9DDFEA08EB382D69LL * (v71 ^ (v71 >> 47)));
  }
  if ( v66 - 17 <= 0xF )
  {
    v72 = 0x9AE16A3B2F90404FLL * *(_QWORD *)((char *)&dest + v66);
    v73 = __ROL8__(0xB492B66FBE98F273LL * v93 - v94, 21);
    v74 = v66 + 0xB492B66FBE98F273LL * v93 - 0xAE502812AA7333LL + __ROR8__(v94 ^ 0xC949D7C7509E6557LL, 20) - v72;
    v75 = __ROR8__(v72 ^ 0xFF51AFD7ED558CCDLL, 30);
    v63 = ((0x9DDFEA08EB382D69LL * (v74 ^ (v75 + v73 - 0x3C5A37A36834CED9LL * *(unsigned __int64 *)((char *)&v91 + v67)))) >> 47)
        ^ (0x9DDFEA08EB382D69LL * (v74 ^ (v75 + v73 - 0x3C5A37A36834CED9LL * *(unsigned __int64 *)((char *)&v91 + v67))))
        ^ v74;
    return 0x9DDFEA08EB382D69LL * (((0x9DDFEA08EB382D69LL * v63) >> 47) ^ (0x9DDFEA08EB382D69LL * v63));
  }
  result = 0x65B0C5ECC2C5CC82LL;
  if ( v67 > 0x20 )
  {
    v76 = *(unsigned __int64 *)((char *)&v91 + v67);
    v77 = v93 - 0x3C5A37A36834CED9LL * (v76 + v67);
    v78 = v77 + v94 + v95;
    v79 = *(__int64 *)((char *)&v89 + v67) + v95;
    v80 = __ROR8__(v78, 31) + __ROL8__(v77, 27) + __ROR8__(v77 + v94, 7) + __ROL8__(v96 + v77, 12);
    v81 = 0xC3A5C85C97CB3127LL
        * (unsigned __int64)&(*(char **)((char *)&v90 + v67))[v79 + v76 + *(_QWORD *)((char *)&dest + v67) + v80]
        - 0x651E95C4D06FBFB1LL
        * (v78
         + __ROR8__(&(*(char **)((char *)&v90 + v67))[v79 + v76], 31)
         + __ROR8__(&(*(char **)((char *)&v90 + v67))[v79], 7)
         + __ROL8__(*(char **)((char *)&dest + v67) + v79, 12)
         + v96
         + __ROL8__(v79, 27));
    return 0x9AE16A3B2F90404FLL
         * ((v80 + ((0xC3A5C85C97CB3127LL * (v81 ^ (v81 >> 47))) ^ 0xFF51AFD7ED558CCDLL))
          ^ ((v80 + ((0xC3A5C85C97CB3127LL * (v81 ^ (v81 >> 47))) ^ 0xFF51AFD7ED558CCDLL)) >> 47));
  }
  return result;
}

