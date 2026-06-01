__int64 __fastcall sub_20E8BA0(__int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  _QWORD *v4; // r8
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rsi
  unsigned int i; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // esi
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // esi
  int v31; // r8d
  int v32; // eax
  __int64 v33; // r10
  __int64 v34; // rdi
  int v35; // edi
  __int64 v36; // r10
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r10
  __int64 v40; // rdi
  int v41; // edi
  __int64 v42; // r10
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // r10
  __int64 v46; // rdi
  int v47; // edi
  __int64 v48; // r10
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // r10
  __int64 v52; // rdi
  int v53; // edi
  __int64 v54; // r10
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // r10
  __int64 v58; // rdi
  int v59; // edi
  __int64 v60; // r10
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // r10
  __int64 v64; // rdi
  int v65; // edi
  __int64 v66; // r10
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // r10
  __int64 v70; // rdi
  int v71; // edi
  __int64 v72; // r10
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // r10
  __int64 v76; // rdi
  int v77; // esi
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rcx
  __int64 v83; // rdx
  unsigned __int64 *v84; // rsi
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 *v91; // rdi
  __int64 v92; // r14
  int v93; // [rsp+8h] [rbp-40h]
  int v94; // [rsp+8h] [rbp-40h]

  v4 = a1 + 1;
  v8 = a2;
  if ( a2 != 1 )
  {
    v16 = 0;
    v24 = a2 - 1;
    v20 = 16 * v24;
    goto LABEL_11;
  }
  v9 = *a1;
  v10 = *(_DWORD *)(*a1 + 268);
  v11 = *(unsigned int *)(a1[1] + 12);
  if ( v10 > 0x14 )
  {
    v20 = 16;
    v16 = 1;
    v21 = sub_20E8380(*a1, v11);
    v22 = *(unsigned int *)(v9 + 268);
    v23 = v9 + 8;
    v8 = 2;
    sub_2227D20(a1 + 1, v23, v22, v21);
    v4 = a1 + 1;
    LODWORD(v24) = 1;
LABEL_11:
    if ( *((_DWORD *)a1 + 4) && (v25 = a1[1], *(_DWORD *)(v25 + 12) < *(_DWORD *)(v25 + 8)) )
    {
      v26 = v20 + v25;
      v27 = *(_DWORD *)(v26 + 8);
      if ( v27 != 16 )
        goto LABEL_14;
    }
    else
    {
      v93 = v24;
      sub_2227F30(v4, (unsigned int)v24, a3);
      LODWORD(v24) = v93;
      v26 = v20 + a1[1];
      v27 = *(_DWORD *)(v26 + 8);
      ++*(_DWORD *)(v26 + 12);
      if ( v27 != 16 )
      {
LABEL_14:
        v28 = *(unsigned int *)(v26 + 12);
        v29 = *(_QWORD *)v26;
        v30 = v27 - v28;
        v31 = v28 + 1;
        v32 = v30 - 1;
        if ( v30 )
        {
          v33 = (unsigned int)(v28 + v32);
          v34 = (unsigned int)(v31 + v32);
          *(_QWORD *)(v29 + 8 * v34) = *(_QWORD *)(v29 + 8 * v33);
          *(_DWORD *)(v29 + 4 * v34 + 128) = *(_DWORD *)(v29 + 4 * v33 + 128);
          v35 = v30 - 2;
          if ( v30 != 1 )
          {
            v36 = (unsigned int)(v28 + v35);
            v37 = (unsigned int)(v31 + v35);
            *(_QWORD *)(v29 + 8 * v37) = *(_QWORD *)(v29 + 8 * v36);
            *(_DWORD *)(v29 + 4 * v37 + 128) = *(_DWORD *)(v29 + 4 * v36 + 128);
            v38 = v30 - 3;
            if ( v30 != 2 )
            {
              v39 = (unsigned int)(v28 + v38);
              v40 = (unsigned int)(v31 + v38);
              *(_QWORD *)(v29 + 8 * v40) = *(_QWORD *)(v29 + 8 * v39);
              *(_DWORD *)(v29 + 4 * v40 + 128) = *(_DWORD *)(v29 + 4 * v39 + 128);
              v41 = v30 - 4;
              if ( v30 != 3 )
              {
                v42 = (unsigned int)(v28 + v41);
                v43 = (unsigned int)(v31 + v41);
                *(_QWORD *)(v29 + 8 * v43) = *(_QWORD *)(v29 + 8 * v42);
                *(_DWORD *)(v29 + 4 * v43 + 128) = *(_DWORD *)(v29 + 4 * v42 + 128);
                v44 = v30 - 5;
                if ( v30 != 4 )
                {
                  v45 = (unsigned int)(v28 + v44);
                  v46 = (unsigned int)(v31 + v44);
                  *(_QWORD *)(v29 + 8 * v46) = *(_QWORD *)(v29 + 8 * v45);
                  *(_DWORD *)(v29 + 4 * v46 + 128) = *(_DWORD *)(v29 + 4 * v45 + 128);
                  v47 = v30 - 6;
                  if ( v30 != 5 )
                  {
                    v48 = (unsigned int)(v28 + v47);
                    v49 = (unsigned int)(v31 + v47);
                    *(_QWORD *)(v29 + 8 * v49) = *(_QWORD *)(v29 + 8 * v48);
                    *(_DWORD *)(v29 + 4 * v49 + 128) = *(_DWORD *)(v29 + 4 * v48 + 128);
                    v50 = v30 - 7;
                    if ( v30 != 6 )
                    {
                      v51 = (unsigned int)(v28 + v50);
                      v52 = (unsigned int)(v31 + v50);
                      *(_QWORD *)(v29 + 8 * v52) = *(_QWORD *)(v29 + 8 * v51);
                      *(_DWORD *)(v29 + 4 * v52 + 128) = *(_DWORD *)(v29 + 4 * v51 + 128);
                      v53 = v30 - 8;
                      if ( v30 != 7 )
                      {
                        v54 = (unsigned int)(v28 + v53);
                        v55 = (unsigned int)(v31 + v53);
                        *(_QWORD *)(v29 + 8 * v55) = *(_QWORD *)(v29 + 8 * v54);
                        *(_DWORD *)(v29 + 4 * v55 + 128) = *(_DWORD *)(v29 + 4 * v54 + 128);
                        v56 = v30 - 9;
                        if ( v30 != 8 )
                        {
                          v57 = (unsigned int)(v28 + v56);
                          v58 = (unsigned int)(v31 + v56);
                          *(_QWORD *)(v29 + 8 * v58) = *(_QWORD *)(v29 + 8 * v57);
                          *(_DWORD *)(v29 + 4 * v58 + 128) = *(_DWORD *)(v29 + 4 * v57 + 128);
                          v59 = v30 - 10;
                          if ( v30 != 9 )
                          {
                            v60 = (unsigned int)(v28 + v59);
                            v61 = (unsigned int)(v59 + v31);
                            *(_QWORD *)(v29 + 8 * v61) = *(_QWORD *)(v29 + 8 * v60);
                            *(_DWORD *)(v29 + 4 * v61 + 128) = *(_DWORD *)(v29 + 4 * v60 + 128);
                            v62 = v30 - 11;
                            if ( v30 != 10 )
                            {
                              v63 = (unsigned int)(v28 + v62);
                              v64 = (unsigned int)(v31 + v62);
                              *(_QWORD *)(v29 + 8 * v64) = *(_QWORD *)(v29 + 8 * v63);
                              *(_DWORD *)(v29 + 4 * v64 + 128) = *(_DWORD *)(v29 + 4 * v63 + 128);
                              v65 = v30 - 12;
                              if ( v30 != 11 )
                              {
                                v66 = (unsigned int)(v28 + v65);
                                v67 = (unsigned int)(v31 + v65);
                                *(_QWORD *)(v29 + 8 * v67) = *(_QWORD *)(v29 + 8 * v66);
                                *(_DWORD *)(v29 + 4 * v67 + 128) = *(_DWORD *)(v29 + 4 * v66 + 128);
                                v68 = v30 - 13;
                                if ( v30 != 12 )
                                {
                                  v69 = (unsigned int)(v28 + v68);
                                  v70 = (unsigned int)(v31 + v68);
                                  *(_QWORD *)(v29 + 8 * v70) = *(_QWORD *)(v29 + 8 * v69);
                                  *(_DWORD *)(v29 + 4 * v70 + 128) = *(_DWORD *)(v29 + 4 * v69 + 128);
                                  v71 = v30 - 14;
                                  if ( v30 != 13 )
                                  {
                                    v72 = (unsigned int)(v28 + v71);
                                    v73 = (unsigned int)(v31 + v71);
                                    *(_QWORD *)(v29 + 8 * v73) = *(_QWORD *)(v29 + 8 * v72);
                                    *(_DWORD *)(v29 + 4 * v73 + 128) = *(_DWORD *)(v29 + 4 * v72 + 128);
                                    v74 = v30 - 15;
                                    if ( v30 != 14 )
                                    {
                                      v75 = (unsigned int)(v28 + v74);
                                      v76 = (unsigned int)(v31 + v74);
                                      v77 = v30 - 16;
                                      *(_QWORD *)(v29 + 8 * v76) = *(_QWORD *)(v29 + 8 * v75);
                                      *(_DWORD *)(v29 + 4 * v76 + 128) = *(_DWORD *)(v29 + 4 * v75 + 128);
                                      if ( v74 )
                                      {
                                        v78 = (unsigned int)(v31 + v77);
                                        v79 = (unsigned int)(v28 + v77);
                                        *(_QWORD *)(v29 + 8 * v78) = *(_QWORD *)(v29 + 8 * v79);
                                        *(_DWORD *)(v29 + 4 * v78 + 128) = *(_DWORD *)(v29 + 4 * v79 + 128);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(_QWORD *)(v29 + 8 * v28) = a3;
        v80 = a1[1];
        *(_DWORD *)(v29 + 4 * v28 + 128) = a4;
        v81 = v80 + v20;
        v82 = *(unsigned int *)(v80 + v20 + 8);
        *(_DWORD *)(v80 + v20 + 8) = v82 + 1;
        if ( (_DWORD)v24 )
        {
          v83 = 16LL * (unsigned int)(v24 - 1);
          v84 = (unsigned __int64 *)(*(_QWORD *)(v83 + v80) + 8LL * *(unsigned int *)(v83 + v80 + 12));
          *v84 = *v84 & 0xFFFFFFFFFFFFFFC0LL | v82;
          v80 = a1[1];
          v81 = v80 + v20;
          v85 = *(unsigned int *)(v80 + v20 + 12);
          if ( (_DWORD)v85 != *(_DWORD *)(v80 + v20 + 8) - 1 )
          {
LABEL_33:
            v86 = 16 * v8 + v80;
            v87 = *(_QWORD *)(*(_QWORD *)v81 + 8 * v85);
            *(_QWORD *)v86 = v87 & 0xFFFFFFFFFFFFFFC0LL;
            *(_DWORD *)(v86 + 8) = (v87 & 0x3F) + 1;
            return v16;
          }
          v88 = (__int64 *)(v80 + v83);
          while ( v88 != (__int64 *)v80 )
          {
            v89 = *v88;
            v90 = *((unsigned int *)v88 + 3);
            v91 = v88;
            v88 -= 2;
            *(_DWORD *)(v89 + 4 * v90 + 128) = a4;
            if ( *((_DWORD *)v91 + 3) != *((_DWORD *)v91 + 2) - 1 )
              goto LABEL_38;
          }
          *(_DWORD *)(*(_QWORD *)v80 + 4LL * *(unsigned int *)(v80 + 12) + 168) = a4;
        }
LABEL_38:
        v85 = *(unsigned int *)(v81 + 12);
        goto LABEL_33;
      }
    }
    v94 = v24;
    v16 = sub_20E8730(a1, v24);
    v92 = v94 + (unsigned int)(unsigned __int8)v16;
    LODWORD(v24) = v92;
    v8 = (unsigned int)(v92 + 1);
    v20 = 16 * v92;
    v26 = v20 + a1[1];
    v27 = *(_DWORD *)(v26 + 8);
    goto LABEL_14;
  }
  if ( v10 != (_DWORD)v11 )
  {
    for ( i = v10 - 1; ; --i )
    {
      v13 = i + 1;
      *(_QWORD *)(v9 + 8 * v13 + 8) = *(_QWORD *)(v9 + 8LL * i + 8);
      *(_DWORD *)(v9 + 4 * v13 + 176) = *(_DWORD *)(v9 + 4LL * i + 176);
      if ( (_DWORD)v11 == i )
        break;
    }
    v10 = *(_DWORD *)(v9 + 268);
  }
  *(_QWORD *)(v9 + 8 * v11 + 8) = a3;
  v14 = a1[1];
  v15 = v10 + 1;
  v16 = 0;
  *(_DWORD *)(v9 + 4 * v11 + 176) = a4;
  *(_DWORD *)(v9 + 268) = v15;
  v17 = *(unsigned int *)(v14 + 12);
  *(_DWORD *)(v14 + 8) = v15;
  v18 = *(_QWORD *)(*(_QWORD *)v14 + 8 * v17);
  *(_QWORD *)(v14 + 16) = v18 & 0xFFFFFFFFFFFFFFC0LL;
  *(_DWORD *)(v14 + 24) = (v18 & 0x3F) + 1;
  return v16;
}
