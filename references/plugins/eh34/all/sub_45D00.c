__int64 __fastcall sub_45D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r13
  unsigned __int8 v14; // r14
  unsigned int *v15; // rax
  __m128i v16; // xmm0
  unsigned __int64 v17; // rsi
  __m128i v18; // xmm1
  __m128i v19; // xmm3
  __m128i v20; // xmm2
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  __m128i *v24; // rax
  unsigned __int64 v25; // rbp
  unsigned int v26; // r14d
  unsigned int v27; // r12d
  unsigned __int8 v28; // r15
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  int v33; // r8d
  int v34; // r9d
  unsigned int v35; // r12d
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 v37; // rax
  int v38; // r13d
  __int64 v39; // rsi
  int v40; // r9d
  __int64 v41; // rax
  signed int v42; // esi
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // ecx
  __int64 v49; // rsi
  unsigned int v50; // r12d
  __int64 v51; // r13
  unsigned int v52; // eax
  unsigned int *v53; // rax
  __m128i v54; // xmm0
  unsigned __int64 v55; // rsi
  __m128i v56; // xmm2
  __int64 v57; // rax
  unsigned __int64 v58; // rdi
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __m128i *v61; // rax
  __m128i *v62; // rax
  __m128i *v63; // rax
  __int64 v64; // rbx
  __m128i v65; // xmm0
  __int64 v67; // rbx
  __m128i v68; // xmm0
  __int64 v69; // rbx
  __m128i v70; // xmm0
  __int64 v71; // rcx
  __m128i v72; // xmm0
  unsigned int v73; // [rsp+0h] [rbp-138h]
  unsigned int v74; // [rsp+8h] [rbp-130h]
  __m128i v75; // [rsp+10h] [rbp-128h] BYREF
  __int64 v76; // [rsp+20h] [rbp-118h]
  __int64 v77; // [rsp+28h] [rbp-110h]
  __m128i v78; // [rsp+30h] [rbp-108h] BYREF
  __int32 v79; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v80; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v81; // [rsp+58h] [rbp-E0h]
  __int64 v82; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v83; // [rsp+78h] [rbp-C0h]
  __int64 v84; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v85; // [rsp+98h] [rbp-A0h]
  __int64 v86; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v87; // [rsp+B8h] [rbp-80h] BYREF
  char v88; // [rsp+C8h] [rbp-70h]
  __m128i v89; // [rsp+D0h] [rbp-68h] BYREF
  __int32 v90; // [rsp+E0h] [rbp-58h]
  char v91; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v92; // [rsp+F8h] [rbp-40h]

  v76 = a1;
  v92 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 512) )
  {
    v7 = *(_QWORD *)(a2 + 496);
    v8 = a2 + 480;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    if ( a2 + 480 != v7 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v7 + 48);
          v13 = *(_QWORD *)(v7 + 72);
          sub_457C0((__int64)&v86, a2, *(_DWORD *)(v7 + 32), a4, a5, a6);
          if ( v88 )
          {
            v67 = v76;
            v68 = _mm_loadu_si128(&v87);
            *(_QWORD *)v76 = v86;
            *(_BYTE *)(v67 + 24) = 1;
            *(__m128i *)(v67 + 8) = v68;
            goto LABEL_61;
          }
          if ( !v12 )
          {
            v37 = v85;
            v38 = *(_DWORD *)(v7 + 32);
            v39 = v84;
            if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)(v85 + 1) )
            {
              v84 = qvector_reserve(&v84, v84, v85 + 1, 4);
              v39 = v84;
              v37 = v85;
            }
            *(_DWORD *)(v39 + 4 * v37) = v38;
            *(_QWORD *)&v85 = v85 + 1;
            goto LABEL_8;
          }
          v14 = v86;
          if ( v13 )
            break;
          if ( v12 == 1 )
          {
            sub_6E270(&v89, v7 + 40);
            if ( v89.m128i_i64[0] )
            {
              v89.m128i_i64[1] = 0;
              qfree(v89.m128i_i64[0]);
            }
            v41 = *(_QWORD *)(a2 + 24);
            v42 = *(_DWORD *)(v7 + 32);
            v43 = v41 + 8;
            v44 = *(_QWORD *)(v41 + 16);
            if ( !v44 )
              goto LABEL_72;
            v45 = v43;
            do
            {
              while ( 1 )
              {
                v46 = *(_QWORD *)(v44 + 16);
                v47 = *(_QWORD *)(v44 + 24);
                if ( v42 <= *(_DWORD *)(v44 + 32) )
                  break;
                v44 = *(_QWORD *)(v44 + 24);
                if ( !v47 )
                  goto LABEL_43;
              }
              v45 = v44;
              v44 = *(_QWORD *)(v44 + 16);
            }
            while ( v46 );
LABEL_43:
            if ( v45 == v43 || v42 < *(_DWORD *)(v45 + 32) )
            {
LABEL_72:
              sub_64B50(
                (unsigned int)&v89,
                *(_QWORD *)(a2 + 8),
                (unsigned int)"find_ascend_descend_pairs: state %d has no descend action",
                v42,
                v43,
                v40);
LABEL_73:
              v71 = v76;
              *(_QWORD *)v76 = v89.m128i_i64[0];
              v72 = _mm_loadu_si128((const __m128i *)&v89.m128i_u64[1]);
              *(_BYTE *)(v71 + 24) = 1;
              *(__m128i *)(v71 + 8) = v72;
              goto LABEL_61;
            }
            v48 = *(_DWORD *)(v45 + 52);
            v75.m128i_i32[0] = v14;
            sub_458E0((__int64)&v89, (_QWORD *)a2, v42, v48, v14, v40);
            if ( v91 )
              goto LABEL_68;
            v49 = *(unsigned int *)(v7 + 32);
            v50 = v89.m128i_u32[1];
            LODWORD(v77) = v89.m128i_i32[0];
            v75.m128i_i64[0] = sub_4D520(a2 + 48, v49, v75.m128i_u32[0]);
            v51 = sub_4CB00(a2 + 48, v50, 0);
            v52 = sub_4C060(v75.m128i_i64[0]);
            sub_4C000(v51, v52);
            v53 = *(unsigned int **)(v7 + 40);
            v54 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 32));
            v55 = v80;
            LOBYTE(v79) = v14;
            v56 = _mm_cvtsi32_si128(*v53);
            v57 = v81;
            v58 = v81 + 1;
            v59 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(v54, v56),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v77), _mm_cvtsi32_si128(v50)));
            v78 = v59;
            if ( (unsigned __int64)&v78 >= v80 && (unsigned __int64)&v78 < v80 + 20LL * *((_QWORD *)&v81 + 1) )
            {
              if ( *((_QWORD *)&v81 + 1) < v58 )
              {
                v75 = v59;
                v80 = qvector_reserve(&v80, v80, v81 + 1, 20);
                v55 = v80;
                v59 = _mm_load_si128(&v75);
                v57 = v81;
              }
              v63 = (__m128i *)(v55 + 20 * v57);
              v63[1].m128i_i8[0] = v14;
              *v63 = v59;
            }
            else
            {
              if ( *((_QWORD *)&v81 + 1) < v58 )
              {
                v80 = qvector_reserve(&v80, v80, v81 + 1, 20);
                v55 = v80;
                v57 = v81;
              }
              v60 = _mm_load_si128(&v78);
              v61 = (__m128i *)(v55 + 20 * v57);
              v61[1].m128i_i32[0] = v79;
              *v61 = v60;
            }
            *(_QWORD *)&v81 = v81 + 1;
            *(_BYTE *)(a2 + 464) = 1;
          }
          else
          {
            v9 = v83;
            v10 = *(_DWORD *)(v7 + 32);
            v11 = v82;
            if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v83 + 1) )
            {
              v82 = qvector_reserve(&v82, v82, v83 + 1, 4);
              v11 = v82;
              v9 = v83;
            }
            *(_DWORD *)(v11 + 4 * v9) = v10;
            *(_QWORD *)&v83 = v83 + 1;
          }
