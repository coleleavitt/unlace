__int64 __fastcall sub_20E8380(__int64 a1, int a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned __int64 *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // ecx
  int v26; // edx
  unsigned __int64 v27; // rdx
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rax
  int v31; // edx
  __int64 v33; // rax
  __int64 v34; // [rsp+10h] [rbp-60h]
  _DWORD v35[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v36; // [rsp+28h] [rbp-48h]
  __int64 v37; // [rsp+30h] [rbp-40h]

  v2 = 0;
  v3 = 0;
  v4 = sub_2228330(2, *(_DWORD *)(a1 + 268), 12, 0, (unsigned int)v35, a2, 1);
  v6 = *(unsigned __int64 **)(a1 + 272);
  v36 = 0;
  v37 = 0;
  v7 = v4;
  v8 = *v6;
  if ( !*v6 )
    goto LABEL_22;
LABEL_2:
  v9 = v8 & 0xFFFFFFFFFFFFFFC0LL;
  *v6 = *(_QWORD *)v8;
  while ( 1 )
  {
    memset((void *)v8, 0, 0xC0u);
    v10 = v35[v2];
    if ( v10 + v3 != v3 )
    {
      *(_QWORD *)v8 = *(_QWORD *)(a1 + 8LL * v3 + 8);
      *(_DWORD *)(v8 + 128) = *(_DWORD *)(a1 + 4LL * v3 + 176);
      v11 = v3 + 1;
      if ( v10 != 1 )
      {
        *(_QWORD *)(v8 + 8) = *(_QWORD *)(a1 + 8 * v11 + 8);
        *(_DWORD *)(v8 + 132) = *(_DWORD *)(a1 + 4 * v11 + 176);
        v12 = v3 + 2;
        if ( v10 != 2 )
        {
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(a1 + 8 * v12 + 8);
          *(_DWORD *)(v8 + 136) = *(_DWORD *)(a1 + 4 * v12 + 176);
          v13 = v3 + 3;
          if ( v10 != 3 )
          {
            *(_QWORD *)(v8 + 24) = *(_QWORD *)(a1 + 8 * v13 + 8);
            *(_DWORD *)(v8 + 140) = *(_DWORD *)(a1 + 4 * v13 + 176);
            v14 = v3 + 4;
            if ( v10 != 4 )
            {
              *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 8 * v14 + 8);
              *(_DWORD *)(v8 + 144) = *(_DWORD *)(a1 + 4 * v14 + 176);
              v15 = v3 + 5;
              if ( v10 != 5 )
              {
                *(_QWORD *)(v8 + 40) = *(_QWORD *)(a1 + 8 * v15 + 8);
                *(_DWORD *)(v8 + 148) = *(_DWORD *)(a1 + 4 * v15 + 176);
                v16 = v3 + 6;
                if ( v10 != 6 )
                {
                  *(_QWORD *)(v8 + 48) = *(_QWORD *)(a1 + 8 * v16 + 8);
                  *(_DWORD *)(v8 + 152) = *(_DWORD *)(a1 + 4 * v16 + 176);
                  v17 = v3 + 7;
                  if ( v10 != 7 )
                  {
                    *(_QWORD *)(v8 + 56) = *(_QWORD *)(a1 + 8 * v17 + 8);
                    *(_DWORD *)(v8 + 156) = *(_DWORD *)(a1 + 4 * v17 + 176);
                    v18 = v3 + 8;
                    if ( v10 != 8 )
                    {
                      *(_QWORD *)(v8 + 64) = *(_QWORD *)(a1 + 8 * v18 + 8);
                      *(_DWORD *)(v8 + 160) = *(_DWORD *)(a1 + 4 * v18 + 176);
                      v19 = v3 + 9;
                      if ( v10 != 9 )
                      {
                        *(_QWORD *)(v8 + 72) = *(_QWORD *)(a1 + 8 * v19 + 8);
                        *(_DWORD *)(v8 + 164) = *(_DWORD *)(a1 + 4 * v19 + 176);
                        v20 = v3 + 10;
                        if ( v10 != 10 )
                        {
                          *(_QWORD *)(v8 + 80) = *(_QWORD *)(a1 + 8 * v20 + 8);
                          *(_DWORD *)(v8 + 168) = *(_DWORD *)(a1 + 4 * v20 + 176);
                          v21 = v3 + 11;
                          if ( v10 != 11 )
                          {
                            *(_QWORD *)(v8 + 88) = *(_QWORD *)(a1 + 8 * v21 + 8);
                            *(_DWORD *)(v8 + 172) = *(_DWORD *)(a1 + 4 * v21 + 176);
                            v22 = v3 + 12;
                            if ( v10 != 12 )
                            {
                              *(_QWORD *)(v8 + 96) = *(_QWORD *)(a1 + 8 * v22 + 8);
                              *(_DWORD *)(v8 + 176) = *(_DWORD *)(a1 + 4 * v22 + 176);
                              v23 = v3 + 13;
                              if ( v10 != 13 )
                              {
                                *(_QWORD *)(v8 + 104) = *(_QWORD *)(a1 + 8 * v23 + 8);
                                *(_DWORD *)(v8 + 180) = *(_DWORD *)(a1 + 4 * v23 + 176);
                                v24 = v3 + 14;
                                if ( v10 != 14 )
                                {
                                  *(_QWORD *)(v8 + 112) = *(_QWORD *)(a1 + 8 * v24 + 8);
                                  *(_DWORD *)(v8 + 184) = *(_DWORD *)(a1 + 4 * v24 + 176);
                                  v25 = v3 + 15;
                                  if ( v10 != 15 )
                                  {
                                    *(_QWORD *)(v8 + 120) = *(_QWORD *)(a1 + 8LL * v25 + 8);
                                    *(_DWORD *)(v8 + 188) = *(_DWORD *)(a1 + 4LL * v25 + 176);
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
    v26 = v35[v2];
    v3 += v26;
    *(&v36 + v2) = v9 | (unsigned int)(v26 - 1);
    if ( v2 == 1 )
      break;
    v6 = *(unsigned __int64 **)(a1 + 272);
    v2 = 1;
    v8 = *v6;
    if ( *v6 )
      goto LABEL_2;
LABEL_22:
    v27 = v6[1];
    v6[11] += 192LL;
    v9 = (v27 + 63) & 0xFFFFFFFFFFFFFFC0LL;
    if ( v6[2] >= v9 + 192 && v27 )
    {
      v6[1] = v9 + 192;
      v8 = (v27 + 63) & 0xFFFFFFFFFFFFFFC0LL;
    }
    else
    {
      v34 = v7;
      v33 = sub_986170((__int64)(v6 + 1), 192, 192, 6, v7, v5);
      v7 = v34;
      v8 = v33;
      v9 = v33 & 0xFFFFFFFFFFFFFFC0LL;
    }
  }
  v28 = *(_DWORD *)((char *)&qword_80 + 4 * (unsigned int)(v35[0] - 1) + (v36 & 0xFFFFFFFFFFFFFFC0LL));
  v29 = v35[1];
  *(_QWORD *)(a1 + 8) = v36;
  v30 = v37;
  *(_DWORD *)(a1 + 176) = v28;
  v31 = *(_DWORD *)((char *)&qword_80 + 4 * (unsigned int)(v29 - 1) + (v30 & 0xFFFFFFFFFFFFFFC0LL));
  *(_QWORD *)(a1 + 16) = v30;
  *(_DWORD *)(a1 + 268) = 2;
  *(_DWORD *)(a1 + 180) = v31;
  ++*(_DWORD *)(a1 + 264);
  return v7;
}
