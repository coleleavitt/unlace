/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8057A30
// Address: 0x08057A30

//----- (08057A30) --------------------------------------------------------
void __usercall sub_8057A30(_DWORD *a1@<eax>)
{
  _DWORD *v1; // ebp
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // esi
  _DWORD *v9; // ebp
  _DWORD *v10; // edi
  void *v11; // eax
  void *v12; // eax
  int v13; // esi
  _DWORD *v14; // eax
  void *v15; // edx
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  _DWORD *v19; // ebp
  void *v20; // eax
  int v21; // edi
  _DWORD *v22; // eax
  void *v23; // edx
  void *v24; // eax
  void *v25; // eax
  void *v26; // eax
  _DWORD *v27; // ebp
  void *v28; // eax
  int v29; // esi
  _DWORD *v30; // eax
  void *v31; // edx
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  _DWORD *v35; // edi
  void *v36; // eax
  int v37; // esi
  _DWORD *v38; // eax
  void *v39; // edx
  void *v40; // eax
  void *v41; // eax
  void *v42; // eax
  _DWORD *v43; // esi
  void *v44; // eax
  int v45; // ebp
  _DWORD *v46; // eax
  void *v47; // edx
  void *v48; // eax
  void *v49; // eax
  void *v50; // eax
  _DWORD *v51; // edi
  void *v52; // eax
  int v53; // esi
  _DWORD *v54; // eax
  void *v55; // edx
  void *v56; // eax
  void *v57; // eax
  void *v58; // eax
  _DWORD *v59; // ebp
  void *v60; // eax
  int v61; // esi
  _DWORD *v62; // eax
  void *v63; // edx
  void *v64; // eax
  void *v65; // eax
  void *v66; // eax
  _DWORD *v67; // edi
  void *v68; // eax
  int v69; // ebp
  _DWORD *v70; // eax
  void *v71; // edx
  void *v72; // eax
  void *v73; // eax
  void *v74; // eax
  _DWORD *v75; // edi
  void *v76; // eax
  int v77; // esi
  _DWORD *v78; // eax
  void *v79; // edx
  void *v80; // eax
  void *v81; // eax
  _DWORD *v82; // [esp+0h] [ebp-40h]
  _DWORD *v83; // [esp+0h] [ebp-40h]
  _DWORD *v84; // [esp+4h] [ebp-3Ch]
  _DWORD *v85; // [esp+4h] [ebp-3Ch]
  _DWORD *v86; // [esp+8h] [ebp-38h]
  _DWORD *v87; // [esp+8h] [ebp-38h]
  _DWORD *v88; // [esp+Ch] [ebp-34h]
  _DWORD *v89; // [esp+Ch] [ebp-34h]
  _DWORD *v90; // [esp+10h] [ebp-30h]
  _DWORD *v91; // [esp+10h] [ebp-30h]
  _DWORD *v92; // [esp+14h] [ebp-2Ch]
  _DWORD *v93; // [esp+14h] [ebp-2Ch]
  _DWORD *v94; // [esp+18h] [ebp-28h]
  _DWORD *v95; // [esp+18h] [ebp-28h]
  _DWORD *v96; // [esp+1Ch] [ebp-24h]
  _DWORD *v97; // [esp+1Ch] [ebp-24h]
  _DWORD *v98; // [esp+20h] [ebp-20h]

  v1 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v2 = (_DWORD *)v1[3];
      if ( v2 )
      {
        v82 = v1;
        while ( 1 )
        {
          v3 = (_DWORD *)v2[3];
          if ( v3 )
          {
            v84 = v2;
            while ( 1 )
            {
              v4 = (_DWORD *)v3[3];
              if ( v4 )
              {
                v86 = v3;
                while ( 1 )
                {
                  v5 = (_DWORD *)v4[3];
                  if ( v5 )
                  {
                    v88 = v4;
                    while ( 1 )
                    {
                      v6 = (_DWORD *)v5[3];
                      if ( v6 )
                      {
                        v90 = v5;
                        while ( 1 )
                        {
                          v7 = (_DWORD *)v6[3];
                          if ( v7 )
                          {
                            v92 = v6;
                            while ( 1 )
                            {
                              v8 = (_DWORD *)v7[3];
                              if ( v8 )
                              {
                                v94 = v7;
                                while ( 1 )
                                {
                                  v9 = (_DWORD *)v8[3];
                                  if ( v9 )
                                  {
                                    v96 = v8;
                                    do
                                    {
                                      v10 = v9;
                                      sub_8057A30();
                                      v11 = (void *)v9[22];
                                      v9 = (_DWORD *)v9[2];
                                      if ( v11 )
                                      {
                                        v10[23] = 0;
                                        sub_80CF780(v11);
                                      }
                                      v12 = (void *)v10[19];
                                      if ( v12 )
                                      {
                                        v10[20] = 0;
                                        sub_80CF780(v12);
                                      }
                                      v13 = v10[15];
                                      while ( v13 )
                                      {
                                        sub_8057050(*(_DWORD **)(v13 + 12));
                                        v14 = (_DWORD *)v13;
                                        v13 = *(_DWORD *)(v13 + 8);
                                        v15 = (void *)v14[5];
                                        if ( v15 )
                                        {
                                          v98 = v14;
                                          v14[6] = 0;
                                          sub_80CF780(v15);
                                          v14 = v98;
                                        }
                                        operator delete(v14, 0x20u);
                                      }
                                      v16 = (void *)v10[10];
                                      if ( v16 )
                                      {
                                        v10[11] = 0;
                                        sub_80CF780(v16);
                                      }
                                      v17 = (void *)v10[7];
                                      if ( v17 )
                                      {
                                        v10[8] = 0;
                                        sub_80CF780(v17);
                                      }
                                      operator delete(v10, 0x68u);
                                    }
                                    while ( v9 );
                                    v8 = v96;
                                  }
                                  v18 = (void *)v8[22];
                                  v19 = (_DWORD *)v8[2];
                                  if ( v18 )
                                  {
                                    v8[23] = 0;
                                    sub_80CF780(v18);
                                  }
                                  v20 = (void *)v8[19];
                                  if ( v20 )
                                  {
                                    v8[20] = 0;
                                    sub_80CF780(v20);
                                  }
                                  v21 = v8[15];
                                  while ( v21 )
                                  {
                                    sub_8057050(*(_DWORD **)(v21 + 12));
                                    v22 = (_DWORD *)v21;
                                    v21 = *(_DWORD *)(v21 + 8);
                                    v23 = (void *)v22[5];
                                    if ( v23 )
                                    {
                                      v97 = v22;
                                      v22[6] = 0;
                                      sub_80CF780(v23);
                                      v22 = v97;
                                    }
                                    operator delete(v22, 0x20u);
                                  }
                                  v24 = (void *)v8[10];
                                  if ( v24 )
                                  {
                                    v8[11] = 0;
                                    sub_80CF780(v24);
                                  }
                                  v25 = (void *)v8[7];
                                  if ( v25 )
                                  {
                                    v8[8] = 0;
                                    sub_80CF780(v25);
                                  }
                                  operator delete(v8, 0x68u);
                                  if ( !v19 )
                                    break;
                                  v8 = v19;
                                }
                                v7 = v94;
                              }
                              v42 = (void *)v7[22];
                              v43 = (_DWORD *)v7[2];
                              if ( v42 )
                              {
                                v7[23] = 0;
                                sub_80CF780(v42);
                              }
                              v44 = (void *)v7[19];
                              if ( v44 )
                              {
                                v7[20] = 0;
                                sub_80CF780(v44);
                              }
                              v45 = v7[15];
                              while ( v45 )
                              {
                                sub_8057050(*(_DWORD **)(v45 + 12));
                                v46 = (_DWORD *)v45;
                                v45 = *(_DWORD *)(v45 + 8);
                                v47 = (void *)v46[5];
                                if ( v47 )
                                {
                                  v95 = v46;
                                  v46[6] = 0;
                                  sub_80CF780(v47);
                                  v46 = v95;
                                }
                                operator delete(v46, 0x20u);
                              }
                              v48 = (void *)v7[10];
                              if ( v48 )
                              {
                                v7[11] = 0;
                                sub_80CF780(v48);
                              }
                              v49 = (void *)v7[7];
                              if ( v49 )
                              {
                                v7[8] = 0;
                                sub_80CF780(v49);
                              }
                              operator delete(v7, 0x68u);
                              if ( !v43 )
                                break;
                              v7 = v43;
                            }
                            v6 = v92;
                          }
                          v34 = (void *)v6[22];
                          v35 = (_DWORD *)v6[2];
                          if ( v34 )
                          {
                            v6[23] = 0;
                            sub_80CF780(v34);
                          }
                          v36 = (void *)v6[19];
                          if ( v36 )
                          {
                            v6[20] = 0;
                            sub_80CF780(v36);
                          }
                          v37 = v6[15];
                          while ( v37 )
                          {
                            sub_8057050(*(_DWORD **)(v37 + 12));
                            v38 = (_DWORD *)v37;
                            v37 = *(_DWORD *)(v37 + 8);
                            v39 = (void *)v38[5];
                            if ( v39 )
                            {
                              v93 = v38;
                              v38[6] = 0;
                              sub_80CF780(v39);
                              v38 = v93;
                            }
                            operator delete(v38, 0x20u);
                          }
                          v40 = (void *)v6[10];
                          if ( v40 )
                          {
                            v6[11] = 0;
                            sub_80CF780(v40);
                          }
                          v41 = (void *)v6[7];
                          if ( v41 )
                          {
                            v6[8] = 0;
                            sub_80CF780(v41);
                          }
                          operator delete(v6, 0x68u);
                          if ( !v35 )
                            break;
                          v6 = v35;
                        }
                        v5 = v90;
                      }
                      v26 = (void *)v5[22];
                      v27 = (_DWORD *)v5[2];
                      if ( v26 )
                      {
                        v5[23] = 0;
                        sub_80CF780(v26);
                      }
                      v28 = (void *)v5[19];
                      if ( v28 )
                      {
                        v5[20] = 0;
                        sub_80CF780(v28);
                      }
                      v29 = v5[15];
                      while ( v29 )
                      {
                        sub_8057050(*(_DWORD **)(v29 + 12));
                        v30 = (_DWORD *)v29;
                        v29 = *(_DWORD *)(v29 + 8);
                        v31 = (void *)v30[5];
                        if ( v31 )
                        {
                          v91 = v30;
                          v30[6] = 0;
                          sub_80CF780(v31);
                          v30 = v91;
                        }
                        operator delete(v30, 0x20u);
                      }
                      v32 = (void *)v5[10];
                      if ( v32 )
                      {
                        v5[11] = 0;
                        sub_80CF780(v32);
                      }
                      v33 = (void *)v5[7];
                      if ( v33 )
                      {
                        v5[8] = 0;
                        sub_80CF780(v33);
                      }
                      operator delete(v5, 0x68u);
                      if ( !v27 )
                        break;
                      v5 = v27;
                    }
                    v4 = v88;
                  }
                  v50 = (void *)v4[22];
                  v51 = (_DWORD *)v4[2];
                  if ( v50 )
                  {
                    v4[23] = 0;
                    sub_80CF780(v50);
                  }
                  v52 = (void *)v4[19];
                  if ( v52 )
                  {
                    v4[20] = 0;
                    sub_80CF780(v52);
                  }
                  v53 = v4[15];
                  while ( v53 )
                  {
                    sub_8057050(*(_DWORD **)(v53 + 12));
                    v54 = (_DWORD *)v53;
                    v53 = *(_DWORD *)(v53 + 8);
                    v55 = (void *)v54[5];
                    if ( v55 )
                    {
                      v89 = v54;
                      v54[6] = 0;
                      sub_80CF780(v55);
                      v54 = v89;
                    }
                    operator delete(v54, 0x20u);
                  }
                  v56 = (void *)v4[10];
                  if ( v56 )
                  {
                    v4[11] = 0;
                    sub_80CF780(v56);
                  }
                  v57 = (void *)v4[7];
                  if ( v57 )
                  {
                    v4[8] = 0;
                    sub_80CF780(v57);
                  }
                  operator delete(v4, 0x68u);
                  if ( !v51 )
                    break;
                  v4 = v51;
                }
                v3 = v86;
              }
              v58 = (void *)v3[22];
              v59 = (_DWORD *)v3[2];
              if ( v58 )
              {
                v3[23] = 0;
                sub_80CF780(v58);
              }
              v60 = (void *)v3[19];
              if ( v60 )
              {
                v3[20] = 0;
                sub_80CF780(v60);
              }
              v61 = v3[15];
              while ( v61 )
              {
                sub_8057050(*(_DWORD **)(v61 + 12));
                v62 = (_DWORD *)v61;
                v61 = *(_DWORD *)(v61 + 8);
                v63 = (void *)v62[5];
                if ( v63 )
                {
                  v87 = v62;
                  v62[6] = 0;
                  sub_80CF780(v63);
                  v62 = v87;
                }
                operator delete(v62, 0x20u);
              }
              v64 = (void *)v3[10];
              if ( v64 )
              {
                v3[11] = 0;
                sub_80CF780(v64);
              }
              v65 = (void *)v3[7];
              if ( v65 )
              {
                v3[8] = 0;
                sub_80CF780(v65);
              }
              operator delete(v3, 0x68u);
              if ( !v59 )
                break;
              v3 = v59;
            }
            v2 = v84;
          }
          v66 = (void *)v2[22];
          v67 = (_DWORD *)v2[2];
          if ( v66 )
          {
            v2[23] = 0;
            sub_80CF780(v66);
          }
          v68 = (void *)v2[19];
          if ( v68 )
          {
            v2[20] = 0;
            sub_80CF780(v68);
          }
          v69 = v2[15];
          while ( v69 )
          {
            sub_8057050(*(_DWORD **)(v69 + 12));
            v70 = (_DWORD *)v69;
            v69 = *(_DWORD *)(v69 + 8);
            v71 = (void *)v70[5];
            if ( v71 )
            {
              v85 = v70;
              v70[6] = 0;
              sub_80CF780(v71);
              v70 = v85;
            }
            operator delete(v70, 0x20u);
          }
          v72 = (void *)v2[10];
          if ( v72 )
          {
            v2[11] = 0;
            sub_80CF780(v72);
          }
          v73 = (void *)v2[7];
          if ( v73 )
          {
            v2[8] = 0;
            sub_80CF780(v73);
          }
          operator delete(v2, 0x68u);
          if ( !v67 )
            break;
          v2 = v67;
        }
        v1 = v82;
      }
      v74 = (void *)v1[22];
      v75 = (_DWORD *)v1[2];
      if ( v74 )
      {
        v1[23] = 0;
        sub_80CF780(v74);
      }
      v76 = (void *)v1[19];
      if ( v76 )
      {
        v1[20] = 0;
        sub_80CF780(v76);
      }
      v77 = v1[15];
      while ( v77 )
      {
        sub_8057050(*(_DWORD **)(v77 + 12));
        v78 = (_DWORD *)v77;
        v77 = *(_DWORD *)(v77 + 8);
        v79 = (void *)v78[5];
        if ( v79 )
        {
          v83 = v78;
          v78[6] = 0;
          sub_80CF780(v79);
          v78 = v83;
        }
        operator delete(v78, 0x20u);
      }
      v80 = (void *)v1[10];
      if ( v80 )
      {
        v1[11] = 0;
        sub_80CF780(v80);
      }
      v81 = (void *)v1[7];
      if ( v81 )
      {
        v1[8] = 0;
        sub_80CF780(v81);
      }
      operator delete(v1, 0x68u);
      if ( !v75 )
        break;
      v1 = v75;
    }
  }
}
