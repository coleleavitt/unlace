unsigned __int64 __fastcall sub_16CAC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r12
  _WORD *v7; // rbx
  _WORD *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // r13
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r12
  _QWORD *v32; // r14
  __int64 v33; // r13
  unsigned int v34; // edi
  __int64 *v35; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  _QWORD *v42; // r11
  __int64 v43; // r9
  _QWORD *i; // rdx
  _QWORD *v45; // rax
  int j; // r10d
  __int64 v47; // r14
  unsigned int v48; // esi
  __int64 *v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rsi
  int v52; // ecx
  unsigned int v53; // edi
  int v54; // r10d
  __int64 *v55; // r11
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rdx
  _QWORD *v62; // r10
  _QWORD *v63; // r8
  __int64 v64; // r9
  _QWORD *m; // rdx
  _QWORD *v66; // rax
  __int64 v67; // r11
  unsigned int v68; // esi
  _QWORD *v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  int v72; // ecx
  unsigned int v73; // r14d
  int v74; // r9d
  int v75; // edi
  __int64 v76; // rdx
  _QWORD *k; // rdx
  __int64 v78; // rdx
  _QWORD *n; // rdx
  __int64 *v80; // r10
  int v81; // r9d
  int v82; // r11d
  _WORD *v83; // [rsp+0h] [rbp-88h]
  __int64 v85; // [rsp+20h] [rbp-68h] BYREF
  __int64 v86; // [rsp+28h] [rbp-60h]
  __int64 v87; // [rsp+30h] [rbp-58h]
  _QWORD *v88; // [rsp+38h] [rbp-50h]
  _QWORD *v89; // [rsp+40h] [rbp-48h]
  _QWORD *v90; // [rsp+48h] [rbp-40h]

  v6 = a2;
  v85 = a4;
  v7 = sub_BFA620((_WORD *)a1);
  v8 = sub_BFA620((_WORD *)a1);
  v12 = *(unsigned int *)(a1 + 4);
  v83 = &v8[4 * v12];
  if ( v83 != v7 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)v7;
      v16 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v7 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v16 + 8) & 0xF) != 0 )
        v16 = sub_F64F00(**(_QWORD **)(*(_QWORD *)v7 + 16LL), a2, v12, v9, v10);
      v17 = (char *)sub_F63270(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL), a2, v12, v9, v10, v11);
      v22 = v17;
      if ( (*(_BYTE *)(v15 + 12) & 1) != 0 )
      {
        a2 = (__int64)v17;
        v85 = 0;
        v13 = *(_QWORD *)(sub_EDE580(a5, v17, v18, v19, v20, v21)[9] + 8LL);
        if ( a3 > v13 )
          a3 = v13;
        goto LABEL_5;
      }
      v23 = (char *)sub_F63270(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), a2, v18, v19, v20, v21);
      v28 = sub_EDE580(a5, v23, v24, v25, v26, v27);
      v31 = *((_QWORD *)v22 + 16);
      v32 = v28;
      if ( v31
        || (sub_7052B0((__int64 *)(*((_QWORD *)v22 + 13) + 96LL), *((_QWORD *)v22 + 13), v29, v30, v10, v11),
            (v31 = *((_QWORD *)v22 + 16)) != 0) )
      {
        v33 = v32[9];
        v31 = *(_QWORD *)(v31 + 88);
        v12 = *(unsigned int *)(v33 + 80);
        v9 = *(_QWORD *)(v33 + 64);
        if ( !(_DWORD)v12 )
          goto LABEL_18;
      }
      else
      {
        v33 = v32[9];
        v12 = *(unsigned int *)(v33 + 80);
        v9 = *(_QWORD *)(v33 + 64);
        if ( !(_DWORD)v12 )
          goto LABEL_18;
      }
      v10 = (unsigned int)(v12 - 1);
      v34 = v10 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
      v35 = (__int64 *)(v9 + 16LL * v34);
      a2 = *v35;
      if ( v31 != *v35 )
        break;
LABEL_13:
      v85 += v35[1];
