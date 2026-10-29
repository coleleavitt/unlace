void __fastcall sub_67BB20(
        __int64 a1,
        int a2,
        const char *a3,
        signed __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  __int64 v11; // rdx
  unsigned __int8 v12; // r9
  unsigned __int8 v13; // r8
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  const char *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 *v22; // r14
  __int64 v23; // r12
  int v24; // eax
  unsigned __int64 v25; // rcx
  int v26; // r8d
  unsigned __int64 *v27; // rdx
  unsigned int v28; // edi
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rsi
  __int64 *v31; // rax
  __int64 v33; // rbp
  __int64 v34; // r12
  __int64 v35; // rdx
  _BYTE *v36; // rcx
  _BYTE *v37; // rax
  _BYTE *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // r13
  _QWORD *v42; // rbp
  int v43; // esi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  int v49; // edi
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 *v52; // r9
  __int64 *i; // rax
  __int64 v54; // rdx
  int v55; // edi
  int v56; // edi
  __int64 v57; // r11
  int v58; // r15d
  _QWORD *v59; // r13
  __int64 v60; // r8
  _QWORD *v61; // rcx
  __int64 v62; // r10
  int v63; // edi
  unsigned int v64; // ecx
  unsigned __int64 v65; // r8
  int v66; // r10d
  unsigned __int64 *v67; // r9
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  int v71; // ecx
  __int64 v72; // rdx
  _QWORD *v73; // rsi
  __int64 *v74; // rax
  __int64 v75; // rdx
  int v76; // edi
  int v77; // edi
  __int64 v78; // r10
  unsigned int v79; // esi
  _QWORD *v80; // rcx
  __int64 v81; // r9
  int v82; // ecx
  int v83; // r9d
  unsigned __int64 *v84; // r8
  unsigned int v85; // r13d
  unsigned __int64 v86; // rdi
  __int64 v87; // rax
  _QWORD *v88; // rcx
  _QWORD *v89; // rdx
  _QWORD *v90; // r11
  unsigned __int8 v91; // [rsp+8h] [rbp-80h]
  int v92; // [rsp+8h] [rbp-80h]
  unsigned __int8 v93; // [rsp+Ch] [rbp-7Ch]
  __int128 v94; // [rsp+10h] [rbp-78h] BYREF
  int v95; // [rsp+20h] [rbp-68h]
  __m128i v96; // [rsp+28h] [rbp-60h]
  int v97; // [rsp+38h] [rbp-50h]
  int v98; // [rsp+3Ch] [rbp-4Ch]
  int v99; // [rsp+40h] [rbp-48h]

  v11 = *(_QWORD *)(a1 + 24);
  v12 = a7;
  v13 = a8;
  if ( !*(_QWORD *)(v11 + 24) )
    return;
  v16 = 0;
  if ( a5 )
  {
    v17 = *(_QWORD *)(a5 + 8);
    if ( v17 )
    {
      while ( 1 )
      {
        v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v17 & 4) == 0 || !v16 )
          break;
        v17 = *(_QWORD *)(v16 + 8);
        if ( !v17 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v16 = 0;
    }
  }
  ++*(_DWORD *)(a1 + 240);
  v95 = 0;
  v94 = 0;
  if ( a2 )
  {
    *(_QWORD *)&v94 = a1;
    v95 = a2;
  }
  v18 = &byte_3B9466E;
  if ( a4 )
  {
    v18 = a3;
    if ( a3[a4] )
    {
      v36 = *(_BYTE **)(a1 + 144);
      *(_QWORD *)(a1 + 224) += a4 + 1;
      v37 = &v36[a4 + 1];
      if ( *(_QWORD *)(a1 + 152) >= (unsigned __int64)v37 && v36 )
      {
        *(_QWORD *)(a1 + 144) = v37;
      }
      else
      {
        v87 = sub_67A630(a1 + 144, a4 + 1, 0);
        v13 = a8;
        v12 = a7;
        v36 = (_BYTE *)v87;
      }
      if ( a4 <= 1 )
      {
        if ( a4 == 1 )
          *v36 = *a3;
      }
      else
      {
        v93 = v13;
        v91 = v12;
        v38 = memmove(v36, a3, a4);
        v12 = v91;
        v13 = v93;
        v36 = v38;
      }
      v36[a4] = 0;
      v18 = v36;
      v11 = *(_QWORD *)(a1 + 24);
    }
  }
  v19 = *(_QWORD *)(a1 + 16);
  v97 = a6;
  v98 = v12;
  v99 = v13;
  v96 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)a5);
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v11 + 24))(v19, &v94);
  v21 = *(unsigned int *)(a1 + 64);
  v22 = *(__int64 **)(a1 + 48);
  v23 = v20;
  v24 = 0;
  if ( !(_DWORD)v21 )
    goto LABEL_42;
  v25 = (unsigned int)(v21 - 1);
  v26 = 1;
  v27 = nullptr;
  v28 = v25 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
  v29 = (unsigned __int64 *)&v22[2 * v28];
  v30 = *v29;
  if ( v16 != *v29 )
  {
    while ( v30 != -4096 )
    {
      if ( v30 == -8192 && !v27 )
        v27 = v29;
      v28 = v25 & (v26 + v28);
      v29 = (unsigned __int64 *)&v22[2 * v28];
      v30 = *v29;
      if ( v16 == *v29 )
        goto LABEL_11;
      ++v26;
    }
    if ( !v27 )
      v27 = v29;
    v43 = *(_DWORD *)(a1 + 56) + 1;
    v24 = 2 * v21;
    if ( 4 * v43 < (unsigned int)(3 * v21) )
    {
      if ( (unsigned int)v21 >> 3 < (int)v21 - *(_DWORD *)(a1 + 60) - v43 )
      {
LABEL_39:
        *(_DWORD *)(a1 + 56) = v43;
        if ( *v27 != -4096 )
          --*(_DWORD *)(a1 + 60);
        *v27 = v16;
        v31 = (__int64 *)(v27 + 1);
        v27[1] = 0;
        goto LABEL_12;
      }
      v68 = (((((((((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1)) >> 4) | ((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1)) >> 8)
             | ((((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1)) >> 4)
             | ((v25 | (v25 >> 1)) >> 2)
             | v25
             | (v25 >> 1)) >> 16)
           | ((((((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1)) >> 4) | ((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1)) >> 8)
           | ((((v25 | (v25 >> 1)) >> 2) | v25 | (v25 >> 1)) >> 4)
           | ((v25 | (v25 >> 1)) >> 2)
           | v25
           | (v25 >> 1))
          + 1;
      if ( (unsigned int)v68 < 0x40 )
        LODWORD(v68) = 64;
      *(_DWORD *)(a1 + 64) = v68;
      v69 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v68, 8);
      v70 = *(unsigned int *)(a1 + 64);
      *(_QWORD *)(a1 + 48) = v69;
      v71 = v70;
      v72 = 16 * v70;
      v73 = &v69[(unsigned __int64)v72 / 8];
      if ( v22 )
      {
        *(_QWORD *)(a1 + 56) = 0;
        if ( v72 )
        {
          if ( (v72 & 0x10) == 0 || (*v69 = -4096, v69 += 2, v69 != v73) )
          {
            do
            {
              *v69 = -4096;
              v69 += 4;
              *(v69 - 2) = -4096;
            }
            while ( v69 != v73 );
          }
        }
        v74 = v22;
        do
        {
          v75 = *v74;
          if ( *v74 != -4096 && v75 != -8192 )
          {
            v76 = *(_DWORD *)(a1 + 64);
            if ( !v76 )
            {
              *(_QWORD *)&dword_0 = *v74;
              BUG();
            }
            v77 = v76 - 1;
            v78 = *(_QWORD *)(a1 + 48);
            v79 = v77 & (((unsigned int)v75 >> 9) ^ ((unsigned int)v75 >> 4));
            v80 = (_QWORD *)(v78 + 16LL * v79);
            v81 = *v80;
            if ( *v80 != v75 )
            {
              v92 = 1;
              v90 = nullptr;
              while ( v81 != -4096 )
              {
                if ( !v90 && v81 == -8192 )
                  v90 = v80;
                v79 = v77 & (v92 + v79);
                v80 = (_QWORD *)(v78 + 16LL * v79);
                v81 = *v80;
                if ( v75 == *v80 )
                  goto LABEL_76;
                ++v92;
              }
              if ( v90 )
                v80 = v90;
            }
LABEL_76:
            *v80 = v75;
            v80[1] = v74[1];
            ++*(_DWORD *)(a1 + 56);
          }
          v74 += 2;
        }
        while ( &v22[2 * v21] != v74 );
        operator delete();
        v69 = *(_QWORD **)(a1 + 48);
        v71 = *(_DWORD *)(a1 + 64);
        v43 = *(_DWORD *)(a1 + 56) + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 56) = 0;
        if ( v69 != v73 )
        {
          v89 = v69;
          if ( (((_BYTE)v73 - (_BYTE)v69) & 0x10) == 0 || (v89 = v69 + 2, *v69 = -4096, v69 + 2 != v73) )
          {
            do
            {
              *v89 = -4096;
              v89 += 4;
              *(v89 - 2) = -4096;
            }
            while ( v89 != v73 );
          }
        }
        v43 = 1;
      }
      if ( v71 )
      {
        v82 = v71 - 1;
        v83 = 1;
        v84 = nullptr;
        v85 = v82 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v27 = &v69[2 * v85];
        v86 = *v27;
        if ( v16 != *v27 )
        {
          while ( v86 != -4096 )
          {
            if ( !v84 && v86 == -8192 )
              v84 = v27;
            v85 = v82 & (v83 + v85);
            v27 = &v69[2 * v85];
            v86 = *v27;
            if ( v16 == *v27 )
              goto LABEL_39;
            ++v83;
          }
          if ( v84 )
            v27 = v84;
        }
        goto LABEL_39;
      }
LABEL_127:
      *(_DWORD *)(a1 + 56) = v43;
      BUG();
    }
LABEL_42:
    v44 = (unsigned int)(v24 - 1) | ((unsigned __int64)(unsigned int)(v24 - 1) >> 1);
    v45 = (((v44 >> 2) | v44) >> 4) | (v44 >> 2) | v44;
    v46 = ((((v45 >> 8) | v45) >> 16) | (v45 >> 8) | v45) + 1;
    if ( (unsigned int)v46 < 0x40 )
      LODWORD(v46) = 64;
    *(_DWORD *)(a1 + 64) = v46;
    v47 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v46, 8);
    v48 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)(a1 + 48) = v47;
    v49 = v48;
    v50 = 16 * v48;
    v51 = &v47[(unsigned __int64)v50 / 8];
    if ( v22 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      v52 = &v22[2 * (unsigned int)v21];
      if ( v50 )
      {
        if ( (v50 & 0x10) == 0 || (*v47 = -4096, v47 += 2, v47 != v51) )
        {
          do
          {
            *v47 = -4096;
            v47 += 4;
            *(v47 - 2) = -4096;
          }
          while ( v47 != v51 );
        }
      }
      for ( i = v22; v52 != i; i += 2 )
      {
        v54 = *i;
        if ( *i != -4096 && v54 != -8192 )
        {
          v55 = *(_DWORD *)(a1 + 64);
          if ( !v55 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v56 = v55 - 1;
          v57 = *(_QWORD *)(a1 + 48);
          v58 = 1;
          v59 = nullptr;
          LODWORD(v60) = v56 & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
          v61 = (_QWORD *)(v57 + 16LL * (unsigned int)v60);
          v62 = *v61;
          if ( v54 != *v61 )
          {
            while ( v62 != -4096 )
            {
              if ( v62 == -8192 && !v59 )
                v59 = v61;
              v60 = v56 & (unsigned int)(v60 + v58);
              v61 = (_QWORD *)(v57 + 16 * v60);
              v62 = *v61;
              if ( v54 == *v61 )
                goto LABEL_54;
              ++v58;
            }
            if ( v59 )
              v61 = v59;
          }
LABEL_54:
          *v61 = v54;
          v61[1] = i[1];
          ++*(_DWORD *)(a1 + 56);
        }
      }
      operator delete();
      v47 = *(_QWORD **)(a1 + 48);
      v49 = *(_DWORD *)(a1 + 64);
      v43 = *(_DWORD *)(a1 + 56) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0;
      if ( v47 != v51 )
      {
        v88 = v47;
        if ( (((_BYTE)v51 - (_BYTE)v47) & 0x10) == 0 || (v88 = v47 + 2, *v47 = -4096, v47 + 2 != v51) )
        {
          do
          {
            *v88 = -4096;
            v88 += 4;
            *(v88 - 2) = -4096;
          }
          while ( v88 != v51 );
        }
      }
      v43 = 1;
    }
    if ( v49 )
    {
      v63 = v49 - 1;
      v64 = v63 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v27 = &v47[2 * v64];
      v65 = *v27;
      if ( v16 != *v27 )
      {
        v66 = 1;
        v67 = nullptr;
        while ( v65 != -4096 )
        {
          if ( !v67 && v65 == -8192 )
            v67 = v27;
          v64 = v63 & (v66 + v64);
          v27 = &v47[2 * v64];
          v65 = *v27;
          if ( v16 == *v27 )
            goto LABEL_39;
          ++v66;
        }
        if ( v67 )
          v27 = v67;
      }
      goto LABEL_39;
    }
    goto LABEL_127;
  }
LABEL_11:
  v31 = (__int64 *)(v29 + 1);
LABEL_12:
  *v31 = v23;
  if ( (*(_DWORD *)(a1 + 240))-- == 1 )
  {
    v33 = *(_QWORD *)(a1 + 208);
    v34 = v33 + 16LL * *(unsigned int *)(a1 + 216);
    while ( v34 != v33 )
    {
      v33 += 16;
      operator delete();
    }
    *(_DWORD *)(a1 + 216) = 0;
    v35 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v35 )
    {
      v39 = *(_QWORD **)(a1 + 160);
      v40 = v35;
      *(_QWORD *)(a1 + 224) = 0;
      v41 = &v39[v40];
      v42 = v39 + 1;
      *(__m128i *)(a1 + 144) = _mm_unpacklo_epi64(
                                 (__m128i)(unsigned __int64)*v39,
                                 (__m128i)(unsigned __int64)(*v39 + 4096LL));
      if ( v40 != 1 )
      {
        do
        {
          ++v42;
          operator delete();
        }
        while ( v41 != v42 );
      }
      *(_DWORD *)(a1 + 168) = 1;
    }
  }
}

