__int64 __fastcall sub_80650(char ***a1, __int64 a2)
{
  unsigned __int64 *v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int8 *v9; // rax
  __int64 v10; // rax
  char **v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int8 v14; // bp
  __int64 v15; // rax
  __int64 v16; // rsi
  __m128i *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __m128i *v22; // rbx
  __m128i *v23; // rbx
  const char *v24; // rdx
  unsigned int v25; // r15d
  int v26; // r12d
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  char v31; // r12
  char *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // eax
  _QWORD *v42; // rbp
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // r15
  unsigned int v46; // eax
  unsigned int v47; // ebp
  int v48; // ebx
  __int64 v49; // rcx
  const void **v50; // r14
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rax
  const void **v54; // rdi
  unsigned int v55; // eax
  const void **v56; // rdi
  unsigned int v57; // r12d
  unsigned int v58; // ebp
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rsi
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rbp
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // rdx
  _QWORD *v69; // rdx
  _QWORD *v70; // rdi
  __int64 v71; // rax
  __m128i *v72; // rax
  __int64 v73; // r14
  __m128i *v74; // rax
  unsigned __int64 v75; // r14
  __m128i *v76; // rbx
  int v77; // [rsp+4h] [rbp-D4h]
  int v78; // [rsp+4h] [rbp-D4h]
  unsigned int v79; // [rsp+10h] [rbp-C8h]
  __int64 v80; // [rsp+10h] [rbp-C8h]
  unsigned int v81; // [rsp+18h] [rbp-C0h]
  __int64 v82; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v83; // [rsp+28h] [rbp-B0h]
  const char *v84; // [rsp+40h] [rbp-98h] BYREF
  __int64 v85; // [rsp+48h] [rbp-90h]
  _QWORD v86[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v87; // [rsp+80h] [rbp-58h] BYREF
  __int128 v88; // [rsp+88h] [rbp-50h]
  unsigned __int64 v89; // [rsp+98h] [rbp-40h]

  v3 = (unsigned __int64 *)*a1;
  v89 = __readfsqword(0x28u);
  v4 = a2;
  v5 = unpack_dd(v3);
  if ( (unsigned int)(v5 - 70) <= 0xF )
  {
    *(_DWORD *)(a2 + 8) = v5;
    v7 = (unsigned __int64 *)*a1;
    v8 = (unsigned __int64)(*a1)[1];
    if ( *((_DWORD *)a1 + 4) > 3u && (v9 = (unsigned __int8 *)*v7, *v7 < v8) )
    {
      v14 = *v9;
      v12 = -1;
      *v7 = (unsigned __int64)(v9 + 1);
      if ( v14 > 1u || (v10 = unpack_dq(*a1, (*a1)[1]), v11 = a1[1], v12 = (__int64)&(*v11)[~v10], v14) )
      {
LABEL_7:
        *(_QWORD *)v4 = v12;
        v13 = unpack_dd(*a1);
        *(_DWORD *)(v4 + 12) = v13;
        if ( *((_DWORD *)a1 + 4) > 2u )
          *(_DWORD *)(v4 + 12) = v13 - 1;
        switch ( *(_DWORD *)(v4 + 8) )
        {
          case 'F':
          case 'N':
          case 'O':
            return 1;
          case 'G':
            v17 = (__m128i *)qalloc_or_throw(24);
            v17[1].m128i_i64[0] = 0;
            *v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
            *(_QWORD *)(v4 + 24) = v17;
            return sub_81C00(a1, v17, "cblock.size");
          case 'H':
          case 'P':
          case 'T':
            v15 = j__qalloc_or_throw(64);
            *(_QWORD *)v15 = -1;
            v16 = v15;
            *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v15 + 40) = 0;
            *(_QWORD *)(v15 + 48) = 0;
            *(_DWORD *)(v15 + 56) = 0;
            *(_OWORD *)(v15 + 24) = 0;
            *(_QWORD *)(v4 + 24) = v15;
            return sub_814D0(a1, v16);
          case 'I':
            v31 = 0;
            v32 = **a1;
            if ( v32 < (*a1)[1] )
              v31 = *v32++;
            **a1 = v32;
            v33 = j__qalloc_or_throw(80);
            *(_QWORD *)v33 = -1;
            *(_QWORD *)(v33 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v33 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v33 + 40) = 0;
            *(_QWORD *)(v33 + 48) = 0;
            *(_QWORD *)(v33 + 56) = 0;
            *(_OWORD *)(v33 + 24) = 0;
            *(_OWORD *)(v33 + 64) = 0;
            *(_QWORD *)(v4 + 24) = v33;
            v34 = (_QWORD *)j__qalloc_or_throw(32);
            *v34 = -1;
            v34[1] = -4294967226LL;
            v34[2] = 0xFFFFFFFFLL;
            v34[3] = 0;
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) = v34;
            if ( (unsigned __int8)sub_80650(a1, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL)) )
            {
              if ( v31 )
                goto LABEL_46;
              v35 = (_QWORD *)j__qalloc_or_throw(32);
              *v35 = -1;
              v35[1] = -4294967226LL;
              v35[2] = 0xFFFFFFFFLL;
              v35[3] = 0;
              *(_QWORD *)(*(_QWORD *)(v4 + 24) + 72LL) = v35;
              if ( (unsigned __int8)sub_80650(a1, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 72LL)) )
                goto LABEL_46;
            }
            return 0;
          case 'J':
            v36 = j__qalloc_or_throw(200);
            *(_QWORD *)v36 = -1;
            *(_DWORD *)(v36 + 8) = 0;
            *(_QWORD *)(v36 + 12) = -1;
            *(_QWORD *)(v36 + 40) = 0;
            *(_QWORD *)(v36 + 48) = 0;
            *(_DWORD *)(v36 + 56) = 0;
            *(_QWORD *)(v36 + 64) = 0;
            *(_QWORD *)(v36 + 72) = -1;
            *(_DWORD *)(v36 + 80) = 0;
            *(_QWORD *)(v36 + 84) = -1;
            *(_QWORD *)(v36 + 112) = 0;
            *(_QWORD *)(v36 + 120) = 0;
            *(_DWORD *)(v36 + 128) = 0;
            *(_QWORD *)(v36 + 136) = -1;
            *(_QWORD *)(v36 + 144) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v36 + 152) = 0xFFFFFFFFLL;
            *(_QWORD *)(v36 + 176) = 0;
            *(_QWORD *)(v36 + 184) = 0;
            *(_DWORD *)(v36 + 192) = 0;
            *(_OWORD *)(v36 + 24) = 0;
            *(_OWORD *)(v36 + 96) = 0;
            *(_OWORD *)(v36 + 160) = 0;
            *(_QWORD *)(v4 + 24) = v36;
            if ( (unsigned __int8)sub_814D0(a1, v36 + 72)
              && (unsigned __int8)sub_814D0(a1, *(_QWORD *)(v4 + 24) + 136LL) )
            {
              goto LABEL_49;
            }
            return 0;
          case 'K':
            v38 = j__qalloc_or_throw(72);
            *(_QWORD *)v38 = -1;
            *(_QWORD *)(v38 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v38 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v38 + 40) = 0;
            *(_QWORD *)(v38 + 48) = 0;
            *(_QWORD *)(v38 + 56) = 0;
            *(_QWORD *)(v38 + 64) = 0;
            *(_OWORD *)(v38 + 24) = 0;
            *(_QWORD *)(v4 + 24) = v38;
LABEL_49:
            v37 = (_QWORD *)j__qalloc_or_throw(32);
            *v37 = -1;
            v37[1] = -4294967226LL;
            v37[2] = 0xFFFFFFFFLL;
            goto LABEL_50;
          case 'L':
            v39 = j__qalloc_or_throw(72);
            *(_QWORD *)(v39 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)v39 = -1;
            *(_QWORD *)(v39 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v39 + 40) = 0;
            *(_QWORD *)(v39 + 48) = 0;
            *(_QWORD *)(v39 + 56) = 0;
            *(_QWORD *)(v39 + 64) = 0;
            *(_OWORD *)(v39 + 24) = 0;
            *(_QWORD *)(v4 + 24) = v39;
            v37 = (_QWORD *)j__qalloc_or_throw(32);
            *v37 = -1;
            v37[1] = -4294967226LL;
            v37[2] = 0xFFFFFFFFLL;
LABEL_50:
            v37[3] = 0;
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) = v37;
            if ( (unsigned __int8)sub_80650(a1, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL)) )
              goto LABEL_46;
            return 0;
          case 'M':
            v40 = j__qalloc_or_throw(136);
            *(_QWORD *)(v40 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v40 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)v40 = -1;
            *(_QWORD *)(v40 + 40) = 0;
            *(_QWORD *)(v40 + 48) = 0;
            *(_DWORD *)(v40 + 56) = 0;
            *(_QWORD *)(v40 + 64) = 0;
            *(_QWORD *)(v40 + 72) = 0;
            *(_QWORD *)(v40 + 80) = 0;
            *(_QWORD *)(v40 + 104) = 0;
            *(_QWORD *)(v40 + 112) = 0;
            *(_OWORD *)(v40 + 24) = 0;
            *(_OWORD *)(v40 + 88) = 0;
            *(_OWORD *)(v40 + 120) = 0;
            *(_QWORD *)(v4 + 24) = v40;
            sub_7CC10((const void ***)a1, v40 + 64);
            v41 = unpack_dd(*a1);
            if ( (*a1)[1] - **a1 < (unsigned __int64)v41 )
              return 0;
            if ( !v41 )
              goto LABEL_46;
            v78 = 0;
            v81 = v41;
            v80 = v4;
            while ( 2 )
            {
              v42 = *(_QWORD **)(v80 + 24);
              v43 = v42[15];
              v44 = v42[14];
              if ( v42[16] < (unsigned __int64)(v43 + 1) )
              {
                v64 = qvector_reserve(v42 + 14, v44, v43 + 1, 56);
                v43 = v42[15];
                v42[14] = v64;
                v44 = v64;
              }
              v45 = v44 + 56 * v43;
              *(_QWORD *)v45 = -1;
              *(_QWORD *)(v45 + 12) = -1;
              *(_DWORD *)(v45 + 8) = 70;
              *(_OWORD *)(v45 + 24) = 0;
              *(_OWORD *)(v45 + 40) = 0;
              ++v42[15];
              v46 = unpack_dd(*a1);
              v47 = v46;
              if ( (*a1)[1] - **a1 < (unsigned __int64)v46 )
                return 0;
              *(_QWORD *)(v45 + 40) = 0;
              if ( *(_QWORD *)(v45 + 48) < (unsigned __int64)v46 )
              {
                *(_QWORD *)(v45 + 32) = qvector_reserve(v45 + 32, *(_QWORD *)(v45 + 32), v46, 8);
              }
              else if ( !v46 )
              {
                goto LABEL_74;
              }
              v48 = 0;
              do
              {
                v49 = *(_QWORD *)(v45 + 40);
                v50 = (const void **)*a1;
                v51 = *(_QWORD *)(v45 + 32);
                v52 = v49 + 1;
                if ( *(_QWORD *)(v45 + 48) < (unsigned __int64)(v49 + 1) )
                {
                  v53 = qvector_reserve(v45 + 32, v51, v52, 8);
                  v49 = *(_QWORD *)(v45 + 40);
                  *(_QWORD *)(v45 + 32) = v53;
                  v51 = v53;
                  v52 = v49 + 1;
                }
                *(_QWORD *)(v45 + 40) = v52;
                ++v48;
                *(_QWORD *)(v51 + 8 * v49) = unpack_dq(v50, v50[1]);
              }
              while ( v47 != v48 );
LABEL_74:
              if ( !(unsigned __int8)sub_80650(a1, v45) )
                return 0;
              if ( ++v78 == v81 )
              {
                v4 = v80;
LABEL_46:
                v16 = *(_QWORD *)(v4 + 24);
                return sub_814D0(a1, v16);
              }
              continue;
            }
          case 'Q':
            *(_QWORD *)(v4 + 24) = j__qalloc_or_throw(4);
            **(_DWORD **)(v4 + 24) = unpack_dd(*a1);
            return 1;
          case 'R':
            v54 = (const void **)*a1;
            v87 = nullptr;
            v88 = 0;
            v55 = unpack_dd(v54);
            v56 = (const void **)*a1;
            v57 = v55;
            if ( (*a1)[1] - **a1 < (unsigned __int64)v55 )
              goto LABEL_77;
            *(_QWORD *)&v88 = 0;
            if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)v55 )
            {
              v87 = (_QWORD *)qvector_reserve(&v87, v87, v55, 8);
              v56 = (const void **)*a1;
            }
            else if ( !v55 )
            {
              goto LABEL_77;
            }
            v58 = 0;
            while ( 1 )
            {
              v60 = unpack_dq(v56, v56[1]);
              v61 = v87;
              v62 = (__int64)&(*a1[1])[v60];
              v63 = v88;
              if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v88 + 1) )
              {
                v87 = (_QWORD *)qvector_reserve(&v87, v87, v88 + 1, 8);
                v61 = v87;
                v63 = v88;
              }
              v61[v63] = v62;
              ++v58;
              v59 = v88 + 1;
              *(_QWORD *)&v88 = v88 + 1;
              if ( v58 >= v57 )
                break;
              v56 = (const void **)*a1;
            }
            if ( v59 )
            {
              v65 = qalloc_or_throw(24);
              v66 = *v87;
              *(_QWORD *)v65 = 0;
              *(_OWORD *)(v65 + 8) = 0;
              v67 = qvector_reserve(v65, 0, 1, 8);
              v68 = *(_QWORD *)(v65 + 8);
              *(_QWORD *)v65 = v67;
              *(_QWORD *)(v67 + 8 * v68) = v66;
              ++*(_QWORD *)(v65 + 8);
              v69 = v87;
              *(_QWORD *)(v4 + 24) = v65;
              v70 = *(_QWORD **)v65;
              *(_QWORD *)v65 = v69;
              v71 = *(_QWORD *)(v65 + 16);
              *(_OWORD *)(v65 + 8) = v88;
              v87 = v70;
              *((_QWORD *)&v88 + 1) = v71;
              if ( v70 )
              {
                *(_QWORD *)&v88 = 0;
                qfree(v70);
              }
              return 1;
            }
