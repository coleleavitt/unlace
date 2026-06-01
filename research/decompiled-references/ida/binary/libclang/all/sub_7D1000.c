__int64 __fastcall sub_7D1000(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rdx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rbp
  int v12; // r13d
  __int64 *v13; // r12
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 *v17; // r14
  int v18; // r15d
  __int64 v19; // rbx
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rdx
  __int64 *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // ebp
  __int64 *v27; // r12
  __int64 *v28; // r13
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  __int64 *v32; // r14
  int v33; // r15d
  __int64 v34; // rbp
  __int64 v35; // r12
  int v36; // eax
  __int64 v37; // rdx
  __int64 *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r13
  int v42; // ebp
  __int64 *v43; // rbx
  __int64 v44; // r12
  int v45; // eax
  __int64 v46; // rdx
  __int64 *v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rdx
  int v50; // r14d
  __int64 *v51; // r12
  __int64 *v52; // r15
  int v53; // eax
  __int64 v54; // rdx
  int v55; // ebp
  __int64 *v56; // r12
  __int64 v57; // r14
  int v58; // eax
  __int64 v59; // rsi
  int v60; // ebx
  __int64 v61; // rbp
  __int64 *v62; // r13
  __int64 v63; // r15
  int v64; // eax
  int v65; // ebx
  __int64 v67; // [rsp+8h] [rbp-100h]
  __int64 v68; // [rsp+8h] [rbp-100h]
  __int64 v69; // [rsp+10h] [rbp-F8h]
  __int64 *v70; // [rsp+18h] [rbp-F0h]
  __int64 v71; // [rsp+20h] [rbp-E8h]
  __int64 *v72; // [rsp+28h] [rbp-E0h]
  __int64 *v73; // [rsp+30h] [rbp-D8h]
  __int64 v75; // [rsp+40h] [rbp-C8h]
  __int64 *v76; // [rsp+48h] [rbp-C0h]
  __int64 v77; // [rsp+50h] [rbp-B8h]
  __int64 v78; // [rsp+58h] [rbp-B0h]
  __int64 *v79; // [rsp+60h] [rbp-A8h]
  __int64 *v80; // [rsp+68h] [rbp-A0h]
  __int64 v81; // [rsp+70h] [rbp-98h]
  __int64 *v82; // [rsp+78h] [rbp-90h]
  __int64 v83; // [rsp+80h] [rbp-88h]
  __int64 v84; // [rsp+88h] [rbp-80h]
  __int64 *v85; // [rsp+90h] [rbp-78h]
  __int64 *v86; // [rsp+98h] [rbp-70h]
  __int64 v87; // [rsp+A0h] [rbp-68h]
  __int64 *v88; // [rsp+A8h] [rbp-60h]
  __int64 v89; // [rsp+B0h] [rbp-58h]
  __int64 v90; // [rsp+B8h] [rbp-50h]
  __int64 *v91; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v92; // [rsp+C8h] [rbp-40h]
  unsigned __int8 v93; // [rsp+C9h] [rbp-3Fh]
  unsigned __int8 v94; // [rsp+CAh] [rbp-3Eh]
  unsigned __int8 v95; // [rsp+CBh] [rbp-3Dh]
  unsigned __int8 v96; // [rsp+CCh] [rbp-3Ch]
  unsigned __int8 v97; // [rsp+CDh] [rbp-3Bh]
  unsigned __int8 v98; // [rsp+CEh] [rbp-3Ah]
  unsigned __int8 v99; // [rsp+CFh] [rbp-39h]

  v2 = 0;
  v3 = a1 + (unsigned int)(8 * *(_DWORD *)(a1 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a1 + 20) )
  {
    v4 = (__int64 *)(a1 + 24);
    do
    {
      v5 = *v4;
      sub_798630(*v4, a2);
      v6 = *(unsigned __int8 *)(v5 + 28);
      if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x42 )
      {
        v7 = *(_QWORD *)(v5 + 56);
        v8 = (__int64 *)(v7 + 24);
        v9 = (unsigned int)(8 * *(_DWORD *)(v7 + 20));
        v10 = v7 + v9 + 24;
        if ( v9 )
        {
          v89 = v3;
          v11 = v8;
          v12 = 0;
          v91 = v4;
          v99 = v2;
          v90 = v5;
          v13 = (__int64 *)v10;
          do
          {
            v14 = *v11;
            sub_798630(*v11, a2);
            v15 = *(unsigned __int8 *)(v14 + 28);
            if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x42 )
            {
              v16 = *(_QWORD *)(v14 + 56);
              if ( 8 * *(_DWORD *)(v16 + 20) )
              {
                v86 = v13;
                v17 = (__int64 *)(v16 + 24);
                v18 = 0;
                v98 = v12;
                v88 = v11;
                v87 = v14;
                v19 = v16 + (unsigned int)(8 * *(_DWORD *)(v16 + 20)) + 24;
                do
                {
                  v20 = *v17;
                  sub_798630(*v17, a2);
                  v21 = *(unsigned __int8 *)(v20 + 28);
                  if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x42 )
                  {
                    v22 = *(_QWORD *)(v20 + 56);
                    v23 = (__int64 *)(v22 + 24);
                    v24 = (unsigned int)(8 * *(_DWORD *)(v22 + 20));
                    v25 = v22 + v24 + 24;
                    if ( v24 )
                    {
                      v83 = v19;
                      v97 = v18;
                      v26 = 0;
                      v27 = (__int64 *)v25;
                      v85 = v17;
                      v84 = v20;
                      v28 = v23;
                      do
                      {
                        v29 = *v28;
                        sub_798630(*v28, a2);
                        v30 = *(unsigned __int8 *)(v29 + 28);
                        if ( (*(_BYTE *)(v29 + 28) & 0x7F) == 0x42 )
                        {
                          v31 = *(_QWORD *)(v29 + 56);
                          if ( 8 * *(_DWORD *)(v31 + 20) )
                          {
                            v80 = v27;
                            v32 = (__int64 *)(v31 + 24);
                            v33 = 0;
                            v81 = v29;
                            v82 = v28;
                            v96 = v26;
                            v34 = v31 + (unsigned int)(8 * *(_DWORD *)(v31 + 20)) + 24;
                            do
                            {
                              v35 = *v32;
                              sub_798630(*v32, a2);
                              v36 = *(unsigned __int8 *)(v35 + 28);
                              if ( (*(_BYTE *)(v35 + 28) & 0x7F) == 0x42 )
                              {
                                v37 = *(_QWORD *)(v35 + 56);
                                v38 = (__int64 *)(v37 + 24);
                                v39 = (unsigned int)(8 * *(_DWORD *)(v37 + 20));
                                v40 = v37 + v39 + 24;
                                if ( v39 )
                                {
                                  v78 = v35;
                                  v41 = a2;
                                  v73 = (__int64 *)v40;
                                  v95 = v33;
                                  v79 = v32;
                                  v77 = v34;
                                  v42 = 0;
                                  v43 = v38;
                                  do
                                  {
                                    v44 = *v43;
                                    sub_798630(*v43, v41);
                                    v45 = *(unsigned __int8 *)(v44 + 28);
                                    if ( (*(_BYTE *)(v44 + 28) & 0x7F) == 0x42 )
                                    {
                                      v46 = *(_QWORD *)(v44 + 56);
                                      v47 = (__int64 *)(v46 + 24);
                                      v48 = (unsigned int)(8 * *(_DWORD *)(v46 + 20));
                                      v49 = v46 + v48 + 24;
                                      if ( v48 )
                                      {
                                        v94 = v42;
                                        v50 = 0;
                                        v76 = v43;
                                        v75 = v44;
                                        v51 = v47;
                                        v52 = (__int64 *)v49;
                                        do
                                        {
                                          v67 = *v51;
                                          sub_798630(*v51, v41);
                                          v53 = *(unsigned __int8 *)(v67 + 28);
                                          if ( (*(_BYTE *)(v67 + 28) & 0x7F) == 0x42 )
                                          {
                                            v54 = *(_QWORD *)(v67 + 56);
                                            if ( 8 * *(_DWORD *)(v54 + 20) )
                                            {
                                              v70 = v52;
                                              v55 = 0;
                                              v71 = v67;
                                              v68 = v54 + (unsigned int)(8 * *(_DWORD *)(v54 + 20)) + 24;
                                              v93 = v50;
                                              v72 = v51;
                                              v56 = (__int64 *)(v54 + 24);
                                              do
                                              {
                                                v57 = *v56;
                                                sub_798630(*v56, v41);
                                                v58 = *(unsigned __int8 *)(v57 + 28);
                                                if ( (*(_BYTE *)(v57 + 28) & 0x7F) == 0x42 )
                                                {
                                                  v59 = *(_QWORD *)(v57 + 56);
                                                  v69 = v59 + (unsigned int)(8 * *(_DWORD *)(v59 + 20)) + 24;
                                                  if ( 8 * *(_DWORD *)(v59 + 20) )
                                                  {
                                                    v92 = v55;
                                                    v60 = 0;
                                                    v61 = v41;
                                                    v62 = (__int64 *)(v59 + 24);
                                                    do
                                                    {
                                                      while ( 1 )
                                                      {
                                                        v63 = *v62;
                                                        sub_798630(*v62, v61);
                                                        v64 = *(unsigned __int8 *)(v63 + 28);
                                                        if ( (*(_BYTE *)(v63 + 28) & 0x7F) != 0x42 )
                                                          break;
                                                        ++v62;
                                                        v60 |= sub_7D1000(*(_QWORD *)(v63 + 56), v61)
                                                             | (*(_BYTE *)(v63 + 28) >> 7);
                                                        if ( (__int64 *)v69 == v62 )
                                                          goto LABEL_29;
                                                      }
                                                      LOBYTE(v64) = (unsigned __int8)v64 >> 7;
                                                      ++v62;
                                                      v60 |= v64;
                                                    }
                                                    while ( (__int64 *)v69 != v62 );
LABEL_29:
                                                    v41 = v61;
                                                    v58 = *(unsigned __int8 *)(v57 + 28);
                                                    v55 = v60 | v92;
                                                  }
                                                }
                                                LOBYTE(v58) = (unsigned __int8)v58 >> 7;
                                                ++v56;
                                                v55 |= v58;
                                              }
                                              while ( (__int64 *)v68 != v56 );
                                              v52 = v70;
                                              v51 = v72;
                                              v53 = *(unsigned __int8 *)(v71 + 28);
                                              v50 = v55 | v93;
                                            }
                                          }
                                          LOBYTE(v53) = (unsigned __int8)v53 >> 7;
                                          ++v51;
                                          v50 |= v53;
                                        }
                                        while ( v52 != v51 );
                                        v43 = v76;
                                        v45 = *(unsigned __int8 *)(v75 + 28);
                                        v42 = v50 | v94;
                                      }
                                    }
                                    LOBYTE(v45) = (unsigned __int8)v45 >> 7;
                                    ++v43;
                                    v42 |= v45;
                                  }
                                  while ( v73 != v43 );
                                  v65 = v42;
                                  v32 = v79;
                                  v34 = v77;
                                  v36 = *(unsigned __int8 *)(v78 + 28);
                                  v33 = v65 | v95;
                                }
                              }
                              LOBYTE(v36) = (unsigned __int8)v36 >> 7;
                              ++v32;
                              v33 |= v36;
                            }
                            while ( (__int64 *)v34 != v32 );
                            v27 = v80;
                            v28 = v82;
                            v30 = *(unsigned __int8 *)(v81 + 28);
                            v26 = v33 | v96;
                          }
                        }
                        LOBYTE(v30) = (unsigned __int8)v30 >> 7;
                        ++v28;
                        v26 |= v30;
                      }
                      while ( v27 != v28 );
                      v19 = v83;
                      v17 = v85;
                      v21 = *(unsigned __int8 *)(v84 + 28);
                      v18 = v26 | v97;
                    }
                  }
                  LOBYTE(v21) = (unsigned __int8)v21 >> 7;
                  ++v17;
                  v18 |= v21;
                }
                while ( (__int64 *)v19 != v17 );
                v13 = v86;
                v11 = v88;
                v15 = *(unsigned __int8 *)(v87 + 28);
                v12 = v18 | v98;
              }
            }
            LOBYTE(v15) = (unsigned __int8)v15 >> 7;
            ++v11;
            v12 |= v15;
          }
          while ( v13 != v11 );
          v3 = v89;
          v4 = v91;
          v6 = *(unsigned __int8 *)(v90 + 28);
          v2 = v12 | v99;
        }
      }
      LOBYTE(v6) = (unsigned __int8)v6 >> 7;
      ++v4;
      v2 |= v6;
    }
    while ( (__int64 *)v3 != v4 );
  }
  return v2;
}

