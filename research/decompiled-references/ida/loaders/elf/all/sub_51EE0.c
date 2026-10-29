unsigned __int64 __fastcall sub_51EE0(__int64 a1, __int64 a2, int *a3, __int64 a4, __m128i a5, __m128i a6)
{
  unsigned __int64 v6; // r13
  __int64 v8; // rbx
  const char *v9; // rsi
  const char *v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // r15
  char v21; // al
  const char *v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r9
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __m128i v37; // xmm0
  __int64 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r9
  const __m128i *v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r10
  __m128i v48; // xmm0
  __int64 v50; // r9
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp-10h] [rbp-1A0h]
  __m128i v55; // [rsp+0h] [rbp-190h] BYREF
  __m128i v56; // [rsp+10h] [rbp-180h] BYREF
  int v57; // [rsp+24h] [rbp-16Ch]
  __int64 v58; // [rsp+28h] [rbp-168h]
  const char *v59; // [rsp+30h] [rbp-160h] BYREF
  __int64 v60; // [rsp+38h] [rbp-158h]
  unsigned int v61; // [rsp+50h] [rbp-140h] BYREF
  int v62; // [rsp+54h] [rbp-13Ch]
  unsigned __int64 v63; // [rsp+58h] [rbp-138h]
  __m128i v64; // [rsp+60h] [rbp-130h] BYREF
  unsigned __int64 v65; // [rsp+70h] [rbp-120h]
  unsigned __int64 v66; // [rsp+78h] [rbp-118h]
  __int64 v67; // [rsp+80h] [rbp-110h]
  __m128i v68[2]; // [rsp+90h] [rbp-100h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-E0h]
  __int64 v70; // [rsp+B8h] [rbp-D8h]
  __int64 v71; // [rsp+C0h] [rbp-D0h]
  __int128 v72; // [rsp+C8h] [rbp-C8h]
  __int128 v73; // [rsp+D8h] [rbp-B8h]
  __int128 v74; // [rsp+E8h] [rbp-A8h]
  __int128 v75; // [rsp+F8h] [rbp-98h]
  __int128 v76; // [rsp+108h] [rbp-88h]
  __int128 v77; // [rsp+118h] [rbp-78h]
  __int128 v78; // [rsp+128h] [rbp-68h]
  __int128 v79; // [rsp+138h] [rbp-58h]
  unsigned __int64 v80; // [rsp+148h] [rbp-48h]
  unsigned __int64 v81; // [rsp+158h] [rbp-38h]

  v58 = a2;
  v6 = *(unsigned __int16 *)(a2 + 560);
  v56.m128i_i64[1] = (__int64)a3;
  v55.m128i_i64[1] = a4;
  v81 = __readfsqword(0x28u);
  v57 = *a3;
  if ( v6 > *(_QWORD *)(a2 + 40) )
    v6 = *(_QWORD *)(a2 + 40);
  if ( v6 )
  {
    v8 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( netnode_supval(*(_QWORD *)(a1 + 304), v8, &v61, 56, 112) != 56 )
        {
          if ( !byte_8C221 )
          {
            if ( (int)sub_343A0(1u, (__int64)"HIDECANCEL\nBad file structure or read error (line %d). Continue?", 4323) <= 0 )
              sub_EB70(0);
            byte_8C221 = 1;
          }
          goto LABEL_10;
        }
        v11 = *(_QWORD *)(v58 + 488) - *(_QWORD *)(v58 + 480);
        if ( v63 < v11 )
          break;
        if ( v61 == 1685382482 )
          goto LABEL_10;
        sub_47D00((__int64)&v59, v58, v61);
        v9 = &s1;
        if ( v60 )
          v9 = v59;
        sub_EAA0(
          (__int64)"Segment %s %a..%a is ignored, file does not contain it\n",
          v9,
          *(double *)a5.m128i_i64,
          *(double *)a6.m128i_i64);
        v10 = v59;
        if ( !v59 )
          goto LABEL_10;
LABEL_9:
        v60 = 0;
        qfree(v10);
LABEL_10:
        if ( v6 == ++v8 )
          return v81 - __readfsqword(0x28u);
      }
      v12 = v66;
      v13 = *(_QWORD *)(v58 + 456) & (v64.m128i_i64[0] + *(_QWORD *)(v58 + 608));
      v64.m128i_i64[0] = v13;
      switch ( v61 )
      {
        case 0u:
        case 2u:
          goto LABEL_10;
        case 1u:
        case 5u:
          goto LABEL_18;
        case 3u:
          if ( v57 > 0 )
            sub_45FA0(v58, (__int64 *)(a1 + 280), v63);
          goto LABEL_10;
        case 4u:
          if ( !v13 )
            goto LABEL_16;
          goto LABEL_18;
        case 6u:
          if ( !v8 )
            goto LABEL_10;
          goto LABEL_18;
        case 7u:
          v12 = v65;
          goto LABEL_18;
        default:
          if ( v61 > 0x60000005 )
          {
            if ( v61 - 1685382480 <= 2 )
              goto LABEL_10;
          }
          else if ( v61 > 0x60000002 )
          {
LABEL_16:
            v12 = v65;
            if ( v63 + v65 >= v11 )
              goto LABEL_10;
            v66 = v65;
            v62 = 4;
            a5 = _mm_unpacklo_epi64((__m128i)v63, (__m128i)v63);
            v64 = a5;
          }
LABEL_18:
          if ( v57 > 0 )
          {
            v14 = *(_QWORD *)(a1 + 176) + 1LL;
            *(_QWORD *)(a1 + 176) = v14;
            set_selector(v14, 0);
          }
          if ( !v66 )
            goto LABEL_10;
          a5 = _mm_load_si128(&v64);
          a6 = _mm_srli_si128(a5, 8);
          a5.m128i_i64[0] = _mm_or_si128(a5, a6).m128i_u64[0];
          if ( !a5.m128i_i64[0] && (v62 & 7) == 0 )
            goto LABEL_10;
          if ( v65 )
          {
            v33 = *(_QWORD *)(a1 + 592);
            if ( *(_QWORD *)(a1 + 600) < (unsigned __int64)(v33 + 1) )
            {
              v56.m128i_i64[0] = *(_QWORD *)(a1 + 600);
              v41 = qvector_reserve(a1 + 584, 0, v33 + 1, 24);
              v42 = *(_QWORD *)(a1 + 592);
              v43 = *(_QWORD *)(a1 + 600);
              v44 = *(const __m128i **)(a1 + 584);
              v45 = v41;
              *(_QWORD *)(a1 + 600) = v56.m128i_i64[0];
              v46 = v42 - 1;
              if ( v46 >= 0 )
              {
                v47 = v58;
                do
                {
                  v48 = _mm_loadu_si128(v44);
                  v41 += 24;
                  v44 = (const __m128i *)((char *)v44 + 24);
                  *(__m128i *)(v41 - 24) = v48;
                  *(_QWORD *)(v41 - 8) = v44[-1].m128i_i64[1];
                }
                while ( v46-- != 0 );
                v58 = v47;
                v44 = *(const __m128i **)(a1 + 584);
              }
              v55.m128i_i64[0] = v45;
              v56.m128i_i64[0] = v43;
              qfree(v44);
              v34 = v55.m128i_i64[0];
              v50 = v56.m128i_i64[0];
              v33 = *(_QWORD *)(a1 + 592);
              *(_QWORD *)(a1 + 584) = v55.m128i_i64[0];
              *(_QWORD *)(a1 + 600) = v50;
            }
            else
            {
              v34 = *(_QWORD *)(a1 + 584);
            }
            a5.m128i_i64[0] = 0;
            v35 = v34 + 24 * v33;
            *(_OWORD *)v35 = 0;
            v36 = v63;
            ++*(_QWORD *)(a1 + 592);
            *(_QWORD *)v35 = v36;
            *(_QWORD *)(v35 + 8) = v65 + v36;
            *(_QWORD *)(v35 + 16) = v64.m128i_i64[0];
          }
          if ( v57 <= 0 )
            goto LABEL_10;
          a5.m128i_i64[0] = 0;
          v80 = 0xFFFFFFFF00000000LL;
          v15 = *(_QWORD *)(v58 + 456);
          v68[1] = 0;
          v69 = 0;
          v72 = -1;
          v16 = (v15 & v64.m128i_i64[0]) + v12;
          v17 = *(_DWORD *)(v58 + 464) == 8;
          v68[0].m128i_i64[0] = v15 & v64.m128i_i64[0];
          v18 = 0x100000000LL;
          v70 = 0;
          v73 = -1;
          v74 = -1;
          v75 = -1;
          v76 = -1;
          v77 = -1;
          v78 = -1;
          v79 = -1;
          if ( v17 )
            v18 = -1;
          v19 = v16 & v15;
          v17 = v16 == v18;
          v20 = "CODE";
          if ( !v17 )
            v18 = v19;
          v68[0].m128i_i64[1] = v18;
          v71 = *(_QWORD *)(a1 + 176);
          BYTE3(v70) = *(_BYTE *)(v58 + 618) + 1;
          v21 = sub_40B90(v67, 0.0);
          BYTE1(v70) = 2;
          LOBYTE(v70) = v21;
          BYTE2(v70) = v62 & 7;
          if ( (v62 & 1) == 0 )
          {
            v20 = "DATA";
            if ( !v65 )
              v20 = "BSS";
          }
          sub_47D00((__int64)&v59, v58, v61);
          v22 = &s1;
          if ( v60 )
            v22 = v59;
          if ( (*(_WORD *)(a1 + 520) & 0x2008) == 8 )
          {
            v56.m128i_i64[0] = (__int64)v22;
            v29 = sub_343A0(
                    1u,
                    (__int64)"AUTOHIDE DATABASE\nLoad section '%s' at %a..%a?",
                    v22,
                    0.0,
                    *(double *)a6.m128i_i64);
            v22 = (const char *)v56.m128i_i64[0];
            if ( v29 < 0 )
              sub_EB70(0, "AUTOHIDE DATABASE\nLoad section '%s' at %a..%a?", v30, v31, v32, v56.m128i_i64[0]);
            if ( !v29 )
              goto LABEL_59;
          }
          v23 = *(_QWORD *)(a1 + 512);
          v24 = v68[0].m128i_i64[1];
          if ( v23 < v68[0].m128i_i64[1] )
            v23 = v68[0].m128i_u64[1];
          v17 = *(_BYTE *)(a1 + 525) == 0;
          *(_QWORD *)(a1 + 512) = v23;
          if ( !v17 && (_BYTE)v80 == 2 )
            v68[0].m128i_i64[1] = v68[0].m128i_i64[0] + ((unsigned __int64)(v24 + 1 - v68[0].m128i_i64[0]) >> 1);
          if ( *(_BYTE *)(v56.m128i_i64[1] + 8) && v68[0].m128i_i64[1] - v68[0].m128i_i64[0] > 0x4000000uLL && !batch )
          {
            sub_51260(a1, v58, v68, (__int64)&v61, (__int64)v20, (__int64)v22, 0.0, a6, 36);
            v26 = v54;
            if ( v61 != 4 )
              goto LABEL_46;
            goto LABEL_73;
          }
          v56.m128i_i64[0] = (__int64)v22;
          if ( !(unsigned __int8)sub_42F60(a1, v68, (__int64)v22, (__int64)v20, 36) || !v65 )
          {
LABEL_59:
            v10 = v59;
            if ( !v59 )
              goto LABEL_10;
            goto LABEL_9;
          }
          v26 = v66;
          v27 = v56.m128i_i64[0];
          if ( v66 < v65 )
          {
            sub_BFC0(
              (__int64)"AUTOHIDE SESSION\n"
                       "Program segment %s file size (%08llX) is bigger than memory size (%08llX); truncating to memory size.",
              (const char *)v56.m128i_i64[0],
              v65,
              v66);
            v65 = v66;
          }
          if ( (*(_BYTE *)(a1 + 521) & 8) == 0 )
          {
            v51 = 0x100000000LL;
            v52 = v64.m128i_i64[0] + v65;
            if ( *(_DWORD *)(v58 + 464) == 8 )
              v51 = -1;
            v56.m128i_i64[0] = *(_QWORD *)(v58 + 456);
            if ( v52 != v51 )
              v51 = v52 & v56.m128i_i64[0];
            sub_496A0(
              (__int64 *)a1,
              v58,
              v63,
              (unsigned __int64 *)(v56.m128i_i64[0] & v64.m128i_i64[0]),
              (unsigned __int64 *)v51,
              (__int64)&v61,
              0.0,
              *(double *)a6.m128i_i64);
          }
          if ( v61 != 4 )
          {
LABEL_46:
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) != 15 )
              goto LABEL_47;
