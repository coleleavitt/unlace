__int64 __fastcall sub_85210(const void ***a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  const void **v6; // rdi
  unsigned __int8 *v7; // rax
  __int64 v8; // rax
  const void **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // bp
  __int64 v16; // rax
  __int64 v17; // rsi
  __m128i *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  __m128i *v23; // rbx
  __m128i *v24; // rbx
  __int64 v25; // rcx
  const char *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r15d
  int v29; // r12d
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  const void **v34; // rdx
  char v35; // r12
  char *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // eax
  _QWORD *v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r15
  unsigned int v57; // eax
  unsigned int v58; // ebp
  int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // eax
  unsigned int v65; // r12d
  unsigned int v66; // ebp
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rsi
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbp
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rdx
  _QWORD *v80; // rdi
  __int64 v81; // rax
  __m128i *v82; // rax
  __int64 v83; // r14
  __m128i *v84; // rax
  unsigned __int64 v85; // r14
  __m128i *v86; // rbx
  int v87; // [rsp+4h] [rbp-D4h]
  int v88; // [rsp+4h] [rbp-D4h]
  unsigned int v89; // [rsp+10h] [rbp-C8h]
  __int64 v90; // [rsp+10h] [rbp-C8h]
  unsigned int v91; // [rsp+18h] [rbp-C0h]
  __int64 v92; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v93; // [rsp+28h] [rbp-B0h]
  const char *v94; // [rsp+40h] [rbp-98h] BYREF
  __int64 v95; // [rsp+48h] [rbp-90h]
  __int64 v96[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v97; // [rsp+80h] [rbp-58h] BYREF
  __int128 v98; // [rsp+88h] [rbp-50h]
  unsigned __int64 v99; // [rsp+98h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  v3 = a2;
  v4 = unpack_dd();
  if ( (unsigned int)(v4 - 70) <= 0xF )
  {
    *(_DWORD *)(a2 + 8) = v4;
    v6 = *a1;
    if ( *((_DWORD *)a1 + 4) > 3u && (v7 = (unsigned __int8 *)*v6, *v6 < (*a1)[1]) )
    {
      v15 = *v7;
      v10 = -1;
      *v6 = v7 + 1;
      if ( v15 > 1u || (v8 = unpack_dq(), v9 = a1[1], v10 = (__int64)*v9 + ~v8, v15) )
      {
LABEL_7:
        *(_QWORD *)a2 = v10;
        v11 = (__int64)(*a1)[1];
        v12 = unpack_dd();
        *(_DWORD *)(v3 + 12) = v12;
        if ( *((_DWORD *)a1 + 4) > 2u )
          *(_DWORD *)(v3 + 12) = v12 - 1;
        switch ( *(_DWORD *)(v3 + 8) )
        {
          case 'F':
          case 'N':
          case 'O':
            return 1;
          case 'G':
            v18 = (__m128i *)qalloc_or_throw(24, v11, v13, v14);
            v18[1].m128i_i64[0] = 0;
            *v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
            *(_QWORD *)(v3 + 24) = v18;
            return sub_867C0(a1, v18, "cblock.size");
          case 'H':
          case 'P':
          case 'T':
            v16 = j__qalloc_or_throw(64, v11, v13, v14);
            *(_QWORD *)v16 = -1;
            v17 = v16;
            *(_QWORD *)(v16 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v16 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v16 + 40) = 0;
            *(_QWORD *)(v16 + 48) = 0;
            *(_DWORD *)(v16 + 56) = 0;
            *(_OWORD *)(v16 + 24) = 0;
            *(_QWORD *)(v3 + 24) = v16;
            return sub_86090(a1, v17);
          case 'I':
            v34 = *a1;
            v35 = 0;
            v36 = (char *)**a1;
            if ( v36 < (*a1)[1] )
              v35 = *v36++;
            *v34 = v36;
            v37 = j__qalloc_or_throw(80, v11, (__int64)v34, v14);
            *(_QWORD *)v37 = -1;
            *(_QWORD *)(v37 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v37 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v37 + 40) = 0;
            *(_QWORD *)(v37 + 48) = 0;
            *(_QWORD *)(v37 + 56) = 0;
            *(_OWORD *)(v37 + 24) = 0;
            *(_OWORD *)(v37 + 64) = 0;
            *(_QWORD *)(v3 + 24) = v37;
            v39 = (_QWORD *)j__qalloc_or_throw(32, v11, v38, 0xFFFFFFFF00000000LL);
            *v39 = -1;
            v39[1] = -4294967226LL;
            v39[2] = 0xFFFFFFFFLL;
            v39[3] = 0;
            *(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) = v39;
            v40 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL);
            if ( (unsigned __int8)sub_85210(a1, v40) )
            {
              if ( v35 )
                goto LABEL_46;
              v43 = (_QWORD *)j__qalloc_or_throw(32, v40, v41, v42);
              *v43 = -1;
              v43[1] = -4294967226LL;
              v43[2] = 0xFFFFFFFFLL;
              v43[3] = 0;
              *(_QWORD *)(*(_QWORD *)(v3 + 24) + 72LL) = v43;
              if ( (unsigned __int8)sub_85210(a1, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 72LL)) )
                goto LABEL_46;
            }
            return 0;
          case 'J':
            v44 = j__qalloc_or_throw(200, v11, v13, v14);
            *(_QWORD *)v44 = -1;
            *(_DWORD *)(v44 + 8) = 0;
            *(_QWORD *)(v44 + 12) = -1;
            *(_QWORD *)(v44 + 40) = 0;
            *(_QWORD *)(v44 + 48) = 0;
            *(_DWORD *)(v44 + 56) = 0;
            *(_QWORD *)(v44 + 64) = 0;
            *(_QWORD *)(v44 + 72) = -1;
            *(_DWORD *)(v44 + 80) = 0;
            *(_QWORD *)(v44 + 84) = -1;
            *(_QWORD *)(v44 + 112) = 0;
            *(_QWORD *)(v44 + 120) = 0;
            *(_DWORD *)(v44 + 128) = 0;
            *(_QWORD *)(v44 + 136) = -1;
            *(_QWORD *)(v44 + 144) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v44 + 152) = 0xFFFFFFFFLL;
            *(_QWORD *)(v44 + 176) = 0;
            *(_QWORD *)(v44 + 184) = 0;
            *(_DWORD *)(v44 + 192) = 0;
            *(_OWORD *)(v44 + 24) = 0;
            *(_OWORD *)(v44 + 96) = 0;
            *(_OWORD *)(v44 + 160) = 0;
            *(_QWORD *)(v3 + 24) = v44;
            if ( (unsigned __int8)sub_86090(a1, v44 + 72) )
            {
              v11 = *(_QWORD *)(v3 + 24) + 136LL;
              if ( (unsigned __int8)sub_86090(a1, v11) )
                goto LABEL_49;
            }
            return 0;
          case 'K':
            v48 = j__qalloc_or_throw(72, v11, v13, v14);
            v46 = 0xFFFFFFFF00000000LL;
            *(_QWORD *)v48 = -1;
            *(_QWORD *)(v48 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v48 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v48 + 40) = 0;
            *(_QWORD *)(v48 + 48) = 0;
            *(_QWORD *)(v48 + 56) = 0;
            *(_QWORD *)(v48 + 64) = 0;
            *(_OWORD *)(v48 + 24) = 0;
            *(_QWORD *)(v3 + 24) = v48;
LABEL_49:
            v47 = (_QWORD *)j__qalloc_or_throw(32, v11, v45, v46);
            *v47 = -1;
            v47[1] = -4294967226LL;
            v47[2] = 0xFFFFFFFFLL;
            goto LABEL_50;
          case 'L':
            v49 = j__qalloc_or_throw(72, v11, v13, v14);
            *(_QWORD *)(v49 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)v49 = -1;
            *(_QWORD *)(v49 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v49 + 40) = 0;
            *(_QWORD *)(v49 + 48) = 0;
            *(_QWORD *)(v49 + 56) = 0;
            *(_QWORD *)(v49 + 64) = 0;
            *(_OWORD *)(v49 + 24) = 0;
            *(_QWORD *)(v3 + 24) = v49;
            v47 = (_QWORD *)j__qalloc_or_throw(32, v11, v50, 0xFFFFFFFF00000000LL);
            *v47 = -1;
            v47[1] = -4294967226LL;
            v47[2] = 0xFFFFFFFFLL;
LABEL_50:
            v47[3] = 0;
            *(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) = v47;
            if ( (unsigned __int8)sub_85210(a1, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL)) )
              goto LABEL_46;
            return 0;
          case 'M':
            v51 = j__qalloc_or_throw(136, v11, v13, v14);
            *(_QWORD *)(v51 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v51 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)v51 = -1;
            *(_QWORD *)(v51 + 40) = 0;
            *(_QWORD *)(v51 + 48) = 0;
            *(_DWORD *)(v51 + 56) = 0;
            *(_QWORD *)(v51 + 64) = 0;
            *(_QWORD *)(v51 + 72) = 0;
            *(_QWORD *)(v51 + 80) = 0;
            *(_QWORD *)(v51 + 104) = 0;
            *(_QWORD *)(v51 + 112) = 0;
            *(_OWORD *)(v51 + 24) = 0;
            *(_OWORD *)(v51 + 88) = 0;
            *(_OWORD *)(v51 + 120) = 0;
            *(_QWORD *)(v3 + 24) = v51;
            sub_817D0(a1, v51 + 64);
            v52 = unpack_dd();
            if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 < (unsigned __int64)v52 )
              return 0;
            if ( !v52 )
              goto LABEL_46;
            v88 = 0;
            v91 = v52;
            v90 = v3;
            while ( 2 )
            {
              v53 = *(_QWORD **)(v90 + 24);
              v54 = v53[15];
              v55 = v53[14];
              if ( v53[16] < (unsigned __int64)(v54 + 1) )
              {
                v74 = qvector_reserve((__int64)(v53 + 14), v55, v54 + 1, 56);
                v54 = v53[15];
                v53[14] = v74;
                v55 = v74;
              }
              v56 = v55 + 56 * v54;
              *(_QWORD *)v56 = -1;
              *(_QWORD *)(v56 + 12) = -1;
              *(_DWORD *)(v56 + 8) = 70;
              *(_OWORD *)(v56 + 24) = 0;
              *(_OWORD *)(v56 + 40) = 0;
              ++v53[15];
              v57 = unpack_dd();
              v58 = v57;
              if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 < (unsigned __int64)v57 )
                return 0;
              *(_QWORD *)(v56 + 40) = 0;
              if ( *(_QWORD *)(v56 + 48) < (unsigned __int64)v57 )
              {
                *(_QWORD *)(v56 + 32) = qvector_reserve(v56 + 32, *(_QWORD *)(v56 + 32), v57, 8);
              }
              else if ( !v57 )
              {
                goto LABEL_73;
              }
              v59 = 0;
              do
              {
                v60 = *(_QWORD *)(v56 + 40);
                v61 = *(_QWORD *)(v56 + 32);
                v62 = v60 + 1;
                if ( *(_QWORD *)(v56 + 48) < (unsigned __int64)(v60 + 1) )
                {
                  v63 = qvector_reserve(v56 + 32, v61, v62, 8);
                  v60 = *(_QWORD *)(v56 + 40);
                  *(_QWORD *)(v56 + 32) = v63;
                  v61 = v63;
                  v62 = v60 + 1;
                }
                *(_QWORD *)(v56 + 40) = v62;
                ++v59;
                *(_QWORD *)(v61 + 8 * v60) = unpack_dq();
              }
              while ( v58 != v59 );
LABEL_73:
              if ( !(unsigned __int8)sub_85210(a1, v56) )
                return 0;
              if ( ++v88 == v91 )
              {
                v3 = v90;
LABEL_46:
                v17 = *(_QWORD *)(v3 + 24);
                return sub_86090(a1, v17);
              }
              continue;
            }
          case 'Q':
            *(_QWORD *)(v3 + 24) = j__qalloc_or_throw(4, v11, v13, v14);
            **(_DWORD **)(v3 + 24) = unpack_dd();
            return 1;
          case 'R':
            v97 = nullptr;
            v98 = 0;
            v64 = unpack_dd();
            v65 = v64;
            if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 < (unsigned __int64)v64 )
              goto LABEL_76;
            *(_QWORD *)&v98 = 0;
            if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)v64 )
            {
              v97 = (_QWORD *)qvector_reserve((__int64)&v97, (__int64)v97, v64, 8);
            }
            else if ( !v64 )
            {
              goto LABEL_76;
            }
            v66 = 0;
            do
            {
              v68 = unpack_dq();
              v70 = v97;
              v71 = (__int64)*a1[1] + v68;
              v72 = v98;
              v73 = v98 + 1;
              if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)(v98 + 1) )
              {
                v97 = (_QWORD *)qvector_reserve((__int64)&v97, (__int64)v97, v73, 8);
                v70 = v97;
                v72 = v98;
              }
              v70[v72] = v71;
              ++v66;
              v67 = v98 + 1;
              *(_QWORD *)&v98 = v98 + 1;
            }
            while ( v66 < v65 );
            if ( v67 )
            {
              v75 = qalloc_or_throw(24, (__int64)v70, v73, v69);
              v76 = *v97;
              *(_QWORD *)v75 = 0;
              *(_OWORD *)(v75 + 8) = 0;
              v77 = qvector_reserve(v75, 0, 1, 8);
              v78 = *(_QWORD *)(v75 + 8);
              *(_QWORD *)v75 = v77;
              *(_QWORD *)(v77 + 8 * v78) = v76;
              ++*(_QWORD *)(v75 + 8);
              v79 = v97;
              *(_QWORD *)(v3 + 24) = v75;
              v80 = *(_QWORD **)v75;
              *(_QWORD *)v75 = v79;
              v81 = *(_QWORD *)(v75 + 16);
              *(_OWORD *)(v75 + 8) = v98;
              v97 = v80;
              *((_QWORD *)&v98 + 1) = v81;
              if ( v80 )
              {
                *(_QWORD *)&v98 = 0;
                qfree((__int64)v80);
              }
              return 1;
            }
