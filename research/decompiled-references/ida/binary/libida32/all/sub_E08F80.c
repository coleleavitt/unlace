__int64 __fastcall sub_E08F80(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 *v33; // r8
  _QWORD *i; // rdx
  __int64 *j; // rax
  __int64 v36; // rdx
  int v37; // edi
  int v38; // edi
  __int64 v39; // r10
  unsigned int v40; // esi
  __int64 *v41; // rcx
  __int64 v42; // r9
  int v43; // esi
  int v44; // r8d
  __int64 v45; // rsi
  unsigned int v46; // edi
  __int64 v47; // r9
  int v48; // esi
  __int64 *v49; // r11
  __int64 v50; // rcx
  unsigned __int64 v51; // rdi
  int v52; // eax
  int v54; // edi
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 *v60; // r10
  _QWORD *k; // rdx
  __int64 *v62; // rax
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // r9d
  __int64 v66; // r8
  unsigned int v67; // esi
  __int64 *v68; // rcx
  __int64 v69; // rdi
  int v70; // esi
  int v71; // edi
  unsigned int v72; // r12d
  __int64 v73; // r8
  int v74; // esi
  __int64 *v75; // r10
  int v76; // r10d
  unsigned int v77; // esi
  __int64 *v78; // r9
  __int64 v79; // rcx
  _QWORD *v80; // rcx
  _QWORD *v81; // rdx
  __int64 v82; // rcx
  _QWORD *v83; // rcx
  _QWORD *v84; // rdx
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // rax
  unsigned __int8 v87; // cl
  unsigned __int64 v88; // rdx
  __int64 *v89; // r11
  int v90; // r11d
  unsigned int v91; // esi
  __int64 *v92; // r10
  __int64 v93; // [rsp-10h] [rbp-88h]
  __int64 v94; // [rsp+8h] [rbp-70h]
  __int64 v95; // [rsp+10h] [rbp-68h]
  unsigned int v96; // [rsp+18h] [rbp-60h]
  unsigned int v97; // [rsp+18h] [rbp-60h]
  int v98; // [rsp+18h] [rbp-60h]
  __int64 *v99; // [rsp+18h] [rbp-60h]
  int v100; // [rsp+24h] [rbp-54h]
  unsigned __int64 v101[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = sub_B559C0(a2);
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
      v50 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v50 & 8) == 0
        || (*(_DWORD *)((char *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v50 & 7)) >> 9 != 3 )
      {
        if ( ((v9 + 85) & 0x7D) != 0 )
        {
          v51 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v51 = *(_QWORD *)(v51 + 8);
          v52 = *(_BYTE *)(sub_B6AD60(v51) + 8) & 0x7F;
          if ( !v52 || v52 == 24 )
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
          v88 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v88 = *(_QWORD *)v88;
          if ( ((*(_BYTE *)(v88 + 8) + 70) & 0x7Fu) > 3 && (*(_BYTE *)(a2 + 96) & 0x18) == 0 )
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
    v85 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v85 = *(_QWORD *)(v85 + 8);
    if ( !v85 )
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
    v86 = sub_B6AD60(v85);
    v11 = *(_BYTE *)(a2 + 96) & 7;
    v87 = *(_BYTE *)(v86 + 8) & 0x7F;
    if ( v87 > 0x12u )
    {
      if ( ((v87 + 94) & 0x7Fu) <= 5 )
        goto LABEL_4;
    }
    else if ( ((1LL << v87) & 0x40182) != 0 )
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
  v101[0] = a2 & 0xFFFFFFFFFFFFFFFDLL;
  v15 = sub_E08C40(a1, (__int64 *)v101, v12, v13, v14, v8, a3);
  v17 = v93;
  v18 = v15;
  if ( BYTE4(v15) )
  {
    v19 = a2;
    v95 = (unsigned int)v15;
    v94 = 8LL * (unsigned int)v15;
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
          *(_QWORD *)v26 = *(_QWORD *)(v25 + v94);
      }
      *v24 = v18;
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
      if ( !v19 )
        return v95 | 0x100000000LL;
    }
    v54 = 1;
    v16 = nullptr;
    if ( v23 != -4096 )
    {
      while ( 1 )
      {
        if ( !v16 && v23 == -8192 )
          v16 = v22;
        v21 = (unsigned int)v20 & ((_DWORD)v21 + v54);
        v22 = &v28[2 * v21];
        v23 = *v22;
        if ( *v22 == v19 )
          goto LABEL_13;
        if ( v23 == -4096 )
          break;
        ++v54;
      }
      if ( v16 )
        v22 = v16;
    }
    v17 = (unsigned int)(*(_DWORD *)(a1 + 256) + 1);
    if ( 4 * (int)v17 >= (unsigned int)(3 * v27) )
    {
LABEL_18:
      v96 = *(_DWORD *)(a1 + 264);
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
      v31 = (_QWORD *)sub_220C370(16LL * (unsigned int)v30, 8, v29, v17, v27, v16);
      *(_QWORD *)(a1 + 248) = v31;
      if ( v28 )
      {
        v32 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v33 = &v28[2 * v96];
        for ( i = &v31[2 * v32]; i != v31; v31 += 2 )
          *v31 = -4096;
        for ( j = v28; v33 != j; j += 2 )
        {
          v36 = *j;
          if ( *j != -4096 && v36 != -8192 )
          {
            v37 = *(_DWORD *)(a1 + 264);
            if ( !v37 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v38 = v37 - 1;
            v39 = *(_QWORD *)(a1 + 248);
            v40 = v38 & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
            v41 = (__int64 *)(v39 + 16LL * v40);
            v42 = *v41;
            if ( *v41 != v36 && v42 != -4096 )
            {
              v98 = 1;
              v89 = nullptr;
              while ( 1 )
              {
                if ( v42 == -8192 && !v89 )
                  v89 = v41;
                v40 = v38 & (v98 + v40);
                v41 = (__int64 *)(v39 + 16LL * v40);
                v42 = *v41;
                if ( v36 == *v41 )
                  break;
                if ( v42 == -4096 )
                {
                  if ( v89 )
                    v41 = v89;
                  break;
                }
                ++v98;
              }
            }
            *v41 = v36;
            *((_DWORD *)v41 + 2) = *((_DWORD *)j + 2);
            ++*(_DWORD *)(a1 + 256);
          }
        }
        operator delete();
        v31 = *(_QWORD **)(a1 + 248);
        v43 = *(_DWORD *)(a1 + 264);
        LODWORD(v17) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v79 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v43 = v79;
        v80 = &v31[2 * v79];
        if ( v31 != v80 )
        {
          v81 = v31;
          do
          {
            *v81 = -4096;
            v81 += 2;
          }
          while ( v80 != v81 );
        }
        LODWORD(v17) = 1;
      }
      if ( !v43 )
        goto LABEL_155;
      v44 = v43 - 1;
      v45 = v19;
      v46 = v44 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v22 = &v31[2 * v46];
      v47 = *v22;
      if ( *v22 == v19 )
        goto LABEL_51;
      v48 = 1;
      v49 = nullptr;
      if ( v47 != -4096 )
      {
        while ( 1 )
        {
          if ( v49 || v47 != -8192 )
            v22 = v49;
          v90 = v48 + 1;
          v91 = v46 + v48;
          v46 = v44 & v91;
          v92 = &v31[2 * (v44 & v91)];
          v47 = *v92;
          if ( *v92 == v19 )
          {
            v45 = v19;
            v22 = v92;
            goto LABEL_51;
          }
          if ( v47 == -4096 )
            break;
          v48 = v90;
          v49 = v22;
          v22 = v92;
        }
        if ( v22 )
          goto LABEL_50;
        v22 = &v31[2 * (v44 & v91)];
      }
    }
    else
    {
      if ( (int)v27 - *(_DWORD *)(a1 + 260) - (int)v17 > (unsigned int)v27 >> 3 )
      {
LABEL_50:
        v45 = *v22;
LABEL_51:
        *(_DWORD *)(a1 + 256) = v17;
        if ( v45 != -4096 )
          --*(_DWORD *)(a1 + 260);
        goto LABEL_53;
      }
      v97 = *(_DWORD *)(a1 + 264);
      v55 = (((((v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 4) | (v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 8)
          | (((v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 4)
          | (v20 >> 1)
          | v20
          | (((v20 >> 1) | v20) >> 2);
      v56 = v55 >> 16;
      v57 = ((v55 >> 16) | v55) + 1;
      if ( (unsigned int)v57 < 0x40 )
        LODWORD(v57) = 64;
      *(_DWORD *)(a1 + 264) = v57;
      v58 = (_QWORD *)sub_220C370(16LL * (unsigned int)v57, 8, v56, v17, v27, v16);
      *(_QWORD *)(a1 + 248) = v58;
      if ( v28 )
      {
        v59 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v60 = &v28[2 * v97];
        for ( k = &v58[2 * v59]; k != v58; v58 += 2 )
          *v58 = -4096;
        v62 = v28;
        do
        {
          v63 = *v62;
          if ( *v62 != -8192 && v63 != -4096 )
          {
            v64 = *(_DWORD *)(a1 + 264);
            if ( !v64 )
            {
              *(_QWORD *)&dword_0 = *v62;
              BUG();
            }
            v65 = v64 - 1;
            v66 = *(_QWORD *)(a1 + 248);
            v67 = (v64 - 1) & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
            v68 = (__int64 *)(v66 + 16LL * v67);
            v69 = *v68;
            if ( v63 != *v68 && v69 != -4096 )
            {
              v100 = 1;
              v99 = nullptr;
              while ( 1 )
              {
                if ( v69 == -8192 )
                {
                  if ( v99 )
                    v68 = v99;
                  v99 = v68;
                }
                v67 = v65 & (v100 + v67);
                v68 = (__int64 *)(v66 + 16LL * v67);
                v69 = *v68;
                if ( v63 == *v68 )
                  break;
                if ( v69 == -4096 )
                {
                  if ( v99 )
                    v68 = v99;
                  break;
                }
                ++v100;
              }
            }
            *v68 = v63;
            *((_DWORD *)v68 + 2) = *((_DWORD *)v62 + 2);
            ++*(_DWORD *)(a1 + 256);
          }
          v62 += 2;
        }
        while ( v60 != v62 );
        operator delete();
        v58 = *(_QWORD **)(a1 + 248);
        v70 = *(_DWORD *)(a1 + 264);
        LODWORD(v17) = *(_DWORD *)(a1 + 256) + 1;
      }
      else
      {
        v82 = *(unsigned int *)(a1 + 264);
        *(_QWORD *)(a1 + 256) = 0;
        v70 = v82;
        v83 = &v58[2 * v82];
        if ( v58 != v83 )
        {
          v84 = v58;
          do
          {
            *v84 = -4096;
            v84 += 2;
          }
          while ( v83 != v84 );
        }
        LODWORD(v17) = 1;
      }
      if ( !v70 )
      {
LABEL_155:
        ++*(_DWORD *)(a1 + 256);
        BUG();
      }
      v71 = v70 - 1;
      v45 = v19;
      v72 = v71 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v22 = &v58[2 * v72];
      v73 = *v22;
      if ( *v22 == v19 )
        goto LABEL_51;
      v74 = 1;
      v75 = nullptr;
      if ( v73 != -4096 )
      {
        while ( 1 )
        {
          if ( v75 || v73 != -8192 )
            v22 = v75;
          v76 = v74 + 1;
          v77 = v71 & (v72 + v74);
          v72 = v77;
          v78 = &v58[2 * v77];
          v73 = *v78;
          if ( *v78 == v19 )
          {
            v45 = v19;
            v22 = v78;
            goto LABEL_51;
          }
          if ( v73 == -4096 )
            break;
          v74 = v76;
          v75 = v22;
          v22 = v78;
        }
        if ( v22 )
          goto LABEL_50;
        v22 = &v58[2 * v77];
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

