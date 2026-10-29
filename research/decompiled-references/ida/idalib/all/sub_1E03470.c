__int64 __fastcall sub_1E03470(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 result; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  const __m128i *v23; // rcx
  __m128i *v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rcx
  int v27; // r13d
  unsigned int v28; // edi
  __int64 *v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // r13
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // r11d
  __int64 *v35; // r10
  int v36; // esi
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 *v42; // rcx
  _QWORD *v43; // r11
  __int64 v44; // r10
  __int64 *v45; // r9
  _QWORD *k; // rdx
  __int64 *m; // rax
  __int64 v48; // r14
  int v49; // edi
  int v50; // edi
  unsigned int v51; // esi
  _QWORD *v52; // rdx
  __int64 v53; // r8
  int v54; // esi
  int v55; // ecx
  int v56; // ecx
  unsigned int v57; // edi
  __int64 v58; // r8
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r8
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 *v63; // rcx
  _QWORD *v64; // r10
  _QWORD *i; // rdx
  __int64 *v66; // rax
  __int64 v67; // r11
  int v68; // edx
  int v69; // r8d
  unsigned int v70; // esi
  _QWORD *v71; // rdx
  __int64 v72; // rdi
  int v73; // esi
  int v74; // ecx
  int v75; // ecx
  unsigned int v76; // r14d
  __int64 v77; // rdi
  __int64 *v78; // r8
  int v79; // r9d
  int v80; // edx
  unsigned int v81; // r9d
  __int64 v82; // rdx
  _QWORD *n; // rdx
  __int64 v84; // rdx
  _QWORD *j; // rdx
  __int64 *v86; // r10
  int v87; // r9d
  int v88; // edx
  unsigned int v89; // r9d
  unsigned int v92; // [rsp+18h] [rbp-70h]
  __int64 *v93; // [rsp+18h] [rbp-70h]
  __int64 v94; // [rsp+18h] [rbp-70h]
  _QWORD *v95; // [rsp+18h] [rbp-70h]
  __int64 *v96; // [rsp+20h] [rbp-68h]
  unsigned int v97; // [rsp+20h] [rbp-68h]
  int v98; // [rsp+20h] [rbp-68h]
  _QWORD *v99; // [rsp+20h] [rbp-68h]
  int v100; // [rsp+28h] [rbp-60h]
  __int64 v101; // [rsp+30h] [rbp-58h] BYREF
  int v102; // [rsp+38h] [rbp-50h]
  int v103; // [rsp+3Ch] [rbp-4Ch]
  __int64 v104; // [rsp+40h] [rbp-48h]
  char v105; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  v5 = sub_B8E970(a3 + 72);
  result = (__int64)&v101;
  if ( !v5 )
    return result;
  do
  {
    while ( 1 )
    {
      result = *(_BYTE *)(v5 + 28) & 0x7F;
      if ( (unsigned int)(unsigned __int8)result - 40 > 6 || (_BYTE)result == 43 )
        goto LABEL_23;
      v7 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v5 + 40) & 7) != 0 )
        v7 = 0;
      v8 = a2 + 72;
      v9 = sub_B8E970(a2 + 72);
      if ( v9 )
        break;
LABEL_22:
      result = sub_B8E970(v8);
LABEL_23:
      v5 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v5 )
        return result;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *(_BYTE *)(v9 + 28) & 0x7F;
        if ( (unsigned int)(v11 - 40) > 6 || v11 != 46 && v11 != 40 )
          goto LABEL_12;
        v12 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
          v12 = *(_QWORD *)(v12 + 8);
        if ( !v12 )
          goto LABEL_12;
        v13 = *(_BYTE *)(sub_B8EAA0(v12) + 8) & 0x7F;
        if ( v13 > 0x12u )
          break;
        if ( ((1LL << v13) & 0x40182) != 0 )
          goto LABEL_9;
LABEL_12:
        v9 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v9 )
          goto LABEL_22;
      }
      if ( ((v13 + 94) & 0x7Fu) <= 5 )
        break;
      v9 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v9 )
        goto LABEL_22;
    }
