unsigned __int64 __fastcall sub_CE8B90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v34; // r14
  unsigned int v35; // r11d
  _DWORD *v36; // rsi
  _DWORD *v37; // rcx
  _DWORD *v38; // rdx
  _DWORD *v39; // rdx
  unsigned int i; // r10d
  int v41; // ecx
  unsigned int v42; // r8d
  __int64 v43; // rdi
  int v44; // r9d
  __m128i v45; // xmm0
  unsigned int v46; // esi
  int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // edx
  int v50; // edi
  int v51; // r9d
  int *v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  int v56; // r8d
  __int64 v57; // r8
  __int64 v58; // rax
  __m128 *v59; // rbp
  unsigned __int64 v60; // r12
  char *v61; // rsi
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r11
  unsigned int v68; // r9d
  _DWORD *v69; // r10
  _DWORD *v70; // rcx
  _DWORD *v71; // rdx
  _DWORD *v72; // rdx
  int v73; // ecx
  unsigned int v74; // edi
  __int64 v75; // rsi
  int v76; // r8d
  __m128i v77; // xmm1
  unsigned int v78; // esi
  unsigned int v79; // eax
  unsigned int v80; // r14d
  int v81; // edx
  int v82; // r8d
  int *v83; // rdi
  _DWORD *v84; // rdx
  _DWORD *v85; // rdx
  __int64 v86; // [rsp+10h] [rbp-128h]
  __int64 *v88; // [rsp+28h] [rbp-110h]
  unsigned int v89; // [rsp+30h] [rbp-108h]
  int v90; // [rsp+30h] [rbp-108h]
  unsigned int v91; // [rsp+30h] [rbp-108h]
  unsigned int v92; // [rsp+30h] [rbp-108h]
  __int64 v93; // [rsp+30h] [rbp-108h]
  __int64 v94; // [rsp+48h] [rbp-F0h]
  int v95; // [rsp+50h] [rbp-E8h]
  int v96; // [rsp+58h] [rbp-E0h]
  __int64 v97; // [rsp+58h] [rbp-E0h]
  int v98; // [rsp+60h] [rbp-D8h]
  __m128 v99; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v100; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v101; // [rsp+88h] [rbp-B0h]
  unsigned int v102; // [rsp+90h] [rbp-A8h]
  void *v103; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-90h]
  _BYTE v105[32]; // [rsp+B0h] [rbp-88h] BYREF
  void *ptr; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v107; // [rsp+D8h] [rbp-60h]
  _BYTE v108[88]; // [rsp+E0h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v95 = a2;
  v103 = v105;
  v104 = 0x800000000LL;
  ptr = v108;
  v6 = *(unsigned int *)(v5 + 80);
  v107 = 0x800000000LL;
  v7 = *(__int64 **)(v5 + 72);
  v94 = v5;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v88 = &v7[v6];
  if ( v7 != v88 )
  {
    v8 = v7;
    v9 = 0;
    while ( 1 )
    {
      v19 = *v8;
      v20 = 13;
      v21 = sub_CE6180(a1, *(_QWORD *)(*v8 + 48), v6, a4, a5);
      v23 = *(_QWORD **)(a1 + 24);
      if ( BYTE4(v21) )
        v20 = v21;
      v24 = v86 & 0xFFFFFF00FFFFFFFFLL;
      v99.m128_u64[0] = v19 & 0xFFFFFFFFFFFFFFFDLL;
      v25 = v23[16];
      v86 &= 0xFFFFFF00FFFFFFFFLL;
      v23[26] += 88LL;
      v26 = (v25 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v23[17] >= v26 + 88 && v25 )
      {
        v23[16] = v26 + 88;
      }
      else
      {
        v90 = v24;
        v53 = sub_986170((__int64)(v23 + 16), 88, 88, 4, v24, v22);
        LODWORD(v24) = v90;
        v26 = v53;
      }
      sub_CEE970(v26, (unsigned int)&v99, 0, v20, v24, 0, 0, 0, 0);
      v29 = v102;
      v30 = (_DWORD *)v100;
      if ( !v102 )
        goto LABEL_15;
      v10 = v102 - 1;
      LODWORD(v11) = v10 & (37 * v9);
      v12 = (int *)(v100 + 24LL * (unsigned int)v11);
      v13 = *v12;
      if ( v9 != *v12 )
        break;
LABEL_4:
      v14 = 3LL * v102;
LABEL_5:
      sub_CE8B30(&v99, v12, &v30[2 * v14], (__int64)&v100, 1);
      v15 = (unsigned int)v107;
      v16 = (unsigned int)v107 + 1LL;
      if ( v16 > HIDWORD(v107) )
      {
        sub_2237220(&ptr, v108, v16, 4);
        v15 = (unsigned int)v107;
      }
      *((_DWORD *)ptr + v15) = v9;
      LODWORD(v107) = v107 + 1;
      v17 = sub_E29180(v20);
      a4 = HIDWORD(v104);
      v9 += (v17 + 7) & 0xFFFFFFF8;
      v18 = (unsigned int)v104 + 1LL;
      if ( v18 > HIDWORD(v104) )
      {
        ++v8;
        sub_2237220(&v103, v105, v18, 4);
        v6 = (unsigned int)v104;
        *((_DWORD *)v103 + (unsigned int)v104) = v20;
        LODWORD(v104) = v104 + 1;
        if ( v88 == v8 )
          goto LABEL_41;
      }
      else
      {
        v6 = (__int64)v103;
        ++v8;
        *((_DWORD *)v103 + (unsigned int)v104) = v20;
        LODWORD(v104) = v104 + 1;
        if ( v88 == v8 )
          goto LABEL_41;
      }
    }
    v56 = 1;
    v28 = nullptr;
    if ( v13 != -1 )
    {
      while ( 1 )
      {
        if ( !v28 && v13 == -2 )
          v28 = v12;
        v11 = (unsigned int)v10 & ((_DWORD)v11 + v56);
        v12 = (int *)(v100 + 24 * v11);
        v13 = *v12;
        if ( v9 == *v12 )
          goto LABEL_4;
        if ( v13 == -1 )
          break;
        ++v56;
      }
      if ( v28 )
        v12 = v28;
    }
    v47 = v101 + 1;
    v27 = (unsigned int)(4 * (v101 + 1));
    if ( (unsigned int)v27 >= 3 * v102 )
    {
LABEL_15:
      v89 = v102;
      v31 = ((((((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
               | (2 * v102 - 1)
               | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
             | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
             | (2 * v102 - 1)
             | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 8)
           | (((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
             | (2 * v102 - 1)
             | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
           | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
           | (2 * v102 - 1)
           | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 16;
      v32 = (v31
           | (((((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
               | (2 * v102 - 1)
               | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
             | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
             | (2 * v102 - 1)
             | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 8)
           | (((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
             | (2 * v102 - 1)
             | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
           | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
           | (2 * v102 - 1)
           | ((unsigned __int64)(2 * v102 - 1) >> 1))
          + 1;
      if ( (unsigned int)v32 < 0x40 )
        LODWORD(v32) = 64;
      v102 = v32;
      v33 = sub_22300B0(24LL * (unsigned int)v32, 8, v29, v31, v27, v28);
      v100 = v33;
      if ( v30 )
      {
        v101 = 0;
        v34 = 6LL * v89;
        v35 = v102;
        v36 = &v30[v34];
        v37 = (_DWORD *)(v33 + 24LL * v102);
        v38 = (_DWORD *)v33;
        if ( (_DWORD *)v33 != v37 )
        {
          do
          {
            *v38 = -1;
            v38 += 6;
          }
          while ( v37 != v38 );
        }
        v39 = v30;
        for ( i = v35 - 1; v36 != v39; *(__m128i *)(v43 + 8) = v45 )
        {
          while ( 1 )
          {
            v41 = *v39;
            if ( (unsigned int)(*v39 + 2) > 1 )
              break;
            v39 += 6;
            if ( v36 == v39 )
              goto LABEL_27;
          }
          if ( !v35 )
          {
            dword_0 = 0;
            BUG();
          }
          v42 = i & (37 * v41);
          v43 = v33 + 24LL * v42;
          v44 = *(_DWORD *)v43;
          if ( v41 != *(_DWORD *)v43 && v44 != -1 )
          {
            v96 = 1;
            v93 = 0;
            while ( 1 )
            {
              if ( v44 == -2 )
              {
                if ( v93 )
                  v43 = v93;
                v93 = v43;
              }
              v42 = i & (v96 + v42);
              v43 = v33 + 24LL * v42;
              v44 = *(_DWORD *)v43;
              if ( v41 == *(_DWORD *)v43 )
                break;
              if ( v44 == -1 )
              {
                if ( v93 )
                  v43 = v93;
                break;
              }
              ++v96;
            }
          }
          v45 = _mm_loadu_si128((const __m128i *)(v39 + 2));
          v39 += 6;
          *(_DWORD *)v43 = v41;
          LODWORD(v101) = v101 + 1;
        }
LABEL_27:
        operator delete(v30, v34 * 4, 8);
        v30 = (_DWORD *)v100;
        v46 = v102;
        v47 = v101 + 1;
      }
      else
      {
        v101 = 0;
        v46 = v102;
        v30 = (_DWORD *)(v33 + 24LL * v102);
        if ( (_DWORD *)v33 != v30 )
        {
          v84 = (_DWORD *)v33;
          do
          {
            *v84 = -1;
            v84 += 6;
          }
          while ( v30 != v84 );
          v30 = (_DWORD *)v33;
        }
        v47 = 1;
      }
      if ( !v46 )
        goto LABEL_131;
      v48 = v46 - 1;
      v49 = (v46 - 1) & (37 * v9);
      v12 = &v30[6 * v49];
      v50 = *v12;
      if ( v9 != *v12 )
      {
        v51 = 1;
        v52 = nullptr;
        if ( v50 != -1 )
        {
          while ( 1 )
          {
            if ( v50 == -2 && !v52 )
              v52 = v12;
            v49 = v48 & (v51 + v49);
            v12 = &v30[6 * v49];
            v50 = *v12;
            if ( v9 == *v12 )
              break;
            if ( v50 == -1 )
            {
              if ( v52 )
                v12 = v52;
              break;
            }
            ++v51;
          }
        }
      }
    }
    else
    {
      v57 = v102 >> 3;
      if ( v102 - HIDWORD(v101) - v47 <= (unsigned int)v57 )
      {
        v91 = v102;
        v62 = (((v10 >> 1) | v10) >> 2) | (v10 >> 1) | v10;
        v63 = (((v62 >> 4) | v62) >> 8) | (v62 >> 4) | v62;
        v64 = v63 >> 16;
        v65 = ((v63 >> 16) | v63) + 1;
        if ( (unsigned int)v65 < 0x40 )
          LODWORD(v65) = 64;
        v102 = v65;
        v66 = sub_22300B0(24LL * (unsigned int)v65, 8, v29, v64, v57, v28);
        v100 = v66;
        if ( v30 )
        {
          v101 = 0;
          v67 = 6LL * v91;
          v68 = v102;
          v69 = &v30[v67];
          v70 = (_DWORD *)(v66 + 24LL * v102);
          v71 = (_DWORD *)v66;
          if ( (_DWORD *)v66 != v70 )
          {
            do
            {
              *v71 = -1;
              v71 += 6;
            }
            while ( v70 != v71 );
          }
          v72 = v30;
          v92 = v68 - 1;
          do
          {
            while ( 1 )
            {
              v73 = *v72;
              if ( (unsigned int)(*v72 + 2) > 1 )
                break;
              v72 += 6;
              if ( v69 == v72 )
                goto LABEL_71;
            }
            if ( !v68 )
            {
              dword_0 = 0;
              BUG();
            }
            v74 = v92 & (37 * v73);
            v75 = v66 + 24LL * v74;
            v76 = *(_DWORD *)v75;
            if ( v73 != *(_DWORD *)v75 && v76 != -1 )
            {
              v98 = 1;
              v97 = 0;
              while ( 1 )
              {
                if ( !v97 )
                {
                  if ( v76 != -2 )
                    v75 = 0;
                  v97 = v75;
                }
                v74 = v92 & (v98 + v74);
                v75 = v66 + 24LL * v74;
                v76 = *(_DWORD *)v75;
                if ( v73 == *(_DWORD *)v75 )
                  break;
                if ( v76 == -1 )
                {
                  if ( v97 )
                    v75 = v97;
                  break;
                }
                ++v98;
              }
            }
            v77 = _mm_loadu_si128((const __m128i *)(v72 + 2));
            v72 += 6;
            *(_DWORD *)v75 = v73;
            LODWORD(v101) = v101 + 1;
            *(__m128i *)(v75 + 8) = v77;
          }
          while ( v69 != v72 );
LABEL_71:
          operator delete(v30, v67 * 4, 8);
          v30 = (_DWORD *)v100;
          v78 = v102;
          v47 = v101 + 1;
        }
        else
        {
          v101 = 0;
          v78 = v102;
          v30 = (_DWORD *)(v66 + 24LL * v102);
          if ( (_DWORD *)v66 != v30 )
          {
            v85 = (_DWORD *)v66;
            do
            {
              *v85 = -1;
              v85 += 6;
            }
            while ( v30 != v85 );
            v30 = (_DWORD *)v66;
          }
          v47 = 1;
        }
        if ( !v78 )
        {
LABEL_131:
          LODWORD(v101) = v101 + 1;
          BUG();
        }
        v79 = v78 - 1;
        v80 = (v78 - 1) & (37 * v9);
        v12 = &v30[6 * v80];
        v81 = *v12;
        if ( v9 != *v12 )
        {
          v82 = 1;
          v83 = nullptr;
          if ( v81 != -1 )
          {
            while ( 1 )
            {
              if ( v81 == -2 && !v83 )
                v83 = v12;
              v80 = v79 & (v82 + v80);
              v12 = &v30[6 * v80];
              v81 = *v12;
              if ( v9 == *v12 )
                break;
              if ( v81 == -1 )
              {
                if ( v83 )
                  v12 = v83;
                break;
              }
              ++v82;
            }
          }
        }
      }
    }
    LODWORD(v101) = v47;
    if ( *v12 != -1 )
      --HIDWORD(v101);
    *v12 = v9;
    v58 = v102;
    v12[2] = v20;
    *((_QWORD *)v12 + 2) = v26;
    v14 = 3 * v58;
    goto LABEL_5;
  }
  v9 = 0;
LABEL_41:
  if ( *(_DWORD *)(v94 + 112) || (*(_BYTE *)(v94 + 49) & 0x40) != 0 )
  {
    v54 = 0;
  }
  else
  {
    v59 = *(__m128 **)(a1 + 24);
    v60 = operator new(0x200u);
    sub_D89D70(v60, (_DWORD)v59, v95 | 4, v9, (unsigned int)&v103, (unsigned int)&v100, (__int64)&ptr, 0, 0, 0);
    v99.m128_u64[0] = v60;
    v61 = (char *)v59[2].m128_u64[1];
    if ( v61 == (char *)v59[3].m128_u64[0] )
    {
      sub_CE8780(v59 + 2, v61, &v99);
    }
    else
    {
      *(_QWORD *)v61 = v60;
      v59[2].m128_u64[1] = (unsigned __int64)(v61 + 8);
    }
    v54 = v99.m128_u64[0];
    *(_BYTE *)(v99.m128_u64[0] + 504) |= 0x22u;
  }
  operator delete(v100, 24LL * v102, 8);
  if ( ptr != v108 )
    free(ptr);
  if ( v103 != v105 )
    free(v103);
  return v54;
}