LABEL_76:
            sub_101F0(0x57u, v68[0].m128i_i64[0], (v62 & 0x10000000) != 0, v26, v25, v27);
            goto LABEL_47;
          }
LABEL_73:
          v37 = _mm_loadl_epi64(v68);
          v38 = (__int64 *)v55.m128i_i64[1];
          a6 = _mm_loadl_epi64((const __m128i *)&v68[0].m128i_u64[1]);
          v39 = *(_QWORD *)(v55.m128i_i64[1] + 8);
          v40 = *(_QWORD *)v55.m128i_i64[1];
          if ( *(_QWORD *)(v55.m128i_i64[1] + 16) < (unsigned __int64)(v39 + 1) )
          {
            v55.m128i_i64[0] = a6.m128i_i64[0];
            v56.m128i_i64[0] = v37.m128i_i64[0];
            v53 = qvector_reserve(v55.m128i_i64[1], v40, v39 + 1, 16);
            a6 = _mm_loadl_epi64(&v55);
            *v38 = v53;
            v40 = v53;
            v37 = _mm_loadl_epi64(&v56);
            v39 = v38[1];
          }
          a5 = _mm_unpacklo_epi64(v37, a6);
          *(__m128i *)(v40 + 16 * v39) = a5;
          ++*(_QWORD *)(v55.m128i_i64[1] + 8);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 15 )
            goto LABEL_76;
LABEL_47:
          set_default_dataseg(*(_QWORD *)(a1 + 176));
          if ( !v59 )
            goto LABEL_10;
          v60 = 0;
          ++v8;
          qfree(v59);
          if ( v6 == v8 )
            return v81 - __readfsqword(0x28u);
          break;
      }
    }
  }
  return v81 - __readfsqword(0x28u);
}

