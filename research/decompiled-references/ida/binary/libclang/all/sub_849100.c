__int64 __fastcall sub_849100(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 v10; // r13
  unsigned int v11; // r12d
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r14
  int v16; // ebx
  __int64 v17; // rdi
  unsigned __int8 v18; // bl
  unsigned int v19; // esi
  __int64 v20; // rax
  unsigned __int8 **v21; // rax
  __int64 v22; // r8
  unsigned __int8 **v23; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rsi
  unsigned int v27; // eax
  unsigned __int8 **v28; // rax
  unsigned __int8 **v29; // rbx
  unsigned __int64 v30; // r10
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r15
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r10
  __int64 v41; // rdi
  __int64 v42; // r15
  __int64 v43; // rdi
  __int64 v44; // r11
  __int64 v45; // rsi
  unsigned int v46; // r14d
  __int64 v47; // r12
  unsigned int v48; // ebx
  __int64 v49; // rdx
  _DWORD *v50; // r8
  const __m128i *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // eax
  char v57; // al
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  unsigned __int64 v61; // r13
  __int64 v62; // r15
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rbx
  unsigned __int64 *v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rax
  unsigned int v74; // eax
  __int64 v75; // rsi
  unsigned int v76; // ebx
  unsigned __int8 **v77; // rbp
  unsigned __int64 v78; // rax
  __m128i v79; // xmm0
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int8 **v82; // rax
  __int64 v83; // [rsp-10h] [rbp-108h]
  int v84; // [rsp+0h] [rbp-F8h]
  unsigned __int8 v85; // [rsp+0h] [rbp-F8h]
  __int64 v86; // [rsp+8h] [rbp-F0h]
  __int64 v87; // [rsp+8h] [rbp-F0h]
  __int64 v88; // [rsp+8h] [rbp-F0h]
  __int64 v89; // [rsp+8h] [rbp-F0h]
  __int64 v90; // [rsp+8h] [rbp-F0h]
  int v91; // [rsp+8h] [rbp-F0h]
  __int64 v92; // [rsp+8h] [rbp-F0h]
  __int64 v93; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v94; // [rsp+8h] [rbp-F0h]
  __int64 v95; // [rsp+8h] [rbp-F0h]
  __int64 v96; // [rsp+8h] [rbp-F0h]
  int v97; // [rsp+10h] [rbp-E8h]
  __int64 v98; // [rsp+10h] [rbp-E8h]
  __int64 v99; // [rsp+10h] [rbp-E8h]
  __int64 v100; // [rsp+10h] [rbp-E8h]
  __int64 v101; // [rsp+10h] [rbp-E8h]
  __int64 v102; // [rsp+18h] [rbp-E0h]
  __int64 v103; // [rsp+18h] [rbp-E0h]
  int v104; // [rsp+18h] [rbp-E0h]
  __int64 v105; // [rsp+18h] [rbp-E0h]
  __int64 v106; // [rsp+20h] [rbp-D8h]
  __int64 v107; // [rsp+28h] [rbp-D0h]
  __m128i v108; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+40h] [rbp-B8h]
  char v110; // [rsp+48h] [rbp-B0h]
  __int64 v111; // [rsp+58h] [rbp-A0h]
  void *ptr; // [rsp+60h] [rbp-98h]
  __int64 v113; // [rsp+68h] [rbp-90h]
  _BYTE v114[136]; // [rsp+70h] [rbp-88h] BYREF

  while ( 1 )
  {
    v8 = a4;
    v9 = a4;
    v10 = (__int64)a5;
    v11 = a3;
    v13 = *a5;
    v84 = a6;
    v14 = a7;
    v15 = a8;
    if ( v13 <= 1 )
    {
      if ( a7 )
      {
        v21 = (unsigned __int8 **)sub_A2E1A0(a2, a3, 2288, 0);
        v22 = a7;
        v23 = v21;
        if ( v21 )
        {
          sub_823450(v21, 1);
          sub_8356A0(v23, a7, 0xAu);
          v22 = a7;
        }
        sub_A2DD70(a2, *(unsigned int *)(v22 + 24), 2284);
      }
      else
      {
        v28 = (unsigned __int8 **)sub_A2E1A0(a2, a3, 2288, 0);
        v29 = v28;
        if ( v28 )
        {
          sub_823450(v28, 0);
          sub_8356A0(v29, v9, 8u);
        }
      }
      return 0;
    }
    v16 = a1;
    v17 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v17 + 16) == 7
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7
      && (v20 = sub_B0D320(v17), v13 = *(_DWORD *)v10, v8 = v9, v14 = a7, (v17 = v20) != 0) )
    {
      v8 = *(_QWORD *)(v17 + 32);
    }
    if ( v13 == 9 )
      break;
    if ( v13 != 11 )
    {
      if ( v13 == 10 )
      {
        v88 = v8;
        v36 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
        v37 = v88;
        v38 = v36;
        if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 57 <= 2 )
        {
          v98 = v88;
          v89 = v36;
          sub_8226C0((__int64 *)(*(_QWORD *)(v36 + 104) + 96LL), *(_QWORD *)(v36 + 104));
          v39 = v89;
          v40 = v98;
          v41 = *(_QWORD *)(v89 + 128);
          if ( (*(_BYTE *)(v41 + 24) & 1) != 0 )
          {
            v100 = v89;
            v93 = v40;
            v66 = sub_7A2E20(v41);
            v39 = v100;
            v40 = v93;
            v42 = v66;
          }
          else
          {
            v42 = *(_QWORD *)(v41 + 24);
          }
          v103 = v40;
          v90 = v39;
          sub_8226C0((__int64 *)(*(_QWORD *)(v39 + 104) + 96LL), *(_QWORD *)(v39 + 104));
          v99 = v42 + 24LL * *(unsigned int *)(*(_QWORD *)(v90 + 128) + 16LL);
          sub_8226C0((__int64 *)(*(_QWORD *)(v90 + 104) + 96LL), *(_QWORD *)(v90 + 104));
          v38 = v90;
          v37 = v103;
          v43 = *(_QWORD *)(v90 + 128);
          if ( (*(_BYTE *)(v43 + 24) & 1) != 0 )
          {
            v105 = v90;
            v95 = v37;
            v80 = sub_7A2E20(v43);
            v37 = v95;
            v38 = v105;
            v44 = v80;
          }
          else
          {
            v44 = *(_QWORD *)(v43 + 24);
          }
          v45 = 0;
          if ( v44 != v99 )
          {
            v106 = v37;
            v46 = v11;
            v47 = v44;
            v107 = v38;
            v104 = v16;
            v48 = 0;
            while ( 1 )
            {
              v49 = *(_QWORD *)(v10 + 8);
              v50 = (_DWORD *)(v49 + 56LL * v48);
              v51 = *(const __m128i **)(v47 + 16);
              if ( *v50 <= 1u )
                break;
              v52 = v51->m128i_i64[0];
              v53 = *(_QWORD *)(v51->m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
              v54 = *(_QWORD *)(v53 + 8);
              if ( (v54 & 7) != 0 || (v55 = v53 & 0xFFFFFFF0, (v54 & 8) != 0) )
              {
                v91 = v49 + 56 * v48;
                v56 = sub_B0CF30(v52, v45);
                LODWORD(v50) = v91;
                v55 = v56 & 0xFFFFFFF0;
              }
              v57 = sub_849100(v104, a2, v46, v55, (_DWORD)v50, v84, 0, a8);
              v45 = v83;
              if ( !v57 )
                return 0;
              ++v48;
              v47 += 24;
              if ( v99 == v47 )
              {
                v37 = v106;
                v38 = v107;
                v11 = v46;
                v15 = a8;
                v16 = v104;
                goto LABEL_50;
              }
            }
            v108 = _mm_unpacklo_epi64(_mm_loadl_epi64(v51), (__m128i)(unsigned __int64)&v51->m128i_u64[1]);
            v74 = sub_B1E2D0(&v108);
            v75 = v74;
            v76 = v74;
            v77 = (unsigned __int8 **)sub_A2E1A0(a2, v74, 2289, 0);
            v108.m128i_i64[0] = **(_QWORD **)(v47 + 16);
            v78 = sub_6B3060(&v108, v75);
            if ( v77 )
            {
              sub_8356A0(v77, v78, 8u);
              v79 = _mm_cvtsi32_si128(*(_DWORD *)(v47 + 4));
              v108.m128i_i8[8] = 1;
              v108.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v76), v79).m128i_u64[0];
              sub_839C90((__int64 *)v77, v108.m128i_i64);
            }
            return 0;
          }
        }
