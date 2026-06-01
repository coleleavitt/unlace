__int64 __fastcall sub_14CCD30(
        __int64 a1,
        void **a2,
        __int64 a3,
        char a4,
        __int32 a5,
        size_t a6,
        unsigned int a7,
        unsigned __int8 a8,
        _DWORD *a9,
        unsigned int a10)
{
  __int64 v14; // rdi
  bool v15; // r13
  void **v16; // r10
  _DWORD *v17; // r13
  __int32 v18; // r12d
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // r13d
  int v22; // edx
  __int64 v23; // rdi
  char *v24; // r12
  char *v25; // rbp
  void **p_dest; // r10
  int v27; // r11d
  __int64 v28; // rdi
  _DWORD *v30; // rcx
  __m128i *v31; // rax
  __m128i *v32; // r14
  __m128i v33; // xmm1
  __m128i v34; // xmm5
  __int32 *v35; // rbp
  __int32 v36; // eax
  _DWORD *v37; // r12
  __m128i v38; // xmm4
  __int64 v39; // rax
  __int32 v40; // eax
  __int64 *v41; // rsi
  __int64 v42; // rdi
  __m128i v43; // xmm2
  __int32 v44; // eax
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // rax
  unsigned int *v48; // rsi
  __int64 v49; // rdx
  _BYTE *v50; // rdi
  int v51; // r11d
  void **v52; // r10
  __m128 v53; // xmm0
  unsigned __int64 v54; // rdx
  size_t v55; // rax
  int v56; // r11d
  __int64 v57; // r10
  size_t v58; // rax
  unsigned int *v59; // rax
  size_t v60; // r8
  _BYTE *v61; // rdi
  unsigned __int64 v62; // rbx
  unsigned __int64 v63; // rdx
  _BYTE *v64; // rdi
  size_t v65; // rdx
  char *v66; // rax
  size_t v67; // rdx
  __int64 v68; // [rsp+0h] [rbp-578h]
  unsigned int v70; // [rsp+8h] [rbp-570h]
  int v71[2]; // [rsp+10h] [rbp-568h] BYREF
  __int64 v72; // [rsp+18h] [rbp-560h]
  __int64 v73; // [rsp+20h] [rbp-558h]
  unsigned int v74; // [rsp+2Ch] [rbp-54Ch]
  __int64 v75; // [rsp+30h] [rbp-548h]
  __int64 v76; // [rsp+38h] [rbp-540h]
  _BYTE v77[9]; // [rsp+47h] [rbp-531h] BYREF
  void *dest; // [rsp+50h] [rbp-528h] BYREF
  __m128 v79; // [rsp+58h] [rbp-520h] BYREF
  __int64 v80; // [rsp+70h] [rbp-508h] BYREF
  size_t v81; // [rsp+78h] [rbp-500h]
  void *v82; // [rsp+88h] [rbp-4F0h]
  __int64 v83; // [rsp+98h] [rbp-4E0h] BYREF
  void *v84; // [rsp+B0h] [rbp-4C8h] BYREF
  size_t n; // [rsp+B8h] [rbp-4C0h]
  unsigned __int64 v86; // [rsp+C0h] [rbp-4B8h] BYREF
  unsigned int v87; // [rsp+C8h] [rbp-4B0h]
  unsigned int v88; // [rsp+CCh] [rbp-4ACh]

  *(_QWORD *)&v77[1] = 0;
  switch ( *a9 )
  {
    case 0:
    case 1:
    case 3:
      v14 = *(_QWORD *)(a1 + 96);
      if ( (_BYTE)a10 )
        goto LABEL_3;
      v15 = 0;
      v73 = (__int64)&v77[1];
      LODWORD(v72) = a8;
      v71[0] = sub_1CE58C0(v14, a8, (__int64)&v77[1], (__int64)v77, 0);
      if ( v71[0] == 5 )
      {
        if ( (unsigned int)sub_1562FA0(a1, 0) == 1 )
          return a10;
      }
      else if ( !v71[0] )
      {
        v71[0] = a8;
        if ( v77[0] && a3 && !(unsigned int)sub_1562FA0(a1, 0) )
        {
          p_dest = &dest;
          v27 = v71[0];
          if ( a4 )
          {
LABEL_27:
            v28 = *(_QWORD *)(a1 + 96);
            v72 = (__int64)p_dest;
            v71[0] = sub_1CE5E60(v28, v27, v73, 1);
            v16 = (void **)v72;
            v15 = v71[0] == 0;
            goto LABEL_4;
          }
          v79.m128_i8[8] = 0;
          dest = &v79.m128_u16[4];
          v79.m128_u64[0] = 0;
          if ( *a9 )
          {
            LODWORD(v72) = v71[0];
            *(_QWORD *)v71 = &dest;
            v58 = j__strlen("operator ");
            sub_99BDC0(&dest, 0, 0, "operator ", v58);
            v52 = &dest;
            v51 = v72;
            if ( *a9 == 1 )
            {
              v66 = sub_FDF900(a9[2]);
              sub_9EE7C0(*(_QWORD **)v71, v66);
              v52 = *(void ***)v71;
              v51 = v72;
            }
            else
            {
              v59 = *(unsigned int **)(*((_QWORD *)a9 + 1) + 16LL);
              v60 = *v59;
              if ( v60 > 0x7FFFFFFFFFFFFFFFLL - v79.m128_u64[0] )
                std::__throw_length_error("basic_string::append");
              v61 = dest;
              v62 = v60 + v79.m128_u64[0];
              if ( dest == (void *)(*(_QWORD *)v71 + 16LL) )
                v63 = 15;
              else
                v63 = v79.m128_u64[1];
              if ( v62 > v63 )
              {
                sub_998B30(*(__int64 *)v71, v79.m128_u64[0], 0, (_BYTE *)v59 + 16, v60);
                v61 = dest;
                v51 = v72;
                v52 = *(void ***)v71;
              }
              else if ( *v59 )
              {
                v64 = (char *)dest + v79.m128_u64[0];
                if ( v60 == 1 )
                {
                  *v64 = *((_BYTE *)v59 + 16);
                  v61 = dest;
                }
                else
                {
                  v65 = *v59;
                  v72 = *(_QWORD *)v71;
                  v71[0] = v51;
                  memcpy(v64, v59 + 4, v65);
                  v61 = dest;
                  v51 = v71[0];
                  v52 = (void **)v72;
                }
              }
              v79.m128_u64[0] = v62;
              v61[v62] = 0;
            }
            goto LABEL_58;
          }
          v47 = *((_QWORD *)a9 + 1);
          v72 = (__int64)&dest;
          v48 = *(unsigned int **)(v47 + 16);
          v49 = *v48;
          v84 = &v86;
          sub_14C5380(&v84, (_BYTE *)v48 + 16, (__int64)v48 + v49 + 16);
          v50 = dest;
          v51 = v71[0];
          v52 = &dest;
          if ( v84 == &v86 )
          {
            v67 = n;
            if ( n )
            {
              if ( n == 1 )
              {
                *(_BYTE *)dest = v86;
                v50 = dest;
                v67 = n;
              }
              else
              {
                memcpy(dest, &v86, n);
                v50 = dest;
                v52 = (void **)v72;
                v67 = n;
                v51 = v71[0];
              }
            }
            v79.m128_u64[0] = v67;
            v50[v67] = 0;
            goto LABEL_56;
          }
          *(_QWORD *)v71 = v86;
          if ( dest == &v79.m128_u16[4] )
          {
            dest = v84;
            v79 = _mm_loadh_ps((const double *)v71);
          }
          else
          {
            v53 = _mm_loadh_ps((const double *)v71);
            v54 = v79.m128_u64[1];
            dest = v84;
            v79 = v53;
            if ( v50 )
            {
              v84 = v50;
              v86 = v54;
              goto LABEL_56;
            }
          }
          v84 = &v86;
LABEL_56:
          n = 0;
          *(_BYTE *)v84 = 0;
          if ( v84 != &v86 )
          {
            v72 = (__int64)v52;
            v71[0] = v51;
            operator delete(v84);
            v51 = v71[0];
            v52 = (void **)v72;
          }
LABEL_58:
          v72 = (__int64)v52;
          v71[0] = v51;
          sub_1564820(&v84, a1, (unsigned int)a9[6], 1731);
          sub_AEC220((unsigned __int8 **)&v84, dest, v79.m128_i64[0]);
          v55 = j__strlen("template ");
          sub_9EC740((__int64)&v80, a9[6], "template ", v55, 0);
          v56 = v71[0];
          v57 = v72;
          if ( (_DWORD)v80 && HIDWORD(v80) )
          {
            sub_14C6E00((__int64 *)&v84, (unsigned __int64)&v80);
            v57 = v72;
            v56 = v71[0];
          }
          if ( v82 != &v83 )
          {
            v72 = v57;
            v71[0] = v56;
            operator delete(v82);
            v57 = v72;
            v56 = v71[0];
          }
          v72 = v57;
          v71[0] = v56;
          sub_AEA040((__int64)&v84);
          p_dest = (void **)v72;
          v27 = v71[0];
          if ( dest != (void *)(v72 + 16) )
          {
            operator delete(dest);
            p_dest = (void **)v72;
            v27 = v71[0];
          }
          goto LABEL_27;
        }
        return a10;
      }
      v16 = &dest;
LABEL_4:
      v84 = &v86;
      LODWORD(dest) = 0;
      LODWORD(v80) = 0;
      n = 0x1000000000LL;
      if ( (unsigned __int8)sub_15569D0(a1, 1, v16, &v84, &v80, *(_QWORD *)&v77[1]) || v15 )
        goto LABEL_13;
LABEL_6:
      v17 = v84;
      v18 = *a9;
      LODWORD(v72) = n;
      if ( !v18 )
      {
        v30 = a9;
        v76 = *((_QWORD *)a9 + 1);
LABEL_40:
        LODWORD(v73) = v30[6];
        v68 = 18LL * (unsigned int)n;
        v75 = *(_QWORD *)&v77[1];
        v74 = (unsigned int)dest;
        v70 = v80;
        v31 = (__m128i *)malloc(v68 * 4 + 56);
        v32 = v31;
        if ( !v31 )
          sub_2221CE0("Allocation failed");
        v33 = _mm_cvtsi32_si128(v71[0]);
        v34 = _mm_cvtsi32_si128(v74);
        v31->m128i_i32[0] = a5;
        v35 = &v31[3].m128i_i32[2];
        v36 = v73;
        v32[1].m128i_i32[0] = v18;
        v37 = &v17[v68];
        v38 = _mm_cvtsi32_si128(v72);
        v32[3].m128i_i8[0] = 0;
        v32->m128i_i32[1] = v36;
        v32->m128i_i64[1] = v76;
        v39 = v75;
        v32[2] = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v33, v34), _mm_unpacklo_epi32(_mm_cvtsi32_si128(v70), v38));
        for ( v32[1].m128i_i64[1] = v39; v37 != v17; *(v35 - 1) = v44 )
        {
          v40 = *v17;
          v41 = (__int64 *)(v17 + 6);
          v42 = (__int64)(v35 + 6);
          v17 += 18;
          v35 += 18;
          *(v35 - 18) = v40;
          *((_QWORD *)v35 - 8) = *((_QWORD *)v17 - 8);
          *((_QWORD *)v35 - 7) = *((_QWORD *)v17 - 7);
          sub_E90750(v42, v41);
          v43 = _mm_loadu_si128((const __m128i *)(v17 - 6));
          *(v35 - 2) = *(v17 - 2);
          v44 = *(v17 - 1);
          *(__m128i *)(v35 - 6) = v43;
        }
        v45 = *(unsigned int *)(a1 + 2560);
        if ( v45 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 2564) )
        {
          sub_2237220(a1 + 2552, a1 + 2568, v45 + 1, 8);
          v45 = *(unsigned int *)(a1 + 2560);
        }
        v21 = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 2552) + 8 * v45) = v32;
        ++*(_DWORD *)(a1 + 2560);
        sub_15AB720(a9, v32);
        goto LABEL_14;
      }
      if ( (v18 & 0xFFFFFFFD) == 1 )
      {
        v30 = a9;
        v76 = 0;
        v18 = a9[2];
        goto LABEL_40;
      }
      v19 = sub_1CE0AE0(
              *(_QWORD *)(a1 + 96),
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
              a7,
              (int)dest,
              (__int64)v84,
              (unsigned int)n,
              v80,
              1,
              0,
              0);
      v21 = v20;
      if ( (_BYTE)v20 )
      {
LABEL_13:
        v21 = 1;
      }
      else
      {
        v22 = v80;
        if ( *a9 == 4 )
        {
          a9[7] = v80;
          *((_QWORD *)a9 + 1) = v19;
          a9[6] = a7;
        }
        else
        {
          *a9 = 6;
          a9[7] = v22;
          *((_QWORD *)a9 + 1) = v19;
        }
      }
