void __fastcall sub_67B460(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(_QWORD, __int64, _QWORD); // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 *v9; // r14
  int v10; // eax
  unsigned __int64 v11; // rsi
  int v12; // r10d
  __int64 *v13; // rcx
  unsigned int v14; // r15d
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdi
  int v24; // esi
  __int64 v25; // rdi
  _QWORD *v26; // rcx
  __int64 *v27; // r8
  __int64 *i; // rax
  __int64 v29; // rdx
  int v30; // r9d
  int v31; // r9d
  __int64 v32; // r11
  unsigned int v33; // edi
  _QWORD *v34; // rcx
  __int64 v35; // r10
  int v36; // edi
  int v37; // esi
  unsigned int v38; // edx
  __int64 v39; // r8
  int v40; // r10d
  __int64 *v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdi
  int v46; // esi
  __int64 v47; // rdi
  _QWORD *v48; // rcx
  __int64 *v49; // r8
  __int64 *v50; // rax
  __int64 v51; // rdx
  int v52; // r9d
  int v53; // r9d
  __int64 v54; // r11
  unsigned int v55; // edi
  _QWORD *v56; // rcx
  __int64 v57; // r10
  int v58; // esi
  int v59; // r9d
  __int64 *v60; // r8
  unsigned int v61; // r15d
  __int64 v62; // rdx
  _QWORD *v63; // rdx
  _QWORD *v64; // rdx
  _QWORD *v65; // r15
  _QWORD *v66; // r12
  unsigned int v67; // [rsp+0h] [rbp-40h]
  unsigned int v68; // [rsp+0h] [rbp-40h]
  int v69; // [rsp+0h] [rbp-40h]
  int v70; // [rsp+0h] [rbp-40h]

  if ( a2 )
  {
    v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(a1 + 24) + 16LL);
    if ( v3 )
    {
      v4 = a2;
      v5 = v3(*(_QWORD *)(a1 + 16), a2, 0);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( !v6 )
          break;
        v6 &= 0xFFFFFFFFFFFFFFF8LL;
        v7 = *(__int64 *)(v4 + 8) >> 2;
        v4 = v6;
        if ( (v7 & 1) == 0 || !v6 )
        {
          v8 = *(_DWORD *)(a1 + 64);
          v9 = *(__int64 **)(a1 + 48);
          v10 = 0;
          if ( v8 )
            goto LABEL_8;
LABEL_14:
          v67 = v8;
          v19 = (unsigned int)(v10 - 1) | ((unsigned __int64)(unsigned int)(v10 - 1) >> 1);
          v20 = (((v19 >> 2) | v19) >> 4) | (v19 >> 2) | v19;
          v21 = ((((v20 >> 8) | v20) >> 16) | (v20 >> 8) | v20) + 1;
          if ( (unsigned int)v21 < 0x40 )
            LODWORD(v21) = 64;
          *(_DWORD *)(a1 + 64) = v21;
          v22 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v21, 8);
          v23 = *(unsigned int *)(a1 + 64);
          *(_QWORD *)(a1 + 48) = v22;
          v24 = v23;
          v25 = 16 * v23;
          v26 = &v22[(unsigned __int64)v25 / 8];
          if ( v9 )
          {
            *(_QWORD *)(a1 + 56) = 0;
            v27 = &v9[2 * v67];
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
            for ( i = v9; v27 != i; i += 2 )
            {
              v29 = *i;
              if ( *i != -4096 && v29 != -8192 )
              {
                v30 = *(_DWORD *)(a1 + 64);
                if ( !v30 )
                {
                  *(_QWORD *)&dword_0 = *i;
                  BUG();
                }
                v31 = v30 - 1;
                v32 = *(_QWORD *)(a1 + 48);
                v33 = v31 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
                v34 = (_QWORD *)(v32 + 16LL * v33);
                v35 = *v34;
                if ( *v34 != v29 )
                {
                  v69 = 1;
                  v65 = nullptr;
                  while ( v35 != -4096 )
                  {
                    if ( v35 == -8192 && !v65 )
                      v65 = v34;
                    v33 = v31 & (v69 + v33);
                    v34 = (_QWORD *)(v32 + 16LL * v33);
                    v35 = *v34;
                    if ( v29 == *v34 )
                      goto LABEL_26;
                    ++v69;
                  }
                  if ( v65 )
                    v34 = v65;
                }
LABEL_26:
                *v34 = v29;
                v34[1] = i[1];
                ++*(_DWORD *)(a1 + 56);
              }
            }
            operator delete();
            v22 = *(_QWORD **)(a1 + 48);
            v24 = *(_DWORD *)(a1 + 64);
            v36 = *(_DWORD *)(a1 + 56) + 1;
          }
          else
          {
            *(_QWORD *)(a1 + 56) = 0;
            if ( v22 != v26 )
            {
              v63 = v22;
              if ( (v25 & 0x10) == 0 || (v63 = v22 + 2, *v22 = -4096, v22 + 2 != v26) )
              {
                do
                {
                  *v63 = -4096;
                  v63 += 4;
                  *(v63 - 2) = -4096;
                }
                while ( v63 != v26 );
              }
            }
            v36 = 1;
          }
          if ( v24 )
          {
            v37 = v24 - 1;
            v38 = v37 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
            v13 = &v22[2 * v38];
            v39 = *v13;
            if ( v4 != *v13 )
            {
              v40 = 1;
              v41 = nullptr;
              while ( v39 != -4096 )
              {
                if ( v39 == -8192 && !v41 )
                  v41 = v13;
                v38 = v37 & (v40 + v38);
                v13 = &v22[2 * v38];
                v39 = *v13;
                if ( v4 == *v13 )
                  goto LABEL_46;
                ++v40;
              }
              if ( v41 )
                v13 = v41;
            }
            goto LABEL_46;
          }
LABEL_110:
          *(_DWORD *)(a1 + 56) = v36;
          BUG();
        }
      }
      v8 = *(_DWORD *)(a1 + 64);
      v9 = *(__int64 **)(a1 + 48);
      v4 = 0;
      v10 = 0;
      if ( !v8 )
        goto LABEL_14;