LABEL_77:
            if ( v87 )
            {
              *(_QWORD *)&v88 = 0;
              qfree(v87);
            }
            return 0;
          case 'S':
            v18 = qalloc_or_throw(72);
            *(_BYTE *)(v18 + 64) = 0;
            v19 = v18;
            *(_QWORD *)(v18 + 16) = 0;
            *(__m128i *)v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
            *(_QWORD *)(v18 + 24) = 0;
            *(_OWORD *)(v18 + 32) = 0;
            *(_OWORD *)(v18 + 48) = 0;
            *(_QWORD *)(v4 + 24) = v18;
            if ( !(unsigned __int8)sub_81C00(a1, v18, "try.size") )
              return 1;
            *(_BYTE *)(v19 + 64) = (unsigned int)unpack_dd(*a1) != 0;
            *(_QWORD *)(v19 + 48) = (unsigned int)unpack_dd(*a1);
            *(_QWORD *)(v19 + 56) = (unsigned int)unpack_dd(*a1);
            v79 = unpack_dd(*a1);
            if ( (*a1)[1] - **a1 < (unsigned __int64)v79 )
              return 0;
            v20 = *(_QWORD *)(v19 + 40);
            if ( v20 < v79 )
            {
              v74 = (__m128i *)qvector_reserve(v19 + 24, 0, v79, 48);
              v75 = *(_QWORD *)(v19 + 40);
              *(_QWORD *)(v19 + 40) = v20;
              v76 = v74;
              v20 = v75;
              sub_80550(v74, *(const __m128i **)(v19 + 24), *(_QWORD *)(v19 + 32));
              qfree(*(_QWORD *)(v19 + 24));
              *(_QWORD *)(v19 + 24) = v76;
              *(_QWORD *)(v19 + 40) = v75;
            }
            else if ( !v79 )
            {
              return 1;
            }
            v77 = 0;
            while ( 2 )
            {
              v21 = *(_QWORD *)(v19 + 32);
              if ( v20 < v21 + 1 )
              {
                v72 = (__m128i *)qvector_reserve(v19 + 24, 0, v21 + 1, 48);
                v73 = *(_QWORD *)(v19 + 40);
                *(_QWORD *)(v19 + 40) = v20;
                v22 = v72;
                sub_80550(v72, *(const __m128i **)(v19 + 24), *(_QWORD *)(v19 + 32));
                qfree(*(_QWORD *)(v19 + 24));
                *(_QWORD *)(v19 + 24) = v22;
                v21 = *(_QWORD *)(v19 + 32);
                *(_QWORD *)(v19 + 40) = v73;
              }
              else
              {
                v22 = *(__m128i **)(v19 + 24);
              }
              v23 = &v22[3 * v21];
              v23[1].m128i_i64[0] = 0;
              v23[1].m128i_i64[1] = 0;
              *v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
              v23[2] = 0;
              ++*(_QWORD *)(v19 + 32);
              v82 = 0;
              v83 = 0;
              sub_66DF0(&v82, (__int64)"catch[%d].", v77);
              sub_7CDC0((__int64)&v87, "block.size");
              sub_7E650((__int64)&v84, (__int64)&v82, (__int64)&v87);
              if ( v87 )
              {
                *(_QWORD *)&v88 = 0;
                qfree(v87);
              }
              v24 = s1;
              if ( v85 )
                v24 = v84;
              if ( (unsigned __int8)sub_81C00(a1, v23, v24) )
              {
                sub_7CDC0((__int64)v86, "catchexps.size");
                sub_7E650((__int64)&v87, (__int64)&v82, (__int64)v86);
                v25 = unpack_dd(*a1);
                if ( v87 )
                {
                  *(_QWORD *)&v88 = 0;
                  qfree(v87);
                }
                if ( v86[0] )
                {
                  v86[1] = 0;
                  qfree(v86[0]);
                }
                if ( (*a1)[1] - **a1 >= (unsigned __int64)v25 )
                {
                  v26 = 0;
                  if ( !v25 )
                  {
LABEL_88:
                    if ( v84 )
                    {
                      v85 = 0;
                      qfree(v84);
                    }
                    if ( v82 )
                    {
                      *(_QWORD *)&v83 = 0;
                      qfree(v82);
                    }
                    if ( ++v77 == v79 )
                      return 1;
                    v20 = *(_QWORD *)(v19 + 40);
                    continue;
                  }
                  while ( 1 )
                  {
                    v28 = v23[2].m128i_i64[0];
                    v29 = v23[1].m128i_i64[1];
                    if ( v23[2].m128i_i64[1] < (unsigned __int64)(v28 + 1) )
                    {
                      v30 = qvector_reserve(&v23[1].m128i_u64[1], v29, v28 + 1, 88);
                      v23[1].m128i_i64[1] = v30;
                      v28 = v23[2].m128i_i64[0];
                      v29 = v30;
                    }
                    v27 = v29 + 88 * v28;
                    *(_QWORD *)(v27 + 8) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)v27 = -1;
                    *(_QWORD *)(v27 + 16) = 0xFFFFFFFFLL;
                    *(_QWORD *)(v27 + 40) = 0;
                    *(_QWORD *)(v27 + 48) = 0;
                    *(_DWORD *)(v27 + 56) = 0;
                    *(_QWORD *)(v27 + 64) = 0;
                    *(_OWORD *)(v27 + 24) = 0;
                    *(_OWORD *)(v27 + 72) = 0;
                    ++v23[2].m128i_i64[0];
                    sub_77380((__int64 *)(v27 + 64), (const void **)*a1, (unsigned __int64)(*a1)[1]);
                    if ( !(unsigned __int8)sub_814D0(a1, v27) )
                      break;
                    if ( ++v26 == v25 )
                      goto LABEL_88;
                  }
                }
              }
              break;
            }
            if ( v84 )
            {
              v85 = 0;
              qfree(v84);
            }
            if ( v82 )
            {
              *(_QWORD *)&v83 = 0;
              qfree(v82);
            }
            return 0;
          default:
            *(_DWORD *)(v4 + 8) = 70;
            if ( !under_debugger )
              sub_37CFE0(52348);
            BUG();
        }
      }
    }
    else
    {
      v10 = unpack_dq(v7, v8);
      v11 = a1[1];
    }
    v12 = (__int64)&(*v11)[v10];
    goto LABEL_7;
  }
  return 0;
}
