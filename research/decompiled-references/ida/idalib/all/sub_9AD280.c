void __fastcall sub_9AD280(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned int v16; // ecx
  __int64 *v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // r15
  _QWORD *v20; // rdx
  _QWORD *v21; // rsi
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r11
  int v25; // esi
  int v26; // r10d
  __int64 v27; // r8
  __int64 v28; // rdx
  _QWORD *v29; // r15
  __int16 v30; // r14
  __int64 v31; // rcx
  unsigned int v32; // edi
  _QWORD *v33; // rsi
  __int64 v34; // rax
  int v35; // esi
  int v36; // r9d
  __int64 v37; // r10
  int v38; // eax
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // r10
  _QWORD *v44; // r8
  __int64 v45; // rdi
  _QWORD *j; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // esi
  _QWORD *v50; // rcx
  __int64 v51; // r9
  __m128i v52; // xmm0
  __int64 v53; // rdx
  __int64 v54; // r10
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // ecx
  _QWORD *v60; // r10
  _QWORD *i; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  unsigned int v64; // edi
  _QWORD *v65; // rsi
  __int64 v66; // r9
  __m128i v67; // xmm3
  __int64 v68; // rdx
  __int64 v69; // r10
  _QWORD *v70; // rdi
  __int64 v71; // r15
  __int64 v72; // r15
  _QWORD *v73; // r10
  __int64 v74; // [rsp+8h] [rbp-90h]
  int v75; // [rsp+14h] [rbp-84h]
  unsigned int v76; // [rsp+18h] [rbp-80h]
  int v77; // [rsp+18h] [rbp-80h]
  __int64 v78; // [rsp+18h] [rbp-80h]
  __int64 v79; // [rsp+18h] [rbp-80h]
  unsigned int v80; // [rsp+18h] [rbp-80h]
  __int64 v81; // [rsp+18h] [rbp-80h]
  int v82; // [rsp+18h] [rbp-80h]
  int v83; // [rsp+18h] [rbp-80h]
  int v84; // [rsp+18h] [rbp-80h]
  __int64 v85; // [rsp+20h] [rbp-78h]
  unsigned __int64 v86; // [rsp+20h] [rbp-78h]
  int v87; // [rsp+20h] [rbp-78h]
  unsigned int v88; // [rsp+20h] [rbp-78h]
  int v89; // [rsp+28h] [rbp-70h]
  int v90; // [rsp+28h] [rbp-70h]
  unsigned __int64 v91; // [rsp+28h] [rbp-70h]
  unsigned int v92; // [rsp+30h] [rbp-68h]
  int v93; // [rsp+30h] [rbp-68h]
  _QWORD *v94; // [rsp+30h] [rbp-68h]
  int v95; // [rsp+38h] [rbp-60h]
  _QWORD *v96; // [rsp+38h] [rbp-60h]
  int v97; // [rsp+40h] [rbp-58h]
  __m128 v98[4]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  if ( (*(_WORD *)v4 & 0x1FF) == 0x3C && (*(_DWORD *)v4 & 0x80000) == 0 )
    v4 = *(_QWORD *)(v4 + 16);
  v5 = sub_BFB9F0(v4);
  v6 = *(unsigned int *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 16);
  if ( !(_DWORD)v6 )
    goto LABEL_26;
  v8 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  v9 = (__int64 *)(v7 + ((unsigned __int64)v8 << 6));
  v10 = *v9;
  if ( v5 != *v9 )
  {
    v25 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v26 = v25 + 1;
        v8 = (v6 - 1) & (v25 + v8);
        v9 = (__int64 *)(v7 + ((unsigned __int64)v8 << 6));
        v27 = *v9;
        if ( v5 == *v9 )
          goto LABEL_6;
        v25 = v26;
      }
      while ( v27 != -4096 );
    }
LABEL_26:
    sub_9AC330(
      v98,
      (_QWORD *)(v7 + ((unsigned __int64)(unsigned int)v6 << 6)),
      (_QWORD *)(v7 + ((unsigned __int64)(unsigned int)v6 << 6)),
      a1 + 16,
      1);
    v11 = v98[0].m128_u64[0];
    goto LABEL_7;
  }
LABEL_6:
  sub_9AC330(v98, v9, (_QWORD *)((v6 << 6) + v7), a1 + 16, 1);
  v11 = v98[0].m128_u64[0];