LABEL_14:
      v24 = (char *)v84;
      v25 = (char *)v84 + 72 * (unsigned int)n;
      if ( v84 != v25 )
      {
        do
        {
          while ( 1 )
          {
            v25 -= 72;
            if ( *((_DWORD *)v25 + 11) )
              break;
            if ( v24 == v25 )
              goto LABEL_17;
          }
          free(*((void **)v25 + 4));
        }
        while ( v24 != v25 );
LABEL_17:
        v25 = (char *)v84;
      }
      if ( v25 != (char *)&v86 )
        free(v25);
      return v21;
    case 4:
      v23 = *(_QWORD *)(a1 + 96);
      LODWORD(v84) = 0;
      n = a6;
      v88 = a7;
      v87 = a7;
      v71[0] = sub_1CE58C0(v23, a8, (__int64)&v77[1], (__int64)&v80, 0);
      if ( !v71[0] )
        return 0;
      v84 = &v86;
      LODWORD(dest) = 0;
      LODWORD(v80) = 0;
      n = 0x1000000000LL;
      if ( (unsigned __int8)sub_15569D0(a1, 1, &dest, &v84, &v80, *(_QWORD *)&v77[1]) )
        goto LABEL_13;
      goto LABEL_6;
    case 6:
      v14 = *(_QWORD *)(a1 + 96);
      LODWORD(v80) = 0;
      v81 = a6;
      HIDWORD(v82) = a7;
      LODWORD(v82) = a7;
      if ( a3 )
      {
LABEL_3:
        v71[0] = sub_1CE5E60(v14, a8, (__int64)&v77[1], 1);
        v15 = v71[0] == 0;
        v16 = &dest;
      }
      else
      {
        v71[0] = sub_1CE58C0(v14, a8, (__int64)&v77[1], (__int64)v77, 0);
        if ( v71[0] )
        {
          v15 = 0;
          v16 = &dest;
        }
        else
        {
          v15 = 1;
          if ( !*((_QWORD *)a9 + 1) )
          {
            sub_1564820(&v84, a1, a7, 1587);
            sub_AE9DF0((unsigned __int8 **)&v84, a6, 5u);
            v72 = (__int64)&dest;
            v46 = *a2;
            v79.m128_i8[0] = 1;
            dest = v46;
            sub_AEC610((__int64 *)&v84, (__int64 *)&dest);
            sub_AEA040((__int64)&v84);
          }
          v16 = &dest;
        }
      }
      goto LABEL_4;
    default:
      return 0;
  }
}