LABEL_8:
      v11 = v8 - 1;
      v12 = 1;
      v13 = nullptr;
      v14 = ((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4);
      LODWORD(v15) = v11 & v14;
      v16 = &v9[2 * ((unsigned int)v11 & v14)];
      v17 = *v16;
      if ( v4 == *v16 )
      {
LABEL_9:
        v18 = v16 + 1;
      }
      else
      {
        while ( v17 != -4096 )
        {
          if ( v17 == -8192 && !v13 )
            v13 = v16;
          v15 = (unsigned int)v11 & ((_DWORD)v15 + v12);
          v16 = &v9[2 * v15];
          v17 = *v16;
          if ( v4 == *v16 )
            goto LABEL_9;
          ++v12;
        }
        if ( !v13 )
          v13 = v16;
        v36 = *(_DWORD *)(a1 + 56) + 1;
        v10 = 2 * v8;
        if ( 4 * v36 >= 3 * v8 )
          goto LABEL_14;
        if ( v8 >> 3 >= v8 - *(_DWORD *)(a1 + 60) - v36 )
        {
          v68 = v8;
          v42 = ((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4) | ((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1);
          v43 = ((((v42 >> 8) | v42) >> 16) | (v42 >> 8) | v42) + 1;
          if ( (unsigned int)v43 < 0x40 )
            LODWORD(v43) = 64;
          *(_DWORD *)(a1 + 64) = v43;
          v44 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v43, 8);
          v45 = *(unsigned int *)(a1 + 64);
          *(_QWORD *)(a1 + 48) = v44;
          v46 = v45;
          v47 = 16 * v45;
          v48 = &v44[(unsigned __int64)v47 / 8];
          if ( v9 )
          {
            *(_QWORD *)(a1 + 56) = 0;
            v49 = &v9[2 * v68];
            if ( v47 )
            {
              if ( (v47 & 0x10) == 0 || (*v44 = -4096, v44 += 2, v44 != v48) )
              {
                do
                {
                  *v44 = -4096;
                  v44 += 4;
                  *(v44 - 2) = -4096;
                }
                while ( v44 != v48 );
              }
            }
            v50 = v9;
            do
            {
              v51 = *v50;
              if ( *v50 != -8192 && v51 != -4096 )
              {
                v52 = *(_DWORD *)(a1 + 64);
                if ( !v52 )
                {
                  *(_QWORD *)&dword_0 = *v50;
                  BUG();
                }
                v53 = v52 - 1;
                v54 = *(_QWORD *)(a1 + 48);
                v55 = v53 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
                v56 = (_QWORD *)(v54 + 16LL * v55);
                v57 = *v56;
                if ( *v56 != v51 )
                {
                  v70 = 1;
                  v66 = nullptr;
                  while ( v57 != -4096 )
                  {
                    if ( v57 == -8192 && !v66 )
                      v66 = v56;
                    v55 = v53 & (v70 + v55);
                    v56 = (_QWORD *)(v54 + 16LL * v55);
                    v57 = *v56;
                    if ( v51 == *v56 )
                      goto LABEL_61;
                    ++v70;
                  }
                  if ( v66 )
                    v56 = v66;
                }
LABEL_61:
                *v56 = v51;
                v56[1] = v50[1];
                ++*(_DWORD *)(a1 + 56);
              }
              v50 += 2;
            }
            while ( v49 != v50 );
            operator delete();
            v44 = *(_QWORD **)(a1 + 48);
            v46 = *(_DWORD *)(a1 + 64);
            v36 = *(_DWORD *)(a1 + 56) + 1;
          }
          else
          {
            *(_QWORD *)(a1 + 56) = 0;
            if ( v44 != v48 )
            {
              v64 = v44;
              if ( (v47 & 0x10) == 0 || (v64 = v44 + 2, *v44 = -4096, v44 + 2 != v48) )
              {
                do
                {
                  *v64 = -4096;
                  v64 += 4;
                  *(v64 - 2) = -4096;
                }
                while ( v64 != v48 );
              }
            }
            v36 = 1;
          }
          if ( v46 )
          {
            v58 = v46 - 1;
            v59 = 1;
            v60 = nullptr;
            v61 = v58 & v14;
            v13 = &v44[2 * v61];
            v62 = *v13;
            if ( v4 != *v13 )
            {
              while ( v62 != -4096 )
              {
                if ( v62 == -8192 && !v60 )
                  v60 = v13;
                v61 = v58 & (v59 + v61);
                v13 = &v44[2 * v61];
                v62 = *v13;
                if ( v4 == *v13 )
                  goto LABEL_46;
                ++v59;
              }
              if ( v60 )
                v13 = v60;
            }
            goto LABEL_46;
          }
          goto LABEL_110;
        }
LABEL_46:
        *(_DWORD *)(a1 + 56) = v36;
        if ( *v13 != -4096 )
          --*(_DWORD *)(a1 + 60);
        *v13 = v4;
        v18 = v13 + 1;
        v13[1] = 0;
      }
      *v18 = v5;
    }
  }
}