LABEL_50:
        v92 = v37;
        v58 = sub_7868A0(v38);
        v8 = v92;
        v59 = v58;
        if ( v58 )
        {
          v60 = v10;
          v61 = v59;
          v62 = v60;
LABEL_52:
          if ( (*(_BYTE *)(v61 + 68) & 1) == 0 || (v63 = *(_QWORD *)(v61 + 40), v63 > 7) || (_DWORD)v63 )
          {
            v64 = v61;
            if ( *(char *)(v61 + 29) < 0 )
              v64 = sub_77A0C0(v61);
            if ( *(_DWORD *)(v64 + 68) <= 0xFu )
            {
              v101 = v64;
              sub_78B660(v64);
              v64 = v101;
            }
            if ( !(unsigned __int8)sub_849100(
                                     v16,
                                     a2,
                                     v11,
                                     *(_QWORD *)(v61 + 48),
                                     (unsigned int)*(_QWORD *)(v62 + 8)
                                   + 56 * ((*(_DWORD *)(v64 + 68) >> 4) + *(_DWORD *)(v62 + 16) - 1),
                                     v84,
                                     v61,
                                     v15) )
              return 0;
          }
          while ( 1 )
          {
            v65 = *(_QWORD *)(v61 + 8);
            v61 = v65 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v65 <= 7 )
              break;
            if ( (*(_BYTE *)(v61 + 28) & 0x7Fu) - 47 <= 2 )
              goto LABEL_52;
          }
          v8 = v92;
          v10 = v62;
        }
        v13 = *(_DWORD *)v10;
      }
      if ( v13 == 7 )
      {
        if ( !v16 )
        {
          v26 = *(_QWORD **)(a2 + 16);
          v86 = v8;
          v113 = 0x800000000LL;
          v110 |= 1u;
          v108 = 0u;
          v109 = 0;
          v111 = 0;
          ptr = v114;
          v114[65] = 0;
          sub_824D00((__int64)&v108, v26, v10);
          v27 = sub_848460(a2, v11, v86, &v108, v84, v15);
          v19 = v27;
          if ( ptr != v114 )
          {
            v85 = v27;
            free(ptr);
            return v85;
          }
          return v19;
        }
        return 1;
      }
      v18 = v16 ^ 1;
      if ( (v18 & (v13 == 12)) == 0 )
        return 1;
      v94 = v18 & (v13 == 12);
      v67 = sub_6A37B0(v10);
      v19 = v94;
      v68 = v67;
      if ( !v67 || (*(_BYTE *)(v67 + 28) & 0x7Fu) - 33 > 3 )
        return v19;
      v19 = v94;
      if ( !(unsigned __int8)sub_789EF0(v67) )
      {
        if ( v84 != 1 )
        {
          v19 = v94;
          if ( !sub_83DE60(v68) && (*(_BYTE *)(v68 + 29) & 1) != 0 )
          {
            v69 = sub_79A2B0(v68);
            v70 = *v69;
            v71 = *((unsigned int *)v69 + 2);
            v72 = v70 + 8 * v71;
            if ( v70 >= v72 )
            {
              v73 = v70 + 8 * v71;
              if ( v70 != v72 )
              {
                do
                {
                  if ( *(_WORD *)(*(_QWORD *)v73 + 32LL) == 191 )
                  {
                    v72 = v73;
                    v73 = v70;
                    goto LABEL_77;
                  }
                  v73 += 8LL;
                }
                while ( v70 != v73 );
                v72 = v73;
              }
            }
            else
            {
              v73 = v70;
              do
              {
                if ( *(_WORD *)(*(_QWORD *)v73 + 32LL) == 191 )
                  break;
                v73 += 8LL;
              }
              while ( v72 != v73 );
            }
LABEL_77:
            LOBYTE(v19) = v73 == v72;
          }
        }
        return v19;
      }
      v82 = (unsigned __int8 **)sub_A2E1A0(a2, v11, 2164, 0);
      if ( v82 )
        sub_823450(v82, 0);
      sub_A2DD70(a2, *(unsigned int *)(v68 + 24), 105);
      return 0;
    }
    v25 = *(_QWORD *)(v10 + 8);
    if ( !v25 )
      return 1;
    a4 = *(_QWORD *)(v25 + 48);
    a6 = v84;
    a7 = *(_QWORD *)(v10 + 8);
    a5 = *(unsigned int **)(v10 + 16);
