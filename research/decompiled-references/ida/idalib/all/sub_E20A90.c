__int64 __fastcall sub_E20A90(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int *v10; // rsi
  int v11; // edi
  unsigned __int64 v12; // r14
  int *v13; // rdx
  int v15; // esi
  int v16; // r9d
  int v17; // edi
  int v18; // eax
  __int64 v19; // rdx
  _DWORD *v20; // r14
  int v21; // eax
  size_t v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  void (__fastcall *v25)(_DWORD *, char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64); // rax
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r9
  _DWORD *v29; // r10
  unsigned __int64 v30; // rax
  int v31; // ecx
  int *v32; // rsi
  int v33; // edx
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rax
  size_t v37; // r10
  size_t v38; // r11
  _DWORD *j; // rdx
  __int64 v40; // r12
  size_t v41; // rbx
  size_t v42; // rbp
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // r9
  unsigned int v47; // esi
  int *v48; // rdx
  int v49; // edi
  __int64 v50; // rax
  void *v51; // rdi
  int v52; // edx
  int *v53; // rdi
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  _DWORD *v60; // rax
  int *v61; // r10
  int v62; // r11d
  _DWORD *i; // rdx
  __int64 v64; // r12
  int *v65; // rbx
  int *v66; // rbp
  int v67; // eax
  int v68; // edx
  int v69; // r9d
  __int64 v70; // r8
  unsigned int v71; // esi
  int *v72; // rdx
  int v73; // edi
  __int64 v74; // rax
  void *v75; // rdi
  int v76; // ecx
  int v77; // ecx
  unsigned int v78; // eax
  int v79; // edi
  int v80; // r9d
  int *v81; // r8
  int v82; // ecx
  int v83; // ecx
  unsigned int v84; // edi
  int v85; // eax
  int v86; // r9d
  __int64 v87; // rdx
  _DWORD *v88; // rdx
  __int64 v89; // rdx
  _DWORD *v90; // rdx
  int v91; // r11d
  int *v92; // r8
  int v93; // r10d
  int *v94; // rcx
  unsigned int v95; // [rsp+8h] [rbp-70h]
  __int64 v96; // [rsp+8h] [rbp-70h]
  __int64 v97; // [rsp+8h] [rbp-70h]
  int *v98; // [rsp+8h] [rbp-70h]
  __int64 v99; // [rsp+8h] [rbp-70h]
  __int64 v100; // [rsp+8h] [rbp-70h]
  size_t nd; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+10h] [rbp-68h]
  size_t na; // [rsp+10h] [rbp-68h]
  size_t ne; // [rsp+10h] [rbp-68h]
  unsigned int nb; // [rsp+10h] [rbp-68h]
  size_t nc; // [rsp+10h] [rbp-68h]
  size_t nf; // [rsp+10h] [rbp-68h]
  __int64 v108; // [rsp+18h] [rbp-60h]
  size_t v109; // [rsp+18h] [rbp-60h]
  int *v110; // [rsp+18h] [rbp-60h]
  int v111; // [rsp+20h] [rbp-58h]
  __m128 v112[4]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a2 + 176;
  v6 = a2;
  v7 = *(unsigned int *)(a2 + 192);
  v8 = *(_QWORD *)(a2 + 176);
  if ( (_DWORD)v7 )
  {
    v9 = (v7 - 1) & (37 * a3);
    v10 = (int *)(v8 + 16LL * v9);
    v11 = *v10;
    if ( *v10 == a3 )
    {
LABEL_3:
      sub_E207F0(v112, v10, (int *)(16 * v7 + v8), v5, 1);
      v12 = v112[0].m128_u64[0];
      goto LABEL_4;
    }
    v15 = 1;
    if ( v11 != -1 )
    {
      do
      {
        v16 = v15 + 1;
        v9 = (v7 - 1) & (v15 + v9);
        v10 = (int *)(v8 + 16LL * v9);
        v17 = *v10;
        if ( *v10 == a3 )
          goto LABEL_3;
        v15 = v16;
      }
      while ( v17 != -1 );
    }
  }
  sub_E207F0(v112, (int *)(v8 + 16LL * (unsigned int)v7), (int *)(v8 + 16LL * (unsigned int)v7), v5, 1);
  v12 = v112[0].m128_u64[0];
