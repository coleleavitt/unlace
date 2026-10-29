__int64 __fastcall sub_ABAB70(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v5; // rax
  _BYTE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 *v10; // r12
  int v11; // esi
  __int64 v12; // r9
  int v13; // esi
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // r14
  size_t v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 *v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __m128i *v30; // rax
  __m128i *v31; // rdx
  void *v32; // rbx
  __int64 v33; // rbx
  const __m128i *v34; // rbp
  __int64 v35; // r14
  const __m128i *v36; // r13
  unsigned __int64 v37; // rax
  const __m128i *v38; // rbp
  __int64 *v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  size_t v43; // r12
  __int64 *v44; // r14
  size_t v45; // rdx
  int v46; // eax
  __int64 v47; // rbx
  __int64 *v48; // rbx
  __int64 *v49; // rdi
  const void *v50; // rbx
  size_t v51; // rbp
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // r14
  __int64 *v57; // rax
  __int64 *v58; // rax
  __int64 *v59; // rdx
  __int64 *v60; // rcx
  __int64 **v61; // rbp
  unsigned int v62; // eax
  bool v63; // zf
  __int64 v64; // r9
  _DWORD *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  int v68; // esi
  __int64 v69; // r8
  __int64 v70; // rdx
  char *v71; // rax
  void *v72; // r8
  int v73; // edi
  int v74; // esi
  void *v75; // rdx
  int v76; // ecx
  char *v77; // rdi
  __int64 v78; // r12
  __int64 v79; // r14
  __int64 v80; // r15
  void **v81; // rbx
  void **v82; // rbp
  __int64 v83; // r13
  __int64 v85; // rbp
  unsigned int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // ecx
  _QWORD *v90; // r13
  unsigned int v91; // eax
  __int64 v92; // rax
  unsigned int v93; // r9d
  _QWORD *v94; // r8
  _QWORD *v95; // rcx
  unsigned int v96; // eax
  unsigned __int64 v97; // r8
  __int64 v98; // rdi
  unsigned __int8 v99; // [rsp+8h] [rbp-3D0h]
  const void *src; // [rsp+10h] [rbp-3C8h]
  unsigned int srca; // [rsp+10h] [rbp-3C8h]
  _BYTE *srcb; // [rsp+10h] [rbp-3C8h]
  __int64 *v103; // [rsp+18h] [rbp-3C0h]
  __int64 m128i_i64; // [rsp+28h] [rbp-3B0h]
  __int64 *v106; // [rsp+40h] [rbp-398h]
  __int64 v107; // [rsp+48h] [rbp-390h]
  unsigned int v110; // [rsp+64h] [rbp-374h]
  char *v111; // [rsp+68h] [rbp-370h]
  __int64 v112; // [rsp+70h] [rbp-368h]
  unsigned __int64 v113; // [rsp+78h] [rbp-360h]
  __int64 v114; // [rsp+80h] [rbp-358h]
  _QWORD *v115; // [rsp+88h] [rbp-350h]
  __int64 v116; // [rsp+90h] [rbp-348h] BYREF
  __int64 v117; // [rsp+98h] [rbp-340h]
  void *v118; // [rsp+A0h] [rbp-338h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-330h]
  void *v120[2]; // [rsp+C0h] [rbp-318h] BYREF
  _BYTE v121[16]; // [rsp+D0h] [rbp-308h] BYREF
  __int64 (__fastcall **v122)(); // [rsp+E0h] [rbp-2F8h] BYREF
  int v123; // [rsp+E8h] [rbp-2F0h]
  __int128 v124; // [rsp+F0h] [rbp-2E8h]
  __int64 v125; // [rsp+100h] [rbp-2D8h]
  char v126; // [rsp+108h] [rbp-2D0h]
  int v127; // [rsp+10Ch] [rbp-2CCh]
  void **v128; // [rsp+110h] [rbp-2C8h]
  __int64 (__fastcall **v129)(); // [rsp+120h] [rbp-2B8h] BYREF
  int v130; // [rsp+128h] [rbp-2B0h]
  __int128 v131; // [rsp+130h] [rbp-2A8h]
  __int64 v132; // [rsp+140h] [rbp-298h]
  char v133; // [rsp+148h] [rbp-290h]
  int v134; // [rsp+14Ch] [rbp-28Ch]
  void **p_ptr; // [rsp+150h] [rbp-288h]
  void *v136; // [rsp+160h] [rbp-278h] BYREF
  size_t v137[2]; // [rsp+168h] [rbp-270h]
  _BYTE v138[264]; // [rsp+178h] [rbp-260h] BYREF
  void *ptr; // [rsp+280h] [rbp-158h] BYREF
  _BYTE n[336]; // [rsp+288h] [rbp-150h] BYREF

  v5 = *(_QWORD *)(a1 + 2320);
  v116 = a2;
  v117 = a3;
  if ( (*(_BYTE *)(v5 + 16) & 1) == 0 )
  {
    LODWORD(v6) = 1;
    if ( *(char *)(v5 + 15) >= 0 )
      return (unsigned int)v6;
  }
  v7 = *(unsigned int *)(a1 + 23376);
  v8 = *(_QWORD *)(a1 + 23360);
  if ( (_DWORD)v7 )
  {
    v9 = (v7 - 1) & (((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4));
    v10 = (__int64 *)(v8 + 40LL * v9);
    v11 = *((_DWORD *)v10 + 2);
    v12 = *v10;
    if ( v11 != (_DWORD)v117 || v116 != v12 )
    {
      if ( !v11 && !v12 )
        goto LABEL_13;
      v13 = 1;
      while ( 1 )
      {
        v9 = (v7 - 1) & (v13 + v9);
        v10 = (__int64 *)(v8 + 40LL * v9);
        v14 = *((_DWORD *)v10 + 2);
        v15 = *v10;
        if ( v14 == (_DWORD)v117 && v116 == v15 )
          break;
        ++v13;
        if ( !v14 && !v15 )
          goto LABEL_13;
      }
    }
    if ( v10 != (__int64 *)(v8 + 40 * v7) )
    {
      if ( a4 )
      {
        ptr = &n[8];
        sub_A57A70(&ptr, a4, (__int64)&a4[a5]);
        v85 = *(_QWORD *)n;
        v6 = ptr;
      }
      else
      {
        v6 = &n[8];
        v85 = 0;
        *(_QWORD *)n = 0;
        ptr = &n[8];
        n[8] = 0;
      }
      v86 = sub_2244B30(v6, v85);
      LOBYTE(v6) = (unsigned int)sub_2244E60(v10 + 2, v6, v85, v86) != -1;
      if ( ptr != &n[8] )
        operator delete(ptr);
      return (unsigned int)v6;
    }
  }
LABEL_13:
  v118 = nullptr;
  v114 = sub_A64930(a1, 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DF0);
  v16 = sub_A647E0((_QWORD *)a1);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v116, v117);
  if ( v17 )
  {
    v18 = *(_QWORD *)v17;
    v19 = 0;
    v113 = v116 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v116 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) == 0x24 )
      v19 = v116 & 0xFFFFFFFFFFFFFFF8LL;
    v112 = v18 + 56LL * *(unsigned int *)(v17 + 8);
    if ( v18 != v112 )
    {
      while ( 1 )
      {
        v123 = 2;
        v136 = v138;
        *(__m128i *)v137 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v122 = &off_2BEBEE0;
        v126 = 0;
        v127 = 1;
        v125 = 0;
        v124 = 0;
        v128 = &v136;
        sub_227B8B0(&v122, 0, 0, 0);
        if ( v19 )
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)v114 + 88LL))(
            v114,
            v19,
            v116 & 7,
            v18,
            1,
            &v122);
        else
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)v114 + 80LL))(
            v114,
            v113,
            v18,
            1,
            &v122);
        v130 = 2;
        ptr = &n[16];
        *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
        v129 = &off_2BEBEE0;
        v133 = 0;
        v134 = 1;
        v132 = 0;
        v131 = 0;
        p_ptr = &ptr;
        sub_227B8B0(&v129, 0, 0, 0);
        if ( v19 )
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64, __int64, _QWORD, __int64 (__fastcall ***)()))(*(_QWORD *)v114 + 88LL))(
            v114,
            v19,
            v116 & 7,
            v18,
            0,
            &v129);
        else
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, __int64 (__fastcall ***)()))(*(_QWORD *)v114 + 80LL))(
            v114,
            v113,
            v18,
            0,
            &v129);
        v20 = v137[0];
        src = v136;
        v21 = sub_2244B30(v136, v137[0]);
        v22 = (unsigned int)sub_2244CB0(&v118, src, v20, v21);
        v24 = (__int64 *)((char *)v118 + 8 * v22);
        if ( !*v24 )
          goto LABEL_120;
        if ( *v24 == -8 )
          break;
        sub_A86F80((__int64 **)v120, v24, 0);
        v25 = (__int64 *)v120[0];