LABEL_5:
      v14 = **(_QWORD **)(v15 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(*(_QWORD *)v14 + 8LL) & 0xF) != 0 )
      {
        v7 += 4;
        v6 = sub_F64F00(**(_QWORD **)(v15 + 16), a2, v12, v9, v10) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v7 == v83 )
          return _mm_loadh_ps((const double *)&v85).m128_u64[0];
      }
      else
      {
        v6 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0LL;
        v7 += 4;
        if ( v7 == v83 )
          return _mm_loadh_ps((const double *)&v85).m128_u64[0];
      }
    }
    v54 = 1;
    v55 = nullptr;
    if ( a2 != -4096 )
    {
      while ( 1 )
      {
        if ( a2 == -8192 && !v55 )
          v55 = v35;
        v11 = (unsigned int)(v54 + 1);
        v34 = v10 & (v54 + v34);
        v35 = (__int64 *)(v9 + 16LL * v34);
        a2 = *v35;
        if ( v31 == *v35 )
          goto LABEL_13;
        if ( a2 == -4096 )
          break;
        ++v54;
      }
      if ( v55 )
        v35 = v55;
    }
    a2 = (unsigned int)(*(_DWORD *)(v33 + 72) + 1);
    v11 = (unsigned int)(4 * a2);
    if ( (unsigned int)v11 >= 3 * (int)v12 )
    {
LABEL_18:
      v87 = v9;
      LODWORD(v86) = v12;
      v37 = (((((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v12 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v12 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v12 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v12 - 1) | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v12 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v12 - 1) >> 1);
      v38 = ((v37 >> 16) | v37) + 1;
      if ( (unsigned int)v38 < 0x40 )
        LODWORD(v38) = 64;
      *(_DWORD *)(v33 + 80) = v38;
      v39 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v38, 8, v12, 64, v10, v11);
      v40 = (_QWORD *)v87;
      v41 = (unsigned int)v86;
      v10 = (unsigned __int64)v39;
      *(_QWORD *)(v33 + 64) = v39;
      if ( v40 )
      {
        *(_QWORD *)(v33 + 72) = 0;
        v86 = 16 * v41;
        v42 = &v40[2 * v41];
        v43 = *(unsigned int *)(v33 + 80);
        for ( i = &v39[2 * v43]; i != v39; v39 += 2 )
          *v39 = -4096;
        v45 = v40;
        for ( j = v43 - 1; v42 != v45; v45 += 2 )
        {
          v47 = *v45;
          if ( *v45 != -4096 && v47 != -8192 )
          {
            if ( !(_DWORD)v43 )
            {
              *(_QWORD *)&dword_0 = *v45;
              BUG();
            }
            v48 = j & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v49 = (__int64 *)(v10 + 16LL * v48);
            v50 = *v49;
            if ( *v49 != v47 && v50 != -4096 )
            {
              LODWORD(v88) = 1;
              v87 = 0;
              v89 = v45;
              while ( 1 )
              {
                if ( v50 == -8192 )
                {
                  if ( v87 )
                    v49 = (__int64 *)v87;
                  v87 = (__int64)v49;
                }
                v48 = j & ((_DWORD)v88 + v48);
                v49 = (__int64 *)(v10 + 16LL * v48);
                v50 = *v49;
                if ( v47 == *v49 )
                {
                  v45 = v89;
                  goto LABEL_28;
                }
                if ( v50 == -4096 )
                  break;
                LODWORD(v88) = (_DWORD)v88 + 1;
              }
              v45 = v89;
              if ( v87 )
                v49 = (__int64 *)v87;
            }
LABEL_28:
            v51 = v45[1];
            *v49 = v47;
            v49[1] = v51;
            ++*(_DWORD *)(v33 + 72);
          }
        }
        operator delete(v40, v86, 8);
        v10 = *(_QWORD *)(v33 + 64);
        v52 = *(_DWORD *)(v33 + 80);
        a2 = (unsigned int)(*(_DWORD *)(v33 + 72) + 1);
      }
      else
      {
        v76 = *(unsigned int *)(v33 + 80);
        *(_QWORD *)(v33 + 72) = 0;
        v52 = v76;
        for ( k = &v39[2 * v76]; k != v39; v39 += 2 )
          *v39 = -4096;
        a2 = 1;
      }
      if ( !v52 )
        goto LABEL_119;
      v9 = (unsigned int)(v52 - 1);
      v53 = v9 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
      v35 = (__int64 *)(v10 + 16LL * v53);
      v12 = *v35;
      if ( v31 == *v35 )
        goto LABEL_39;
      if ( v12 != -4096 )
      {
        v80 = (__int64 *)(v10 + 16LL * ((unsigned int)v9 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4))));
        v81 = 1;
        v35 = nullptr;
        while ( 1 )
        {
          if ( v12 == -8192 && !v35 )
            v35 = v80;
          v82 = v81 + 1;
          v11 = v53 + v81;
          v53 = v9 & v11;
          v80 = (__int64 *)(v10 + 16LL * ((unsigned int)v9 & (unsigned int)v11));
          v12 = *v80;
          if ( v31 == *v80 )
          {
            v35 = (__int64 *)(v10 + 16LL * ((unsigned int)v9 & (unsigned int)v11));
            goto LABEL_39;
          }
          if ( v12 == -4096 )
            break;
          v81 = v82;
        }
        if ( v35 )
          goto LABEL_38;
        v35 = (__int64 *)(v10 + 16LL * ((unsigned int)v9 & (unsigned int)v11));
      }
    }
    else
    {
      v11 = (unsigned int)v12 >> 3;
      if ( (int)v12 - *(_DWORD *)(v33 + 76) - (int)a2 > (unsigned int)v11 )
      {
LABEL_38:
        v12 = *v35;
LABEL_39:
        *(_DWORD *)(v33 + 72) = a2;
        if ( v12 != -4096 )
          --*(_DWORD *)(v33 + 76);
        goto LABEL_41;
      }
      v86 = v9;
      LODWORD(v87) = v12;
      v56 = (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2);
      v57 = v56 >> 4;
      v58 = (((((v57 | v56) >> 8) | v57 | v56) >> 16) | ((v57 | v56) >> 8) | v57 | v56) + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(v33 + 80) = v58;
      v59 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v58, 8, v12, 64, v57, v11);
      v60 = (_QWORD *)v86;
      v61 = (unsigned int)v87;
      v62 = v59;
      *(_QWORD *)(v33 + 64) = v59;
      if ( v60 )
      {
        *(_QWORD *)(v33 + 72) = 0;
        v87 = 16 * v61;
        v63 = &v60[2 * v61];
        v64 = *(unsigned int *)(v33 + 80);
        for ( m = &v59[2 * v64]; m != v59; v59 += 2 )
          *v59 = -4096;
        v66 = v60;
        LODWORD(v86) = v64 - 1;
        do
        {
          v67 = *v66;
          if ( *v66 != -8192 && v67 != -4096 )
          {
            if ( !(_DWORD)v64 )
            {
              *(_QWORD *)&dword_0 = *v66;
              BUG();
            }
            v68 = v86 & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
            v69 = &v62[2 * v68];
            v70 = *v69;
            if ( v67 != *v69 && v70 != -4096 )
            {
              LODWORD(v89) = 1;
              v88 = nullptr;
              v90 = v66;
              do
              {
                if ( !v88 )
                {
                  if ( v70 != -8192 )
                    v69 = v88;
                  v88 = v69;
                }
                v68 = v86 & ((_DWORD)v89 + v68);
                LODWORD(v89) = (_DWORD)v89 + 1;
                v69 = &v62[2 * v68];
                v70 = *v69;
                if ( v67 == *v69 )
                {
                  v66 = v90;
                  goto LABEL_52;
                }
              }
              while ( v70 != -4096 );
              v66 = v90;
              if ( v88 )
                v69 = v88;
            }
LABEL_52:
            v71 = v66[1];
            *v69 = v67;
            v69[1] = v71;
            ++*(_DWORD *)(v33 + 72);
          }
          v66 += 2;
        }
        while ( v63 != v66 );
        operator delete(v60, v87, 8);
        v62 = *(_QWORD **)(v33 + 64);
        v72 = *(_DWORD *)(v33 + 80);
        a2 = (unsigned int)(*(_DWORD *)(v33 + 72) + 1);
      }
      else
      {
        v78 = *(unsigned int *)(v33 + 80);
        *(_QWORD *)(v33 + 72) = 0;
        v72 = v78;
        for ( n = &v59[2 * v78]; n != v59; v59 += 2 )
          *v59 = -4096;
        a2 = 1;
      }
      if ( !v72 )
      {
LABEL_119:
        ++*(_DWORD *)(v33 + 72);
        BUG();
      }
      v9 = (unsigned int)(v72 - 1);
      v73 = v9 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
      v35 = &v62[2 * v73];
      v12 = *v35;
      if ( v31 == *v35 )
        goto LABEL_39;
      if ( v12 != -4096 )
      {
        v10 = (unsigned __int64)&v62[2 * v73];
        v74 = 1;
        v35 = nullptr;
        while ( 1 )
        {
          if ( v12 == -8192 && !v35 )
            v35 = (__int64 *)v10;
          v75 = v74 + 1;
          v11 = (unsigned int)v9 & (v73 + v74);
          v73 = v11;
          v10 = (unsigned __int64)&v62[2 * (unsigned int)v11];
          v12 = *(_QWORD *)v10;
          if ( v31 == *(_QWORD *)v10 )
          {
            v35 = &v62[2 * (unsigned int)v11];
            goto LABEL_39;
          }
          if ( v12 == -4096 )
            break;
          v74 = v75;
        }
        if ( v35 )
          goto LABEL_38;
        v35 = &v62[2 * (unsigned int)v11];
      }
    }
    *(_DWORD *)(v33 + 72) = a2;
LABEL_41:
    *v35 = v31;
    v35[1] = 0;
    goto LABEL_5;
  }
  return _mm_loadh_ps((const double *)&v85).m128_u64[0];
}
