__int64 __fastcall sub_20E51B0(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r12d
  int v8; // r9d
  unsigned int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  int v19; // esi
  __int64 *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  int v38; // r11d
  __int64 v39; // rdx
  __int64 v40; // r10
  unsigned __int64 *v41; // rsi
  __int64 *v42; // rdi
  int v43; // r9d
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 *v47; // rcx
  __int64 *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbp
  int v51; // esi
  __int64 v52; // r12
  __int64 v53; // rdx

  v2 = a1 + 1;
  v3 = a2;
  v5 = *a1;
  v6 = a1[1];
  v7 = a2 - 1;
  if ( a2 == 1 )
  {
    v8 = *(_DWORD *)(v5 + 268);
    v9 = *(_DWORD *)(v6 + 12) + 1;
    if ( v8 != v9 )
    {
      do
      {
        v10 = v9;
        v11 = v9++ - 1;
        *(_QWORD *)(v5 + 8 * v11 + 8) = *(_QWORD *)(v5 + 8 * v10 + 8);
        *(_DWORD *)(v5 + 4 * v11 + 176) = *(_DWORD *)(v5 + 4 * v10 + 176);
      }
      while ( v8 != v9 );
      v9 = *(_DWORD *)(v5 + 268);
      v6 = a1[1];
    }
    v12 = v9 - 1;
    *(_DWORD *)(v5 + 268) = v12;
    *(_DWORD *)(v6 + 8) = v12;
    if ( v12 )
      goto LABEL_6;
    result = 0;
    *(_DWORD *)(v5 + 264) = 0;
    memset((void *)v5, 0, 0x100u);
    v50 = *a1;
    v51 = *(_DWORD *)(*a1 + 264);
    v52 = *(unsigned int *)(*a1 + 268);
    *((_DWORD *)a1 + 4) = 0;
    if ( v51 )
    {
      v50 += 8;
      if ( *((_DWORD *)a1 + 5) )
      {
LABEL_39:
        v53 = a1[1];
        *(_QWORD *)(v53 + result) = v50;
        *(_QWORD *)(v53 + result + 8) = v52;
        ++*((_DWORD *)a1 + 4);
        return result;
      }
    }
    else
    {
      result = 0;
      if ( *((_DWORD *)a1 + 5) )
        goto LABEL_39;
    }
    sub_2237220(v2, a1 + 3, 1, 16);
    result = 16LL * *((unsigned int *)a1 + 4);
    goto LABEL_39;
  }
  v17 = 16LL * v7;
  v18 = v6 + v17;
  v19 = *(_DWORD *)(v6 + v17 + 8);
  v20 = *(__int64 **)(v6 + v17);
  if ( v19 == 1 )
  {
    v48 = *(__int64 **)(v5 + 272);
    v49 = *v48;
    *v20 = *v48;
    *v48 = (__int64)v20;
    sub_20E51B0(a1, v7, v48, v49, v2);
    result = *((unsigned int *)a1 + 4);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_7;
  }
  v21 = *(_DWORD *)(v18 + 12);
  v22 = v21 + 1;
  if ( v19 != (_DWORD)v22 )
  {
    v20[v21] = v20[v22];
    *((_DWORD *)v20 + v21 + 32) = *((_DWORD *)v20 + v22 + 32);
    v23 = v21 + 2;
    if ( v19 != (_DWORD)v23 )
    {
      v20[v22] = v20[v23];
      *((_DWORD *)v20 + v22 + 32) = *((_DWORD *)v20 + v23 + 32);
      v24 = v21 + 3;
      if ( v19 != (_DWORD)v24 )
      {
        v20[v23] = v20[v24];
        *((_DWORD *)v20 + v23 + 32) = *((_DWORD *)v20 + v24 + 32);
        v25 = v21 + 4;
        if ( v19 != (_DWORD)v25 )
        {
          v20[v24] = v20[v25];
          *((_DWORD *)v20 + v24 + 32) = *((_DWORD *)v20 + v25 + 32);
          v26 = v21 + 5;
          if ( v19 != (_DWORD)v26 )
          {
            v20[v25] = v20[v26];
            *((_DWORD *)v20 + v25 + 32) = *((_DWORD *)v20 + v26 + 32);
            v27 = v21 + 6;
            if ( v19 != (_DWORD)v27 )
            {
              v20[v26] = v20[v27];
              *((_DWORD *)v20 + v26 + 32) = *((_DWORD *)v20 + v27 + 32);
              v28 = v21 + 7;
              if ( v19 != (_DWORD)v28 )
              {
                v20[v27] = v20[v28];
                *((_DWORD *)v20 + v27 + 32) = *((_DWORD *)v20 + v28 + 32);
                v29 = v21 + 8;
                if ( v19 != (_DWORD)v29 )
                {
                  v20[v28] = v20[v29];
                  *((_DWORD *)v20 + v28 + 32) = *((_DWORD *)v20 + v29 + 32);
                  v30 = v21 + 9;
                  if ( v19 != (_DWORD)v30 )
                  {
                    v20[v29] = v20[v30];
                    *((_DWORD *)v20 + v29 + 32) = *((_DWORD *)v20 + v30 + 32);
                    v31 = v21 + 10;
                    if ( v19 != (_DWORD)v31 )
                    {
                      v20[v30] = v20[v31];
                      *((_DWORD *)v20 + v30 + 32) = *((_DWORD *)v20 + v31 + 32);
                      v32 = v21 + 11;
                      if ( v19 != (_DWORD)v32 )
                      {
                        v20[v31] = v20[v32];
                        *((_DWORD *)v20 + v31 + 32) = *((_DWORD *)v20 + v32 + 32);
                        v33 = v21 + 12;
                        if ( v19 != (_DWORD)v33 )
                        {
                          v20[v32] = v20[v33];
                          *((_DWORD *)v20 + v32 + 32) = *((_DWORD *)v20 + v33 + 32);
                          v34 = v21 + 13;
                          if ( v19 != (_DWORD)v34 )
                          {
                            v20[v33] = v20[v34];
                            *((_DWORD *)v20 + v33 + 32) = *((_DWORD *)v20 + v34 + 32);
                            v35 = v21 + 14;
                            if ( v19 != (_DWORD)v35 )
                            {
                              v20[v34] = v20[v35];
                              *((_DWORD *)v20 + v34 + 32) = *((_DWORD *)v20 + v35 + 32);
                              v36 = v21 + 15;
                              if ( v19 != (_DWORD)v36 )
                              {
                                v37 = v21 + 16;
                                v20[v35] = v20[v36];
                                *((_DWORD *)v20 + v35 + 32) = *((_DWORD *)v20 + v36 + 32);
                                if ( v19 != (_DWORD)v37 )
                                {
                                  v20[v36] = v20[v37];
                                  *((_DWORD *)v20 + v36 + 32) = *((_DWORD *)v20 + v37 + 32);
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
    v6 = a1[1];
    v18 = v6 + v17;
    LODWORD(v22) = *(_DWORD *)(v6 + v17 + 8);
  }
  v38 = v22 - 1;
  v39 = 16LL * (unsigned int)(v3 - 2);
  *(_DWORD *)(v18 + 8) = v22 - 1;
  v40 = (unsigned int)(v22 - 2);
  v41 = (unsigned __int64 *)(*(_QWORD *)(v39 + v6) + 8LL * *(unsigned int *)(v39 + v6 + 12));
  *v41 = v40 | *v41 & 0xFFFFFFFFFFFFFFC0LL;
  v42 = (__int64 *)a1[1];
  if ( HIDWORD(v42[(unsigned __int64)v17 / 8 + 1]) == v38 )
  {
    v43 = *((_DWORD *)v20 + v40 + 32);
    v44 = &v42[(unsigned __int64)v39 / 8];
    while ( v44 != v42 )
    {
      v45 = *v44;
      v46 = *((unsigned int *)v44 + 3);
      v47 = v44;
      v44 -= 2;
      *(_DWORD *)(v45 + 4 * v46 + 128) = v43;
      if ( *((_DWORD *)v47 + 3) != *((_DWORD *)v47 + 2) - 1 )
        goto LABEL_34;
    }
    *(_DWORD *)(*v44 + 4LL * *((unsigned int *)v44 + 3) + 168) = v43;
LABEL_34:
    sub_22281D0(v2, v7);
  }
LABEL_6:
  result = *((unsigned int *)a1 + 4);
  if ( !(_DWORD)result )
    return result;
LABEL_7:
  result = a1[1];
  if ( *(_DWORD *)(result + 12) < *(_DWORD *)(result + 8) )
  {
    v14 = 16 * v3;
    v15 = result + v14;
    v16 = *(_QWORD *)(*(_QWORD *)(result + 16LL * v7) + 8LL * *(unsigned int *)(result + 16LL * v7 + 12));
    *(_QWORD *)v15 = v16 & 0xFFFFFFFFFFFFFFC0LL;
    *(_DWORD *)(v15 + 8) = (v16 & 0x3F) + 1;
    result = a1[1];
    *(_DWORD *)(result + v14 + 12) = 0;
  }
  return result;
}
