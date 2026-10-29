__int64 __fastcall sub_ED2D10(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r12d
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // r13
  unsigned int v21; // r14d
  int v22; // eax
  _DWORD *v23; // rax
  unsigned int v24; // r15d
  __int64 *v25; // r14
  unsigned __int64 v26; // rsi
  unsigned int v27; // ecx
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int8 v30; // dl
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // r12
  __int64 *v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // r9d
  __int64 v42; // r15
  __int64 *v43; // r8
  _QWORD *v44; // rcx
  __int64 *v45; // rdx
  int i; // r13d
  __int64 v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // rsi
  __int64 v50; // r10
  int v51; // ecx
  unsigned int v52; // edi
  unsigned int v53; // r8d
  unsigned int v54; // edi
  __int64 v55; // r9
  int v56; // esi
  __int64 *v57; // r10
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rdx
  int v64; // r11d
  __int64 v65; // r15
  _QWORD *v66; // rcx
  __int64 *v67; // rdx
  int v68; // r10d
  __int64 v69; // rcx
  unsigned int v70; // edi
  __int64 v71; // rsi
  __int64 v72; // r9
  int v73; // ecx
  unsigned int v74; // esi
  unsigned int v75; // edi
  unsigned int v76; // r13d
  __int64 v77; // r8
  int v78; // esi
  __int64 *v79; // r9
  __int64 v80; // rcx
  _QWORD *v81; // rcx
  _QWORD *v82; // rdx
  __int64 v83; // rcx
  _QWORD *v84; // rcx
  _QWORD *v85; // rdx
  __int64 *v86; // rdi
  __int64 v87; // rcx
  _DWORD *v88; // rax
  _DWORD *v89; // rdx
  unsigned int v90; // r15d
  __int64 v91; // r11
  int v92; // [rsp+8h] [rbp-60h]
  __int64 v93; // [rsp+8h] [rbp-60h]
  int v94; // [rsp+10h] [rbp-58h]
  __m128 v95[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (__int64)(a1 + 14);
  v5 = a1[18];
  v6 = *((_QWORD *)a1 + 7);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_ED2CA0(v95, v8, (_QWORD *)(16 * v5 + v6), v2, 1);
      v10 = v95[0].m128_u64[0];
      goto LABEL_4;
    }
    v17 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v7 = (v5 - 1) & (v17 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v19 = *v8;
        if ( *v8 == a2 )
          goto LABEL_3;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
  }
  sub_ED2CA0(v95, (_QWORD *)(v6 + 16LL * (unsigned int)v5), (_QWORD *)(v6 + 16LL * (unsigned int)v5), v2, 1);
  v10 = v95[0].m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*((_QWORD *)a1 + 7) + 16LL * a1[18]);
  sub_ED2CA0(v95, v11, v11, v2, 1);
  if ( v95[0].m128_u64[0] == v10 )
  {
    v20 = *(_QWORD *)a1;
    v21 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
    if ( v21 < *(_DWORD *)(*(_QWORD *)a1 + 476LL) || v21 >= *(_DWORD *)(v20 + 480) )
      v22 = sub_101D590(*(_QWORD *)a1);
    else
      v22 = *(_DWORD *)(v20 + 472);
    v95[0].m128_i8[0] = 0;
    if ( (unsigned int)(v22 + 1) > 1 )
    {
      if ( v22 >= 0 )
      {
        v23 = (_DWORD *)(*(_QWORD *)(v20 + 184) + 24LL * (unsigned int)v22);
        goto LABEL_17;
      }
      v31 = (unsigned int)(-2 - v22);
      v32 = *(_QWORD *)(*(_QWORD *)(v20 + 320) + 8LL * ((unsigned int)(-2 - v22) >> 6));
      if ( _bittest64(&v32, v31) )
      {
        v33 = (_QWORD *)(*(_QWORD *)(v20 + 272) + 8 * ((unsigned __int64)(int)v31 >> 5));
        if ( *v33 )
        {
          v23 = (_DWORD *)(*v33 + 24 * (v31 & 0x1F));
LABEL_17:
          v15 = 0;
          if ( v23 )
            v15 = v21 - (*v23 & 0x7FFFFFFF);
          goto LABEL_19;
        }
        v86 = (__int64 *)(*(_QWORD *)(v20 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v87 = *v86;
        v86[10] += 768;
        v88 = (_DWORD *)((v87 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v86[1] >= (unsigned __int64)(v88 + 192) && v87 )
          *v86 = (__int64)(v88 + 192);
        else
          v88 = (_DWORD *)sub_986170((__int64)v86, 768, 768, 3, v13, v14);
        *v33 = v88;
        v89 = v88 + 192;
        do
        {
          *v88 = 0;
          v88 += 6;
          *((_OWORD *)v88 - 1) = 0;
          *((_QWORD *)v88 - 1) = 0;
        }
        while ( v88 != v89 );
        v90 = v31 & 0x1F;
        v30 = v95[0].m128_i8[0];
        v12 = 3LL * v90;
        v23 = (_DWORD *)(*v33 + 24LL * v90);
      }
      else
      {
        v23 = (_DWORD *)sub_101F930(v20, (unsigned int)v31, v95);
        v30 = v95[0].m128_i8[0];
      }
      if ( !v30 )
        goto LABEL_17;
    }
    v15 = 0;
LABEL_19:
    v24 = a1[18];
    v25 = *((__int64 **)a1 + 7);
    if ( !v24 )
      goto LABEL_36;
    v26 = v24 - 1;
    v27 = v26 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v28 = &v25[2 * v27];
    v29 = *v28;
    if ( *v28 == a2 )
    {
LABEL_21:
      *((_DWORD *)v28 + 2) = v15;
      return v15;
    }
    v13 = 1;
    v34 = nullptr;
    if ( v29 != -4096 )
    {
      while ( 1 )
      {
        if ( v29 == -8192 && !v34 )
          v34 = v28;
        v14 = (unsigned int)(v13 + 1);
        v27 = v26 & (v13 + v27);
        v28 = &v25[2 * v27];
        v29 = *v28;
        if ( *v28 == a2 )
          goto LABEL_21;
        if ( v29 == -4096 )
          break;
        v13 = (unsigned int)v14;
      }
      if ( v34 )
        v28 = v34;
    }
    v12 = a1[16] + 1;
    if ( 4 * (int)v12 < 3 * v24 )
    {
      if ( v24 - a1[17] - (unsigned int)v12 > v24 >> 3 )
      {
        v35 = *v28;
        goto LABEL_33;
      }
      v58 = (v26 >> 1) | v26 | (((v26 >> 1) | v26) >> 2);
      v59 = (((v58 >> 4) | v58) >> 8) | (v58 >> 4) | v58;
      v60 = ((v59 >> 16) | v59) + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      a1[18] = v60;
      v61 = sub_22300B0(16LL * (unsigned int)v60, 8, 64, v12, v13, v14);
      *((_QWORD *)a1 + 7) = v61;
      if ( v25 )
      {
        v62 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v63 = (_QWORD *)v61;
        v64 = v62;
        v65 = 2LL * v24;
        v66 = (_QWORD *)(v61 + 16 * v62);
        if ( (_QWORD *)v61 != v66 )
        {
          do
          {
            *v63 = -4096;
            v63 += 2;
          }
          while ( v66 != v63 );
        }
        v67 = v25;
        v68 = v64 - 1;
        do
        {
          v69 = *v67;
          if ( *v67 != -8192 && v69 != -4096 )
          {
            if ( !v64 )
            {
              *(_QWORD *)&dword_0 = *v67;
              BUG();
            }
            v70 = v68 & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
            v71 = v61 + 16LL * v70;
            v72 = *(_QWORD *)v71;
            if ( *(_QWORD *)v71 != v69 && v72 != -4096 )
            {
              v94 = 1;
              v93 = 0;
              while ( 1 )
              {
                if ( !v93 )
                {
                  if ( v72 != -8192 )
                    v71 = 0;
                  v93 = v71;
                }
                v70 = v68 & (v94 + v70);
                v71 = v61 + 16LL * v70;
                v72 = *(_QWORD *)v71;
                if ( v69 == *(_QWORD *)v71 )
                  break;
                if ( v72 == -4096 )
                {
                  if ( v93 )
                    v71 = v93;
                  break;
                }
                ++v94;
              }
            }
            *(_QWORD *)v71 = v69;
            v73 = *((_DWORD *)v67 + 2);
            ++a1[16];
            *(_DWORD *)(v71 + 8) = v73;
          }
          v67 += 2;
        }
        while ( &v25[v65] != v67 );
        operator delete(v25, v65 * 8, 8);
        v61 = *((_QWORD *)a1 + 7);
        v74 = a1[18];
        LODWORD(v12) = a1[16] + 1;
      }
      else
      {
        v83 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v74 = v83;
        v84 = (_QWORD *)(v61 + 16 * v83);
        if ( (_QWORD *)v61 != v84 )
        {
          v85 = (_QWORD *)v61;
          do
          {
            *v85 = -4096;
            v85 += 2;
          }
          while ( v84 != v85 );
        }
        LODWORD(v12) = 1;
      }
      if ( v74 )
      {
        v75 = v74 - 1;
        v35 = a2;
        v76 = v75 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v61 + 16LL * v76);
        v77 = *v28;
        if ( *v28 == a2 )
          goto LABEL_33;
        v78 = 1;
        v79 = nullptr;
        if ( v77 != -4096 )
        {
          while ( 1 )
          {
            if ( v77 == -8192 && !v79 )
              v79 = v28;
            v76 = v75 & (v78 + v76);
            v28 = (__int64 *)(v61 + 16LL * v76);
            v77 = *v28;
            if ( *v28 == a2 )
              break;
            if ( v77 == -4096 )
            {
              if ( !v79 )
                goto LABEL_52;
              v35 = *v79;
              v28 = v79;
              goto LABEL_33;
            }
            ++v78;
          }
LABEL_73:
          v35 = a2;
LABEL_33:
          a1[16] = v12;
          if ( v35 != -4096 )
            --a1[17];
          goto LABEL_35;
        }
        goto LABEL_52;
      }
    }
    else
    {
LABEL_36:
      v36 = (((((((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
              | (2 * v24 - 1)
              | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 4)
            | (((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
            | (2 * v24 - 1)
            | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 8)
          | (((((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
            | (2 * v24 - 1)
            | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 4)
          | (((2 * v24 - 1) | ((unsigned __int64)(2 * v24 - 1) >> 1)) >> 2)
          | (2 * v24 - 1)
          | ((unsigned __int64)(2 * v24 - 1) >> 1);
      v37 = ((v36 >> 16) | v36) + 1;
      if ( (unsigned int)v37 < 0x40 )
        LODWORD(v37) = 64;
      a1[18] = v37;
      v38 = sub_22300B0(16LL * (unsigned int)v37, 8, 64, v12, v13, v14);
      *((_QWORD *)a1 + 7) = v38;
      if ( v25 )
      {
        v39 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v40 = (_QWORD *)v38;
        v41 = v39;
        v42 = 2LL * v24;
        v43 = &v25[v42];
        v44 = (_QWORD *)(v38 + 16 * v39);
        if ( (_QWORD *)v38 != v44 )
        {
          do
          {
            *v40 = -4096;
            v40 += 2;
          }
          while ( v44 != v40 );
        }
        v45 = v25;
        for ( i = v41 - 1; v43 != v45; v45 += 2 )
        {
          v47 = *v45;
          if ( *v45 != -4096 && v47 != -8192 )
          {
            if ( !v41 )
            {
              *(_QWORD *)&dword_0 = *v45;
              BUG();
            }
            v48 = i & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v49 = v38 + 16LL * v48;
            v50 = *(_QWORD *)v49;
            if ( *(_QWORD *)v49 != v47 && v50 != -4096 )
            {
              v92 = 1;
              v91 = 0;
              while ( 1 )
              {
                if ( v50 == -8192 && !v91 )
                  v91 = v49;
                v48 = i & (v92 + v48);
                v49 = v38 + 16LL * v48;
                v50 = *(_QWORD *)v49;
                if ( v47 == *(_QWORD *)v49 )
                  break;
                if ( v50 == -4096 )
                {
                  if ( v91 )
                    v49 = v91;
                  break;
                }
                ++v92;
              }
            }
            *(_QWORD *)v49 = v47;
            v51 = *((_DWORD *)v45 + 2);
            ++a1[16];
            *(_DWORD *)(v49 + 8) = v51;
          }
        }
        operator delete(v25, v42 * 8, 8);
        v38 = *((_QWORD *)a1 + 7);
        v52 = a1[18];
        LODWORD(v12) = a1[16] + 1;
      }
      else
      {
        v80 = a1[18];
        *((_QWORD *)a1 + 8) = 0;
        v52 = v80;
        v81 = (_QWORD *)(v38 + 16 * v80);
        if ( (_QWORD *)v38 != v81 )
        {
          v82 = (_QWORD *)v38;
          do
          {
            *v82 = -4096;
            v82 += 2;
          }
          while ( v81 != v82 );
        }
        LODWORD(v12) = 1;
      }
      if ( v52 )
      {
        v53 = v52 - 1;
        v35 = a2;
        v54 = (v52 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v28 = (__int64 *)(v38 + 16LL * v54);
        v55 = *v28;
        if ( *v28 == a2 )
          goto LABEL_33;
        v56 = 1;
        v57 = nullptr;
        if ( v55 != -4096 )
        {
          while ( 1 )
          {
            if ( !v57 && v55 == -8192 )
              v57 = v28;
            v54 = v53 & (v56 + v54);
            v28 = (__int64 *)(v38 + 16LL * v54);
            v55 = *v28;
            if ( *v28 == a2 )
              goto LABEL_73;
            if ( v55 == -4096 )
            {
              if ( !v57 )
                break;
              v35 = *v57;
              v28 = v57;
              goto LABEL_33;
            }
            ++v56;
          }
        }
LABEL_52:
        a1[16] = v12;
LABEL_35:
        *v28 = a2;
        *((_DWORD *)v28 + 2) = 0;
        goto LABEL_21;
      }
    }
    ++a1[16];
    BUG();
  }
  return *(unsigned int *)(v10 + 8);
}
