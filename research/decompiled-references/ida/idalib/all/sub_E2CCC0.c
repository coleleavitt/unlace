__int64 __fastcall sub_E2CCC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  char v7; // cl
  char v8; // r12
  char v9; // al
  char v10; // r8
  char v11; // si
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // r8
  __int64 v15; // rax
  __int64 *v16; // r9
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 *v22; // rdx
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 *v28; // r14
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 *v34; // r8
  _QWORD *i; // rdx
  __int64 *j; // rax
  __int64 v37; // rdx
  int v38; // edi
  int v39; // edi
  __int64 v40; // r10
  unsigned int v41; // esi
  __int64 *v42; // rcx
  __int64 v43; // r9
  int v44; // esi
  int v45; // r8d
  __int64 v46; // rsi
  unsigned int v47; // edi
  __int64 v48; // r9
  int v49; // esi
  __int64 *v50; // r11
  __int64 v51; // rcx
  unsigned __int64 v52; // rdi
  int v53; // eax
  int v55; // edi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r11
  _QWORD *k; // rdx
  __int64 *v63; // rax
  __int64 v64; // rdx
  int v65; // ecx
  int v66; // r9d
  __int64 v67; // r8
  unsigned int v68; // esi
  __int64 *v69; // rcx
  __int64 v70; // rdi
  int v71; // esi
  int v72; // edi
  unsigned int v73; // r12d
  __int64 v74; // r8
  int v75; // esi
  __int64 *v76; // r10
  int v77; // r10d
  unsigned int v78; // esi
  __int64 *v79; // r9
  __int64 v80; // rcx
  _QWORD *v81; // rcx
  _QWORD *v82; // rdx
  __int64 v83; // rcx
  _QWORD *v84; // rcx
  _QWORD *v85; // rdx
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rax
  unsigned __int8 v88; // cl
  unsigned __int64 v89; // rdx
  __int64 *v90; // r11
  int v91; // r11d
  unsigned int v92; // esi
  __int64 *v93; // r10
  __int64 v94; // [rsp-10h] [rbp-88h]
  __int64 v95; // [rsp+8h] [rbp-70h]
  __int64 v96; // [rsp+10h] [rbp-68h]
  unsigned int v97; // [rsp+18h] [rbp-60h]
  unsigned int v98; // [rsp+18h] [rbp-60h]
  int v99; // [rsp+18h] [rbp-60h]
  __int64 *v100; // [rsp+18h] [rbp-60h]
  int v101; // [rsp+24h] [rbp-54h]
  unsigned __int64 v102[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = sub_B79700(a2);
  v7 = *(_BYTE *)(a2 + 28);
  v8 = v6;
  v9 = v7 & 0x7F;
  if ( (v7 & 0x7Fu) - 40 <= 6 )
  {
    v10 = *(_BYTE *)(a2 + 96);
    v11 = v10 & 7;
    if ( (v10 & 7) == 0 )
    {
      v12 = *(_QWORD *)(a2 + 48);
      v51 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v51 & 8) == 0
        || (*(_DWORD *)((char *)&qword_18 + (v51 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v51 & 7)) >> 9 != 3 )
      {
        if ( ((v9 + 85) & 0x7D) != 0 )
        {
          v52 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v52 = *(_QWORD *)(v52 + 8);
          v53 = *(_BYTE *)(sub_B8EAA0(v52) + 8) & 0x7F;
          if ( !v53 || v53 == 24 )
          {
            v13 = 1;
            v12 = *(_QWORD *)(a2 + 48);
            v11 = *(_BYTE *)(a2 + 96) & 7;
            goto LABEL_9;
          }
          v11 = *(_BYTE *)(a2 + 96) & 7;
          if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
          {
            v12 = *(_QWORD *)(a2 + 48);
            v13 = (*(_BYTE *)(a2 + 96) & 0x18) != 0;
            goto LABEL_9;
          }
          v89 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v89 = *(_QWORD *)v89;
          if ( ((*(_BYTE *)(v89 + 8) + 70) & 0x7Fu) > 3 && (*(_BYTE *)(a2 + 96) & 0x18) == 0 )
          {
            v12 = *(_QWORD *)(a2 + 48);
            goto LABEL_8;
          }
          goto LABEL_95;
        }
        if ( (v10 & 0x18) == 0 )
        {
          v11 = 0;
LABEL_7:
          v13 = 0;
          if ( v9 == 43 )
          {
LABEL_9:
            v14 = (v11 & 5) == 1;
            goto LABEL_10;
          }
LABEL_8:
          v13 = (unsigned int)*(char *)(a2 + 97) >> 31;
          goto LABEL_9;
        }
      }
      v13 = 1;
      v11 = 0;
      goto LABEL_9;
    }
    if ( v11 != 5 )
    {
LABEL_4:
      if ( (unsigned __int8)v11 > 3u )
      {
        v7 = *(_BYTE *)(a2 + 28);
LABEL_6:
        v12 = *(_QWORD *)(a2 + 48);
        v9 = v7 & 0x7F;
        goto LABEL_7;
      }
LABEL_95:
      v13 = 1;
      v12 = *(_QWORD *)(a2 + 48);
      goto LABEL_9;
    }
    if ( v9 != 46 && v9 != 40 )
      goto LABEL_111;
    v86 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v86 = *(_QWORD *)(v86 + 8);
    if ( !v86 )
    {
LABEL_111:
      if ( v9 != 43 )
      {
        v13 = 1;
        v11 = 5;
        v12 = *(_QWORD *)(a2 + 48);
        goto LABEL_9;
      }
      v11 = 5;
      goto LABEL_6;
    }
    v87 = sub_B8EAA0(v86);
    v11 = *(_BYTE *)(a2 + 96) & 7;
    v88 = *(_BYTE *)(v87 + 8) & 0x7F;
    if ( v88 > 0x12u )
    {
      if ( ((v88 + 94) & 0x7Fu) <= 5 )
        goto LABEL_4;
    }
    else if ( ((1LL << v88) & 0x40182) != 0 )
    {
      goto LABEL_4;
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
      goto LABEL_95;
    goto LABEL_4;
  }
  if ( ((v9 + 99) & 0x7Fu) > 2 )
  {
    v13 = 0;
    v14 = 1;
  }
  else
  {
    v13 = 1;
    v14 = 0;
  }
  v12 = *(_QWORD *)(a2 + 48);
LABEL_10:
  v102[0] = a2 & 0xFFFFFFFFFFFFFFFDLL;
  v15 = sub_E2C980(a1, (__int64 *)v102, v12, v13, v14, v8, a3);
  v17 = v94;
  v18 = v15;
  if ( BYTE4(v15) )
  {
    v19 = a2;
    v96 = (unsigned int)v15;
    v95 = 8LL * (unsigned int)v15;
    while ( 1 )
    {
      v27 = *(unsigned int *)(a1 + 264);
      v28 = *(__int64 **)(a1 + 248);
      if ( !(_DWORD)v27 )
        goto LABEL_18;
      v20 = (unsigned int)(v27 - 1);
      LODWORD(v21) = v20 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v22 = &v28[2 * (unsigned int)v21];
      v23 = *v22;
      if ( *v22 != v19 )
        break;
LABEL_13:
      v24 = v22 + 1;
      if ( a2 != v19 )
      {
        v25 = *(_QWORD *)(a1 + 224);
        v26 = v25 + 8LL * (unsigned int)*v24;
        if ( *(_BYTE *)(*(_QWORD *)v26 + 25LL) )
          *(_QWORD *)v26 = *(_QWORD *)(v25 + v95);
      }
      *v24 = v18;
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
      if ( !v19 )
        return v96 | 0x100000000LL;
    }
    v55 = 1;
    v16 = nullptr;
    if ( v23 != -4096 )
    {
      while ( 1 )
      {
        if ( !v16 && v23 == -8192 )
          v16 = v22;
        v21 = (unsigned int)v20 & ((_DWORD)v21 + v55);
        v22 = &v28[2 * v21];
        v23 = *v22;
        if ( *v22 == v19 )
          goto LABEL_13;
        if ( v23 == -4096 )
          break;
        ++v55;
      }
      if ( v16 )
        v22 = v16;
    }
    v17 = (unsigned int)(*(_DWORD *)(a1 + 256) + 1);
    if ( 4 * (int)v17 >= (unsigned int)(3 * v27) )
    {
LABEL_18:
      v97 = *(_DWORD *)(a1 + 264);
      v29 = ((((((((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v27 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v27 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v27 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v27 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 16;
      v30 = (v29
           | (((((((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v27 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v27 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 8)
           | (((((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v27 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v27 - 1) | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v27 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v27 - 1) >> 1))
          + 1;
      if ( (unsigned int)v30 < 0x40 )
        LODWORD(v30) = 64;
      *(_DWORD *)(a1 + 264) = v30;
      v31 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v30, 8, v29, v17, v27, v16);
      *(_QWORD *)(a1 + 248) = v31;
      if ( v28 )
      {
        v32 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v33 = 2LL * v97;
        v34 = &v28[v33];
        for ( i = &v31[2 * v32]; i != v31; v31 += 2 )
          *v31 = -4096;
        for ( j = v28; v34 != j; j += 2 )
        {
          v37 = *j;
          if ( *j != -4096 && v37 != -8192 )
          {
            v38 = *(_DWORD *)(a1 + 264);
            if ( !v38 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v39 = v38 - 1;
            v40 = *(_QWORD *)(a1 + 248);
            v41 = v39 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
            v42 = (__int64 *)(v40 + 16LL * v41);
            v43 = *v42;
            if ( *v42 != v37 && v43 != -4096 )
            {
              v99 = 1;
              v90 = nullptr;
              while ( 1 )
              {
                if ( v43 == -8192 && !v90 )
                  v90 = v42;
                v41 = v39 & (v99 + v41);
                v42 = (__int64 *)(v40 + 16LL * v41);
                v43 = *v42;
                if ( v37 == *v42 )
                  break;
                if ( v43 == -4096 )
                {
                  if ( v90 )
                    v42 = v90;
                  break;
                }
                ++v99;
              }
            }
            *v42 = v37;
            *((_DWORD *)v42 + 2) = *((_DWORD *)j + 2);
            ++*(_DWORD *)(a1 + 256);
          }
        }
        operator delete(v28, v33 * 8, 8);
        v31 = *(_QWORD **)(a1 + 248);
        v44 = *(_DWORD *)(a1 + 264);
        LODWORD(v17) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v80 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v44 = v80;
        v81 = &v31[2 * v80];
        if ( v31 != v81 )
        {
          v82 = v31;
          do
          {
            *v82 = -4096;
            v82 += 2;
          }
          while ( v81 != v82 );
        }
        LODWORD(v17) = 1;
      }
      if ( !v44 )
        goto LABEL_155;
      v45 = v44 - 1;
      v46 = v19;
      v47 = v45 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v22 = &v31[2 * v47];
      v48 = *v22;
      if ( *v22 == v19 )
        goto LABEL_51;
      v49 = 1;
      v50 = nullptr;
      if ( v48 != -4096 )
      {
        while ( 1 )
        {
          if ( v50 || v48 != -8192 )
            v22 = v50;
          v91 = v49 + 1;
          v92 = v47 + v49;
          v47 = v45 & v92;
          v93 = &v31[2 * (v45 & v92)];
          v48 = *v93;
          if ( *v93 == v19 )
          {
            v46 = v19;
            v22 = v93;
            goto LABEL_51;
          }
          if ( v48 == -4096 )
            break;
          v49 = v91;
          v50 = v22;
          v22 = v93;
        }
        if ( v22 )
          goto LABEL_50;
        v22 = &v31[2 * (v45 & v92)];
      }
    }
    else
    {
      if ( (int)v27 - *(_DWORD *)(a1 + 260) - (int)v17 > (unsigned int)v27 >> 3 )
      {
LABEL_50:
        v46 = *v22;
LABEL_51:
        *(_DWORD *)(a1 + 256) = v17;
        if ( v46 != -4096 )
          --*(_DWORD *)(a1 + 260);
        goto LABEL_53;
      }
      v98 = *(_DWORD *)(a1 + 264);
      v56 = (((((v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 4) | (v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 8)
          | (((v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 4)
          | (v20 >> 1)
          | v20
          | (((v20 >> 1) | v20) >> 2);
      v57 = v56 >> 16;
      v58 = ((v56 >> 16) | v56) + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(a1 + 264) = v58;
      v59 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v58, 8, v57, v17, v27, v16);
      *(_QWORD *)(a1 + 248) = v59;
      if ( v28 )
      {
        v60 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v61 = 2LL * v98;
        for ( k = &v59[2 * v60]; k != v59; v59 += 2 )
          *v59 = -4096;
        v63 = v28;
        do
        {
          v64 = *v63;
          if ( *v63 != -8192 && v64 != -4096 )
          {
            v65 = *(_DWORD *)(a1 + 264);
            if ( !v65 )
            {
              *(_QWORD *)&dword_0 = *v63;
              BUG();
            }
            v66 = v65 - 1;
            v67 = *(_QWORD *)(a1 + 248);
            v68 = (v65 - 1) & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
            v69 = (__int64 *)(v67 + 16LL * v68);
            v70 = *v69;
            if ( v64 != *v69 && v70 != -4096 )
            {
              v101 = 1;
              v100 = nullptr;
              while ( 1 )
              {
                if ( v70 == -8192 )
                {
                  if ( v100 )
                    v69 = v100;
                  v100 = v69;
                }
                v68 = v66 & (v101 + v68);
                v69 = (__int64 *)(v67 + 16LL * v68);
                v70 = *v69;
                if ( v64 == *v69 )
                  break;
                if ( v70 == -4096 )
                {
                  if ( v100 )
                    v69 = v100;
                  break;
                }
                ++v101;
              }
            }
            *v69 = v64;
            *((_DWORD *)v69 + 2) = *((_DWORD *)v63 + 2);
            ++*(_DWORD *)(a1 + 256);
          }
          v63 += 2;
        }
        while ( &v28[v61] != v63 );
        operator delete(v28, v61 * 8, 8);
        v59 = *(_QWORD **)(a1 + 248);
        v71 = *(_DWORD *)(a1 + 264);
        LODWORD(v17) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v83 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v71 = v83;
        v84 = &v59[2 * v83];
        if ( v59 != v84 )
        {
          v85 = v59;
          do
          {
            *v85 = -4096;
            v85 += 2;
          }
          while ( v84 != v85 );
        }
        LODWORD(v17) = 1;
      }
      if ( !v71 )
      {
LABEL_155:
        ++*(_DWORD *)(a1 + 256);
        BUG();
      }
      v72 = v71 - 1;
      v46 = v19;
      v73 = v72 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v22 = &v59[2 * v73];
      v74 = *v22;
      if ( *v22 == v19 )
        goto LABEL_51;
      v75 = 1;
      v76 = nullptr;
      if ( v74 != -4096 )
      {
        while ( 1 )
        {
          if ( v76 || v74 != -8192 )
            v22 = v76;
          v77 = v75 + 1;
          v78 = v72 & (v73 + v75);
          v73 = v78;
          v79 = &v59[2 * v78];
          v74 = *v79;
          if ( *v79 == v19 )
          {
            v46 = v19;
            v22 = v79;
            goto LABEL_51;
          }
          if ( v74 == -4096 )
            break;
          v75 = v77;
          v76 = v22;
          v22 = v79;
        }
        if ( v22 )
          goto LABEL_50;
        v22 = &v59[2 * v78];
      }
    }
    *(_DWORD *)(a1 + 256) = v17;
LABEL_53:
    *v22 = v19;
    *((_DWORD *)v22 + 2) = 0;
    goto LABEL_13;
  }
  return 0;
}
