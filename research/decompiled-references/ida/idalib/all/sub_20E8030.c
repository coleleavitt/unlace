__int64 __fastcall sub_20E8030(_DWORD *a1, int a2)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 *v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 *v10; // r8
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rcx
  int v44; // ecx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // esi
  _DWORD *v49; // rax
  int v50; // ecx
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v54; // rax
  __int64 *v55; // [rsp+10h] [rbp-60h]
  _DWORD v56[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v57; // [rsp+28h] [rbp-48h] BYREF
  __int64 v58; // [rsp+30h] [rbp-40h]

  v2 = 0;
  v3 = 0;
  v5 = sub_2228330(2, a1[67], 12, 0, (unsigned int)v56, a2, 1);
  v7 = *((unsigned __int64 **)a1 + 34);
  v57 = 0;
  v58 = 0;
  v8 = v5;
  v9 = *v7;
  v10 = &v57;
  if ( !*v7 )
    goto LABEL_19;
LABEL_2:
  v11 = v9 & 0xFFFFFFFFFFFFFFC0LL;
  *v7 = *(_QWORD *)v9;
  while ( 1 )
  {
    memset((void *)v9, 0, 0xC0u);
    v12 = v56[v2];
    if ( v3 != v12 + v3 )
    {
      v13 = *(_QWORD *)&a1[2 * v3 + 32];
      *(_QWORD *)v9 = *(_QWORD *)&a1[2 * v3];
      *(_QWORD *)(v9 + 96) = v13;
      v14 = (unsigned int)(v3 + 1);
      if ( v12 != 1 )
      {
        v15 = *(_QWORD *)&a1[2 * v14];
        v16 = *(_QWORD *)&a1[2 * v14 + 32];
        *(_QWORD *)(v9 + 8) = v15;
        *(_QWORD *)(v9 + 104) = v16;
        v17 = (unsigned int)(v3 + 2);
        if ( v12 != 2 )
        {
          v18 = *(_QWORD *)&a1[2 * v17];
          v19 = *(_QWORD *)&a1[2 * v17 + 32];
          *(_QWORD *)(v9 + 16) = v18;
          *(_QWORD *)(v9 + 112) = v19;
          v20 = (unsigned int)(v3 + 3);
          if ( v12 != 3 )
          {
            v21 = *(_QWORD *)&a1[2 * v20];
            v22 = *(_QWORD *)&a1[2 * v20 + 32];
            *(_QWORD *)(v9 + 24) = v21;
            *(_QWORD *)(v9 + 120) = v22;
            v23 = (unsigned int)(v3 + 4);
            if ( v12 != 4 )
            {
              v24 = *(_QWORD *)&a1[2 * v23];
              v25 = *(_QWORD *)&a1[2 * v23 + 32];
              *(_QWORD *)(v9 + 32) = v24;
              *(_QWORD *)(v9 + 128) = v25;
              v26 = (unsigned int)(v3 + 5);
              if ( v12 != 5 )
              {
                v27 = *(_QWORD *)&a1[2 * v26];
                v28 = *(_QWORD *)&a1[2 * v26 + 32];
                *(_QWORD *)(v9 + 40) = v27;
                *(_QWORD *)(v9 + 136) = v28;
                v29 = (unsigned int)(v3 + 6);
                if ( v12 != 6 )
                {
                  v30 = *(_QWORD *)&a1[2 * v29];
                  v31 = *(_QWORD *)&a1[2 * v29 + 32];
                  *(_QWORD *)(v9 + 48) = v30;
                  *(_QWORD *)(v9 + 144) = v31;
                  v32 = (unsigned int)(v3 + 7);
                  if ( v12 != 7 )
                  {
                    v33 = *(_QWORD *)&a1[2 * v32];
                    v34 = *(_QWORD *)&a1[2 * v32 + 32];
                    *(_QWORD *)(v9 + 56) = v33;
                    *(_QWORD *)(v9 + 152) = v34;
                    v35 = (unsigned int)(v3 + 8);
                    if ( v12 != 8 )
                    {
                      v36 = *(_QWORD *)&a1[2 * v35];
                      v37 = *(_QWORD *)&a1[2 * v35 + 32];
                      *(_QWORD *)(v9 + 64) = v36;
                      *(_QWORD *)(v9 + 160) = v37;
                      v38 = (unsigned int)(v3 + 9);
                      if ( v12 != 9 )
                      {
                        v39 = *(_QWORD *)&a1[2 * v38];
                        v40 = *(_QWORD *)&a1[2 * v38 + 32];
                        *(_QWORD *)(v9 + 72) = v39;
                        *(_QWORD *)(v9 + 168) = v40;
                        v41 = (unsigned int)(v3 + 10);
                        if ( v12 != 10 )
                        {
                          v42 = *(_QWORD *)&a1[2 * v41];
                          v43 = *(_QWORD *)&a1[2 * v41 + 32];
                          *(_QWORD *)(v9 + 80) = v42;
                          *(_QWORD *)(v9 + 176) = v43;
                          v44 = v3 + 11;
                          if ( v12 != 11 )
                          {
                            v45 = *(_QWORD *)&a1[2 * v44 + 32];
                            *(_QWORD *)(v9 + 88) = *(_QWORD *)&a1[2 * v44];
                            *(_QWORD *)(v9 + 184) = v45;
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
      v12 = v56[v2];
      v3 += v12;
    }
    v10[v2] = v11 | (unsigned int)(v12 - 1);
    if ( v2 == 1 )
      break;
    v7 = *((unsigned __int64 **)a1 + 34);
    v2 = 1;
    v9 = *v7;
    if ( *v7 )
      goto LABEL_2;
LABEL_19:
    v46 = v7[1];
    v7[11] += 192LL;
    v11 = (v46 + 63) & 0xFFFFFFFFFFFFFFC0LL;
    if ( v7[2] >= v11 + 192 && v46 )
    {
      v7[1] = v11 + 192;
      v9 = (v46 + 63) & 0xFFFFFFFFFFFFFFC0LL;
    }
    else
    {
      v55 = v10;
      v54 = sub_986170((__int64)(v7 + 1), 192, 192, 6, (__int64)v10, v6);
      v10 = v55;
      v9 = v54;
      v11 = v54 & 0xFFFFFFFFFFFFFFC0LL;
    }
  }
  v47 = v57;
  a1[66] = 1;
  v48 = v56[1];
  memset(a1, 0, 0x108u);
  v49 = (_DWORD *)(v47 & 0xFFFFFFFFFFFFFFC0LL);
  v50 = *(_DWORD *)&byte_4[8 * (unsigned int)(v56[0] - 1) + (v47 & 0xFFFFFFFFFFFFFFC0LL)];
  *((_QWORD *)a1 + 1) = v47;
  v51 = v58;
  a1[44] = v50;
  v52 = *(_DWORD *)&byte_4[8 * (unsigned int)(v48 - 1) + (v51 & 0xFFFFFFFFFFFFFFC0LL)];
  *((_QWORD *)a1 + 2) = v51;
  a1[45] = v52;
  LODWORD(v49) = *v49;
  a1[67] = 2;
  *a1 = (_DWORD)v49;
  return v8;
}
