void __fastcall sub_16BB4C0(__int64 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r9
  __int64 *v11; // r9
  __int64 v12; // r12
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r11
  unsigned int *v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  __int64 *v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  _QWORD *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // esi
  __int64 v34; // r13
  unsigned int *v35; // rdi
  unsigned int v36; // esi
  __int64 v37; // r13
  unsigned int *v38; // rdi
  int v39; // r10d
  __int64 *v40; // r11
  int v41; // eax
  __int64 v42; // rdi
  int v43; // esi
  __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // r8
  int v47; // ecx
  __int64 v48; // rdi
  int v49; // ecx
  __int64 v50; // rsi
  unsigned int v51; // edx
  __int64 v52; // r8
  int v53; // r10d
  __int64 *v54; // r9
  int v55; // r10d
  __int64 v56; // r10
  __int64 v57; // r8
  __int64 v58; // rsi
  __int64 v59; // rsi
  int v60; // eax
  __int64 v61; // r10
  int v62; // eax
  __int64 v63; // r8
  unsigned int *v64; // [rsp+8h] [rbp-70h]
  unsigned int *v65; // [rsp+8h] [rbp-70h]
  __int64 v66; // [rsp+10h] [rbp-68h]
  __int64 v67; // [rsp+10h] [rbp-68h]
  unsigned int *v68; // [rsp+18h] [rbp-60h]
  unsigned int *v69; // [rsp+18h] [rbp-60h]
  __int64 v70; // [rsp+20h] [rbp-58h]
  __int64 v71; // [rsp+20h] [rbp-58h]
  unsigned int *v72; // [rsp+28h] [rbp-50h]
  unsigned int *v73; // [rsp+28h] [rbp-50h]
  __int64 v74; // [rsp+30h] [rbp-48h]
  __int64 v75; // [rsp+30h] [rbp-48h]
  __int64 v76; // [rsp+38h] [rbp-40h]
  __int64 v77; // [rsp+38h] [rbp-40h]

  v2 = a1[1];
  v3 = v2 + 24LL * *((unsigned int *)a1 + 4);
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      v4 = *a1;
      if ( (*(_BYTE *)(*a1 + 64) & 1) != 0 )
      {
        v5 = v4 + 72;
        v6 = 15;
      }
      else
      {
        v24 = *(_DWORD *)(v4 + 80);
        v5 = *(_QWORD *)(v4 + 72);
        if ( !v24 )
        {
          v25 = *(unsigned int *)(v4 + 64);
          v9 = nullptr;
          v26 = (unsigned int)((*(_DWORD *)(v4 + 64) >> 1) + 1);
          goto LABEL_18;
        }
        v6 = v24 - 1;
      }
      v7 = *(_QWORD *)(v3 - 24);
      LODWORD(v8) = v6 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v9 = (__int64 *)(v5 + ((unsigned __int64)(unsigned int)v8 << 6));
      v10 = *v9;
      if ( v7 != *v9 )
        break;
LABEL_5:
      v11 = v9 + 1;
      v12 = v9[5];
      if ( v9[3] )
      {
        v13 = *(_QWORD *)(v4 + 16);
        v14 = (_QWORD *)(v4 + 16);
        v15 = *((_DWORD *)v9 + 8);
        v16 = *(unsigned int *)(v4 + 1096);
        v17 = 4 * v16;
        v18 = v13 + 4 * v16;
        if ( *(char *)(v18 + 3) < 0 )
        {
          v36 = *(_DWORD *)v18 & 0x7FFFFFFF;
          v16 = v36;
          v37 = 4LL * v36;
          v38 = (unsigned int *)(v13 + v37);
          if ( *(char *)(v13 + v37 + 3) < 0 )
          {
            v36 = *v38 & 0x7FFFFFFF;
            v66 = 4LL * v36;
            v64 = (unsigned int *)(v13 + v66);
            if ( *(char *)(v13 + v66 + 3) < 0 )
            {
              v36 = *(_DWORD *)(v13 + 4LL * v36) & 0x7FFFFFFF;
              v71 = 4LL * v36;
              v69 = (unsigned int *)(v13 + v71);
              if ( *(char *)(v13 + v71 + 3) < 0 )
              {
                v36 = *(_DWORD *)(v13 + 4LL * v36) & 0x7FFFFFFF;
                v75 = 4LL * v36;
                v73 = (unsigned int *)(v13 + v75);
                if ( *(char *)(v13 + v75 + 3) < 0 )
                {
                  v36 = *(_DWORD *)(v13 + 4LL * v36) & 0x7FFFFFFF;
                  v77 = v36;
                  v57 = v13 + 4LL * v36;
                  if ( *(char *)(v57 + 3) < 0 )
                  {
                    v59 = v13 + 4LL * (*(_DWORD *)v57 & 0x7FFFFFFF);
                    if ( *(char *)(v59 + 3) < 0 )
                    {
                      v62 = sub_16B5920((_QWORD *)(v4 + 16), *(_DWORD *)v59 & 0x7FFFFFFF);
                      v13 = *(_QWORD *)(v4 + 16);
                      v14 = (_QWORD *)(v4 + 16);
                      *(_DWORD *)(v13 + 4 * v63) = v62 & 0x7FFFFFFF | *(_DWORD *)(v13 + 4 * v63) & 0x80000000;
                      v16 = v62 & 0x7FFFFFFF;
                    }
                    else
                    {
                      v16 = *(_DWORD *)v57 & 0x7FFFFFFF;
                    }
                    v36 = v16 & 0x7FFFFFFF;
                    *(_DWORD *)(v13 + 4 * v77) = v16 & 0x7FFFFFFF | *(_DWORD *)(v13 + 4 * v77) & 0x80000000;
                    v38 = (unsigned int *)(v13 + v37);
                    v73 = (unsigned int *)(v13 + v75);
                    v69 = (unsigned int *)(v13 + v71);
                    v64 = (unsigned int *)(v13 + v66);
                    v18 = v13 + v17;
                  }
                  else
                  {
                    v16 = v36;
                  }
                  *v73 = v36 | *v73 & 0x80000000;
                }
                else
                {
                  v16 = v36;
                }
                *v69 = v36 | *v69 & 0x80000000;
              }
              else
              {
                v16 = v36;
              }
              *v64 = v36 | *v64 & 0x80000000;
            }
            else
            {
              v16 = v36;
            }
            *v38 = v36 | *v38 & 0x80000000;
          }
          *(_DWORD *)v18 = *(_DWORD *)v18 & 0x80000000 | v36;
        }
        v19 = 4LL * v15;
        v20 = (unsigned int *)(v13 + v19);
        if ( *(char *)(v13 + v19 + 3) < 0 )
        {
          v33 = *v20 & 0x7FFFFFFF;
          v15 = v33;
          v34 = 4LL * v33;
          v35 = (unsigned int *)(v13 + v34);
          if ( *(char *)(v13 + v34 + 3) < 0 )
          {
            v33 = *v35 & 0x7FFFFFFF;
            v67 = 4LL * v33;
            v65 = (unsigned int *)(v13 + v67);
            if ( *(char *)(v13 + v67 + 3) < 0 )
            {
              v33 = *(_DWORD *)(v13 + 4LL * v33) & 0x7FFFFFFF;
              v70 = 4LL * v33;
              v68 = (unsigned int *)(v13 + v70);
              if ( *(char *)(v13 + v70 + 3) < 0 )
              {
                v33 = *(_DWORD *)(v13 + 4LL * v33) & 0x7FFFFFFF;
                v74 = 4LL * v33;
                v72 = (unsigned int *)(v13 + v74);
                if ( *(char *)(v13 + v74 + 3) < 0 )
                {
                  v33 = *(_DWORD *)(v13 + 4LL * v33) & 0x7FFFFFFF;
                  v76 = v33;
                  v56 = v13 + 4LL * v33;
                  if ( *(char *)(v56 + 3) < 0 )
                  {
                    v58 = v13 + 4LL * (*(_DWORD *)v56 & 0x7FFFFFFF);
                    if ( *(char *)(v58 + 3) < 0 )
                    {
                      v60 = sub_16B5920(v14, *(_DWORD *)v58 & 0x7FFFFFFF);
                      v13 = *(_QWORD *)(v4 + 16);
                      *(_DWORD *)(v13 + 4 * v61) = v60 & 0x7FFFFFFF | *(_DWORD *)(v13 + 4 * v61) & 0x80000000;
                      v15 = v60 & 0x7FFFFFFF;
                    }
                    else
                    {
                      v15 = *(_DWORD *)v56 & 0x7FFFFFFF;
                    }
                    v33 = v15 & 0x7FFFFFFF;
                    *(_DWORD *)(v13 + 4 * v76) = v15 & 0x7FFFFFFF | *(_DWORD *)(v13 + 4 * v76) & 0x80000000;
                    v35 = (unsigned int *)(v13 + v34);
                    v72 = (unsigned int *)(v13 + v74);
                    v68 = (unsigned int *)(v13 + v70);
                    v65 = (unsigned int *)(v13 + v67);
                    v20 = (unsigned int *)(v13 + v19);
                  }
                  else
                  {
                    v15 = v33;
                  }
                  *v72 = v33 | *v72 & 0x80000000;
                }
                else
                {
                  v15 = v33;
                }
                *v68 = v33 | *v68 & 0x80000000;
              }
              else
              {
                v15 = v33;
              }
              *v65 = v33 | *v65 & 0x80000000;
            }
            else
            {
              v15 = *v35 & 0x7FFFFFFF;
            }
            *v35 = v33 | *v35 & 0x80000000;
          }
          *v20 = *v20 & 0x80000000 | v33;
        }
        v21 = v15 == (_DWORD)v16;
        if ( v15 <= (unsigned int)v16 )
        {
          while ( !v21 )
          {
            LODWORD(v16) = *(_DWORD *)(v13 + 4 * v16) & 0x7FFFFFFF;
            v21 = (_DWORD)v16 == v15;
            if ( (unsigned int)v16 < v15 )
              goto LABEL_11;
          }
          goto LABEL_12;
        }
      }
LABEL_11:
      v11[2] = v12;
      *((_DWORD *)v11 + 6) = *(_DWORD *)(v4 + 1096);
LABEL_12:
      v22 = *(_QWORD *)(v3 - 16);
      v3 -= 24;
      v11[4] = v22;
      *((_DWORD *)v11 + 10) = *(_DWORD *)(v3 + 16);
      if ( v2 == v3 )
        goto LABEL_13;
    }
    v39 = 1;
    v40 = nullptr;
    if ( v10 != -4096 )
    {
      while ( 1 )
      {
        if ( !v40 && v10 == -8192 )
          v40 = v9;
        v8 = v6 & (unsigned int)(v8 + v39);
        v9 = (__int64 *)(v5 + (v8 << 6));
        v10 = *v9;
        if ( v7 == *v9 )
          goto LABEL_5;
        if ( v10 == -4096 )
          break;
        ++v39;
      }
      if ( v40 )
        v9 = v40;
    }
    v25 = *(unsigned int *)(v4 + 64);
    v27 = 48;
    v24 = 16;
    v26 = (unsigned int)((*(_DWORD *)(v4 + 64) >> 1) + 1);
    if ( (*(_BYTE *)(*a1 + 64) & 1) == 0 )
    {
      v24 = *(_DWORD *)(v4 + 80);
LABEL_18:
      v27 = 3 * v24;
    }
    v28 = (unsigned int)(4 * v26);
    v29 = v4 + 64;
    if ( (unsigned int)v28 >= (unsigned int)v27 )
    {
      sub_16B9B50(v29, 2 * v24, v25, (_QWORD *)v28, v26, v27);
      if ( (*(_BYTE *)(v4 + 64) & 1) != 0 )
      {
        v42 = v4 + 72;
        v43 = 15;
      }
      else
      {
        v41 = *(_DWORD *)(v4 + 80);
        v42 = *(_QWORD *)(v4 + 72);
        if ( !v41 )
          goto LABEL_102;
        v43 = v41 - 1;
      }
      v44 = *(_QWORD *)(v3 - 24);
      v45 = v43 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
      v9 = (__int64 *)(v42 + ((unsigned __int64)v45 << 6));
      v46 = *v9;
      if ( *v9 != v44 && v46 != -4096 )
      {
        v55 = 1;
        v54 = nullptr;
        while ( 1 )
        {
          if ( !v54 && v46 == -8192 )
            v54 = v9;
          v45 = v43 & (v55 + v45);
          v9 = (__int64 *)(v42 + ((unsigned __int64)v45 << 6));
          v46 = *v9;
          if ( v44 == *v9 )
            break;
          if ( v46 == -4096 )
          {
LABEL_48:
            if ( v54 )
              v9 = v54;
            break;
          }
          ++v55;
        }
      }
    }
    else
    {
      v30 = (_QWORD *)(v24 - *(_DWORD *)(v4 + 68) - (unsigned int)v26);
      v31 = v24 >> 3;
      if ( (unsigned int)v30 > (unsigned int)v31 )
      {
LABEL_21:
        *(_DWORD *)(v4 + 64) = (2 * ((unsigned int)v25 >> 1) + 2) | v25 & 1;
        if ( *v9 != -4096 )
          --*(_DWORD *)(v4 + 68);
        v32 = *(_QWORD *)(v3 - 24);
        v11 = v9 + 1;
        v9[1] = 0;
        v12 = 0;
        *((_DWORD *)v9 + 4) = 0;
        *v9 = v32;
        v9[3] = 0;
        *((_DWORD *)v9 + 8) = 0;
        v9[5] = 0;
        *((_DWORD *)v9 + 12) = 0;
        *((_BYTE *)v9 + 56) = 0;
        v4 = *a1;
        goto LABEL_11;
      }
      sub_16B9B50(v29, v24, v25, v30, v31, v27);
      if ( (*(_BYTE *)(v4 + 64) & 1) != 0 )
      {
        v48 = v4 + 72;
        v49 = 15;
      }
      else
      {
        v47 = *(_DWORD *)(v4 + 80);
        v48 = *(_QWORD *)(v4 + 72);
        if ( !v47 )
        {
LABEL_102:
          *(_DWORD *)(v4 + 64) = (2 * (*(_DWORD *)(v4 + 64) >> 1) + 2) | *(_DWORD *)(v4 + 64) & 1;
          BUG();
        }
        v49 = v47 - 1;
      }
      v50 = *(_QWORD *)(v3 - 24);
      v51 = v49 & (((unsigned int)v50 >> 9) ^ ((unsigned int)v50 >> 4));
      v9 = (__int64 *)(v48 + ((unsigned __int64)v51 << 6));
      v52 = *v9;
      if ( *v9 != v50 && v52 != -4096 )
      {
        v53 = 1;
        v54 = nullptr;
        while ( 1 )
        {
          if ( v52 == -8192 && !v54 )
            v54 = v9;
          v51 = v49 & (v53 + v51);
          v9 = (__int64 *)(v48 + ((unsigned __int64)v51 << 6));
          v52 = *v9;
          if ( v50 == *v9 )
            break;
          if ( v52 == -4096 )
            goto LABEL_48;
          ++v53;
        }
      }
    }
    LODWORD(v25) = *(_DWORD *)(v4 + 64);
    goto LABEL_21;
  }
LABEL_13:
  *(_QWORD *)(*a1 + 1104) = a1[15];
  v23 = (__int64 *)a1[1];
  if ( v23 != a1 + 3 )
    free(v23);
}