LABEL_24:
        v26 = *v25;
        v120[0] = v121;
        sub_A57A70(v120, ptr, (__int64)ptr + *(_QWORD *)n);
        v27 = *(unsigned int *)(v26 + 16);
        v28 = v27 + 1;
        if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(v26 + 20) )
        {
          v97 = *(_QWORD *)(v26 + 8);
          v98 = v26 + 8;
          if ( v97 > (unsigned __int64)v120 || (srcb = *(_BYTE **)(v26 + 8), (unsigned __int64)v120 >= v97 + 32 * v27) )
          {
            sub_A8C1F0(v98, v28);
            v29 = *(_QWORD *)(v26 + 8);
            v27 = *(unsigned int *)(v26 + 16);
            v30 = (__m128i *)v120;
          }
          else
          {
            sub_A8C1F0(v98, v28);
            v27 = *(unsigned int *)(v26 + 16);
            v29 = *(_QWORD *)(v26 + 8);
            v30 = (__m128i *)(v29 + (char *)v120 - srcb);
          }
        }
        else
        {
          v29 = *(_QWORD *)(v26 + 8);
          v30 = (__m128i *)v120;
        }
        v31 = (__m128i *)(v29 + 32 * v27);
        v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
        if ( (__m128i *)v30->m128i_i64[0] == &v30[1] )
        {
          v31[1] = _mm_loadu_si128(v30 + 1);
        }
        else
        {
          v31->m128i_i64[0] = v30->m128i_i64[0];
          v31[1].m128i_i64[0] = v30[1].m128i_i64[0];
        }
        v31->m128i_i64[1] = v30->m128i_i64[1];
        v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
        v30->m128i_i64[1] = 0;
        v30[1].m128i_i8[0] = 0;
        ++*(_DWORD *)(v26 + 16);
        if ( v120[0] != v121 )
          operator delete(v120[0]);
        v129 = (__int64 (__fastcall **)())&unk_2C76288;
        sub_227B7A0(&v129);
        if ( ptr != &n[16] )
          free(ptr);
        v122 = (__int64 (__fastcall **)())&unk_2C76288;
        sub_227B7A0(&v122);
        if ( v136 == v138 )
        {
          v18 += 56;
          if ( v112 == v18 )
            goto LABEL_34;
        }
        else
        {
          free(v136);
          v18 += 56;
          if ( v112 == v18 )
            goto LABEL_34;
        }
      }
      --si128.m128i_i32[2];
