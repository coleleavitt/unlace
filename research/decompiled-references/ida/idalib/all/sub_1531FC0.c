char __fastcall sub_1531FC0(__int64 a1, __m128i a2, __m128 a3)
{
  int v3; // r14d
  int v4; // r15d
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v10; // rdi
  __int64 v11; // rbp
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // r15
  __int64 *v16; // r12
  __int64 v17; // r14
  unsigned __int8 v18; // dl
  __int64 v19; // rsi
  __m128i *v21; // r15
  unsigned __int16 v22; // bx
  char v23; // al
  __int64 v24; // rdi
  unsigned __int32 v25; // ebx
  __int64 *v26; // rdi
  size_t v27; // rax
  __int8 *v28; // rdi
  unsigned __int64 v29; // rdx
  size_t v30; // rax
  __int16 v31; // di
  bool v32; // zf
  int v33; // eax
  _BYTE *v34; // rdi
  unsigned __int64 v35; // rdx
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // r15d
  int v41; // eax
  unsigned int v42; // r15d
  __m128i *v43; // rsi
  __int64 *v44; // rdi
  size_t v45; // rax
  size_t v46; // rax
  __int16 v47; // ax
  __int64 *v48; // rdi
  __m128i *v49; // rsi
  unsigned int v50; // r11d
  __int64 v51; // rdi
  __int64 v52; // r12
  __int16 v53; // ax
  __int64 *v54; // rcx
  int v55; // edx
  int v56; // eax
  int v57; // r11d
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  size_t v63; // rax
  size_t v64; // rax
  __int64 *v65; // rdi
  __m128i *v66; // rsi
  __int64 v67; // rax
  size_t v68; // rdx
  unsigned __int64 v69; // rdx
  __int16 v70; // ax
  __int64 *v71; // rdi
  __m128i *v72; // rsi
  __int64 *v73; // rdi
  __m128i *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 *v77; // rdi
  __m128i *v78; // rsi
  __int64 *v79; // rdi
  __m128i *v80; // rsi
  __int64 *v81; // rbx
  __int64 *v82; // r15
  __int64 v83; // r12
  __int64 v84; // rbp
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  size_t v89; // [rsp+8h] [rbp-180h] BYREF
  __m128i *v90; // [rsp+10h] [rbp-178h]
  __int64 *v91; // [rsp+18h] [rbp-170h]
  int v92; // [rsp+20h] [rbp-168h]
  int v93; // [rsp+24h] [rbp-164h]
  __int64 v94; // [rsp+28h] [rbp-160h]
  __int64 v95; // [rsp+38h] [rbp-150h] BYREF
  void *src; // [rsp+40h] [rbp-148h] BYREF
  size_t n; // [rsp+48h] [rbp-140h]
  _QWORD v98[2]; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int32 v99; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int32 v100; // [rsp+64h] [rbp-124h]
  char v101; // [rsp+68h] [rbp-120h]
  __int64 v102; // [rsp+6Ch] [rbp-11Ch]
  char v103; // [rsp+74h] [rbp-114h]
  void *v104; // [rsp+78h] [rbp-110h]
  __m128 v105; // [rsp+80h] [rbp-108h] BYREF
  char v106; // [rsp+98h] [rbp-F0h]
  void *v107; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v108; // [rsp+A8h] [rbp-E0h] BYREF
  void *dest; // [rsp+B8h] [rbp-D0h]
  __m128 v110; // [rsp+C0h] [rbp-C8h] BYREF
  char v111; // [rsp+D8h] [rbp-B0h]
  void *ptr; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+E8h] [rbp-A0h]
  _DWORD v114[38]; // [rsp+F0h] [rbp-98h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  LODWORD(v89) = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 == 1 )
  {
    v39 = *(_DWORD *)(a1 + 20);
    v40 = v89;
    if ( !v39 )
      v39 = v89;
    *(_DWORD *)(a1 + 40) = v39;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    return sub_16703F0(*(_QWORD *)(a1 + 96), v40, *(_QWORD *)(v6 + 16));
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 32);
    if ( v7 || v8 )
    {
      sub_14368B0(*(_QWORD *)(a1 + 8), *(char **)(v6 + 24), v8, 0, 0, 0);
      v9 = *(_DWORD *)(a1 + 20);
      v10 = *(__int64 **)(a1 + 8);
      if ( !v9 )
        v9 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v9;
      v90 = (__m128i *)(a1 + 16);
      sub_14634E0(v10, (int *)(a1 + 16));
      v11 = *(_QWORD *)v6;
      v12 = *(_WORD *)(a1 + 32);
      v95 = a1;
      *(_DWORD *)(v11 + 16) = 0;
      if ( v12 == 20 )
      {
        v36 = *(_QWORD *)(a1 + 8);
        v37 = *(_QWORD *)(v36 + 2944);
        if ( v37 >= *(unsigned int *)(v36 + 2912) )
          v38 = sub_14180A0(v36, 1u);
        else
          v38 = *(_QWORD *)(v36 + 2904) + 24 * v37;
        if ( *(_WORD *)(v38 + 16) == 20 )
          goto LABEL_8;
        v12 = *(_WORD *)(a1 + 32);
        if ( (unsigned __int16)(v12 - 406) <= 8u )
          goto LABEL_8;
      }
      else if ( (unsigned __int16)(v12 - 406) <= 8u )
      {
LABEL_8:
        ptr = v114;
        v113 = 0x400000000LL;
        sub_14AA640(a1, v11, (__int64)&ptr, nullptr, a2, a3);
        if ( (_DWORD)v113 )
        {
          sub_1479990(*(_QWORD *)(a1 + 8), v90, 1u);
          sub_14368B0(*(_QWORD *)(a1 + 8), (char *)ptr, (unsigned int)v113, 1u, 0, 1u);
          sub_149F520(a1, 1);
        }
        if ( ptr != v114 )
          free(ptr);
LABEL_12:
        v13 = *(unsigned int *)(v11 + 16);
        if ( (_DWORD)v13 )
        {
          v14 = *(_QWORD *)(v11 + 8);
          if ( (*(_BYTE *)(*(_QWORD *)v14 + 58LL) & 1) == 0 )
          {
            v15 = (__int64 *)(v14 + 8 * v13);
            v16 = *(__int64 **)(v11 + 8);
            do
            {
              v17 = *v16;
              if ( !(unsigned __int8)sub_15D8660(*v16) )
              {
                sub_1564820(&ptr, a1, (unsigned int)v89, 1851);
                v18 = 16;
                v19 = v17;
LABEL_18:
                sub_AE9DF0((unsigned __int8 **)&ptr, v19, v18);
                sub_AEA040((__int64)&ptr);
                return sub_15209A0(&v95);
              }
              ++v16;
            }
            while ( v15 != v16 );
            if ( *(_WORD *)(a1 + 32) != 66 )
            {
              sub_152E410((__int64 *)&ptr, 0xEu, (void *)v11, 0, a1);
              v18 = 4;
              v19 = 66;
              goto LABEL_18;
            }
            v65 = *(__int64 **)(a1 + 8);
            v66 = v90;
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v65, v66->m128i_i32);
            if ( *(_WORD *)(a1 + 32) != 5
              || (v67 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), *(_DWORD *)v67 != 8)
              || *(_QWORD *)(v67 + 16) != 0x6F745F796C707061LL )
            {
              sub_152E410((__int64 *)&ptr, 0x737u, (void *)v11, 1, a1);
              sub_AEA040((__int64)&ptr);
              return sub_15209A0(&v95);
            }
            v73 = *(__int64 **)(a1 + 8);
            v74 = v90;
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v73, v74->m128i_i32);
            if ( *(_WORD *)(a1 + 32) != 64 )
            {
              sub_152E410((__int64 *)&ptr, 0xEu, (void *)v11, 2, a1);
              v18 = 4;
              v19 = 64;
              goto LABEL_18;
            }
            v77 = *(__int64 **)(a1 + 8);
            v78 = v90;
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v77, v78->m128i_i32);
            v107 = nullptr;
            *(_QWORD *)&v108 = 0;
            DWORD2(v108) = 0;
            LODWORD(src) = 0;
            v99 = 0;
            if ( !(unsigned __int8)sub_15310F0(a1, (__int64)&v107, &src, &v99) )
            {
              if ( *(_WORD *)(a1 + 32) == 1 )
              {
                v79 = *(__int64 **)(a1 + 8);
                v80 = v90;
                *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                sub_14634E0(v79, v80->m128i_i32);
                if ( !*(_DWORD *)(v6 + 8) )
                  sub_1670290(*(_QWORD *)(a1 + 96), (unsigned int)v89, *(_QWORD *)(v6 + 16));
                v81 = *(__int64 **)(v11 + 8);
                v82 = &v81[*(unsigned int *)(v11 + 16)];
                while ( v82 != v81 )
                {
                  v83 = *v81;
                  ptr = nullptr;
                  v84 = *(_QWORD *)(a1 + 96);
                  v113 = 0;
                  v114[0] = 0;
                  operator delete(0, 0, 4);
                  v114[0] = DWORD2(v108);
                  if ( DWORD2(v108) )
                  {
                    ptr = (void *)sub_22300B0(12LL * DWORD2(v108), 4, v85, v86, v87, v88);
                    v113 = v108;
                    memcpy(ptr, v107, 12LL * v114[0]);
                  }
                  else
                  {
                    ptr = nullptr;
                    v113 = 0;
                  }
                  ++v81;
                  sub_166DD10(v84, v83, (unsigned int)v89, &ptr);
                  operator delete(ptr, 12LL * v114[0], 4);
                }
                return operator delete(v107, 12LL * DWORD2(v108), 4);
              }
              sub_1564840(&ptr, a1, v90, 1845);
              sub_AEA040((__int64)&ptr);
            }
            sub_15209A0(&v95);
            return operator delete(v107, 12LL * DWORD2(v108), 4);
          }
        }
        return sub_15209A0(&v95);
      }
      if ( v12 != 189 )
      {
        if ( v12 == 320 )
        {
          sub_1484740(a1, v11);
          goto LABEL_12;
        }
        v21 = v90;
        sub_1564840(&ptr, a1, v90, 1840);
        sub_AEA040((__int64)&ptr);
        v22 = *(_WORD *)(a1 + 32);
        v23 = sub_141A630(v22);
        if ( v22 == 1 )
          return sub_15209A0(&v95);
        if ( v23 )
          return sub_15209A0(&v95);
        v24 = *(_QWORD *)(a1 + 24);
        if ( !v24 )
          return sub_15209A0(&v95);
        if ( (unsigned int)sub_F963B0(v24, 0, 1) == 420 )
          return sub_15209A0(&v95);
        v25 = *(_DWORD *)(a1 + 16);
        v26 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = v25;
        sub_14634E0(v26, v21->m128i_i32);
        if ( *(_WORD *)(a1 + 32) == 22 )
        {
          sub_149F520(a1, 0);
          LOWORD(ptr) = 23;
          sub_15680D0(a1, &ptr, 1, 2);
          if ( *(_WORD *)(a1 + 32) != 23 )
            return sub_15209A0(&v95);
        }
        sub_1564840(&ptr, a1, v90, 2051);
        v27 = j__strlen("__attribute__((");
        v99 = v25;
        v100 = v25;
        v102 = 0;
        v103 = 0;
        v104 = &v105.m128_u16[4];
        v105.m128_u64[0] = 0;
        v105.m128_i8[8] = 0;
        v106 = 0;
        v101 = 0;
        v107 = (char *)&v108 + 8;
        sub_1520EC0(&v107, "__attribute__((", (__int64)&aAttribute[v27 + 1]);
        v28 = &v105.m128_i8[8];
        if ( v107 == (char *)&v108 + 8 )
        {
          v69 = v108;
          if ( (_QWORD)v108 )
          {
            if ( (_QWORD)v108 == 1 )
              *(_BYTE *)v104 = BYTE8(v108);
            else
              memcpy(v104, v107, v108);
            v69 = v108;
            v28 = (__int8 *)v104;
          }
          v105.m128_u64[0] = v69;
          v28[v69] = 0;
          v28 = (__int8 *)v107;
        }
        else
        {
          if ( v104 == &v105.m128_u16[4] )
          {
            v89 = *((_QWORD *)&v108 + 1);
            v104 = v107;
            v105 = _mm_loadh_ps((const double *)&v89);
          }
          else
          {
            v89 = *((_QWORD *)&v108 + 1);
            v29 = v105.m128_u64[1];
            v104 = v107;
            v105 = _mm_loadh_ps((const double *)&v89);
            if ( &v105 != (__m128 *)-8LL )
            {
              v107 = &v105.m128_u16[4];
              *((_QWORD *)&v108 + 1) = v29;
              goto LABEL_32;
            }
          }
          v28 = (char *)&v108 + 8;
          v107 = (char *)&v108 + 8;
        }
LABEL_32:
        *(_QWORD *)&v108 = 0;
        *v28 = 0;
        if ( v107 != (char *)&v108 + 8 )
          operator delete(v107);
        v106 = 0;
        if ( v99 && v100 )
          sub_152DFA0((__int64 *)&ptr, (unsigned __int64)&v99);
        v30 = j__strlen("))");
        v31 = *(_WORD *)(a1 + 32);
        v89 = v30;
        v32 = !sub_10CCDE0(v31);
        v33 = *(_DWORD *)(a1 + 20);
        if ( v32 )
        {
          v33 += *(_DWORD *)(a1 + 16);
        }
        else if ( !v33 )
        {
          v33 = *(_DWORD *)(a1 + 16);
        }
        *(_QWORD *)((char *)&v108 + 4) = 0;
        BYTE12(v108) = 0;
        dest = &v110.m128_u16[4];
        v110.m128_u64[0] = 0;
        v110.m128_i8[8] = 0;
        v111 = 0;
        LODWORD(v107) = v33;
        HIDWORD(v107) = v33;
        LOBYTE(v108) = 0;
        src = v98;
        sub_1520EC0(&src, "))", (__int64)&asc_22F689B[v89 + 2]);
        v34 = dest;
        if ( src == v98 )
        {
          v68 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v98[0];
            else
              memcpy(dest, src, n);
            v68 = n;
            v34 = dest;
          }
          v110.m128_u64[0] = v68;
          v34[v68] = 0;
          v34 = src;
          goto LABEL_44;
        }
        if ( dest == &v110.m128_u16[4] )
        {
          v89 = v98[0];
          dest = src;
          v110 = _mm_loadh_ps((const double *)&v89);
        }
        else
        {
          v89 = v98[0];
          v35 = v110.m128_u64[1];
          dest = src;
          v110 = _mm_loadh_ps((const double *)&v89);
          if ( v34 )
          {
            src = v34;
            v98[0] = v35;
LABEL_44:
            n = 0;
            *v34 = 0;
            if ( src != v98 )
              operator delete(src);
            v111 = 0;
            if ( (_DWORD)v107 && HIDWORD(v107) )
              sub_152DFA0((__int64 *)&ptr, (unsigned __int64)&v107);
            if ( dest != &v110.m128_u16[4] )
              operator delete(dest);
            if ( v104 != &v105.m128_u16[4] )
              operator delete(v104);
            sub_AEA040((__int64)&ptr);
            return sub_15209A0(&v95);
          }
        }
        v34 = v98;
        src = v98;
        goto LABEL_44;
      }
      v43 = v90;
      v44 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v44, v43->m128i_i32);
      v45 = j__strlen("attribute");
      if ( (unsigned __int8)sub_1569A00(a1, 22, 1625, "attribute", v45) )
        return sub_15209A0(&v95);
      v46 = j__strlen("(");
      if ( (unsigned __int8)sub_1569A00(a1, 22, 1625, "(", v46) )
        return sub_15209A0(&v95);
      v47 = *(_WORD *)(a1 + 32);
      if ( v47 != 3 )
      {
        v94 = v11 + 24;
        if ( v47 != 5 )
        {
LABEL_99:
          sub_1564840(&ptr, a1, v90, 1839);
          sub_AEA040((__int64)&ptr);
          return sub_15209A0(&v95);
        }
        while ( 1 )
        {
          v48 = *(__int64 **)(a1 + 8);
          v49 = v90;
          v91 = *(__int64 **)(a1 + 24);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v48, v49->m128i_i32);
          v50 = *(_DWORD *)(a1 + 40);
          if ( *(_WORD *)(a1 + 32) == 22 )
          {
            HIBYTE(v70) = BYTE1(v93) & 0xFC;
            LOBYTE(v70) = -15;
            LOWORD(v93) = v70;
            sub_148F5D0(a1, v91, v50, (__int64 *)v11, nullptr, 0, a2, a3, 0, v93, 0);
          }
          else
          {
            v51 = *(_QWORD *)(v11 + 40);
            v92 = *(_DWORD *)(a1 + 40);
            v52 = sub_15D92D0(v51, 80);
            v53 = sub_F963B0(v91, 0, 1);
            v54 = v91;
            v55 = v4;
            *(_WORD *)(v52 + 32) = v53;
            v56 = v3;
            BYTE1(v55) = BYTE1(v4) & 0xFC;
            v57 = v92;
            BYTE1(v56) = BYTE1(v3) & 0xFC;
            *(_QWORD *)v52 = v54;
            v4 = v55;
            LOBYTE(v54) = BYTE1(v3) & 0xFC;
            v3 = v56;
            LOBYTE(v56) = *(_BYTE *)(v52 + 35);
            *(_QWORD *)(v52 + 56) &= 0x7F800000uLL;
            *(_DWORD *)(v52 + 24) = v57;
            *(_DWORD *)(v52 + 28) = v57;
            *(_BYTE *)(v52 + 34) = -15;
            *(_QWORD *)(v52 + 8) = 0;
            *(_QWORD *)(v52 + 16) = 0;
            *(_BYTE *)(v52 + 35) = (2 * ((v55 & 0x200) != 0)) | (unsigned __int8)v54 & 1 | v56 & 0xFC;
            *(_QWORD *)(v52 + 40) = 0;
            *(_QWORD *)(v52 + 48) = 0;
            v58 = sub_15D7D80(v52);
            v59 = *(unsigned int *)(v11 + 60);
            *(_QWORD *)(v52 + 72) = v58;
            v60 = *(unsigned int *)(v11 + 56);
            if ( v60 + 1 > v59 )
            {
              sub_2237220(v11 + 48, v11 + 64, v60 + 1, 8);
              v60 = *(unsigned int *)(v11 + 56);
            }
            *(_QWORD *)(*(_QWORD *)(v11 + 48) + 8 * v60) = v52;
            v61 = *(unsigned int *)(v11 + 16);
            v62 = *(unsigned int *)(v11 + 20);
            ++*(_DWORD *)(v11 + 56);
            if ( v61 + 1 > v62 )
            {
              sub_2237220(v11 + 8, v94, v61 + 1, 8);
              v61 = *(unsigned int *)(v11 + 16);
            }
            *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * v61) = v52;
            ++*(_DWORD *)(v11 + 16);
          }
          if ( *(_WORD *)(a1 + 32) != 66 )
            break;
          v71 = *(__int64 **)(a1 + 8);
          v72 = v90;
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v71, v72->m128i_i32);
          if ( *(_WORD *)(a1 + 32) != 5 )
            goto LABEL_99;
        }
        v63 = j__strlen(&byte_22F0C30);
        if ( (unsigned __int8)sub_1569A00(a1, 23, 14, &byte_22F0C30, v63) )
          return sub_15209A0(&v95);
        v64 = j__strlen(&byte_22F0C30);
        if ( (unsigned __int8)sub_1569A00(a1, 23, 14, &byte_22F0C30, v64) )
          return sub_15209A0(&v95);
        goto LABEL_12;
      }
      v75 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v75 + 760) )
      {
        *(_BYTE *)(v75 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v75 + 48) + 6LL) = 1;
      }
      v76 = *(_QWORD *)(a1 + 96);
      *(_WORD *)(a1 + 32) = 1;
      sub_1736F00(*(_QWORD *)(v76 + 656), 1, 0, 0);
      return sub_15209A0(&v95);
    }
    else
    {
      v41 = *(_DWORD *)(a1 + 20);
      v42 = v89;
      if ( !v41 )
        v41 = v89;
      *(_DWORD *)(a1 + 40) = v41;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      return sub_1670290(*(_QWORD *)(a1 + 96), v42, *(_QWORD *)(v6 + 16));
    }
  }
}
