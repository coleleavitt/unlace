void __fastcall sub_69F740(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rsi
  void *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // eax
  void *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // r12
  _QWORD *v17; // rdx
  _QWORD *v18; // r15
  __int64 *v19; // r14
  __int64 *v20; // r13
  __int64 v21; // rsi
  _DWORD *v22; // rbp
  int v23; // eax
  void *v24; // rdi
  _QWORD *v25; // rsi
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  _QWORD *v28; // r12
  _QWORD *v29; // rcx
  _QWORD *v30; // r15
  __int64 *v31; // r14
  __int64 *v32; // r13
  __int64 v33; // rsi
  _QWORD *v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rbp
  _QWORD *v38; // rcx
  _QWORD *v39; // r15
  __int64 *v40; // r14
  __int64 *v41; // r13
  __int64 v42; // rsi
  void *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rsi
  __int64 v54; // rsi
  _QWORD *v55; // [rsp+0h] [rbp-68h]
  _QWORD *v56; // [rsp+0h] [rbp-68h]
  _QWORD *v57; // [rsp+0h] [rbp-68h]
  _QWORD *v58; // [rsp+8h] [rbp-60h]
  _QWORD *v59; // [rsp+8h] [rbp-60h]
  _QWORD *v60; // [rsp+8h] [rbp-60h]
  _QWORD *v61; // [rsp+10h] [rbp-58h]
  _QWORD *v62; // [rsp+10h] [rbp-58h]
  _QWORD *v63; // [rsp+10h] [rbp-58h]
  _QWORD *v64; // [rsp+18h] [rbp-50h]
  _QWORD *v65; // [rsp+18h] [rbp-50h]
  _QWORD *v66; // [rsp+18h] [rbp-50h]
  _QWORD *v67; // [rsp+20h] [rbp-48h]
  _QWORD *v68; // [rsp+20h] [rbp-48h]
  _QWORD *v69; // [rsp+20h] [rbp-48h]
  _QWORD *v70; // [rsp+28h] [rbp-40h]
  _QWORD *v71; // [rsp+28h] [rbp-40h]

  switch ( *(_DWORD *)a1 )
  {
    case 2:
    case 4:
      goto LABEL_13;
    case 3:
      v7 = *(_QWORD *)(a1 + 8);
      v8 = sub_2575D20();
      if ( v7 != v8 )
        goto LABEL_17;
      v34 = *(_QWORD **)(a1 + 16);
      v70 = v34;
      if ( !v34 )
        goto LABEL_154;
      v60 = &v34[3 * *(v34 - 1)];
      if ( v34 == v60 )
        goto LABEL_180;
      do
      {
        v60 -= 3;
        if ( v8 == *v60 )
        {
          v35 = (_QWORD *)v60[1];
          v69 = v35;
          if ( v35 )
          {
            v57 = &v35[3 * *(v35 - 1)];
            if ( v35 == v57 )
            {
              v51 = 0;
            }
            else
            {
              do
              {
                v57 -= 3;
                if ( v8 == *v57 )
                {
                  v36 = (_QWORD *)v57[1];
                  v66 = v36;
                  if ( v36 )
                  {
                    v37 = &v36[3 * *(v36 - 1)];
                    if ( v36 == v37 )
                    {
                      v49 = 0;
                    }
                    else
                    {
                      do
                      {
                        v37 -= 3;
                        if ( v8 == *v37 )
                        {
                          v38 = (_QWORD *)v37[1];
                          v63 = v38;
                          if ( v38 )
                          {
                            v39 = &v38[3 * *(v38 - 1)];
                            if ( v38 == v39 )
                            {
                              v45 = 0;
                            }
                            else
                            {
                              do
                              {
                                v39 -= 3;
                                if ( v8 == *v39 )
                                {
                                  v40 = (__int64 *)v39[1];
                                  if ( v40 )
                                  {
                                    v41 = &v40[3 * *(v40 - 1)];
                                    if ( v40 == v41 )
                                    {
                                      v42 = 0;
                                    }
                                    else
                                    {
                                      do
                                      {
                                        v41 -= 3;
                                        sub_5FF3B0(v41);
                                      }
                                      while ( v40 != v41 );
                                      v42 = 24 * *(v40 - 1);
                                    }
                                    operator delete[](v40 - 1, v42 + 8);
                                  }
                                  v39[1] = 0;
                                }
                                else
                                {
                                  sub_25769A0(v39);
                                }
                              }
                              while ( v63 != v39 );
                              v45 = 24LL * *(v63 - 1);
                            }
                            operator delete[](v63 - 1, v45 + 8);
                          }
                          v37[1] = 0;
                        }
                        else
                        {
                          sub_25769A0(v37);
                        }
                      }
                      while ( v66 != v37 );
                      v49 = 24LL * *(v66 - 1);
                    }
                    operator delete[](v66 - 1, v49 + 8);
                  }
                  v57[1] = 0;
                }
                else
                {
                  sub_25769A0(v57);
                }
              }
              while ( v69 != v57 );
              v51 = 24LL * *(v69 - 1);
            }
            operator delete[](v69 - 1, v51 + 8);
          }
          v60[1] = 0;
        }
        else
        {
          sub_25769A0(v60);
        }
      }
      while ( v70 != v60 );
      goto LABEL_152;
    case 5:
      if ( *(_DWORD *)(a1 + 32) > 0x40u )
      {
        v24 = *(void **)(a1 + 24);
        if ( v24 )
          operator delete[](v24);
      }
LABEL_13:
      if ( *(_DWORD *)(a1 + 16) > 0x40u )
      {
        v6 = *(void **)(a1 + 8);
        if ( v6 )
          operator delete[](v6);
      }
      goto LABEL_11;
    case 6:
      v11 = *(_QWORD *)(a1 + 32);
      v12 = sub_2575D20();
      if ( v11 == v12 )
      {
        v25 = *(_QWORD **)(a1 + 40);
        v71 = v25;
        if ( v25 )
        {
          v59 = &v25[3 * *(v25 - 1)];
          if ( v25 == v59 )
          {
            v54 = 0;
          }
          else
          {
            do
            {
              v59 -= 3;
              if ( v12 == *v59 )
              {
                v26 = (_QWORD *)v59[1];
                v68 = v26;
                if ( v26 )
                {
                  v56 = &v26[3 * *(v26 - 1)];
                  if ( v26 == v56 )
                  {
                    v53 = 0;
                  }
                  else
                  {
                    do
                    {
                      v56 -= 3;
                      if ( v12 == *v56 )
                      {
                        v27 = (_QWORD *)v56[1];
                        v65 = v27;
                        if ( v27 )
                        {
                          v28 = &v27[3 * *(v27 - 1)];
                          if ( v27 == v28 )
                          {
                            v50 = 0;
                          }
                          else
                          {
                            do
                            {
                              v28 -= 3;
                              if ( v12 == *v28 )
                              {
                                v29 = (_QWORD *)v28[1];
                                v62 = v29;
                                if ( v29 )
                                {
                                  v30 = &v29[3 * *(v29 - 1)];
                                  if ( v29 == v30 )
                                  {
                                    v47 = 0;
                                  }
                                  else
                                  {
                                    do
                                    {
                                      v30 -= 3;
                                      if ( v12 == *v30 )
                                      {
                                        v31 = (__int64 *)v30[1];
                                        if ( v31 )
                                        {
                                          v32 = &v31[3 * *(v31 - 1)];
                                          if ( v31 == v32 )
                                          {
                                            v33 = 0;
                                          }
                                          else
                                          {
                                            do
                                            {
                                              v32 -= 3;
                                              sub_5FF3B0(v32);
                                            }
                                            while ( v31 != v32 );
                                            v33 = 24 * *(v31 - 1);
                                          }
                                          operator delete[](v31 - 1, v33 + 8);
                                        }
                                        v30[1] = 0;
                                      }
                                      else
                                      {
                                        sub_25769A0(v30);
                                      }
                                    }
                                    while ( v62 != v30 );
                                    v47 = 24LL * *(v62 - 1);
                                  }
                                  operator delete[](v62 - 1, v47 + 8);
                                }
                                v28[1] = 0;
                              }
                              else
                              {
                                sub_25769A0(v28);
                              }
                            }
                            while ( v65 != v28 );
                            v50 = 24LL * *(v65 - 1);
                          }
                          operator delete[](v65 - 1, v50 + 8);
                        }
                        v56[1] = 0;
                      }
                      else
                      {
                        sub_25769A0(v56);
                      }
                    }
                    while ( v68 != v56 );
                    v53 = 24LL * *(v68 - 1);
                  }
                  operator delete[](v68 - 1, v53 + 8);
                }
                v59[1] = 0;
              }
              else
              {
                sub_25769A0(v59);
              }
            }
            while ( v71 != v59 );
            v54 = 24LL * *(v71 - 1);
          }
          operator delete[](v71 - 1, v54 + 8);
        }
        *(_QWORD *)(a1 + 40) = 0;
      }
      else
      {
        sub_25769A0(a1 + 32);
      }
      if ( *(_QWORD *)(a1 + 8) == v12 )
      {
        v13 = *(_QWORD **)(a1 + 16);
        v70 = v13;
        if ( v13 )
        {
          v58 = &v13[3 * *(v13 - 1)];
          if ( v13 == v58 )
          {
LABEL_180:
            v44 = 0;
          }
          else
          {
            do
            {
              v58 -= 3;
              if ( v12 == *v58 )
              {
                v14 = (_QWORD *)v58[1];
                v67 = v14;
                if ( v14 )
                {
                  v55 = &v14[3 * *(v14 - 1)];
                  if ( v14 == v55 )
                  {
                    v52 = 0;
                  }
                  else
                  {
                    do
                    {
                      v55 -= 3;
                      if ( v12 == *v55 )
                      {
                        v15 = (_QWORD *)v55[1];
                        v64 = v15;
                        if ( v15 )
                        {
                          v16 = &v15[3 * *(v15 - 1)];
                          if ( v15 == v16 )
                          {
                            v48 = 0;
                          }
                          else
                          {
                            do
                            {
                              v16 -= 3;
                              if ( v12 == *v16 )
                              {
                                v17 = (_QWORD *)v16[1];
                                v61 = v17;
                                if ( v17 )
                                {
                                  v18 = &v17[3 * *(v17 - 1)];
                                  if ( v17 == v18 )
                                  {
                                    v46 = 0;
                                  }
                                  else
                                  {
                                    do
                                    {
                                      v18 -= 3;
                                      if ( v12 == *v18 )
                                      {
                                        v19 = (__int64 *)v18[1];
                                        if ( v19 )
                                        {
                                          v20 = &v19[3 * *(v19 - 1)];
                                          if ( v19 == v20 )
                                          {
                                            v21 = 0;
                                          }
                                          else
                                          {
                                            do
                                            {
                                              v20 -= 3;
                                              sub_5FF3B0(v20);
                                            }
                                            while ( v19 != v20 );
                                            v21 = 24 * *(v19 - 1);
                                          }
                                          operator delete[](v19 - 1, v21 + 8);
                                        }
                                        v18[1] = 0;
                                      }
                                      else
                                      {
                                        sub_25769A0(v18);
                                      }
                                    }
                                    while ( v61 != v18 );
                                    v46 = 24LL * *(v61 - 1);
                                  }
                                  operator delete[](v61 - 1, v46 + 8);
                                }
                                v16[1] = 0;
                              }
                              else
                              {
                                sub_25769A0(v16);
                              }
                            }
                            while ( v64 != v16 );
                            v48 = 24LL * *(v64 - 1);
                          }
                          operator delete[](v64 - 1, v48 + 8);
                        }
                        v55[1] = 0;
                      }
                      else
                      {
                        sub_25769A0(v55);
                      }
                    }
                    while ( v67 != v55 );
                    v52 = 24LL * *(v67 - 1);
                  }
                  operator delete[](v67 - 1, v52 + 8);
                }
                v58[1] = 0;
              }
              else
              {
                sub_25769A0(v58);
              }
            }
            while ( v70 != v58 );
LABEL_152:
            v44 = 24LL * *(v70 - 1);
          }
          operator delete[](v70 - 1, v44 + 8);
        }
LABEL_154:
        *(_QWORD *)(a1 + 16) = 0;
      }
      else
      {
LABEL_17:
        sub_25769A0(a1 + 8);
      }
      goto LABEL_11;
    case 7:
      v23 = *(_DWORD *)(a1 + 32);
      if ( v23 )
      {
        if ( (unsigned int)(v23 - 3) <= 0xFFFFFFFB )
        {
          v43 = *(void **)(a1 + 40);
          if ( v43 )
            operator delete[](v43);
        }
        *(_DWORD *)(a1 + 32) = 0;
      }
      goto LABEL_11;
    case 8:
      v2 = *(_QWORD *)(a1 + 8);
      if ( !v2 )
        goto LABEL_11;
      v3 = v2 + 56LL * *(_QWORD *)(v2 - 8);
      if ( v2 == v3 )
        goto LABEL_176;
      while ( 1 )
      {
        v4 = v3 - 56;
        if ( *(_DWORD *)(v3 - 56) > 1u )
        {
          sub_69F740(v3 - 56);
          v2 = *(_QWORD *)(a1 + 8);
        }
        if ( v4 == v2 )
          break;
        v3 -= 56;
      }
      goto LABEL_9;
    case 9:
      v2 = *(_QWORD *)(a1 + 8);
      if ( !v2 )
        goto LABEL_11;
      v3 = v2 + 56LL * *(_QWORD *)(v2 - 8);
      if ( v2 == v3 )
        goto LABEL_176;
      while ( 1 )
      {
        v4 = v3 - 56;
        if ( *(_DWORD *)(v3 - 56) > 1u )
        {
          sub_69F740(v3 - 56);
          v2 = *(_QWORD *)(a1 + 8);
        }
        if ( v4 == v2 )
          break;
        v3 -= 56;
      }
      goto LABEL_9;
    case 0xA:
      v2 = *(_QWORD *)(a1 + 8);
      if ( !v2 )
        goto LABEL_11;
      v3 = v2 + 56LL * *(_QWORD *)(v2 - 8);
      if ( v2 != v3 )
      {
        while ( 1 )
        {
          v4 = v3 - 56;
          if ( *(_DWORD *)(v3 - 56) <= 1u )
          {
            if ( v2 == v4 )
              goto LABEL_9;
          }
          else
          {
            sub_69F740(v3 - 56);
            v2 = *(_QWORD *)(a1 + 8);
            if ( v4 == v2 )
            {
LABEL_9:
              v5 = 56LL * *(_QWORD *)(v3 - 64);
              goto LABEL_10;
            }
          }
          v3 -= 56;
        }
      }
LABEL_176:
      v4 = v2;
      v5 = 0;
LABEL_10:
      operator delete[]((void *)(v4 - 8), v5 + 8);
LABEL_11:
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 0;
      return;
    case 0xB:
      v22 = *(_DWORD **)(a1 + 16);
      if ( v22 )
      {
        if ( *v22 > 1u )
          sub_69F740(*(_QWORD *)(a1 + 16));
        operator delete(v22, 0x38u);
      }
      goto LABEL_11;
    case 0xC:
      v9 = *(_DWORD *)(a1 + 16);
      if ( v9 )
      {
        if ( v9 > 4 )
        {
          v10 = *(void **)(a1 + 24);
          if ( v10 )
            operator delete[](v10);
        }
        *(_DWORD *)(a1 + 16) = 0;
      }
      goto LABEL_11;
    default:
      goto LABEL_11;
  }
}