LABEL_8:
          v7 = std::_Rb_tree_increment(v7);
          if ( v8 == v7 )
            goto LABEL_20;
        }
        if ( v12 != 1 || v13 != 1 )
          goto LABEL_8;
        v15 = *(unsigned int **)(v7 + 64);
        v16 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 32));
        v17 = v80;
        v18 = _mm_cvtsi32_si128(*v15);
        v19 = _mm_cvtsi32_si128(v15[1]);
        v20 = _mm_cvtsi32_si128(**(_DWORD **)(v7 + 40));
        v21 = v81;
        LOBYTE(v90) = v86;
        v22 = v81 + 1;
        v23 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v16, v20), _mm_unpacklo_epi32(v18, v19));
        v89 = v23;
        if ( (unsigned __int64)&v89 >= v80 && (unsigned __int64)&v89 < v80 + 20LL * *((_QWORD *)&v81 + 1) )
        {
          if ( *((_QWORD *)&v81 + 1) < v22 )
          {
            v75 = v23;
            v80 = qvector_reserve(&v80, v80, v81 + 1, 20);
            v17 = v80;
            v23 = _mm_load_si128(&v75);
            v21 = v81;
          }
          v62 = (__m128i *)(v17 + 20 * v21);
          v62[1].m128i_i8[0] = v14;
          *v62 = v23;
        }
        else
        {
          if ( *((_QWORD *)&v81 + 1) < v22 )
          {
            v80 = qvector_reserve(&v80, v80, v81 + 1, 20);
            v17 = v80;
            v21 = v81;
          }
          v24 = (__m128i *)(v17 + 20 * v21);
          *v24 = _mm_load_si128(&v89);
          v24[1].m128i_i32[0] = v90;
        }
        *(_QWORD *)&v81 = v81 + 1;
        v7 = std::_Rb_tree_increment(v7);
        if ( v8 == v7 )
        {
LABEL_20:
          if ( (_QWORD)v85 )
          {
            sub_6E270(&v89, &v84);
            if ( v89.m128i_i64[0] )
            {
              v89.m128i_i64[1] = 0;
              qfree(v89.m128i_i64[0]);
            }
          }
          v25 = v80;
          v75.m128i_i64[0] = v80 + 20 * v81;
          if ( v80 != v75.m128i_i64[0] )
          {
            v77 = a2 + 320;
            while ( 1 )
            {
              v26 = *(_DWORD *)(v25 + 4);
              v27 = *(_DWORD *)v25;
              v28 = *(_BYTE *)(v25 + 16);
              v74 = *(_DWORD *)(v25 + 8);
              v73 = *(_DWORD *)(v25 + 12);
              v29 = sub_4CAD0(a2 + 48, v26);
              if ( !v29 )
              {
                sub_64B50(
                  (unsigned int)&v89,
                  *(_QWORD *)(a2 + 8),
                  (unsigned int)"ascension block %d not found",
                  v26,
                  v30,
                  v31);
                goto LABEL_73;
              }
              if ( *(_DWORD *)(v29 + 4) != 2 || **(_DWORD **)(v29 + 16) > 1u )
              {
                sub_64B50(
                  (unsigned int)&v89,
                  *(_QWORD *)(a2 + 8),
                  (unsigned int)"ascension block %d is not ascend",
                  v26,
                  v30,
                  v31);
                goto LABEL_68;
              }
              v32 = sub_4CAD0(a2 + 48, v73);
              if ( !v32 )
                break;
              if ( *(_DWORD *)(v32 + 4) != 2 || (unsigned int)(**(_DWORD **)(v32 + 16) - 4) > 1 )
              {
                sub_64B50(
                  (unsigned int)&v89,
                  *(_QWORD *)(a2 + 8),
                  (unsigned int)"descension block %d is not descend",
                  v73,
                  v33,
                  v34);
                goto LABEL_68;
              }
              sub_4D570(a2 + 48, v26, v74, v73, v27, v28);
              v35 = *(_DWORD *)(a2 + 72) + v27;
              hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a2 + 48, v26);
              if ( v28 )
                hexdsp(205, a2 + 304, v35);
              else
                hexdsp(205, v77, v35);
              v25 += 20LL;
              if ( v75.m128i_i64[0] == v25 )
                goto LABEL_74;
            }
            sub_64B50(
              (unsigned int)&v89,
              *(_QWORD *)(a2 + 8),
              (unsigned int)"descension block %d not found",
              v73,
              v33,
              v34);
LABEL_68:
            v69 = v76;
            *(_QWORD *)v76 = v89.m128i_i64[0];
            v70 = _mm_loadu_si128((const __m128i *)&v89.m128i_u64[1]);
            *(_BYTE *)(v69 + 24) = 1;
            *(__m128i *)(v69 + 8) = v70;
            goto LABEL_61;
          }
          break;
        }
      }
    }
LABEL_74:
    *(_BYTE *)(v76 + 24) = 0;
LABEL_61:
    if ( v84 )
    {
      *(_QWORD *)&v85 = 0;
      qfree(v84);
    }
    if ( v82 )
    {
      *(_QWORD *)&v83 = 0;
      qfree(v82);
    }
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v80);
    }
  }
  else
  {
    sub_64B50(
      (unsigned int)&v89,
      *(_QWORD *)(a2 + 8),
      (unsigned int)"find_ascend_descend_pairs: empty ascended/descended states",
      a4,
      a5,
      a6);
    v64 = v76;
    v65 = _mm_loadu_si128((const __m128i *)&v89.m128i_u64[1]);
    *(_QWORD *)v76 = v89.m128i_i64[0];
    *(_BYTE *)(v64 + 24) = 1;
    *(__m128i *)(v64 + 8) = v65;
  }
  return v76;
}