LABEL_4:
  v13 = (int *)(*(_QWORD *)(v6 + 176) + 16LL * *(unsigned int *)(v6 + 192));
  sub_E207F0(v112, v13, v13, v5, 1);
  if ( v112[0].m128_u64[0] == v12 )
  {
    v18 = sub_D8A4C0(*(_QWORD *)(v6 + 32), a3);
    v108 = v19;
    v111 = v18;
    nd = *(unsigned int *)(v19 + 28) + 40LL;
    v20 = (_DWORD *)operator new[](nd);
    memset(v20, 0, nd);
    v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 184LL) + 32LL);
    v20[4] = -1;
    *((_QWORD *)v20 + 4) = v108;
    *v20 = v21;
    v22 = *(unsigned int *)(v108 + 28);
    *((_QWORD *)v20 + 1) = 0;
    *((_BYTE *)v20 + 20) = 1;
    v20[6] = 0;
    *((_WORD *)v20 + 14) = 0;
    memset(v20 + 10, 0, v22);
    v25 = *(void (__fastcall **)(_DWORD *, char *, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64))(v108 + 64);
    if ( v25 )
      v25(
        v20,
        (char *)v20 + *(unsigned int *)(v108 + 24) + 40,
        *(unsigned __int8 *)(v108 + 56),
        *(unsigned __int8 *)(v108 + 57),
        *(unsigned __int8 *)(v108 + 59),
        1,
        0,
        v108);
    *((_BYTE *)v20 + 27) = 1;
    switch ( v111 )
    {
      case 0:
      case 1:
      case 10:
        v23 = *(_QWORD *)(v6 + 152);
        *((_BYTE *)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40) = *(_BYTE *)(v23
                                                                                         + a3
                                                                                         - (unsigned __int64)*(unsigned int *)(v6 + 144));
        break;
      case 2:
      case 3:
        v23 = *(_QWORD *)(v6 + 152);
        *(_WORD *)((char *)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40) = *(_WORD *)(v23
                                                                                                 + a3
                                                                                                 - (unsigned __int64)*(unsigned int *)(v6 + 144));
        break;
      case 4:
      case 5:
        v23 = *(_QWORD *)(v6 + 152);
        *(_DWORD *)((char *)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40) = *(_DWORD *)(v23 + a3 - (unsigned __int64)*(unsigned int *)(v6 + 144));
        break;
      case 6:
      case 7:
        v23 = *(_QWORD *)(v6 + 152);
        *(_QWORD *)((char *)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40) = *(_QWORD *)(v23 + a3 - (unsigned __int64)*(unsigned int *)(v6 + 144));
        break;
      case 8:
      case 9:
      case 12:
        v23 = *(_QWORD *)(v6 + 152);
        *(__m128i *)((char *)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40) = _mm_loadu_si128((const __m128i *)(v23 + a3 - (unsigned __int64)*(unsigned int *)(v6 + 144)));
        break;
      case 11:
        v23 = a3 - (unsigned __int64)*(unsigned int *)(v6 + 144) + *(_QWORD *)(v6 + 152);
        v26 = (__int64)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40;
        v27 = *(_DWORD *)(v23 + 8);
        *(_DWORD *)((char *)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 48) = v27;
        if ( v27 > 0x40 )
        {
          nf = v23;
          v100 = v26;
          sub_2205510(v26);
          v23 = nf;
          v26 = v100;
        }
        else
        {
          *(_QWORD *)v26 = *(_QWORD *)v23;
        }
        *(_BYTE *)(v26 + 12) = *(_BYTE *)(v23 + 12);
        *(_DWORD *)(v26 + 16) = *(_DWORD *)(v23 + 16);
        break;
      case 13:
        sub_E231E0(
          (char *)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40,
          *(_QWORD *)(v6 + 152) + a3 - (unsigned __int64)*(unsigned int *)(v6 + 144));
        break;
      case 14:
        ne = a3 - (unsigned __int64)*(unsigned int *)(v6 + 144) + *(_QWORD *)(v6 + 152);
        v97 = (__int64)v20 + *(unsigned int *)(*((_QWORD *)v20 + 4) + 24LL) + 40;
        sub_E231E0(v97, ne);
        v23 = *(_QWORD *)(ne + 48);
        v52 = *(_DWORD *)(ne + 56);
        *(_QWORD *)(v97 + 48) = v23;
        *(_DWORD *)(v97 + 56) = v52;
        break;
      default:
        break;
    }
    v28 = *(unsigned int *)(v6 + 192);
    v29 = *(_DWORD **)(v6 + 176);
    if ( !(_DWORD)v28 )
      goto LABEL_22;
    v30 = (unsigned int)(v28 - 1);
    v31 = v30 & (37 * a3);
    v32 = &v29[4 * v31];
    v33 = *v32;
    if ( *v32 == a3 )
    {
LABEL_19:
      sub_E207F0(v112, v32, &v29[4 * (unsigned int)v28], v5, 1);
      operator delete[](v20);
LABEL_20:
      sub_E23170(a1, v20);
      return a1;
    }
    v24 = 1;
    v53 = nullptr;
    if ( v33 != -1 )
    {
      while ( 1 )
      {
        if ( v33 == -2 && !v53 )
          v53 = v32;
        v31 = v30 & (v24 + v31);
        v32 = &v29[4 * v31];
        v33 = *v32;
        if ( *v32 == a3 )
          goto LABEL_19;
        if ( v33 == -1 )
          break;
        v24 = (unsigned int)(v24 + 1);
      }
      if ( v53 )
        v32 = v53;
    }
    v23 = (unsigned int)(3 * v28);
    v54 = *(_DWORD *)(v6 + 184) + 1;
    if ( 4 * v54 < (unsigned int)v23 )
    {
      v55 = (unsigned int)(v28 - *(_DWORD *)(v6 + 188) - v54);
      if ( (unsigned int)v55 > (unsigned int)v28 >> 3 )
      {
LABEL_44:
        *(_DWORD *)(v6 + 184) = v54;
        if ( *v32 != -1 )
          --*(_DWORD *)(v6 + 188);
        *v32 = a3;
        v56 = *(unsigned int *)(v6 + 192);
        *((_QWORD *)v32 + 1) = v20;
        sub_E207F0(v112, v32, &v29[4 * v56], v5, 1);
        goto LABEL_20;
      }
      nb = *(_DWORD *)(v6 + 192);
      v98 = *(int **)(v6 + 176);
      v57 = (((v30 >> 1) | v30) >> 2) | (v30 >> 1) | v30;
      v58 = (((v57 >> 4) | v57) >> 8) | (v57 >> 4) | v57;
      v59 = ((v58 >> 16) | v58) + 1;
      if ( (unsigned int)v59 < 0x40 )
        LODWORD(v59) = 64;
      *(_DWORD *)(v6 + 192) = v59;
      v60 = (_DWORD *)sub_22300B0(16LL * (unsigned int)v59, 8, 64, v55, v24, v28);
      v61 = v98;
      *(_QWORD *)(v6 + 176) = v60;
      v62 = 37 * a3;
      if ( v98 )
      {
        *(_QWORD *)(v6 + 184) = 0;
        v99 = 4LL * nb;
        for ( i = &v60[4 * *(unsigned int *)(v6 + 192)]; i != v60; v60 += 4 )
          *v60 = -1;
        nc = v5;
        v64 = v6;
        v65 = v61;
        v66 = &v61[v99];
        v110 = v61;
        do
        {
          v67 = *v65;
          if ( (unsigned int)(*v65 + 2) > 1 )
          {
            v68 = *(_DWORD *)(v64 + 192);
            if ( !v68 )
            {
              dword_0 = 0;
              BUG();
            }
            v69 = v68 - 1;
            v70 = *(_QWORD *)(v64 + 176);
            v71 = (v68 - 1) & (37 * v67);
            v72 = (int *)(v70 + 16LL * v71);
            v73 = *v72;
            if ( *v72 != v67 )
            {
              v93 = 1;
              v94 = nullptr;
              if ( v73 != -1 )
              {
                while ( 1 )
                {
                  if ( v73 == -2 && !v94 )
                    v94 = v72;
                  v71 = v69 & (v93 + v71);
                  v72 = (int *)(v70 + 16LL * v71);
                  v73 = *v72;
                  if ( v67 == *v72 )
                    break;
                  if ( v73 == -1 )
                  {
                    if ( v94 )
                      v72 = v94;
                    break;
                  }
                  ++v93;
                }
              }
            }
            *v72 = v67;
            v74 = *((_QWORD *)v65 + 1);
            *((_QWORD *)v65 + 1) = 0;
            *((_QWORD *)v72 + 1) = v74;
            v75 = *((void **)v65 + 1);
            ++*(_DWORD *)(v64 + 184);
            if ( v75 )
              operator delete[](v75);
          }
          v65 += 4;
        }
        while ( v66 != v65 );
        v6 = v64;
        v5 = nc;
        operator delete(v110, v99 * 4, 8);
        v82 = *(_DWORD *)(v6 + 192);
        v29 = *(_DWORD **)(v6 + 176);
        v62 = 37 * a3;
        v54 = *(_DWORD *)(v6 + 184) + 1;
      }
      else
      {
        v89 = *(unsigned int *)(v6 + 192);
        *(_QWORD *)(v6 + 184) = 0;
        v82 = v89;
        v89 *= 16;
        v29 = (_DWORD *)((char *)v60 + v89);
        if ( v60 != (_DWORD *)((char *)v60 + v89) )
        {
          v90 = v60;
          do
          {
            *v90 = -1;
            v90 += 4;
          }
          while ( v29 != v90 );
          v29 = v60;
        }
        v54 = 1;
      }
      if ( v82 )
      {
        v83 = v82 - 1;
        v84 = v83 & v62;
        v32 = &v29[4 * (v83 & v62)];
        v85 = *v32;
        if ( *v32 != a3 )
        {
          v86 = 1;
          v81 = nullptr;
          if ( v85 != -1 )
          {
            while ( 1 )
            {
              if ( !v81 && v85 == -2 )
                v81 = v32;
              v84 = v83 & (v86 + v84);
              v32 = &v29[4 * v84];
              v85 = *v32;
              if ( *v32 == a3 )
                break;
              if ( v85 == -1 )
                goto LABEL_69;
              ++v86;
            }
          }
        }
        goto LABEL_44;
      }
    }
    else
    {
LABEL_22:
      n = *(_QWORD *)(v6 + 176);
      v95 = *(_DWORD *)(v6 + 192);
      v34 = (((((((unsigned int)(2 * v28 - 1) | ((unsigned __int64)(unsigned int)(2 * v28 - 1) >> 1)) >> 2)
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
      v35 = ((v34 >> 16) | v34) + 1;
      if ( (unsigned int)v35 < 0x40 )
        LODWORD(v35) = 64;
      *(_DWORD *)(v6 + 192) = v35;
      v36 = (_DWORD *)sub_22300B0(16LL * (unsigned int)v35, 8, 64, v23, v24, v28);
      v37 = n;
      *(_QWORD *)(v6 + 176) = v36;
      if ( n )
      {
        *(_QWORD *)(v6 + 184) = 0;
        v96 = 16LL * v95;
        v38 = n + v96;
        for ( j = &v36[4 * *(unsigned int *)(v6 + 192)]; j != v36; v36 += 4 )
          *v36 = -1;
        if ( n != v38 )
        {
          na = v5;
          v40 = v6;
          v41 = v37;
          v42 = v38;
          v109 = v37;
          do
          {
            v43 = *(_DWORD *)v41;
            if ( (unsigned int)(*(_DWORD *)v41 + 2) > 1 )
            {
              v44 = *(_DWORD *)(v40 + 192);
              if ( !v44 )
              {
                dword_0 = 0;
                BUG();
              }
              v45 = v44 - 1;
              v46 = *(_QWORD *)(v40 + 176);
              v47 = v45 & (37 * v43);
              v48 = (int *)(v46 + 16LL * v47);
              v49 = *v48;
              if ( *v48 != v43 )
              {
                v91 = 1;
                v92 = nullptr;
                if ( v49 != -1 )
                {
                  while ( 1 )
                  {
                    if ( !v92 && v49 == -2 )
                      v92 = v48;
                    v47 = v45 & (v91 + v47);
                    v48 = (int *)(v46 + 16LL * v47);
                    v49 = *v48;
                    if ( v43 == *v48 )
                      break;
                    if ( v49 == -1 )
                    {
                      if ( v92 )
                        v48 = v92;
                      break;
                    }
                    ++v91;
                  }
                }
              }
              *v48 = v43;
              v50 = *(_QWORD *)(v41 + 8);
              *(_QWORD *)(v41 + 8) = 0;
              *((_QWORD *)v48 + 1) = v50;
              v51 = *(void **)(v41 + 8);
              ++*(_DWORD *)(v40 + 184);
              if ( v51 )
                operator delete[](v51);
            }
            v41 += 16LL;
          }
          while ( v42 != v41 );
          v6 = v40;
          v37 = v109;
          v5 = na;
        }
        operator delete(v37, v96, 8);
        v29 = *(_DWORD **)(v6 + 176);
        v76 = *(_DWORD *)(v6 + 192);
        v54 = *(_DWORD *)(v6 + 184) + 1;
      }
      else
      {
        v87 = *(unsigned int *)(v6 + 192);
        *(_QWORD *)(v6 + 184) = 0;
        v76 = v87;
        v87 *= 16;
        v29 = (_DWORD *)((char *)v36 + v87);
        if ( v36 != (_DWORD *)((char *)v36 + v87) )
        {
          v88 = v36;
          do
          {
            *v88 = -1;
            v88 += 4;
          }
          while ( v29 != v88 );
          v29 = v36;
        }
        v54 = 1;
      }
      if ( v76 )
      {
        v77 = v76 - 1;
        v78 = v77 & (37 * a3);
        v32 = &v29[4 * v78];
        v79 = *v32;
        if ( *v32 != a3 )
        {
          v80 = 1;
          v81 = nullptr;
          if ( v79 != -1 )
          {
            while ( 1 )
            {
              if ( !v81 && v79 == -2 )
                v81 = v32;
              v78 = v77 & (v80 + v78);
              v32 = &v29[4 * v78];
              v79 = *v32;
              if ( *v32 == a3 )
                break;
              if ( v79 == -1 )
              {
LABEL_69:
                if ( v81 )
                  v32 = v81;
                goto LABEL_44;
              }
              ++v80;
            }
          }
        }
        goto LABEL_44;
      }
    }
    ++*(_DWORD *)(v6 + 184);
    BUG();
  }
  sub_E23170(a1, *(_QWORD *)(v12 + 8));
  return a1;
}
