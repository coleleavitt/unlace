void __fastcall clang_index_setClientEntity(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 *v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // r8d
  __int64 *v10; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 *v24; // r9
  __int64 *i; // rax
  __int64 v26; // rdx
  int v27; // edi
  int v28; // edi
  __int64 v29; // r11
  int v30; // r15d
  _QWORD *v31; // r13
  __int64 v32; // r8
  _QWORD *v33; // rcx
  __int64 v34; // r10
  int v35; // esi
  int v36; // edi
  unsigned int v37; // ecx
  __int64 v38; // r8
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rcx
  int v42; // edi
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  __int64 *v45; // r8
  __int64 *v46; // rax
  __int64 v47; // rdx
  int v48; // r9d
  int v49; // r9d
  __int64 v50; // r11
  unsigned int v51; // edi
  _QWORD *v52; // rcx
  __int64 v53; // r10
  int v54; // edi
  int v55; // r9d
  __int64 *v56; // r8
  unsigned int v57; // r13d
  __int64 v58; // rcx
  _QWORD *v59; // rcx
  _QWORD *v60; // rcx
  _QWORD *v61; // r15
  int v62; // r10d
  __int64 *v63; // r9
  __int64 v65; // rsi
  __int64 v66; // rdi
  int v67; // [rsp+0h] [rbp-40h]

  if ( a1 )
  {
    v65 = *(_QWORD *)(a1 + 80);
    v66 = *(_QWORD *)(a1 + 88);
    if ( v65 )
    {
      v2 = 0;
      v3 = a2;
      v4 = v65;
      v5 = v66;
      v6 = *(unsigned int *)(v66 + 112);
      v7 = *(__int64 **)(v66 + 96);
      if ( !(_DWORD)v6 )
        goto LABEL_12;
      v8 = (unsigned int)(v6 - 1);
      v9 = 1;
      v10 = nullptr;
      v11 = ((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4);
      v12 = v8 & v11;
      v13 = &v7[2 * ((unsigned int)v8 & v11)];
      v14 = *v13;
      if ( *v13 == v4 )
      {
LABEL_10:
        v15 = v13 + 1;
LABEL_11:
        *v15 = v3;
        return;
      }
      while ( v14 != -4096 )
      {
        if ( v14 == -8192 && !v10 )
          v10 = v13;
        v12 = v8 & (v9 + v12);
        v13 = &v7[2 * v12];
        v14 = *v13;
        if ( *v13 == v4 )
          goto LABEL_10;
        ++v9;
      }
      if ( !v10 )
        v10 = v13;
      v35 = *(_DWORD *)(v5 + 104) + 1;
      v2 = 2 * v6;
      if ( 4 * v35 < (unsigned int)(3 * v6) )
      {
        if ( (unsigned int)v6 >> 3 < (int)v6 - *(_DWORD *)(v5 + 108) - v35 )
        {
LABEL_29:
          *(_DWORD *)(v5 + 104) = v35;
          if ( *v10 != -4096 )
            --*(_DWORD *)(v5 + 108);
          *v10 = v4;
          v15 = v10 + 1;
          v10[1] = 0;
          goto LABEL_11;
        }
        v39 = (((((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
               | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
               | ((v8 | (v8 >> 1)) >> 2)
               | v8
               | (v8 >> 1)) >> 16)
             | ((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
             | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
             | ((v8 | (v8 >> 1)) >> 2)
             | v8
             | (v8 >> 1))
            + 1;
        if ( (unsigned int)v39 < 0x40 )
          LODWORD(v39) = 64;
        *(_DWORD *)(v5 + 112) = v39;
        v40 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v39, 8);
        v41 = *(unsigned int *)(v5 + 112);
        *(_QWORD *)(v5 + 96) = v40;
        v42 = v41;
        v43 = 16 * v41;
        v44 = &v40[(unsigned __int64)v43 / 8];
        if ( v7 )
        {
          *(_QWORD *)(v5 + 104) = 0;
          v45 = &v7[2 * v6];
          if ( v43 )
          {
            if ( (v43 & 0x10) == 0 || (*v40 = -4096, v40 += 2, v40 != v44) )
            {
              do
              {
                *v40 = -4096;
                v40 += 4;
                *(v40 - 2) = -4096;
              }
              while ( v40 != v44 );
            }
          }
          v46 = v7;
          do
          {
            v47 = *v46;
            if ( *v46 != -8192 && v47 != -4096 )
            {
              v48 = *(_DWORD *)(v5 + 112);
              if ( !v48 )
              {
                *(_QWORD *)&dword_0 = *v46;
                BUG();
              }
              v49 = v48 - 1;
              v50 = *(_QWORD *)(v5 + 96);
              v51 = v49 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
              v52 = (_QWORD *)(v50 + 16LL * v51);
              v53 = *v52;
              if ( *v52 != v47 )
              {
                v67 = 1;
                v61 = nullptr;
                while ( v53 != -4096 )
                {
                  if ( v53 == -8192 && !v61 )
                    v61 = v52;
                  v51 = v49 & (v67 + v51);
                  v52 = (_QWORD *)(v50 + 16LL * v51);
                  v53 = *v52;
                  if ( v47 == *v52 )
                    goto LABEL_54;
                  ++v67;
                }
                if ( v61 )
                  v52 = v61;
              }
LABEL_54:
              *v52 = v47;
              v52[1] = v46[1];
              ++*(_DWORD *)(v5 + 104);
            }
            v46 += 2;
          }
          while ( v45 != v46 );
          operator delete();
          v40 = *(_QWORD **)(v5 + 96);
          v42 = *(_DWORD *)(v5 + 112);
          v35 = *(_DWORD *)(v5 + 104) + 1;
        }
        else
        {
          *(_QWORD *)(v5 + 104) = 0;
          if ( v40 != v44 )
          {
            v60 = v40;
            if ( (((_BYTE)v44 - (_BYTE)v40) & 0x10) == 0 || (v60 = v40 + 2, *v40 = -4096, v40 + 2 != v44) )
            {
              do
              {
                *v60 = -4096;
                v60 += 4;
                *(v60 - 2) = -4096;
              }
              while ( v60 != v44 );
            }
          }
          v35 = 1;
        }
        if ( v42 )
        {
          v54 = v42 - 1;
          v55 = 1;
          v56 = nullptr;
          v57 = v54 & v11;
          v10 = &v40[2 * v57];
          v58 = *v10;
          if ( *v10 != v4 )
          {
            while ( v58 != -4096 )
            {
              if ( !v56 && v58 == -8192 )
                v56 = v10;
              v57 = v54 & (v55 + v57);
              v10 = &v40[2 * v57];
              v58 = *v10;
              if ( *v10 == v4 )
                goto LABEL_29;
              ++v55;
            }
            if ( v56 )
              v10 = v56;
          }
          goto LABEL_29;
        }
      }
      else
      {
LABEL_12:
        v16 = (unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
        v17 = (((v16 >> 2) | v16) >> 4) | (v16 >> 2) | v16;
        v18 = ((((v17 >> 8) | v17) >> 16) | (v17 >> 8) | v17) + 1;
        if ( (unsigned int)v18 < 0x40 )
          LODWORD(v18) = 64;
        *(_DWORD *)(v5 + 112) = v18;
        v19 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v18, 8);
        v20 = *(unsigned int *)(v5 + 112);
        *(_QWORD *)(v5 + 96) = v19;
        v21 = v20;
        v22 = 16 * v20;
        v23 = &v19[(unsigned __int64)v22 / 8];
        if ( v7 )
        {
          *(_QWORD *)(v5 + 104) = 0;
          v24 = &v7[2 * (unsigned int)v6];
          if ( v22 )
          {
            if ( (v22 & 0x10) == 0 || (*v19 = -4096, v19 += 2, v19 != v23) )
            {
              do
              {
                *v19 = -4096;
                v19 += 4;
                *(v19 - 2) = -4096;
              }
              while ( v19 != v23 );
            }
          }
          for ( i = v7; v24 != i; i += 2 )
          {
            v26 = *i;
            if ( *i != -4096 && v26 != -8192 )
            {
              v27 = *(_DWORD *)(v5 + 112);
              if ( !v27 )
              {
                *(_QWORD *)&dword_0 = *i;
                BUG();
              }
              v28 = v27 - 1;
              v29 = *(_QWORD *)(v5 + 96);
              v30 = 1;
              v31 = nullptr;
              LODWORD(v32) = v28 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
              v33 = (_QWORD *)(v29 + 16LL * (unsigned int)v32);
              v34 = *v33;
              if ( *v33 != v26 )
              {
                while ( v34 != -4096 )
                {
                  if ( v34 == -8192 && !v31 )
                    v31 = v33;
                  v32 = v28 & (unsigned int)(v32 + v30);
                  v33 = (_QWORD *)(v29 + 16 * v32);
                  v34 = *v33;
                  if ( v26 == *v33 )
                    goto LABEL_24;
                  ++v30;
                }
                if ( v31 )
                  v33 = v31;
              }
LABEL_24:
              *v33 = v26;
              v33[1] = i[1];
              ++*(_DWORD *)(v5 + 104);
            }
          }
          operator delete();
          v19 = *(_QWORD **)(v5 + 96);
          v21 = *(_DWORD *)(v5 + 112);
          v35 = *(_DWORD *)(v5 + 104) + 1;
        }
        else
        {
          *(_QWORD *)(v5 + 104) = 0;
          if ( v19 != v23 )
          {
            v59 = v19;
            if ( (((_BYTE)v23 - (_BYTE)v19) & 0x10) == 0 || (v59 = v19 + 2, *v19 = -4096, v19 + 2 != v23) )
            {
              do
              {
                *v59 = -4096;
                v59 += 4;
                *(v59 - 2) = -4096;
              }
              while ( v59 != v23 );
            }
          }
          v35 = 1;
        }
        if ( v21 )
        {
          v36 = v21 - 1;
          v37 = v36 & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
          v10 = &v19[2 * v37];
          v38 = *v10;
          if ( *v10 != v4 )
          {
            v62 = 1;
            v63 = nullptr;
            while ( v38 != -4096 )
            {
              if ( v38 == -8192 && !v63 )
                v63 = v10;
              v37 = v36 & (v62 + v37);
              v10 = &v19[2 * v37];
              v38 = *v10;
              if ( *v10 == v4 )
                goto LABEL_29;
              ++v62;
            }
            if ( v63 )
              v10 = v63;
          }
          goto LABEL_29;
        }
      }
      *(_DWORD *)(v5 + 104) = v35;
      BUG();
    }
    nullsub_702();
  }
}