LABEL_120:
      v111 = (char *)v118 + 8 * v22;
      v110 = v22;
      v92 = sub_22300B0(v20 + 89, 8, v22, v23, v24, v22);
      v93 = v110;
      v94 = v111;
      v95 = (_QWORD *)v92;
      if ( v20 )
      {
        v115 = (_QWORD *)v92;
        memcpy((void *)(v92 + 88), src, v20);
        v94 = v111;
        v93 = v110;
        v95 = v115;
      }
      *((_BYTE *)v95 + v20 + 88) = 0;
      v95[1] = v95 + 3;
      *v95 = v20;
      v95[2] = 0x200000000LL;
      *v94 = v95;
      ++si128.m128i_i32[1];
      v96 = sub_22450D0(&v118, v93);
      sub_A86F80((__int64 **)v120, (__int64 *)v118 + v96, 0);
      v25 = (__int64 *)v120[0];
      goto LABEL_24;
    }
  }
LABEL_34:
  v136 = nullptr;
  *(__m128i *)v137 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  sub_A86F80((__int64 **)&ptr, (__int64 *)v118, si128.m128i_i32[0] == 0);
  v32 = ptr;
  v103 = (__int64 *)ptr;
  sub_A86F80((__int64 **)&ptr, (__int64 *)v118 + si128.m128i_u32[0], 1);
  v106 = (__int64 *)ptr;
  if ( v32 != ptr )
  {
    v33 = *v103;
    while ( 1 )
    {
      v34 = *(const __m128i **)(v33 + 8);
      v35 = 2LL * *(unsigned int *)(v33 + 16);
      v36 = &v34[v35];
      if ( v34 != &v34[v35] )
      {
        _BitScanReverse64(&v37, (v35 * 16) >> 5);
        sub_ABA5D0(*(__m128i **)(v33 + 8), (__m128i *)&v34[v35], 2LL * (int)(63 - (v37 ^ 0x3F)));
        if ( (unsigned __int64)v35 > 32 )
        {
          sub_A69BD0((__int64)v34, v34 + 32);
          if ( v36 == &v34[32] )
            goto LABEL_64;
          v107 = v33;
          v38 = v34 + 33;
          m128i_i64 = (__int64)v36[1].m128i_i64;
          while ( 1 )
          {
            v39 = (__int64 *)v38;
            ptr = &n[8];
            if ( (const __m128i *)v38[-1].m128i_i64[0] == v38 )
            {
              *(__m128i *)&n[8] = _mm_loadu_si128(v38);
            }
            else
            {
              ptr = (void *)v38[-1].m128i_i64[0];
              *(_QWORD *)&n[8] = v38->m128i_i64[0];
            }
            *(_QWORD *)n = v38[-1].m128i_i64[1];
            v38[-1].m128i_i64[0] = (__int64)v38;
            v38[-1].m128i_i64[1] = 0;
            v38->m128i_i8[0] = 0;
            while ( 1 )
            {
              v42 = *(_QWORD *)n;
              v43 = *(v39 - 5);
              v44 = (__int64 *)*(v39 - 6);
              v45 = v43;
              if ( *(_QWORD *)n <= v43 )
                v45 = *(_QWORD *)n;
              if ( v45 )
              {
                v46 = memcmp(ptr, (const void *)*(v39 - 6), v45);
                if ( v46 )
                  goto LABEL_54;
              }
              v47 = v42 - v43;
              if ( v47 > 0x7FFFFFFF )
                goto LABEL_61;
              if ( v47 >= (__int64)0xFFFFFFFF80000000LL )
                break;
LABEL_55:
              v48 = v39 - 4;
              v49 = (__int64 *)*(v39 - 2);
              if ( v39 - 4 == v44 )
              {
                if ( v43 )
                {
                  if ( v43 == 1 )
                    *(_BYTE *)v49 = *(_BYTE *)v44;
                  else
                    memcpy(v49, v44, v43);
                  v43 = *(v44 - 1);
                  v49 = (__int64 *)v44[2];
                }
                v48[3] = v43;
                *((_BYTE *)v49 + v43) = 0;
                v49 = (__int64 *)*(v39 - 6);
              }
              else
              {
                if ( v49 == v39 )
                {
                  v87 = *(v39 - 5);
                  v48[2] = (__int64)v44;
                  v48[3] = v87;
                  *v39 = *(v39 - 4);
                }
                else
                {
                  v40 = *(v39 - 5);
                  v41 = *v39;
                  v48[2] = (__int64)v44;
                  v48[3] = v40;
                  *v39 = *(v39 - 4);
                  if ( v49 )
                  {
                    *(v39 - 6) = (__int64)v49;
                    *v48 = v41;
                    goto LABEL_46;
                  }
                }
                *(v39 - 6) = (__int64)(v39 - 4);
                v49 = v39 - 4;
              }
LABEL_46:
              *(v39 - 5) = 0;
              v39 -= 4;
              *(_BYTE *)v49 = 0;
            }
            v46 = v47;
LABEL_54:
            if ( v46 < 0 )
              goto LABEL_55;
LABEL_61:
            sub_A0AAD0((__int64)(v39 - 2), &ptr);
            if ( ptr != &n[8] )
            {
              operator delete(ptr);
              v38 += 2;
              if ( (const __m128i *)m128i_i64 == v38 )
                goto LABEL_63;
              continue;
            }
            v38 += 2;
            if ( (const __m128i *)m128i_i64 == v38 )
            {
LABEL_63:
              v33 = v107;
              goto LABEL_64;
            }
          }
        }
        sub_A69BD0((__int64)v34, &v34[v35]);
LABEL_64:
        v36 = *(const __m128i **)(v33 + 8);
      }
      v50 = (const void *)v36->m128i_i64[0];
      v51 = v36->m128i_u64[1];
      v52 = sub_2244B30(v36->m128i_i64[0], v51);
      v53 = (unsigned int)sub_2244CB0(&v136, v50, v51, v52);
      v56 = (__int64 *)((char *)v136 + 8 * v53);
      if ( !*v56 )
        goto LABEL_116;
      if ( *v56 == -8 )
        break;
      sub_A45C10((__int64 **)&ptr, v56, 0);
LABEL_68:
      v33 = v103[1];
      v57 = v103 + 1;
      if ( v33 != -8 && v33 )
      {
        ++v103;
        v60 = v57;
      }
      else
      {
        v58 = v103 + 2;
        do
        {
          do
          {
            v33 = *v58;
            v59 = v58++;
          }
          while ( !v33 );
        }
        while ( v33 == -8 );
        v103 = v59;
        v60 = v59;
      }
      if ( v106 == v60 )
        goto LABEL_75;
    }
    --LODWORD(v137[1]);
LABEL_116:
    srca = v53;
    v88 = sub_22300B0(v51 + 9, 8, v53, v53, v54, v55);
    v89 = srca;
    v90 = (_QWORD *)v88;
    if ( v51 )
    {
      memcpy((void *)(v88 + 8), v50, v51);
      v89 = srca;
    }
    *((_BYTE *)v90 + v51 + 8) = 0;
    *v90 = v51;
    *v56 = (__int64)v90;
    ++HIDWORD(v137[0]);
    v91 = sub_22450D0(&v136, v89);
    sub_A45C10((__int64 **)&ptr, (__int64 *)v136 + v91, 0);
    goto LABEL_68;
  }