LABEL_76:
            if ( v97 )
            {
              *(_QWORD *)&v98 = 0;
              qfree((__int64)v97);
            }
            return 0;
          case 'S':
            v19 = qalloc_or_throw(72, v11, v13, v14);
            *(_BYTE *)(v19 + 64) = 0;
            v20 = v19;
            *(_QWORD *)(v19 + 16) = 0;
            *(__m128i *)v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
            *(_QWORD *)(v19 + 24) = 0;
            *(_OWORD *)(v19 + 32) = 0;
            *(_OWORD *)(v19 + 48) = 0;
            *(_QWORD *)(v3 + 24) = v19;
            if ( !(unsigned __int8)sub_867C0(a1, v19, "try.size") )
              return 1;
            *(_BYTE *)(v20 + 64) = (unsigned int)unpack_dd() != 0;
            *(_QWORD *)(v20 + 48) = (unsigned int)unpack_dd();
            *(_QWORD *)(v20 + 56) = (unsigned int)unpack_dd();
            v89 = unpack_dd();
            if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 < (unsigned __int64)v89 )
              return 0;
            v21 = *(_QWORD *)(v20 + 40);
            if ( v21 < v89 )
            {
              v84 = (__m128i *)qvector_reserve(v20 + 24, 0, v89, 48);
              v85 = *(_QWORD *)(v20 + 40);
              *(_QWORD *)(v20 + 40) = v21;
              v86 = v84;
              v21 = v85;
              sub_85110(v84, *(const __m128i **)(v20 + 24), *(_QWORD *)(v20 + 32));
              qfree(*(_QWORD *)(v20 + 24));
              *(_QWORD *)(v20 + 24) = v86;
              *(_QWORD *)(v20 + 40) = v85;
            }
            else if ( !v89 )
            {
              return 1;
            }
            v87 = 0;
            while ( 2 )
            {
              v22 = *(_QWORD *)(v20 + 32);
              if ( v21 < v22 + 1 )
              {
                v82 = (__m128i *)qvector_reserve(v20 + 24, 0, v22 + 1, 48);
                v83 = *(_QWORD *)(v20 + 40);
                *(_QWORD *)(v20 + 40) = v21;
                v23 = v82;
                sub_85110(v82, *(const __m128i **)(v20 + 24), *(_QWORD *)(v20 + 32));
                qfree(*(_QWORD *)(v20 + 24));
                *(_QWORD *)(v20 + 24) = v23;
                v22 = *(_QWORD *)(v20 + 32);
                *(_QWORD *)(v20 + 40) = v83;
              }
              else
              {
                v23 = *(__m128i **)(v20 + 24);
              }
              v24 = &v23[3 * v22];
              v24[1].m128i_i64[0] = 0;
              v24[1].m128i_i64[1] = 0;
              *v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
              v24[2] = 0;
              ++*(_QWORD *)(v20 + 32);
              v92 = 0;
              v93 = 0;
              sub_6B870(&v92);
              sub_81980((__int64)&v97, "block.size");
              sub_83210((__int64)&v94, (__int64)&v92, (__int64)&v97, v25);
              if ( v97 )
              {
                *(_QWORD *)&v98 = 0;
                qfree((__int64)v97);
              }
              v26 = s1;
              if ( v95 )
                v26 = v94;
              if ( (unsigned __int8)sub_867C0(a1, v24, v26) )
              {
                sub_81980((__int64)v96, "catchexps.size");
                sub_83210((__int64)&v97, (__int64)&v92, (__int64)v96, v27);
                v28 = unpack_dd();
                if ( v97 )
                {
                  *(_QWORD *)&v98 = 0;
                  qfree((__int64)v97);
                }
                if ( v96[0] )
                {
                  v96[1] = 0;
                  qfree(v96[0]);
                }
                if ( (_BYTE *)(*a1)[1] - (_BYTE *)**a1 >= (unsigned __int64)v28 )
                {
                  v29 = 0;
                  if ( !v28 )
                  {
LABEL_87:
                    if ( v94 )
                    {
                      v95 = 0;
                      qfree((__int64)v94);
                    }
                    if ( v92 )
                    {
                      *(_QWORD *)&v93 = 0;
                      qfree(v92);
                    }
                    if ( ++v87 == v89 )
                      return 1;
                    v21 = *(_QWORD *)(v20 + 40);
                    continue;
                  }
                  while ( 1 )
                  {
                    v31 = v24[2].m128i_i64[0];
                    v32 = v24[1].m128i_i64[1];
                    if ( v24[2].m128i_i64[1] < (unsigned __int64)(v31 + 1) )
                    {
                      v33 = qvector_reserve((__int64)&v24[1].m128i_i64[1], v32, v31 + 1, 88);
                      v24[1].m128i_i64[1] = v33;
                      v31 = v24[2].m128i_i64[0];
                      v32 = v33;
                    }
                    v30 = v32 + 88 * v31;
                    *(_QWORD *)(v30 + 8) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)v30 = -1;
                    *(_QWORD *)(v30 + 16) = 0xFFFFFFFFLL;
                    *(_QWORD *)(v30 + 40) = 0;
                    *(_QWORD *)(v30 + 48) = 0;
                    *(_DWORD *)(v30 + 56) = 0;
                    *(_QWORD *)(v30 + 64) = 0;
                    *(_OWORD *)(v30 + 24) = 0;
                    *(_OWORD *)(v30 + 72) = 0;
                    ++v24[2].m128i_i64[0];
                    sub_7BE00((__int64 *)(v30 + 64), *a1, (unsigned __int64)(*a1)[1]);
                    if ( !(unsigned __int8)sub_86090(a1, v30) )
                      break;
                    if ( ++v29 == v28 )
                      goto LABEL_87;
                  }
                }
              }
              break;
            }
            if ( v94 )
            {
              v95 = 0;
              qfree((__int64)v94);
            }
            if ( v92 )
            {
              *(_QWORD *)&v93 = 0;
              qfree(v92);
            }
            return 0;
          default:
            *(_DWORD *)(v3 + 8) = 70;
            if ( !under_debugger )
              sub_383060(52348);
            BUG();
        }
      }
    }
    else
    {
      v8 = unpack_dq();
      v9 = a1[1];
    }
    v10 = (__int64)*v9 + v8;
    goto LABEL_7;
  }
  return 0;
}
