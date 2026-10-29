/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4104B0
// Address: 0x00000000004104B0

//----- (00000000004104B0) ----------------------------------------------------
void __fastcall sub_4104B0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  _QWORD *v4; // r13
  _QWORD *v5; // r14
  _QWORD *v6; // r15
  _QWORD *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  _QWORD *v10; // rax
  void *v11; // rdx
  void *v12; // rax
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  _QWORD *v18; // rax
  void *v19; // rdx
  void *v20; // rax
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  _QWORD *v25; // r13
  void *v26; // rdi
  __int64 v27; // r14
  _QWORD *v28; // r15
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  _QWORD *v33; // r14
  void *v34; // rdi
  __int64 v35; // r15
  _QWORD *v36; // rax
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  _QWORD *v41; // r13
  void *v42; // rdi
  __int64 v43; // r12
  _QWORD *v44; // r14
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  void *v48; // rdi
  void *v49; // rdi
  __int64 v50; // r15
  _QWORD *v51; // rdx
  void *v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  void *v55; // rdi
  _QWORD *v56; // r13
  void *v57; // rdi
  __int64 v58; // rbp
  _QWORD *v59; // r12
  void *v60; // rdi
  void *v61; // rdi
  void *v62; // rdi
  void *v63; // rdi
  _QWORD *v64; // r12
  void *v65; // rdi
  __int64 v66; // rbx
  _QWORD *v67; // rbp
  void *v68; // rdi
  void *v69; // rdi
  void *v70; // rdi
  void *v71; // rdi
  _QWORD *v72; // r12
  void *v73; // rdi
  __int64 v74; // rbx
  _QWORD *v75; // rbp
  void *v76; // rdi
  void *v77; // rdi
  void *v78; // rdi
  _QWORD *v79; // [rsp+0h] [rbp-68h]
  _QWORD *v80; // [rsp+8h] [rbp-60h]
  _QWORD *v81; // [rsp+10h] [rbp-58h]
  _QWORD *v82; // [rsp+10h] [rbp-58h]
  _QWORD *v83; // [rsp+10h] [rbp-58h]
  _QWORD *v84; // [rsp+10h] [rbp-58h]
  _QWORD *v85; // [rsp+18h] [rbp-50h]
  _QWORD *v86; // [rsp+18h] [rbp-50h]
  _QWORD *v87; // [rsp+18h] [rbp-50h]
  _QWORD *v88; // [rsp+18h] [rbp-50h]
  _QWORD *v89; // [rsp+20h] [rbp-48h]
  _QWORD *v90; // [rsp+20h] [rbp-48h]
  void *v91; // [rsp+20h] [rbp-48h]
  void *v92; // [rsp+28h] [rbp-40h]

  v80 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v79 = (_QWORD *)v80[3];
      if ( v79 )
      {
        while ( 1 )
        {
          v1 = (_QWORD *)v79[3];
          if ( v1 )
          {
            while ( 1 )
            {
              v2 = (_QWORD *)v1[3];
              if ( v2 )
              {
                while ( 1 )
                {
                  v3 = (_QWORD *)v2[3];
                  if ( v3 )
                  {
                    while ( 1 )
                    {
                      v4 = (_QWORD *)v3[3];
                      if ( v4 )
                      {
                        while ( 1 )
                        {
                          v5 = (_QWORD *)v4[3];
                          if ( v5 )
                          {
                            while ( 1 )
                            {
                              v6 = (_QWORD *)v5[3];
                              if ( v6 )
                              {
                                while ( 1 )
                                {
                                  v85 = (_QWORD *)v6[3];
                                  while ( v85 )
                                  {
                                    sub_4104B0(v85[3]);
                                    v7 = v85;
                                    v81 = v85;
                                    v8 = (void *)v85[22];
                                    v85 = (_QWORD *)v85[2];
                                    if ( v8 )
                                    {
                                      v7[23] = 0;
                                      j__free(v8);
                                    }
                                    v9 = (void *)v81[19];
                                    if ( v9 )
                                    {
                                      v81[20] = 0;
                                      j__free(v9);
                                    }
                                    v10 = (_QWORD *)v81[15];
                                    if ( v10 )
                                    {
                                      do
                                      {
                                        v89 = v10;
                                        sub_40F970((_QWORD *)v10[3]);
                                        v11 = v89;
                                        v12 = (void *)v89[2];
                                        v13 = (void *)v89[5];
                                        if ( v13 )
                                        {
                                          v89[6] = 0;
                                          v92 = v12;
                                          j__free(v13);
                                          v12 = v92;
                                          v11 = v89;
                                        }
                                        v90 = v12;
                                        operator delete(v11, 0x40u);
                                        v10 = v90;
                                      }
                                      while ( v90 );
                                    }
                                    v14 = (void *)v81[10];
                                    if ( v14 )
                                    {
                                      v81[11] = 0;
                                      j__free(v14);
                                    }
                                    v15 = (void *)v81[7];
                                    if ( v15 )
                                    {
                                      v81[8] = 0;
                                      j__free(v15);
                                    }
                                    operator delete(v81, 0xD0u);
                                  }
                                  v16 = (void *)v6[22];
                                  v82 = (_QWORD *)v6[2];
                                  if ( v16 )
                                  {
                                    v6[23] = 0;
                                    j__free(v16);
                                  }
                                  v17 = (void *)v6[19];
                                  if ( v17 )
                                  {
                                    v6[20] = 0;
                                    j__free(v17);
                                  }
                                  v18 = (_QWORD *)v6[15];
                                  if ( v18 )
                                  {
                                    do
                                    {
                                      v86 = v18;
                                      sub_40F970((_QWORD *)v18[3]);
                                      v19 = v86;
                                      v20 = (void *)v86[2];
                                      v21 = (void *)v86[5];
                                      if ( v21 )
                                      {
                                        v86[6] = 0;
                                        v91 = v20;
                                        j__free(v21);
                                        v20 = v91;
                                        v19 = v86;
                                      }
                                      v87 = v20;
                                      operator delete(v19, 0x40u);
                                      v18 = v87;
                                    }
                                    while ( v87 );
                                  }
                                  v22 = (void *)v6[10];
                                  if ( v22 )
                                  {
                                    v6[11] = 0;
                                    j__free(v22);
                                  }
                                  v23 = (void *)v6[7];
                                  if ( v23 )
                                  {
                                    v6[8] = 0;
                                    j__free(v23);
                                  }
                                  operator delete(v6, 0xD0u);
                                  if ( !v82 )
                                    break;
                                  v6 = v82;
                                }
                              }
                              v48 = (void *)v5[22];
                              v84 = (_QWORD *)v5[2];
                              if ( v48 )
                              {
                                v5[23] = 0;
                                j__free(v48);
                              }
                              v49 = (void *)v5[19];
                              if ( v49 )
                              {
                                v5[20] = 0;
                                j__free(v49);
                              }
                              v50 = v5[15];
                              while ( v50 )
                              {
                                sub_40F970(*(_QWORD **)(v50 + 24));
                                v51 = (_QWORD *)v50;
                                v50 = *(_QWORD *)(v50 + 16);
                                v52 = (void *)v51[5];
                                if ( v52 )
                                {
                                  v51[6] = 0;
                                  v88 = v51;
                                  j__free(v52);
                                  v51 = v88;
                                }
                                operator delete(v51, 0x40u);
                              }
                              v53 = (void *)v5[10];
                              if ( v53 )
                              {
                                v5[11] = 0;
                                j__free(v53);
                              }
                              v54 = (void *)v5[7];
                              if ( v54 )
                              {
                                v5[8] = 0;
                                j__free(v54);
                              }
                              operator delete(v5, 0xD0u);
                              if ( !v84 )
                                break;
                              v5 = v84;
                            }
                          }
                          v32 = (void *)v4[22];
                          v33 = (_QWORD *)v4[2];
                          if ( v32 )
                          {
                            v4[23] = 0;
                            j__free(v32);
                          }
                          v34 = (void *)v4[19];
                          if ( v34 )
                          {
                            v4[20] = 0;
                            j__free(v34);
                          }
                          v35 = v4[15];
                          while ( v35 )
                          {
                            sub_40F970(*(_QWORD **)(v35 + 24));
                            v36 = (_QWORD *)v35;
                            v35 = *(_QWORD *)(v35 + 16);
                            v37 = (void *)v36[5];
                            if ( v37 )
                            {
                              v36[6] = 0;
                              v83 = v36;
                              j__free(v37);
                              v36 = v83;
                            }
                            operator delete(v36, 0x40u);
                          }
                          v38 = (void *)v4[10];
                          if ( v38 )
                          {
                            v4[11] = 0;
                            j__free(v38);
                          }
                          v39 = (void *)v4[7];
                          if ( v39 )
                          {
                            v4[8] = 0;
                            j__free(v39);
                          }
                          operator delete(v4, 0xD0u);
                          if ( !v33 )
                            break;
                          v4 = v33;
                        }
                      }
                      v24 = (void *)v3[22];
                      v25 = (_QWORD *)v3[2];
                      if ( v24 )
                      {
                        v3[23] = 0;
                        j__free(v24);
                      }
                      v26 = (void *)v3[19];
                      if ( v26 )
                      {
                        v3[20] = 0;
                        j__free(v26);
                      }
                      v27 = v3[15];
                      while ( v27 )
                      {
                        v28 = (_QWORD *)v27;
                        sub_40F970(*(_QWORD **)(v27 + 24));
                        v29 = *(void **)(v27 + 40);
                        v27 = *(_QWORD *)(v27 + 16);
                        if ( v29 )
                        {
                          v28[6] = 0;
                          j__free(v29);
                        }
                        operator delete(v28, 0x40u);
                      }
                      v30 = (void *)v3[10];
                      if ( v30 )
                      {
                        v3[11] = 0;
                        j__free(v30);
                      }
                      v31 = (void *)v3[7];
                      if ( v31 )
                      {
                        v3[8] = 0;
                        j__free(v31);
                      }
                      operator delete(v3, 0xD0u);
                      if ( !v25 )
                        break;
                      v3 = v25;
                    }
                  }
                  v40 = (void *)v2[22];
                  v41 = (_QWORD *)v2[2];
                  if ( v40 )
                  {
                    v2[23] = 0;
                    j__free(v40);
                  }
                  v42 = (void *)v2[19];
                  if ( v42 )
                  {
                    v2[20] = 0;
                    j__free(v42);
                  }
                  v43 = v2[15];
                  while ( v43 )
                  {
                    v44 = (_QWORD *)v43;
                    sub_40F970(*(_QWORD **)(v43 + 24));
                    v45 = *(void **)(v43 + 40);
                    v43 = *(_QWORD *)(v43 + 16);
                    if ( v45 )
                    {
                      v44[6] = 0;
                      j__free(v45);
                    }
                    operator delete(v44, 0x40u);
                  }
                  v46 = (void *)v2[10];
                  if ( v46 )
                  {
                    v2[11] = 0;
                    j__free(v46);
                  }
                  v47 = (void *)v2[7];
                  if ( v47 )
                  {
                    v2[8] = 0;
                    j__free(v47);
                  }
                  operator delete(v2, 0xD0u);
                  if ( !v41 )
                    break;
                  v2 = v41;
                }
              }
              v55 = (void *)v1[22];
              v56 = (_QWORD *)v1[2];
              if ( v55 )
              {
                v1[23] = 0;
                j__free(v55);
              }
              v57 = (void *)v1[19];
              if ( v57 )
              {
                v1[20] = 0;
                j__free(v57);
              }
              v58 = v1[15];
              while ( v58 )
              {
                v59 = (_QWORD *)v58;
                sub_40F970(*(_QWORD **)(v58 + 24));
                v60 = *(void **)(v58 + 40);
                v58 = *(_QWORD *)(v58 + 16);
                if ( v60 )
                {
                  v59[6] = 0;
                  j__free(v60);
                }
                operator delete(v59, 0x40u);
              }
              v61 = (void *)v1[10];
              if ( v61 )
              {
                v1[11] = 0;
                j__free(v61);
              }
              v62 = (void *)v1[7];
              if ( v62 )
              {
                v1[8] = 0;
                j__free(v62);
              }
              operator delete(v1, 0xD0u);
              if ( !v56 )
                break;
              v1 = v56;
            }
          }
          v63 = (void *)v79[22];
          v64 = (_QWORD *)v79[2];
          if ( v63 )
          {
            v79[23] = 0;
            j__free(v63);
          }
          v65 = (void *)v79[19];
          if ( v65 )
          {
            v79[20] = 0;
            j__free(v65);
          }
          v66 = v79[15];
          while ( v66 )
          {
            v67 = (_QWORD *)v66;
            sub_40F970(*(_QWORD **)(v66 + 24));
            v68 = *(void **)(v66 + 40);
            v66 = *(_QWORD *)(v66 + 16);
            if ( v68 )
            {
              v67[6] = 0;
              j__free(v68);
            }
            operator delete(v67, 0x40u);
          }
          v69 = (void *)v79[10];
          if ( v69 )
          {
            v79[11] = 0;
            j__free(v69);
          }
          v70 = (void *)v79[7];
          if ( v70 )
          {
            v79[8] = 0;
            j__free(v70);
          }
          operator delete(v79, 0xD0u);
          if ( !v64 )
            break;
          v79 = v64;
        }
      }
      v71 = (void *)v80[22];
      v72 = (_QWORD *)v80[2];
      if ( v71 )
      {
        v80[23] = 0;
        j__free(v71);
      }
      v73 = (void *)v80[19];
      if ( v73 )
      {
        v80[20] = 0;
        j__free(v73);
      }
      v74 = v80[15];
      while ( v74 )
      {
        v75 = (_QWORD *)v74;
        sub_40F970(*(_QWORD **)(v74 + 24));
        v76 = *(void **)(v74 + 40);
        v74 = *(_QWORD *)(v74 + 16);
        if ( v76 )
        {
          v75[6] = 0;
          j__free(v76);
        }
        operator delete(v75, 0x40u);
      }
      v77 = (void *)v80[10];
      if ( v77 )
      {
        v80[11] = 0;
        j__free(v77);
      }
      v78 = (void *)v80[7];
      if ( v78 )
      {
        v80[8] = 0;
        j__free(v78);
      }
      operator delete(v80, 0xD0u);
      if ( !v72 )
        break;
      v80 = v72;
    }
  }
}