LABEL_9:
    v10 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 40) & 7) != 0 )
      v10 = 0;
    if ( v7 != v10 )
      goto LABEL_12;
    sub_B8E970(v8);
    sub_1DC20B0(a4, v5, v9, v14);
    v17 = *(_QWORD *)(v5 + 48);
    v18 = *(_DWORD *)(v5 + 24);
    v101 = v9;
    v19 = *(unsigned int *)(v4 + 1332);
    v103 = 0;
    v104 = v17;
    v20 = *(unsigned int *)(v4 + 1328);
    v102 = v18;
    v21 = v20 + 1;
    v105 &= 0x80u;
    if ( v20 + 1 > v19 )
    {
      v31 = *(_QWORD *)(v4 + 1320);
      v32 = v4 + 1320;
      v33 = v4 + 1336;
      if ( v31 > (unsigned __int64)&v101 || (unsigned __int64)&v101 >= v31 + 32 * v20 )
      {
        sub_2237220(v32, v33, v21, 32);
        v22 = *(_QWORD *)(v4 + 1320);
        v23 = (const __m128i *)&v101;
        v20 = *(unsigned int *)(v4 + 1328);
      }
      else
      {
        sub_2237220(v32, v33, v21, 32);
        v22 = *(_QWORD *)(v4 + 1320);
        v20 = *(unsigned int *)(v4 + 1328);
        v23 = (const __m128i *)((char *)&v101 + v22 - v31);
      }
    }
    else
    {
      v22 = *(_QWORD *)(v4 + 1320);
      v23 = (const __m128i *)&v101;
    }
    v24 = (__m128i *)(v22 + 32 * v20);
    *v24 = _mm_loadu_si128(v23);
    v24[1] = _mm_loadu_si128(v23 + 1);
    v25 = *(unsigned int *)(v4 + 1304);
    v26 = *(__int64 **)(v4 + 1288);
    v27 = *(_DWORD *)(v4 + 1328) + 1;
    *(_DWORD *)(v4 + 1328) = v27;
    if ( (_DWORD)v25 )
    {
      v15 = (unsigned int)(v25 - 1);
      v28 = v15 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v29 = &v26[2 * v28];
      v30 = *v29;
      if ( *v29 == v9 )
        goto LABEL_29;
      v34 = 1;
      v35 = nullptr;
      if ( v30 != -4096 )
      {
        while ( 1 )
        {
          if ( v30 == -8192 && !v35 )
            v35 = v29;
          v28 = v15 & (v34 + v28);
          v29 = &v26[2 * v28];
          v30 = *v29;
          if ( *v29 == v9 )
            goto LABEL_29;
          if ( v30 == -4096 )
            break;
          ++v34;
        }
        if ( v35 )
          v29 = v35;
      }
      v36 = *(_DWORD *)(v4 + 1296) + 1;
      v16 = (unsigned int)(4 * v36);
      if ( (unsigned int)v16 < 3 * (int)v25 )
      {
        v37 = (unsigned int)v25 >> 3;
        if ( (int)v25 - *(_DWORD *)(v4 + 1300) - v36 > (unsigned int)v37 )
          goto LABEL_38;
        v97 = v25;
        v93 = v26;
        v59 = (v15 >> 1) | v15 | (((v15 >> 1) | v15) >> 2);
        v60 = v59 >> 4;
        v61 = (((((v60 | v59) >> 8) | v60 | v59) >> 16) | ((v60 | v59) >> 8) | v60 | v59) + 1;
        if ( (unsigned int)v61 < 0x40 )
          LODWORD(v61) = 64;
        *(_DWORD *)(v4 + 1304) = v61;
        v62 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v61, 8, v25, v26, v60, v37);
        v63 = v93;
        v64 = v62;
        *(_QWORD *)(v4 + 1288) = v62;
        if ( v93 )
        {
          *(_QWORD *)(v4 + 1296) = 0;
          v94 = 2LL * v97;
          for ( i = &v62[2 * *(unsigned int *)(v4 + 1304)]; i != v62; v62 += 2 )
            *v62 = -4096;
          v66 = v63;
          do
          {
            v67 = *v66;
            if ( *v66 != -4096 && v67 != -8192 )
            {
              v68 = *(_DWORD *)(v4 + 1304);
              if ( !v68 )
              {
                *(_QWORD *)&dword_0 = *v66;
                BUG();
              }
              v69 = v68 - 1;
              v70 = (v68 - 1) & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
              v71 = &v64[2 * v70];
              v72 = *v71;
              if ( *v71 != v67 && v72 != -4096 )
              {
                v100 = 1;
                v99 = nullptr;
                while ( 1 )
                {
                  if ( !v99 )
                  {
                    if ( v72 != -8192 )
                      v71 = nullptr;
                    v99 = v71;
                  }
                  v70 = v69 & (v100 + v70);
                  v71 = &v64[2 * v70];
                  v72 = *v71;
                  if ( v67 == *v71 )
                    break;
                  if ( v72 == -4096 )
                  {
                    if ( v99 )
                      v71 = v99;
                    break;
                  }
                  ++v100;
                }
              }
              v73 = *((_DWORD *)v66 + 2);
              *v71 = v67;
              *((_DWORD *)v71 + 2) = v73;
              ++*(_DWORD *)(v4 + 1296);
            }
            v66 += 2;
          }
          while ( &v63[v94] != v66 );
          operator delete(v63, v94 * 8, 8);
          v64 = *(_QWORD **)(v4 + 1288);
          v74 = *(_DWORD *)(v4 + 1304);
          v36 = *(_DWORD *)(v4 + 1296) + 1;
        }
        else
        {
          v84 = *(unsigned int *)(v4 + 1304);
          *(_QWORD *)(v4 + 1296) = 0;
          v74 = v84;
          for ( j = &v62[2 * v84]; j != v62; v62 += 2 )
            *v62 = -4096;
          v36 = 1;
        }
        if ( v74 )
        {
          v75 = v74 - 1;
          v38 = v9;
          v76 = v75 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
          v29 = &v64[2 * v76];
          v77 = *v29;
          if ( *v29 != v9 )
          {
            if ( v77 == -4096 )
              goto LABEL_58;
            v78 = &v64[2 * v76];
            v79 = 1;
            v29 = nullptr;
            while ( 1 )
            {
              if ( !v29 && v77 == -8192 )
                v29 = v78;
              v80 = v79 + 1;
              v81 = v75 & (v76 + v79);
              v76 = v81;
              v78 = &v64[2 * v81];
              v77 = *v78;
              if ( *v78 == v9 )
              {
                v38 = v9;
                v29 = &v64[2 * v81];
                goto LABEL_39;
              }
              if ( v77 == -4096 )
                break;
              v79 = v80;
            }
            if ( !v29 )
            {
              v29 = &v64[2 * v81];
              goto LABEL_58;
            }
LABEL_38:
            v38 = *v29;
          }
LABEL_39:
          *(_DWORD *)(v4 + 1296) = v36;
          if ( v38 != -4096 )
            --*(_DWORD *)(v4 + 1300);
          goto LABEL_41;
        }
LABEL_134:
        ++*(_DWORD *)(v4 + 1296);
        BUG();
      }
    }
    v96 = v26;
    v92 = v25;
    v39 = (((((((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v25 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v25 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v25 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v25 - 1) | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v25 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v25 - 1) >> 1);
    v40 = ((v39 >> 16) | v39) + 1;
    if ( (unsigned int)v40 < 0x40 )
      LODWORD(v40) = 64;
    *(_DWORD *)(v4 + 1304) = v40;
    v41 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v40, 8, v25, v26, v15, v16);
    v42 = v96;
    v43 = v41;
    *(_QWORD *)(v4 + 1288) = v41;
    if ( v96 )
    {
      *(_QWORD *)(v4 + 1296) = 0;
      v44 = 2LL * v92;
      v45 = &v96[v44];
      for ( k = &v41[2 * *(unsigned int *)(v4 + 1304)]; k != v41; v41 += 2 )
        *v41 = -4096;
      for ( m = v96; v45 != m; m += 2 )
      {
        v48 = *m;
        if ( *m != -8192 && v48 != -4096 )
        {
          v49 = *(_DWORD *)(v4 + 1304);
          if ( !v49 )
            sub_2EADCC();
          v50 = v49 - 1;
          v51 = v50 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
          v52 = &v43[2 * v51];
          v53 = *v52;
          if ( *v52 != v48 && v53 != -4096 )
          {
            v98 = 1;
            v95 = nullptr;
            while ( 1 )
            {
              if ( !v95 )
              {
                if ( v53 != -8192 )
                  v52 = nullptr;
                v95 = v52;
              }
              v51 = v50 & (v98 + v51);
              v52 = &v43[2 * v51];
              v53 = *v52;
              if ( v48 == *v52 )
                break;
              if ( v53 == -4096 )
              {
                if ( v95 )
                  v52 = v95;
                break;
              }
              ++v98;
            }
          }
          v54 = *((_DWORD *)m + 2);
          *v52 = v48;
          *((_DWORD *)v52 + 2) = v54;
          ++*(_DWORD *)(v4 + 1296);
        }
      }
      operator delete(v42, v44 * 8, 8);
      v43 = *(_QWORD **)(v4 + 1288);
      v55 = *(_DWORD *)(v4 + 1304);
      v36 = *(_DWORD *)(v4 + 1296) + 1;
    }
    else
    {
      v82 = *(unsigned int *)(v4 + 1304);
      *(_QWORD *)(v4 + 1296) = 0;
      v55 = v82;
      for ( n = &v41[2 * v82]; n != v41; v41 += 2 )
        *v41 = -4096;
      v36 = 1;
    }
    if ( !v55 )
      goto LABEL_134;
    v56 = v55 - 1;
    v38 = v9;
    v57 = v56 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
    v29 = &v43[2 * v57];
    v58 = *v29;
    if ( *v29 == v9 )
      goto LABEL_39;
    if ( v58 == -4096 )
      goto LABEL_58;
    v86 = &v43[2 * (v56 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)))];
    v87 = 1;
    v29 = nullptr;
    while ( 1 )
    {
      if ( !v29 && v58 == -8192 )
        v29 = v86;
      v88 = v87 + 1;
      v89 = v57 + v87;
      v57 = v56 & v89;
      v86 = &v43[2 * (v56 & v89)];
      v58 = *v86;
      if ( *v86 == v9 )
      {
        v38 = v9;
        v29 = &v43[2 * (v56 & v89)];
        goto LABEL_39;
      }
      if ( v58 == -4096 )
        break;
      v87 = v88;
    }
    if ( v29 )
      goto LABEL_38;
    v29 = &v43[2 * (v56 & v89)];
LABEL_58:
    *(_DWORD *)(v4 + 1296) = v36;
LABEL_41:
    *v29 = v9;
    *((_DWORD *)v29 + 2) = 0;
LABEL_29:
    result = (__int64)(v29 + 1);
    *(_DWORD *)result = v27;
    v5 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( v5 );
  return result;
}