LABEL_7:
  v12 = *(_QWORD *)(a2 + 24);
  if ( (*(_WORD *)v12 & 0x1FF) == 0x3C && (*(_DWORD *)v12 & 0x80000) == 0 )
  {
    v13 = sub_BFB9F0(*(_QWORD *)(v12 + 16));
    v14 = *(unsigned int *)(a1 + 32);
    v15 = *(_QWORD *)(a1 + 16);
    if ( !(_DWORD)v14 )
      goto LABEL_18;
  }
  else
  {
    v13 = sub_BFB9F0(v12);
    v14 = *(unsigned int *)(a1 + 32);
    v15 = *(_QWORD *)(a1 + 16);
    if ( !(_DWORD)v14 )
      goto LABEL_18;
  }
  v16 = (v14 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
  v17 = (__int64 *)(v15 + ((unsigned __int64)v16 << 6));
  v18 = *v17;
  if ( v13 != *v17 )
  {
    v35 = 1;
    if ( v18 != -4096 )
    {
      do
      {
        v36 = v35 + 1;
        v16 = (v14 - 1) & (v16 + v35);
        v17 = (__int64 *)(v15 + ((unsigned __int64)v16 << 6));
        v37 = *v17;
        if ( v13 == *v17 )
          goto LABEL_11;
        v35 = v36;
      }
      while ( v37 != -4096 );
    }
LABEL_18:
    sub_9AC330(
      v98,
      (_QWORD *)(v15 + ((unsigned __int64)(unsigned int)v14 << 6)),
      (_QWORD *)(v15 + ((unsigned __int64)(unsigned int)v14 << 6)),
      a1 + 16,
      1);
    v19 = v98[0].m128_u64[0];
    goto LABEL_12;
  }
LABEL_11:
  sub_9AC330(v98, v17, (_QWORD *)(v15 + (v14 << 6)), a1 + 16, 1);
  v19 = v98[0].m128_u64[0];
LABEL_12:
  v20 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9AC330(v98, v20, v20, a1 + 16, 1);
  v21 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  if ( v98[0].m128_u64[0] != v11 && *(_DWORD *)(v11 + 8) == 2 )
  {
    v74 = *(_QWORD *)(v11 + 16);
    v75 = *(_DWORD *)(v11 + 24);
    sub_9AC330(
      v98,
      v21,
      (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6)),
      a1 + 16,
      1);
    if ( v98[0].m128_u64[0] == v19 || *(_DWORD *)(v19 + 8) != 2 )
    {
      v23 = 0;
      v24 = 0;
      if ( !v74 )
        return;
      goto LABEL_29;
    }
LABEL_28:
    v24 = *(_QWORD *)(v19 + 16);
    v23 = *(unsigned int *)(v19 + 24);
    if ( !(v24 | v74) )
      return;
LABEL_29:
    v28 = *(unsigned int *)(a1 + 32);
    v29 = *(_QWORD **)(a1 + 16);
    v30 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( !(_DWORD)v28 )
      goto LABEL_43;
    v22 = (unsigned int)(v28 - 1);
    v31 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
    v32 = v22 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v33 = &v29[8 * (unsigned __int64)v32];
    v34 = *v33;
    if ( a2 == *v33 )
    {
LABEL_31:
      sub_9AC330(v98, v33, &v29[8 * v28], a1 + 16, 1);
      return;
    }
    if ( v34 != -4096 )
    {
      v83 = 1;
      v73 = nullptr;
      while ( 1 )
      {
        if ( !v73 && v34 == -8192 )
          v73 = v33;
        v32 = v22 & (v83 + v32);
        v33 = &v29[8 * (unsigned __int64)v32];
        v34 = *v33;
        if ( a2 == *v33 )
          goto LABEL_31;
        if ( v34 == -4096 )
          break;
        ++v83;
      }
      v31 = (unsigned int)v31;
      if ( v73 )
        v33 = v73;
    }
    v38 = *(_DWORD *)(a1 + 24) + 1;
    if ( 4 * v38 < (unsigned int)(3 * v28) )
    {
      if ( (int)v28 - *(_DWORD *)(a1 + 28) - v38 > (unsigned int)v28 >> 3 )
      {
LABEL_39:
        v39 = *v33;
        goto LABEL_40;
      }
      v92 = *(_DWORD *)(a1 + 32);
      v87 = v23;
      v79 = v24;
      v55 = (((v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2)) >> 4) | (v22 >> 1) | v22 | (((v22 >> 1) | v22) >> 2);
      v56 = v55 >> 8;
      v57 = (((v56 | v55) >> 16) | v56 | v55) + 1;
      if ( (unsigned int)v57 < 0x40 )
        LODWORD(v57) = 64;
      *(_DWORD *)(a1 + 32) = v57;
      v58 = (_QWORD *)sub_22300B0((unsigned __int64)(unsigned int)v57 << 6, 8, v28, v31, v56, v23);
      v59 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
      v60 = v58;
      *(_QWORD *)(a1 + 16) = v58;
      v24 = v79;
      LODWORD(v23) = v87;
      if ( v29 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v91 = (unsigned __int64)v92 << 6;
        v80 = *(_DWORD *)(a1 + 32);
        for ( i = &v58[8 * (unsigned __int64)v80]; i != v58; v58 += 8 )
          *v58 = -4096;
        v93 = v87;
        v62 = v29;
        v88 = v80 - 1;
        do
        {
          v63 = *v62;
          if ( *v62 != -8192 && v63 != -4096 )
          {
            if ( !v80 )
            {
              *(_QWORD *)&dword_0 = *v62;
              BUG();
            }
            v64 = v88 & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
            v65 = &v60[8 * (unsigned __int64)v64];
            v66 = *v65;
            if ( *v65 != v63 && v66 != -4096 )
            {
              v97 = 1;
              v96 = nullptr;
              while ( 1 )
              {
                if ( !v96 )
                {
                  if ( v66 != -8192 )
                    v65 = nullptr;
                  v96 = v65;
                }
                v64 = v88 & (v97 + v64);
                ++v97;
                v65 = &v60[8 * (unsigned __int64)v64];
                v66 = *v65;
                if ( v63 == *v65 )
                  break;
                if ( v66 == -4096 )
                {
                  if ( v96 )
                    v65 = v96;
                  break;
                }
              }
            }
            v67 = _mm_loadu_si128((const __m128i *)(v62 + 1));
            *v65 = v63;
            *(__m128i *)(v65 + 1) = v67;
            *(__m128i *)(v65 + 3) = _mm_loadu_si128((const __m128i *)(v62 + 3));
            *(__m128i *)(v65 + 5) = _mm_loadu_si128((const __m128i *)(v62 + 5));
            v68 = v62[7];
            ++*(_DWORD *)(a1 + 24);
            v65[7] = v68;
          }
          v62 += 8;
        }
        while ( (_QWORD *)((char *)v29 + v91) != v62 );
        v81 = v24;
        operator delete(v29, v91, 8);
        v29 = *(_QWORD **)(a1 + 16);
        v28 = *(unsigned int *)(a1 + 32);
        v24 = v81;
        LODWORD(v23) = v93;
        v59 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
        v38 = *(_DWORD *)(a1 + 24) + 1;
      }
      else
      {
        v72 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v28 = v72;
        v29 = &v58[8 * v72];
        if ( v58 != v29 )
        {
          do
          {
            *v58 = -4096;
            v58 += 8;
          }
          while ( v29 != v58 );
          v29 = v60;
        }
        v38 = 1;
      }
      if ( (_DWORD)v28 )
      {
        v69 = ((_DWORD)v28 - 1) & v59;
        v33 = &v29[8 * v69];
        v39 = *v33;
        if ( a2 == *v33 )
          goto LABEL_40;
        if ( v39 != -4096 )
        {
          v82 = 1;
          v70 = &v29[8 * v69];
          v33 = nullptr;
          while ( 1 )
          {
            if ( v39 == -8192 && !v33 )
              v33 = v70;
            LODWORD(v69) = (v28 - 1) & (v82 + v69);
            v70 = &v29[8 * (unsigned __int64)(unsigned int)v69];
            v39 = *v70;
            if ( a2 == *v70 )
              break;
            if ( v39 == -4096 )
              goto LABEL_122;
            ++v82;
          }
LABEL_82:
          v33 = v70;
LABEL_40:
          *(_DWORD *)(a1 + 24) = v38;
          if ( v39 != -4096 )
            --*(_DWORD *)(a1 + 28);
          goto LABEL_42;
        }
        goto LABEL_60;
      }
    }
    else
    {
LABEL_43:
      v89 = v23;
      v85 = v24;
      v76 = *(_DWORD *)(a1 + 32);
      v40 = (((((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v28 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v28 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v28 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v28 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1);
      v41 = ((v40 >> 16) | v40) + 1;
      if ( (unsigned int)v41 < 0x40 )
        LODWORD(v41) = 64;
      *(_DWORD *)(a1 + 32) = v41;
      v42 = (_QWORD *)sub_22300B0((unsigned __int64)(unsigned int)v41 << 6, 8, v28, 64, v22, v23);
      v24 = v85;
      v43 = v42;
      *(_QWORD *)(a1 + 16) = v42;
      LODWORD(v23) = v89;
      if ( v29 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        v86 = (unsigned __int64)v76 << 6;
        v44 = (_QWORD *)((char *)v29 + v86);
        v45 = *(unsigned int *)(a1 + 32);
        for ( j = &v42[8 * v45]; j != v42; v42 += 8 )
          *v42 = -4096;
        v47 = v29;
        v77 = v45 - 1;
        if ( v29 != v44 )
        {
          do
          {
            v48 = *v47;
            if ( *v47 != -4096 && v48 != -8192 )
            {
              if ( !(_DWORD)v45 )
              {
                *(_QWORD *)&dword_0 = *v47;
                BUG();
              }
              v49 = v77 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
              v50 = &v43[8 * (unsigned __int64)v49];
              v51 = *v50;
              if ( *v50 != v48 && v51 != -4096 )
              {
                v95 = 1;
                v94 = nullptr;
                while ( 1 )
                {
                  if ( v51 == -8192 )
                  {
                    if ( v94 )
                      v50 = v94;
                    v94 = v50;
                  }
                  v49 = v77 & (v95 + v49);
                  ++v95;
                  v50 = &v43[8 * (unsigned __int64)v49];
                  v51 = *v50;
                  if ( v48 == *v50 )
                    break;
                  if ( v51 == -4096 )
                  {
                    if ( v94 )
                      v50 = v94;
                    break;
                  }
                }
              }
              v52 = _mm_loadu_si128((const __m128i *)(v47 + 1));
              *v50 = v48;
              *(__m128i *)(v50 + 1) = v52;
              *(__m128i *)(v50 + 3) = _mm_loadu_si128((const __m128i *)(v47 + 3));
              *(__m128i *)(v50 + 5) = _mm_loadu_si128((const __m128i *)(v47 + 5));
              v53 = v47[7];
              ++*(_DWORD *)(a1 + 24);
              v50[7] = v53;
            }
            v47 += 8;
          }
          while ( v44 != v47 );
          LODWORD(v23) = v89;
        }
        v90 = v23;
        v78 = v24;
        operator delete(v29, v86, 8);
        v29 = *(_QWORD **)(a1 + 16);
        v28 = *(unsigned int *)(a1 + 32);
        v24 = v78;
        LODWORD(v23) = v90;
        v38 = *(_DWORD *)(a1 + 24) + 1;
      }
      else
      {
        v71 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v28 = v71;
        v29 = &v42[8 * v71];
        if ( v42 != v29 )
        {
          do
          {
            *v42 = -4096;
            v42 += 8;
          }
          while ( v29 != v42 );
          v29 = v43;
        }
        v38 = 1;
      }
      if ( (_DWORD)v28 )
      {
        v54 = ((_DWORD)v28 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v33 = &v29[8 * v54];
        v39 = *v33;
        if ( a2 == *v33 )
          goto LABEL_40;
        if ( v39 != -4096 )
        {
          v84 = 1;
          v70 = &v29[8 * v54];
          v33 = nullptr;
          while ( 1 )
          {
            if ( v39 == -8192 && !v33 )
              v33 = v70;
            LODWORD(v54) = (v28 - 1) & (v84 + v54);
            v70 = &v29[8 * (unsigned __int64)(unsigned int)v54];
            v39 = *v70;
            if ( a2 == *v70 )
              goto LABEL_82;
            if ( v39 == -4096 )
            {
LABEL_122:
              if ( v33 )
                goto LABEL_39;
              v33 = v70;
              break;
            }
            ++v84;
          }
        }
LABEL_60:
        *(_DWORD *)(a1 + 24) = v38;
LABEL_42:
        *v33 = a2;
        *((_DWORD *)v33 + 2) = 3;
        *((_DWORD *)v33 + 6) = (_BYTE)v30 == 20;
        v33[2] = a2;
        v33[4] = v74;
        v33[6] = v24;
        *((_DWORD *)v33 + 10) = v75;
        *((_DWORD *)v33 + 14) = v23;
        goto LABEL_31;
      }
    }
    ++*(_DWORD *)(a1 + 24);
    BUG();
  }
  sub_9AC330(
    v98,
    v21,
    (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6)),
    a1 + 16,
    1);
  if ( v98[0].m128_u64[0] != v19 && *(_DWORD *)(v19 + 8) == 2 )
  {
    v75 = 0;
    v74 = 0;
    goto LABEL_28;
  }
}
