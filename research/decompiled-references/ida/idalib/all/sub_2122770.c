__int64 __fastcall sub_2122770(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  const char *v10; // rax
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r12
  __int64 (*v16)(); // rax
  __int64 v17; // rcx
  _QWORD *v18; // r14
  __int64 v19; // rdx
  unsigned int v20; // edi
  __int64 *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbx
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 *v29; // r10
  int v30; // r9d
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // r15
  _QWORD *v44; // r10
  _QWORD *v45; // rsi
  _QWORD *k; // rdx
  __int64 v47; // rsi
  int v48; // r9d
  int v49; // r9d
  unsigned int v50; // r8d
  __int64 v51; // rdi
  __int64 v52; // r11
  int v53; // esi
  int v54; // r8d
  unsigned int v55; // edi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // r11
  _QWORD *i; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  int v64; // esi
  int v65; // r9d
  unsigned int v66; // edi
  _QWORD *v67; // rsi
  __int64 v68; // r8
  int v69; // edx
  int v70; // edi
  unsigned int v71; // r15d
  __int64 *v72; // r8
  int v73; // r10d
  int v74; // r9d
  unsigned int v75; // r10d
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rsi
  __int64 v79; // rax
  __int32 v80; // r15d
  void *v81; // rdi
  int v82; // eax
  __int64 v83; // r14
  _QWORD *v84; // rdx
  __int64 v85; // r14
  __int64 *v86; // r9
  int v87; // r11d
  int v88; // r10d
  unsigned int v89; // r11d
  unsigned int v90; // [rsp+8h] [rbp-A0h]
  __int64 v91; // [rsp+8h] [rbp-A0h]
  __int64 v92; // [rsp+8h] [rbp-A0h]
  unsigned int v93; // [rsp+10h] [rbp-98h]
  int m; // [rsp+10h] [rbp-98h]
  _QWORD *v95; // [rsp+10h] [rbp-98h]
  int j; // [rsp+18h] [rbp-90h]
  __m128 v97; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v98[3]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v99; // [rsp+48h] [rbp-60h]
  __int128 v100; // [rsp+58h] [rbp-50h]
  __int64 v101; // [rsp+68h] [rbp-40h]

  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 152);
  if ( *(_DWORD *)(v9 + 312) != 4 || (v12 = *(_DWORD *)(v9 + 320)) == 0 || v12 == 6 )
  {
    v10 = ".seh_* directives are not supported on this target";
LABEL_3:
    v98[0] = v10;
    WORD4(v99) = 259;
    return sub_2100A30(v8, a2, (__int64)v98);
  }
  v13 = a1[13];
  if ( !v13 || *(_QWORD *)(v13 + 8) )
  {
    v10 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  v14 = *(_QWORD **)(v13 + 48);
  if ( v14 )
  {
    v15 = 1;
    v16 = *(__int64 (**)())(*a1 + 88LL);
    if ( v16 != sub_2119CA0 )
      v15 = ((__int64 (__fastcall *)(_QWORD *))v16)(a1);
    v17 = v13 + 128;
    v101 = 0;
    v18 = *(_QWORD **)(v13 + 128);
    v99 = 0;
    v100 = 0;
    v19 = *(unsigned int *)(v13 + 144);
    if ( !(_DWORD)v19 )
      goto LABEL_30;
    a5 = (unsigned int)(v19 - 1);
    v20 = a5 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
    v21 = &v18[2 * v20];
    v22 = *v21;
    if ( v15 == *v21 )
    {
LABEL_13:
      sub_2122610(&v97, v21, &v18[2 * v19], v17, 1);
      v23 = *(_QWORD *)(v13 + 152) + 72LL * *(unsigned int *)(v97.m128_u64[0] + 8);
      v24 = *(void **)(v23 + 8);
      *(_QWORD *)(v23 + 24) = 0;
      *(_OWORD *)(v23 + 8) = 0;
      if ( v24 )
        operator delete(v24);
      v25 = v101;
      *(_DWORD *)(v23 + 32) = 0;
      *(_QWORD *)(v23 + 56) = 0;
      *(_QWORD *)(v23 + 64) = v25;
      *(_OWORD *)(v23 + 40) = 0;
LABEL_16:
      a1[35] = v23 + 8;
      *(_QWORD *)(v23 + 40) = v15;
      result = a1[35];
      *(_QWORD *)(result + 56) = a2;
      return result;
    }
    v29 = nullptr;
    v30 = 1;
    if ( v22 != -4096 )
    {
      while ( 1 )
      {
        if ( !v29 && v22 == -8192 )
          v29 = v21;
        v20 = a5 & (v30 + v20);
        v21 = &v18[2 * v20];
        v22 = *v21;
        if ( v15 == *v21 )
          goto LABEL_13;
        if ( v22 == -4096 )
          break;
        ++v30;
      }
      if ( v29 )
        v21 = v29;
    }
    v31 = *(_DWORD *)(v13 + 136) + 1;
    a6 = (unsigned int)(4 * v31);
    if ( (unsigned int)a6 < 3 * (int)v19 )
    {
      v32 = (unsigned int)v19 >> 3;
      if ( (int)v19 - *(_DWORD *)(v13 + 140) - v31 > (unsigned int)v32 )
      {
LABEL_24:
        v33 = *v21;
        goto LABEL_25;
      }
      v93 = *(_DWORD *)(v13 + 144);
      v56 = (a5 >> 1) | a5 | (((a5 >> 1) | a5) >> 2);
      v57 = v56 >> 4;
      v58 = (((((v57 | v56) >> 8) | v57 | v56) >> 16) | ((v57 | v56) >> 8) | v57 | v56) + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(v13 + 144) = v58;
      v59 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v58, 8, v19, v17, v57, v32);
      v17 = v13 + 128;
      v60 = v59;
      *(_QWORD *)(v13 + 128) = v59;
      if ( v18 )
      {
        *(_QWORD *)(v13 + 136) = 0;
        v91 = 2LL * v93;
        for ( i = &v59[2 * *(unsigned int *)(v13 + 144)]; i != v59; v59 += 2 )
          *v59 = -4096;
        v62 = v18;
        do
        {
          v63 = *v62;
          if ( *v62 != -8192 && v63 != -4096 )
          {
            v64 = *(_DWORD *)(v13 + 144);
            if ( !v64 )
            {
              *(_QWORD *)&dword_0 = *v62;
              BUG();
            }
            v65 = v64 - 1;
            v66 = (v64 - 1) & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
            v67 = &v60[2 * v66];
            v68 = *v67;
            if ( v63 != *v67 && v68 != -4096 )
            {
              v95 = nullptr;
              for ( j = 1; ; ++j )
              {
                if ( !v95 )
                {
                  if ( v68 != -8192 )
                    v67 = nullptr;
                  v95 = v67;
                }
                v66 = v65 & (j + v66);
                v67 = &v60[2 * v66];
                v68 = *v67;
                if ( v63 == *v67 )
                  break;
                if ( v68 == -4096 )
                {
                  if ( v95 )
                    v67 = v95;
                  break;
                }
              }
            }
            *v67 = v63;
            *((_DWORD *)v67 + 2) = *((_DWORD *)v62 + 2);
            ++*(_DWORD *)(v13 + 136);
          }
          v62 += 2;
        }
        while ( &v18[v91] != v62 );
        operator delete(v18, v91 * 8, 8);
        v69 = *(_DWORD *)(v13 + 144);
        v18 = *(_QWORD **)(v13 + 128);
        v17 = v13 + 128;
        v31 = *(_DWORD *)(v13 + 136) + 1;
      }
      else
      {
        v85 = *(unsigned int *)(v13 + 144);
        *(_QWORD *)(v13 + 136) = 0;
        v69 = v85;
        v18 = &v59[2 * v85];
        if ( v59 != v18 )
        {
          do
          {
            *v59 = -4096;
            v59 += 2;
          }
          while ( v18 != v59 );
          v18 = v60;
        }
        v31 = 1;
      }
      if ( v69 )
      {
        v70 = v69 - 1;
        v71 = (v69 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v21 = &v18[2 * v71];
        v33 = *v21;
        if ( v15 != *v21 )
        {
          if ( v33 != -4096 )
          {
            v72 = &v18[2 * v71];
            v73 = 1;
            v21 = nullptr;
            while ( 1 )
            {
              if ( !v21 && v33 == -8192 )
                v21 = v72;
              v74 = v73 + 1;
              v75 = v70 & (v71 + v73);
              v71 = v75;
              v72 = &v18[2 * v75];
              v33 = *v72;
              if ( v15 == *v72 )
              {
                v21 = &v18[2 * v75];
                goto LABEL_25;
              }
              if ( v33 == -4096 )
                break;
              v73 = v74;
            }
            if ( v21 )
              goto LABEL_24;
            v21 = &v18[2 * v75];
          }
LABEL_46:
          *(_DWORD *)(v13 + 136) = v31;
LABEL_27:
          *v21 = v15;
          *((_DWORD *)v21 + 2) = 0;
          sub_2122610(&v97, v21, &v18[2 * *(unsigned int *)(v13 + 144)], v17, 1);
          v34 = *(_DWORD *)(v13 + 160);
          *(_DWORD *)(v97.m128_u64[0] + 8) = v34;
          if ( *(_DWORD *)(v13 + 164) <= v34 )
          {
            v76 = sub_2237400(v13 + 152, v13 + 168, 0, 72, &v97);
            v77 = v101;
            v37 = v76;
            v78 = v76;
            v79 = v76 + 72LL * *(unsigned int *)(v13 + 160);
            *(_QWORD *)v79 = v15;
            *(_QWORD *)(v79 + 8) = 0;
            *(_QWORD *)(v79 + 16) = 0;
            *(_QWORD *)(v79 + 24) = 0;
            *(_DWORD *)(v79 + 32) = 0;
            *(_QWORD *)(v79 + 56) = 0;
            *(_QWORD *)(v79 + 64) = v77;
            *(_OWORD *)(v79 + 40) = 0;
            sub_2122680(v13 + 152, v78);
            v80 = v97.m128_i32[0];
            v81 = *(void **)(v13 + 152);
            if ( (void *)(v13 + 168) != v81 )
              free(v81);
            v82 = *(_DWORD *)(v13 + 160);
            *(_QWORD *)(v13 + 152) = v37;
            *(_DWORD *)(v13 + 164) = v80;
            v38 = (unsigned int)(v82 + 1);
            *(_DWORD *)(v13 + 160) = v38;
          }
          else
          {
            v35 = *(_QWORD *)(v13 + 152) + 72LL * v34;
            v36 = v101;
            *(_QWORD *)v35 = v15;
            *(_QWORD *)(v35 + 64) = v36;
            *(_QWORD *)(v35 + 8) = 0;
            *(_QWORD *)(v35 + 16) = 0;
            *(_QWORD *)(v35 + 24) = 0;
            *(_OWORD *)(v35 + 40) = 0;
            *(_QWORD *)(v35 + 56) = 0;
            v37 = *(_QWORD *)(v13 + 152);
            *(_DWORD *)(v35 + 32) = 0;
            v38 = (unsigned int)(*(_DWORD *)(v13 + 160) + 1);
            *(_DWORD *)(v13 + 160) = v38;
          }
          v23 = v37 + 72 * v38 - 72;
          goto LABEL_16;
        }
        goto LABEL_25;
      }
    }
    else
    {
LABEL_30:
      v90 = *(_DWORD *)(v13 + 144);
      v39 = (((((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v19 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v19 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v19 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v19 - 1) | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v19 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v19 - 1) >> 1);
      v40 = ((v39 >> 16) | v39) + 1;
      if ( (unsigned int)v40 < 0x40 )
        LODWORD(v40) = 64;
      *(_DWORD *)(v13 + 144) = v40;
      v41 = sub_22300B0(16LL * (unsigned int)v40, 8, v19, v17, a5, a6);
      v17 = v13 + 128;
      *(_QWORD *)(v13 + 128) = v41;
      if ( v18 )
      {
        v42 = (_QWORD *)v41;
        *(_QWORD *)(v13 + 136) = 0;
        v43 = 2LL * v90;
        v44 = &v18[v43];
        v45 = (_QWORD *)(v41 + 16LL * *(unsigned int *)(v13 + 144));
        if ( (_QWORD *)v41 != v45 )
        {
          do
          {
            *v42 = -4096;
            v42 += 2;
          }
          while ( v45 != v42 );
        }
        for ( k = v18; v44 != k; k += 2 )
        {
          v47 = *k;
          if ( *k != -4096 && v47 != -8192 )
          {
            v48 = *(_DWORD *)(v13 + 144);
            if ( !v48 )
            {
              *(_QWORD *)&dword_0 = *k;
              BUG();
            }
            v49 = v48 - 1;
            v50 = v49 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v51 = v41 + 16LL * v50;
            v52 = *(_QWORD *)v51;
            if ( v47 != *(_QWORD *)v51 && v52 != -4096 )
            {
              v92 = 0;
              for ( m = 1; ; ++m )
              {
                if ( v52 == -8192 )
                {
                  if ( v92 )
                    v51 = v92;
                  v92 = v51;
                }
                v50 = v49 & (m + v50);
                v51 = v41 + 16LL * v50;
                v52 = *(_QWORD *)v51;
                if ( v47 == *(_QWORD *)v51 )
                  break;
                if ( v52 == -4096 )
                {
                  if ( v92 )
                    v51 = v92;
                  break;
                }
              }
            }
            *(_QWORD *)v51 = v47;
            *(_DWORD *)(v51 + 8) = *((_DWORD *)k + 2);
            ++*(_DWORD *)(v13 + 136);
          }
        }
        operator delete(v18, v43 * 8, 8);
        v53 = *(_DWORD *)(v13 + 144);
        v18 = *(_QWORD **)(v13 + 128);
        v17 = v13 + 128;
        v31 = *(_DWORD *)(v13 + 136) + 1;
      }
      else
      {
        v83 = *(unsigned int *)(v13 + 144);
        *(_QWORD *)(v13 + 136) = 0;
        v53 = v83;
        v18 = (_QWORD *)(v41 + 16 * v83);
        if ( (_QWORD *)v41 != v18 )
        {
          v84 = (_QWORD *)v41;
          do
          {
            *v84 = -4096;
            v84 += 2;
          }
          while ( v18 != v84 );
          v18 = (_QWORD *)v41;
        }
        v31 = 1;
      }
      if ( v53 )
      {
        v54 = v53 - 1;
        v55 = (v53 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v21 = &v18[2 * v55];
        v33 = *v21;
        if ( v15 != *v21 )
        {
          if ( v33 != -4096 )
          {
            v86 = &v18[2 * (v54 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4)))];
            v87 = 1;
            v21 = nullptr;
            while ( 1 )
            {
              if ( v33 == -8192 && !v21 )
                v21 = v86;
              v88 = v87 + 1;
              v89 = v55 + v87;
              v55 = v54 & v89;
              v86 = &v18[2 * (v54 & v89)];
              v33 = *v86;
              if ( v15 == *v86 )
              {
                v21 = &v18[2 * (v54 & v89)];
                goto LABEL_25;
              }
              if ( v33 == -4096 )
                break;
              v87 = v88;
            }
            if ( v21 )
              goto LABEL_24;
            v21 = &v18[2 * (v54 & v89)];
          }
          goto LABEL_46;
        }
LABEL_25:
        *(_DWORD *)(v13 + 136) = v31;
        if ( v33 != -4096 )
          --*(_DWORD *)(v13 + 140);
        goto LABEL_27;
      }
    }
    ++*(_DWORD *)(v13 + 136);
    BUG();
  }
  v26 = *(_QWORD *)(v13 + 32);
  v27 = 0;
  if ( (*(_BYTE *)(v26 + 8) & 1) != 0 )
  {
    v28 = *(__int64 **)(v26 - 8);
    v27 = *v28;
    v14 = v28 + 3;
  }
  *(_QWORD *)&v99 = v27;
  WORD4(v99) = 1283;
  v98[0] = "starting epilogue (.seh_startepilogue) before prologue has ended (.seh_endprologue) in ";
  v98[2] = v14;
  return sub_2100A30(v8, a2, (__int64)v98);
}
