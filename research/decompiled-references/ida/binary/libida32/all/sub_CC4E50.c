unsigned __int64 __fastcall sub_CC4E50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // r13
  int v9; // r15d
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  int *v12; // rsi
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbp
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r9
  _QWORD *v23; // rdi
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  __int64 v27; // r8
  int *v28; // r9
  __int64 v29; // rdx
  _DWORD *v30; // r12
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r11d
  _DWORD *v35; // rsi
  _DWORD *v36; // rcx
  _DWORD *v37; // rdx
  _DWORD *v38; // rdx
  unsigned int i; // r10d
  int v40; // ecx
  unsigned int v41; // r8d
  __int64 v42; // rdi
  int v43; // r9d
  __m128i v44; // xmm0
  unsigned int v45; // esi
  int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // edx
  int v49; // edi
  int v50; // r9d
  int *v51; // r8
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  int v55; // r8d
  __int64 v56; // r8
  __int64 v57; // rax
  __m128 *v58; // rbp
  __int64 v59; // r12
  char *v60; // rsi
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r9d
  _DWORD *v67; // r10
  _DWORD *v68; // rcx
  _DWORD *v69; // rdx
  _DWORD *v70; // rdx
  int v71; // ecx
  unsigned int v72; // edi
  __int64 v73; // rsi
  int v74; // r8d
  __m128i v75; // xmm1
  unsigned int v76; // esi
  unsigned int v77; // eax
  unsigned int v78; // r14d
  int v79; // edx
  int v80; // r8d
  int *v81; // rdi
  _DWORD *v82; // rdx
  _DWORD *v83; // rdx
  __int64 v84; // [rsp+10h] [rbp-128h]
  __int64 *v86; // [rsp+28h] [rbp-110h]
  unsigned int v87; // [rsp+30h] [rbp-108h]
  int v88; // [rsp+30h] [rbp-108h]
  unsigned int v89; // [rsp+30h] [rbp-108h]
  unsigned int v90; // [rsp+30h] [rbp-108h]
  __int64 v91; // [rsp+30h] [rbp-108h]
  __int64 v92; // [rsp+48h] [rbp-F0h]
  int v93; // [rsp+50h] [rbp-E8h]
  int v94; // [rsp+58h] [rbp-E0h]
  __int64 v95; // [rsp+58h] [rbp-E0h]
  int v96; // [rsp+60h] [rbp-D8h]
  __m128 v97; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v98; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v99; // [rsp+88h] [rbp-B0h]
  unsigned int v100; // [rsp+90h] [rbp-A8h]
  void *v101; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v102; // [rsp+A8h] [rbp-90h]
  _BYTE v103[32]; // [rsp+B0h] [rbp-88h] BYREF
  void *ptr; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v105; // [rsp+D8h] [rbp-60h]
  _BYTE v106[88]; // [rsp+E0h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v93 = a2;
  v101 = v103;
  v102 = 0x800000000LL;
  ptr = v106;
  v6 = *(unsigned int *)(v5 + 80);
  v105 = 0x800000000LL;
  v7 = *(__int64 **)(v5 + 72);
  v92 = v5;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v86 = &v7[v6];
  if ( v7 != v86 )
  {
    v8 = v7;
    v9 = 0;
    while ( 1 )
    {
      v19 = *v8;
      v20 = 13;
      v21 = sub_CC2440(a1, *(_QWORD *)(*v8 + 48), v6, a4, a5);
      v23 = *(_QWORD **)(a1 + 24);
      if ( BYTE4(v21) )
        v20 = v21;
      v24 = v84 & 0xFFFFFF00FFFFFFFFLL;
      v97.m128_u64[0] = v19 & 0xFFFFFFFFFFFFFFFDLL;
      v25 = v23[16];
      v84 &= 0xFFFFFF00FFFFFFFFLL;
      v23[26] += 88LL;
      v26 = (v25 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v23[17] >= v26 + 88 && v25 )
      {
        v23[16] = v26 + 88;
      }
      else
      {
        v88 = v24;
        v52 = sub_962430((__int64)(v23 + 16), 88, 88, 4, v24, v22);
        LODWORD(v24) = v88;
        v26 = v52;
      }
      sub_CCAC30(v26, (unsigned int)&v97, 0, v20, v24, 0, 0, 0, 0);
      v29 = v100;
      v30 = (_DWORD *)v98;
      if ( !v100 )
        goto LABEL_15;
      v10 = v100 - 1;
      LODWORD(v11) = v10 & (37 * v9);
      v12 = (int *)(v98 + 24LL * (unsigned int)v11);
      v13 = *v12;
      if ( v9 != *v12 )
        break;
LABEL_4:
      v14 = 3LL * v100;
LABEL_5:
      sub_CC4DF0(&v97, v12, &v30[2 * v14], (__int64)&v98, 1);
      v15 = (unsigned int)v105;
      v16 = (unsigned int)v105 + 1LL;
      if ( v16 > HIDWORD(v105) )
      {
        sub_22134E0(&ptr, v106, v16, 4);
        v15 = (unsigned int)v105;
      }
      *((_DWORD *)ptr + v15) = v9;
      LODWORD(v105) = v105 + 1;
      v17 = sub_E05440(v20);
      a4 = HIDWORD(v102);
      v9 += (v17 + 7) & 0xFFFFFFF8;
      v18 = (unsigned int)v102 + 1LL;
      if ( v18 > HIDWORD(v102) )
      {
        ++v8;
        sub_22134E0(&v101, v103, v18, 4);
        v6 = (unsigned int)v102;
        *((_DWORD *)v101 + (unsigned int)v102) = v20;
        LODWORD(v102) = v102 + 1;
        if ( v86 == v8 )
          goto LABEL_41;
      }
      else
      {
        v6 = (__int64)v101;
        ++v8;
        *((_DWORD *)v101 + (unsigned int)v102) = v20;
        LODWORD(v102) = v102 + 1;
        if ( v86 == v8 )
          goto LABEL_41;
      }
    }
    v55 = 1;
    v28 = nullptr;
    if ( v13 != -1 )
    {
      while ( 1 )
      {
        if ( !v28 && v13 == -2 )
          v28 = v12;
        v11 = (unsigned int)v10 & ((_DWORD)v11 + v55);
        v12 = (int *)(v98 + 24 * v11);
        v13 = *v12;
        if ( v9 == *v12 )
          goto LABEL_4;
        if ( v13 == -1 )
          break;
        ++v55;
      }
      if ( v28 )
        v12 = v28;
    }
    v46 = v99 + 1;
    v27 = (unsigned int)(4 * (v99 + 1));
    if ( (unsigned int)v27 >= 3 * v100 )
    {
LABEL_15:
      v87 = v100;
      v31 = ((((((((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
               | (2 * v100 - 1)
               | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 4)
             | (((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
             | (2 * v100 - 1)
             | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 8)
           | (((((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
             | (2 * v100 - 1)
             | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 4)
           | (((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
           | (2 * v100 - 1)
           | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 16;
      v32 = (v31
           | (((((((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
               | (2 * v100 - 1)
               | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 4)
             | (((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
             | (2 * v100 - 1)
             | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 8)
           | (((((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
             | (2 * v100 - 1)
             | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 4)
           | (((2 * v100 - 1) | ((unsigned __int64)(2 * v100 - 1) >> 1)) >> 2)
           | (2 * v100 - 1)
           | ((unsigned __int64)(2 * v100 - 1) >> 1))
          + 1;
      if ( (unsigned int)v32 < 0x40 )
        LODWORD(v32) = 64;
      v100 = v32;
      v33 = sub_220C370(24LL * (unsigned int)v32, 8, v29, v31, v27, v28);
      v98 = v33;
      if ( v30 )
      {
        v99 = 0;
        v34 = v100;
        v35 = &v30[6 * v87];
        v36 = (_DWORD *)(v33 + 24LL * v100);
        v37 = (_DWORD *)v33;
        if ( (_DWORD *)v33 != v36 )
        {
          do
          {
            *v37 = -1;
            v37 += 6;
          }
          while ( v36 != v37 );
        }
        v38 = v30;
        for ( i = v34 - 1; v35 != v38; *(__m128i *)(v42 + 8) = v44 )
        {
          while ( 1 )
          {
            v40 = *v38;
            if ( (unsigned int)(*v38 + 2) > 1 )
              break;
            v38 += 6;
            if ( v35 == v38 )
              goto LABEL_27;
          }
          if ( !v34 )
          {
            dword_0 = 0;
            BUG();
          }
          v41 = i & (37 * v40);
          v42 = v33 + 24LL * v41;
          v43 = *(_DWORD *)v42;
          if ( v40 != *(_DWORD *)v42 && v43 != -1 )
          {
            v94 = 1;
            v91 = 0;
            while ( 1 )
            {
              if ( v43 == -2 )
              {
                if ( v91 )
                  v42 = v91;
                v91 = v42;
              }
              v41 = i & (v94 + v41);
              v42 = v33 + 24LL * v41;
              v43 = *(_DWORD *)v42;
              if ( v40 == *(_DWORD *)v42 )
                break;
              if ( v43 == -1 )
              {
                if ( v91 )
                  v42 = v91;
                break;
              }
              ++v94;
            }
          }
          v44 = _mm_loadu_si128((const __m128i *)(v38 + 2));
          v38 += 6;
          *(_DWORD *)v42 = v40;
          LODWORD(v99) = v99 + 1;
        }
LABEL_27:
        operator delete();
        v30 = (_DWORD *)v98;
        v45 = v100;
        v46 = v99 + 1;
      }
      else
      {
        v99 = 0;
        v45 = v100;
        v30 = (_DWORD *)(v33 + 24LL * v100);
        if ( (_DWORD *)v33 != v30 )
        {
          v82 = (_DWORD *)v33;
          do
          {
            *v82 = -1;
            v82 += 6;
          }
          while ( v30 != v82 );
          v30 = (_DWORD *)v33;
        }
        v46 = 1;
      }
      if ( !v45 )
        goto LABEL_131;
      v47 = v45 - 1;
      v48 = (v45 - 1) & (37 * v9);
      v12 = &v30[6 * v48];
      v49 = *v12;
      if ( v9 != *v12 )
      {
        v50 = 1;
        v51 = nullptr;
        if ( v49 != -1 )
        {
          while ( 1 )
          {
            if ( v49 == -2 && !v51 )
              v51 = v12;
            v48 = v47 & (v50 + v48);
            v12 = &v30[6 * v48];
            v49 = *v12;
            if ( v9 == *v12 )
              break;
            if ( v49 == -1 )
            {
              if ( v51 )
                v12 = v51;
              break;
            }
            ++v50;
          }
        }
      }
    }
    else
    {
      v56 = v100 >> 3;
      if ( v100 - HIDWORD(v99) - v46 <= (unsigned int)v56 )
      {
        v89 = v100;
        v61 = (((v10 >> 1) | v10) >> 2) | (v10 >> 1) | v10;
        v62 = (((v61 >> 4) | v61) >> 8) | (v61 >> 4) | v61;
        v63 = v62 >> 16;
        v64 = ((v62 >> 16) | v62) + 1;
        if ( (unsigned int)v64 < 0x40 )
          LODWORD(v64) = 64;
        v100 = v64;
        v65 = sub_220C370(24LL * (unsigned int)v64, 8, v29, v63, v56, v28);
        v98 = v65;
        if ( v30 )
        {
          v99 = 0;
          v66 = v100;
          v67 = &v30[6 * v89];
          v68 = (_DWORD *)(v65 + 24LL * v100);
          v69 = (_DWORD *)v65;
          if ( (_DWORD *)v65 != v68 )
          {
            do
            {
              *v69 = -1;
              v69 += 6;
            }
            while ( v68 != v69 );
          }
          v70 = v30;
          v90 = v66 - 1;
          do
          {
            while ( 1 )
            {
              v71 = *v70;
              if ( (unsigned int)(*v70 + 2) > 1 )
                break;
              v70 += 6;
              if ( v67 == v70 )
                goto LABEL_71;
            }
            if ( !v66 )
            {
              dword_0 = 0;
              BUG();
            }
            v72 = v90 & (37 * v71);
            v73 = v65 + 24LL * v72;
            v74 = *(_DWORD *)v73;
            if ( v71 != *(_DWORD *)v73 && v74 != -1 )
            {
              v96 = 1;
              v95 = 0;
              while ( 1 )
              {
                if ( !v95 )
                {
                  if ( v74 != -2 )
                    v73 = 0;
                  v95 = v73;
                }
                v72 = v90 & (v96 + v72);
                v73 = v65 + 24LL * v72;
                v74 = *(_DWORD *)v73;
                if ( v71 == *(_DWORD *)v73 )
                  break;
                if ( v74 == -1 )
                {
                  if ( v95 )
                    v73 = v95;
                  break;
                }
                ++v96;
              }
            }
            v75 = _mm_loadu_si128((const __m128i *)(v70 + 2));
            v70 += 6;
            *(_DWORD *)v73 = v71;
            LODWORD(v99) = v99 + 1;
            *(__m128i *)(v73 + 8) = v75;
          }
          while ( v67 != v70 );
LABEL_71:
          operator delete();
          v30 = (_DWORD *)v98;
          v76 = v100;
          v46 = v99 + 1;
        }
        else
        {
          v99 = 0;
          v76 = v100;
          v30 = (_DWORD *)(v65 + 24LL * v100);
          if ( (_DWORD *)v65 != v30 )
          {
            v83 = (_DWORD *)v65;
            do
            {
              *v83 = -1;
              v83 += 6;
            }
            while ( v30 != v83 );
            v30 = (_DWORD *)v65;
          }
          v46 = 1;
        }
        if ( !v76 )
        {
LABEL_131:
          LODWORD(v99) = v99 + 1;
          BUG();
        }
        v77 = v76 - 1;
        v78 = (v76 - 1) & (37 * v9);
        v12 = &v30[6 * v78];
        v79 = *v12;
        if ( v9 != *v12 )
        {
          v80 = 1;
          v81 = nullptr;
          if ( v79 != -1 )
          {
            while ( 1 )
            {
              if ( v79 == -2 && !v81 )
                v81 = v12;
              v78 = v77 & (v80 + v78);
              v12 = &v30[6 * v78];
              v79 = *v12;
              if ( v9 == *v12 )
                break;
              if ( v79 == -1 )
              {
                if ( v81 )
                  v12 = v81;
                break;
              }
              ++v80;
            }
          }
        }
      }
    }
    LODWORD(v99) = v46;
    if ( *v12 != -1 )
      --HIDWORD(v99);
    *v12 = v9;
    v57 = v100;
    v12[2] = v20;
    *((_QWORD *)v12 + 2) = v26;
    v14 = 3 * v57;
    goto LABEL_5;
  }
  v9 = 0;
LABEL_41:
  if ( *(_DWORD *)(v92 + 112) || (*(_BYTE *)(v92 + 49) & 0x40) != 0 )
  {
    v53 = 0;
  }
  else
  {
    v58 = *(__m128 **)(a1 + 24);
    v59 = operator new(0x200u);
    sub_D66030(v59, (_DWORD)v58, v93 | 4, v9, (unsigned int)&v101, (unsigned int)&v98, (__int64)&ptr, 0, 0, 0);
    v97.m128_u64[0] = v59;
    v60 = (char *)v58[2].m128_u64[1];
    if ( v60 == (char *)v58[3].m128_u64[0] )
    {
      sub_CC4A40(v58 + 2, v60, &v97);
    }
    else
    {
      *(_QWORD *)v60 = v59;
      v58[2].m128_u64[1] = (unsigned __int64)(v60 + 8);
    }
    v53 = v97.m128_u64[0];
    *(_BYTE *)(v97.m128_u64[0] + 504) |= 0x22u;
  }
  operator delete();
  if ( ptr != v106 )
    free(ptr);
  if ( v101 != v103 )
    free(v101);
  return v53;
}

