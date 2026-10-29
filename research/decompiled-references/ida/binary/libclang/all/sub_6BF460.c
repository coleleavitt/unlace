__int64 __fastcall sub_6BF460(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  int v8; // r10d
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned int v16; // edx
  __int64 *v17; // r14
  int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rsi
  int v24; // edi
  __int64 v25; // rsi
  _QWORD *v26; // rcx
  __int64 *v27; // r8
  __int64 *i; // rax
  __int64 v29; // rdx
  int v30; // edi
  int v31; // edi
  __int64 v32; // r11
  unsigned int v33; // esi
  _QWORD *v34; // rcx
  __int64 v35; // r9
  int v36; // esi
  int v37; // edx
  unsigned int v38; // eax
  __int64 v39; // r8
  int v40; // r10d
  __int64 *v41; // r9
  __int64 v42; // r14
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  _QWORD *v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  _DWORD *v50; // rdx
  __int64 v51; // rdi
  int v52; // eax
  unsigned int v53; // eax
  _QWORD *v54; // rax
  __int64 v55; // rdi
  int v56; // r8d
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  __int64 *v59; // r10
  __int64 *v60; // rax
  __int64 v61; // r11
  int v62; // edi
  int v63; // edi
  __int64 v64; // r9
  unsigned int v65; // ecx
  _QWORD *v66; // rdx
  __int64 v67; // r8
  int v68; // r8d
  int v69; // r9d
  __int64 *v70; // rdx
  unsigned int v71; // r13d
  __int64 v72; // rax
  _QWORD *v73; // r13
  unsigned int v75; // [rsp+10h] [rbp-48h]
  unsigned int v76; // [rsp+10h] [rbp-48h]
  int v77; // [rsp+10h] [rbp-48h]
  _QWORD *v78; // [rsp+10h] [rbp-48h]
  int v79; // [rsp+18h] [rbp-40h]

  v2 = sub_AB4240(a1, a2);
  v3 = *(_QWORD *)(v2 + 72);
  v4 = *(_QWORD *)(v3 + 56);
  if ( v4 )
  {
    v5 = v2;
    v6 = 0;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v4 + 128);
      v15 = v14;
      if ( v14 )
      {
LABEL_7:
        v15 = *(_QWORD *)(v14 + 88);
        goto LABEL_8;
      }
      v42 = *(_QWORD *)(v4 + 104);
      v43 = *(_QWORD *)(v42 + 96);
      v44 = v43 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v43 & 1) != 0 )
        break;
      if ( v44 <= 3 )
      {
        if ( !v44 )
          goto LABEL_8;
        goto LABEL_54;
      }
      if ( (v43 & 2) == 0 )
        goto LABEL_8;
      v45 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
      v46 = v45[2275];
      if ( v46 )
      {
        v47 = v45[274];
        v45[284] += 24LL;
        v48 = (v47 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v45[275] >= v48 + 24 && v47 )
          v45[274] = v48 + 24;
        else
          v48 = sub_6A76A0((__int64)(v45 + 274), 24, 3);
        *(_QWORD *)v48 = v46;
        *(_DWORD *)(v48 + 8) = 0;
        v43 = v48 | 5;
        *(_QWORD *)(v48 + 16) = v42;
        *(_QWORD *)(v42 + 96) = v48 | 5;
        goto LABEL_60;
      }
      *(_QWORD *)(v42 + 96) = v42 & 0xFFFFFFFFFFFFFFFALL | 1;
      v14 = *(_QWORD *)(v4 + 128);
LABEL_54:
      v3 = *(_QWORD *)(v5 + 72);
      v15 = v14;
      if ( v14 )
        goto LABEL_7;