LABEL_21:
    a3 = v11;
    a1 = v16;
  }
  v30 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  v31 = *(_QWORD *)v30;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v30 + 16LL) - 2) > 4u )
  {
    v96 = v14;
    v81 = sub_B0D320(v31);
    v14 = v96;
    v31 = v81;
  }
  v32 = *(unsigned int *)(v10 + 16);
  a4 = *(_QWORD *)(v31 + 32);
  if ( !(_DWORD)v32 )
  {
LABEL_34:
    if ( *(_DWORD *)(v10 + 20) == (_DWORD)v32 )
      return 1;
    a6 = v84;
    a7 = v14;
    a5 = (unsigned int *)(*(_QWORD *)(v10 + 8) + 56 * v32);
    goto LABEL_21;
  }
  v87 = *(_QWORD *)(v31 + 32);
  v97 = v16;
  v102 = 56 * v32;
  v33 = 0;
  v34 = v14;
  while ( 1 )
  {
    v35 = sub_849100(v97, a2, v11, v87, (unsigned int)v33 + (unsigned int)*(_QWORD *)(v10 + 8), v84, v34, a8);
    if ( !(_BYTE)v35 )
      return v35;
    v33 += 56;
    if ( v102 == v33 )
    {
      a4 = v87;
      v16 = v97;
      v14 = v34;
      v32 = *(unsigned int *)(v10 + 16);
      goto LABEL_34;
    }
  }
}