LABEL_75:
  LODWORD(v6) = a5;
  v61 = (__int64 **)(a1 + 23360);
  v62 = sub_2244B30(a4, a5);
  LOBYTE(v6) = (unsigned int)sub_2244E60(&v136, a4, a5, v62) != -1;
  v63 = sub_A6F4F0((__int64 *)(a1 + 23360), &v116, &v129) == 0;
  v65 = v129;
  if ( v63 )
  {
    ptr = v129;
    v66 = *(unsigned int *)(a1 + 23376);
    v67 = (unsigned int)(*(_DWORD *)(a1 + 23368) + 1);
    v68 = 2 * v66;
    v69 = (unsigned int)(4 * v67);
    if ( (unsigned int)v69 < 3 * (int)v66 )
    {
      if ( (int)v66 - *(_DWORD *)(a1 + 23372) - (int)v67 > (unsigned int)v66 >> 3 )
        goto LABEL_80;
      v68 = *(_DWORD *)(a1 + 23376);
    }
    sub_AB3F80(v61, v68, v67, v66, v69, v64);
    sub_A6F4F0((__int64 *)v61, &v116, &ptr);
    LODWORD(v67) = *(_DWORD *)(a1 + 23368) + 1;
    v65 = ptr;
LABEL_80:
    *(_DWORD *)(a1 + 23368) = v67;
    if ( *(_QWORD *)v65 || v65[2] )
      --*(_DWORD *)(a1 + 23372);
    v70 = v116;
    *((_QWORD *)v65 + 3) = 0;
    *((_QWORD *)v65 + 4) = 0x800000000LL;
    *(_QWORD *)v65 = v70;
    LODWORD(v70) = v117;
    *((_QWORD *)v65 + 2) = 0;
    v65[2] = v70;
  }
  v71 = (char *)(v65 + 4);
  v72 = v136;
  v136 = nullptr;
  v73 = v137[0];
  v74 = HIDWORD(v137[0]);
  v137[0] = 0;
  *(_DWORD *)&n[12] = HIDWORD(v137[1]);
  v75 = *(void **)v71;
  v76 = v137[1];
  LODWORD(v137[1]) = 0;
  *(_QWORD *)v71 = v72;
  ptr = v75;
  LODWORD(v75) = *((_DWORD *)v71 + 2);
  *((_DWORD *)v71 + 2) = v73;
  *(_DWORD *)n = (_DWORD)v75;
  LODWORD(v75) = *((_DWORD *)v71 + 3);
  *((_DWORD *)v71 + 3) = v74;
  *(_DWORD *)&n[4] = (_DWORD)v75;
  LODWORD(v75) = *((_DWORD *)v71 + 4);
  *((_DWORD *)v71 + 4) = v76;
  *(_DWORD *)&n[8] = (_DWORD)v75;
  sub_A42760(&ptr);
  sub_A42760(&v136);
  if ( si128.m128i_i32[1] )
  {
    v77 = (char *)v118;
    if ( si128.m128i_i32[0] )
    {
      v99 = (unsigned __int8)v6;
      v78 = 0;
      v79 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
      do
      {
        v80 = *(_QWORD *)&v77[v78];
        if ( v80 != -8 && v80 )
        {
          v81 = *(void ***)(v80 + 8);
          v82 = &v81[4 * *(unsigned int *)(v80 + 16)];
          v83 = *(_QWORD *)v80 + 89LL;
          if ( v81 != v82 )
          {
            do
            {
              while ( 1 )
              {
                v82 -= 4;
                if ( *v82 == v82 + 2 )
                  break;
                operator delete(*v82);
                if ( v81 == v82 )
                  goto LABEL_92;
              }
            }
            while ( v81 != v82 );
LABEL_92:
            v82 = *(void ***)(v80 + 8);
          }
          if ( v82 != (void **)(v80 + 24) )
            free(v82);
          operator delete(v80, v83, 8);
          v77 = (char *)v118;
        }
        v78 += 8;
      }
      while ( v78 != v79 );
      LODWORD(v6) = v99;
    }
  }
  else
  {
    v77 = (char *)v118;
  }
  free(v77);
  if ( v114 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 16LL))(v114);
  return (unsigned int)v6;
}