LABEL_8:
      v16 = *(_DWORD *)(v3 + 80);
      v17 = *(__int64 **)(v3 + 64);
      v18 = 0;
      if ( !v16 )
        goto LABEL_9;
      v7 = v16 - 1;
      v8 = 1;
      v9 = nullptr;
      LODWORD(v10) = v7 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
      v11 = &v17[2 * (unsigned int)v10];
      v12 = *v11;
      if ( v15 != *v11 )
      {
        while ( v12 != -4096 )
        {
          if ( v12 == -8192 && !v9 )
            v9 = v11;
          v10 = (unsigned int)v7 & ((_DWORD)v10 + v8);
          v11 = &v17[2 * v10];
          v12 = *v11;
          if ( v15 == *v11 )
            goto LABEL_4;
          ++v8;
        }
        if ( !v9 )
          v9 = v11;
        v36 = *(_DWORD *)(v3 + 72) + 1;
        v18 = 2 * v16;
        if ( 4 * v36 < 3 * v16 )
        {
          if ( v16 >> 3 < v16 - *(_DWORD *)(v3 + 76) - v36 )
          {
LABEL_42:
            *(_DWORD *)(v3 + 72) = v36;
            if ( *v9 != -4096 )
              --*(_DWORD *)(v3 + 76);
            *v9 = v15;
            v9[1] = 0;
            goto LABEL_5;
          }
          v76 = *(_DWORD *)(v3 + 80);
          v53 = (((((((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4) | ((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 8)
                 | ((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4)
                 | ((v7 | (v7 >> 1)) >> 2)
                 | v7
                 | (v7 >> 1)) >> 16)
               | ((((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4) | ((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 8)
               | ((((v7 | (v7 >> 1)) >> 2) | v7 | (v7 >> 1)) >> 4)
               | ((v7 | (v7 >> 1)) >> 2)
               | v7
               | (v7 >> 1))
              + 1;
          if ( v53 < 0x40 )
            v53 = 64;
          *(_DWORD *)(v3 + 80) = v53;
          v54 = (_QWORD *)sub_25CC9C0(16LL * v53, 8);
          v55 = *(unsigned int *)(v3 + 80);
          *(_QWORD *)(v3 + 64) = v54;
          v56 = v55;
          v57 = 16 * v55;
          v58 = &v54[(unsigned __int64)v57 / 8];
          if ( v17 )
          {
            *(_QWORD *)(v3 + 72) = 0;
            v59 = &v17[2 * v76];
            if ( v57 )
            {
              if ( (v57 & 0x10) == 0 || (*v54 = -4096, v54 += 2, v54 != v58) )
              {
                do
                {
                  *v54 = -4096;
                  v54 += 4;
                  *(v54 - 2) = -4096;
                }
                while ( v54 != v58 );
              }
            }
            v60 = v17;
            do
            {
              v61 = *v60;
              if ( *v60 != -4096 && v61 != -8192 )
              {
                v62 = *(_DWORD *)(v3 + 80);
                if ( !v62 )
                {
                  *(_QWORD *)&dword_0 = *v60;
                  BUG();
                }
                v63 = v62 - 1;
                v64 = *(_QWORD *)(v3 + 64);
                v65 = v63 & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
                v66 = (_QWORD *)(v64 + 16LL * v65);
                v67 = *v66;
                if ( *v66 != v61 )
                {
                  v79 = 1;
                  v78 = nullptr;
                  while ( v67 != -4096 )
                  {
                    if ( !v78 )
                    {
                      if ( v67 != -8192 )
                        v66 = nullptr;
                      v78 = v66;
                    }
                    v65 = v63 & (v79 + v65);
                    v66 = (_QWORD *)(v64 + 16LL * v65);
                    v67 = *v66;
                    if ( v61 == *v66 )
                      goto LABEL_75;
                    ++v79;
                  }
                  if ( v78 )
                    v66 = v78;
                }
LABEL_75:
                *v66 = v61;
                v66[1] = v60[1];
                ++*(_DWORD *)(v3 + 72);
              }
              v60 += 2;
            }
            while ( v59 != v60 );
            operator delete();
LABEL_78:
            v58 = *(_QWORD **)(v3 + 64);
            v56 = *(_DWORD *)(v3 + 80);
            v36 = *(_DWORD *)(v3 + 72) + 1;
          }
          else
          {
            *(_QWORD *)(v3 + 72) = 0;
            if ( v54 != v58 )
            {
              if ( (v57 & 0x10) == 0 || (*v54 = -4096, v54 += 2, v54 != v58) )
              {
                do
                {
                  *v54 = -4096;
                  v54 += 4;
                  *(v54 - 2) = -4096;
                }
                while ( v54 != v58 );
              }
              goto LABEL_78;
            }
            v36 = 1;
          }
          if ( !v56 )
          {
LABEL_133:
            *(_DWORD *)(v3 + 72) = v36;
            BUG();
          }
          v68 = v56 - 1;
          v69 = 1;
          v70 = nullptr;
          v71 = v68 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
          v9 = &v58[2 * v71];
          v72 = *v9;
          if ( v15 != *v9 )
          {
            while ( v72 != -4096 )
            {
              if ( v72 == -8192 && !v70 )
                v70 = v9;
              v71 = v68 & (v69 + v71);
              v9 = &v58[2 * v71];
              v72 = *v9;
              if ( v15 == *v9 )
                goto LABEL_42;
              ++v69;
            }
            if ( v70 )
              v9 = v70;
          }
          goto LABEL_42;
        }
LABEL_9:
        v75 = *(_DWORD *)(v3 + 80);
        v19 = (unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1);
        v20 = (((v19 >> 2) | v19) >> 4) | (v19 >> 2) | v19;
        v21 = ((((v20 >> 8) | v20) >> 16) | (v20 >> 8) | v20) + 1;
        if ( (unsigned int)v21 < 0x40 )
          LODWORD(v21) = 64;
        *(_DWORD *)(v3 + 80) = v21;
        v22 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v21, 8);
        v23 = *(unsigned int *)(v3 + 80);
        *(_QWORD *)(v3 + 64) = v22;
        v24 = v23;
        v25 = 16 * v23;
        v26 = &v22[(unsigned __int64)v25 / 8];
        if ( v17 )
        {
          *(_QWORD *)(v3 + 72) = 0;
          v27 = &v17[2 * v75];
          if ( v25 )
          {
            if ( (v25 & 0x10) == 0 || (*v22 = -4096, v22 += 2, v22 != v26) )
            {
              do
              {
                *v22 = -4096;
                v22 += 4;
                *(v22 - 2) = -4096;
              }
              while ( v22 != v26 );
            }
          }
          for ( i = v17; v27 != i; i += 2 )
          {
            v29 = *i;
            if ( *i != -4096 && v29 != -8192 )
            {
              v30 = *(_DWORD *)(v3 + 80);
              if ( !v30 )
              {
                *(_QWORD *)&dword_0 = *i;
                BUG();
              }
              v31 = v30 - 1;
              v32 = *(_QWORD *)(v3 + 64);
              v33 = v31 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
              v34 = (_QWORD *)(v32 + 16LL * v33);
              v35 = *v34;
              if ( v29 != *v34 )
              {
                v77 = 1;
                v73 = nullptr;
                while ( v35 != -4096 )
                {
                  if ( v35 == -8192 && !v73 )
                    v73 = v34;
                  v33 = v31 & (v77 + v33);
                  v34 = (_QWORD *)(v32 + 16LL * v33);
                  v35 = *v34;
                  if ( v29 == *v34 )
                    goto LABEL_21;
                  ++v77;
                }
                if ( v73 )
                  v34 = v73;
              }
LABEL_21:
              *v34 = v29;
              v34[1] = i[1];
              ++*(_DWORD *)(v3 + 72);
            }
          }
          operator delete();
LABEL_24:
          v26 = *(_QWORD **)(v3 + 64);
          v24 = *(_DWORD *)(v3 + 80);
          v36 = *(_DWORD *)(v3 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v3 + 72) = 0;
          if ( v22 != v26 )
          {
            if ( (v25 & 0x10) == 0 || (*v22 = -4096, v22 += 2, v22 != v26) )
            {
              do
              {
                *v22 = -4096;
                v22 += 4;
                *(v22 - 2) = -4096;
              }
              while ( v22 != v26 );
            }
            goto LABEL_24;
          }
          v36 = 1;
        }
        if ( !v24 )
          goto LABEL_133;
        v37 = v24 - 1;
        v38 = (v24 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v9 = &v26[2 * v38];
        v39 = *v9;
        if ( v15 != *v9 )
        {
          v40 = 1;
          v41 = nullptr;
          while ( v39 != -4096 )
          {
            if ( v39 == -8192 && !v41 )
              v41 = v9;
            v38 = v37 & (v40 + v38);
            v9 = &v26[2 * v38];
            v39 = *v9;
            if ( v15 == *v9 )
              goto LABEL_42;
            ++v40;
          }
          if ( v41 )
            v9 = v41;
        }
        goto LABEL_42;
      }
LABEL_4:
      v6 += v11[1];
LABEL_5:
      v13 = sub_AB4240(a1, v4);
      v3 = *(_QWORD *)(v13 + 72);
      v5 = v13;
      v4 = *(_QWORD *)(v3 + 56);
      if ( !v4 )
        return v6;
    }
    if ( !v44 )
      goto LABEL_8;
    if ( (v43 & 4) != 0 )
    {
LABEL_60:
      v50 = (_DWORD *)(v43 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v50 )
      {
        v51 = *(_QWORD *)v50;
        v52 = *(_DWORD *)(*(_QWORD *)v50 + 12LL);
        if ( v50[2] != v52 )
        {
          v50[2] = v52;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 144LL))(v51, v42);
        }
      }
    }
    v14 = *(_QWORD *)(v4 + 128);
    goto LABEL_54;
  }
  return 0;
}

