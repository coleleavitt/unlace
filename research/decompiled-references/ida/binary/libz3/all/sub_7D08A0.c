__int64 __fastcall sub_7D08A0(_QWORD *a1, __int64 a2, double a3)
{
  char **exception; // r13
  __int64 v4; // rdx
  char **v5; // r13
  __int64 v6; // rdx
  char **v7; // r13
  __int64 v8; // rdx
  char **v9; // r13
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _DWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v16; // r12
  __int32 v17; // eax
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  unsigned int v20; // r12d
  __m128i v21; // xmm1
  __m128i v22; // xmm7
  int v23; // ebp
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  unsigned int v26; // r13d
  int v27; // r12d
  int v28; // eax
  __m128i v29; // xmm5
  int v30; // ebp
  __m128i v31; // xmm4
  unsigned __int64 v32; // xmm3_8
  unsigned __int64 v33; // r15
  _QWORD *v34; // r13
  __int64 v35; // rax
  _QWORD *v36; // r12
  _DWORD *v37; // rbp
  _DWORD *v38; // rax
  unsigned int v39; // eax
  int v40; // r15d
  __int64 v41; // rax
  unsigned int v42; // edx
  size_t v43; // rsi
  _DWORD *v44; // rax
  _QWORD *v45; // r13
  __int64 v46; // rax
  _QWORD *v47; // r12
  _DWORD *v48; // rbp
  _DWORD *v49; // rax
  __int64 v50; // rax
  int v51; // r15d
  __int64 v52; // rax
  unsigned int v53; // edx
  size_t v54; // rsi
  _DWORD *v55; // rax
  __int64 v56; // rdi
  _QWORD *v57; // rbx
  __int32 v58; // eax
  __int64 v59; // rdi
  __int64 v60; // rsi
  int v61; // eax
  __m128i v62; // xmm4
  int v63; // ebp
  unsigned int v64; // r13d
  unsigned __int64 v65; // r15
  __int64 v66; // rdi
  _QWORD *v67; // rbx
  __int64 v68; // rdi
  _QWORD *v69; // rbx
  unsigned int v70; // r12d
  unsigned int v71; // ebp
  __m128i v72; // xmm1
  _DWORD *v73; // r15
  unsigned int *v74; // rdx
  __int64 v75; // rsi
  _DWORD *v76; // r15
  __int64 v77; // rax
  __int32 v78; // r13d
  __int32 *v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // r12d
  size_t v82; // rsi
  unsigned int *v83; // rax
  unsigned int v84; // r12d
  size_t v85; // rsi
  unsigned int *v86; // rax
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  __int32 v91; // r13d
  __m128i v92; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *i; // [rsp+10h] [rbp-78h]
  _DWORD *v94; // [rsp+18h] [rbp-70h]
  unsigned __int64 v95; // [rsp+20h] [rbp-68h] BYREF
  int v96; // [rsp+28h] [rbp-60h]
  _BYTE v97[88]; // [rsp+30h] [rbp-58h] BYREF

  v11 = a1;
  v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v12 && !*v12 )
  {
    a1 = (_QWORD *)a1[19];
    v92.m128i_i32[0] = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v13 )
    {
      switch ( *(_DWORD *)(v13 + 4) )
      {
        case 0:
          v17 = v92.m128i_i32[0];
          goto LABEL_10;
        case 1:
          v17 = v92.m128i_i32[0] ^ 1;
LABEL_10:
          LODWORD(v95) = v17;
          return sub_7F3170(v11 + 20, 1, &v95);
        case 2:
          if ( *(_DWORD *)(a2 + 24) == 2 )
          {
            v18 = v11[19];
            v19 = v11 + 20;
            v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, *(_QWORD *)(a2 + 32));
            v21 = _mm_cvtsi32_si128(v92.m128i_u32[0]);
            v22 = _mm_cvtsi32_si128(v20);
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(v19 - 1) + 24LL))(
                    *(v19 - 1),
                    *(_QWORD *)(a2 + 40));
            v96 = v23;
            HIDWORD(v95) = v20 ^ 1;
            LODWORD(v95) = _mm_cvtsi128_si32(v21) ^ 1;
            v92.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v95), v22).m128i_u64[0];
            sub_7F3170(v19, 3, &v95);
            v96 = v23 ^ 1;
            v95 = v92.m128i_i64[0];
            sub_7F3170(v19, 3, &v95);
            v95 = _mm_unpacklo_epi32(v21, v22).m128i_u64[0];
            v96 = v23;
            sub_7F3170(v19, 3, &v95);
            v95 = _mm_unpacklo_epi32(v21, _mm_cvtsi32_si128(v20 ^ 1)).m128i_u64[0];
            v96 = v23 ^ 1;
            return sub_7F3170(v19, 3, &v95);
          }
          sub_180B130(a1);
          if ( (unsigned __int8)sub_186A530(a3) )
            goto LABEL_8;
          goto LABEL_6;
        case 4:
          v24 = v11[19];
          v25 = v11 + 20;
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 24LL))(v24, *(_QWORD *)(a2 + 32));
          v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(v25 - 1) + 24LL))(
                  *(v25 - 1),
                  *(_QWORD *)(a2 + 40));
          v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(v25 - 1) + 24LL))(
                  *(v25 - 1),
                  *(_QWORD *)(a2 + 48));
          v29 = _mm_cvtsi32_si128(v26);
          v30 = v28;
          v31 = _mm_cvtsi32_si128(v92.m128i_u32[0]);
          LODWORD(v95) = v92.m128i_i32[0] ^ 1;
          v32 = _mm_unpacklo_epi32(v31, v29).m128i_u64[0];
          v33 = _mm_unpacklo_epi32(v31, _mm_cvtsi32_si128(v26 ^ 1)).m128i_u64[0];
          HIDWORD(v95) = v26 ^ 1;
          v96 = v27;
          v92.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92.m128i_i32[0] ^ 1u), v29).m128i_u64[0];
          sub_7F3170(v25, 3, &v95);
          v96 = v30;
          v95 = v92.m128i_i64[0];
          sub_7F3170(v25, 3, &v95);
          v95 = v33;
          v96 = v27 ^ 1;
          sub_7F3170(v25, 3, &v95);
          v95 = v32;
          v96 = v30 ^ 1;
          return sub_7F3170(v25, 3, &v95);
        case 5:
          v34 = (_QWORD *)(a2 + 32);
          v35 = 8LL * *(unsigned int *)(a2 + 24);
          v36 = (_QWORD *)(a2 + 32 + v35);
          if ( v35 )
          {
            v37 = nullptr;
            do
            {
              v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[19] + 24LL))(v11[19], *v34) ^ 1;
              if ( v37 )
              {
                v41 = (unsigned int)*(v37 - 1);
                if ( (_DWORD)v41 == *(v37 - 2) )
                {
                  v42 = (unsigned int)(3 * v41 + 1) >> 1;
                  v43 = 4 * v42 + 8;
                  if ( 4 * (int)v41 + 8 >= (unsigned int)v43 || (unsigned int)v41 >= v42 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_116834((__int64 *)&v95, "Overflow encountered when expanding vector", v4);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, &v95);
                    sub_233E40((__int64)&v95);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v92.m128i_i32[2] = (unsigned int)(3 * v41 + 1) >> 1;
                  v44 = (_DWORD *)sub_186B300(v37 - 2, v43);
                  v37 = v44 + 2;
                  *v44 = v92.m128i_i32[2];
                  v38 = &v44[v44[1] + 2];
                }
                else
                {
                  v38 = &v37[v41];
                }
              }
              else
              {
                v87 = (_QWORD *)sub_186B270(0x10u);
                *v87 = 2;
                v38 = v87 + 1;
                v37 = v38;
              }
              *v38 = v40;
              ++v34;
              v39 = *(v37 - 1) + 1;
              *(v37 - 1) = v39;
            }
            while ( v36 != v34 );
            v92.m128i_i64[1] = (__int64)&v37[v39];
            if ( v37 != (_DWORD *)v92.m128i_i64[1] )
            {
              v73 = v37;
              LODWORD(i) = v92.m128i_i32[0] ^ 1;
              v94 = v37 - 2;
              do
              {
                v95 = __PAIR64__(*v73 ^ 1u, (unsigned int)i);
                sub_7F3170(v11 + 20, 2, &v95);
                ++v73;
              }
              while ( (_DWORD *)v92.m128i_i64[1] != v73 );
              v39 = *(v37 - 1);
            }
            v74 = &v37[v39];
            if ( v39 == *(v37 - 2) )
            {
              v84 = (3 * v39 + 1) >> 1;
              v85 = 4 * v84 + 8;
              if ( 4 * v39 + 8 >= (unsigned int)v85 || v39 >= v84 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_116834((__int64 *)&v95, "Overflow encountered when expanding vector", v8);
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, &v95);
                sub_233E40((__int64)&v95);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v86 = (unsigned int *)sub_186B300(v37 - 2, v85);
              v37 = v86 + 2;
              *v86 = v84;
              v74 = &v86[v86[1] + 2];
            }
          }
          else
          {
            v89 = (_QWORD *)sub_186B270(0x10u);
            v37 = v89 + 1;
            *v89 = 2;
            v74 = (unsigned int *)(v89 + 1);
          }
          *v74 = v92.m128i_i32[0];
          v75 = (unsigned int)(*(v37 - 1) + 1);
          *(v37 - 1) = v75;
          sub_7F3170(v11 + 20, v75, v37);
          return sub_186B220(v37 - 2);
        case 6:
          v45 = (_QWORD *)(a2 + 32);
          v46 = 8LL * *(unsigned int *)(a2 + 24);
          v47 = (_QWORD *)(a2 + 32 + v46);
          if ( v46 )
          {
            v48 = nullptr;
            do
            {
              v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[19] + 24LL))(v11[19], *v45);
              if ( v48 )
              {
                v52 = (unsigned int)*(v48 - 1);
                if ( (_DWORD)v52 == *(v48 - 2) )
                {
                  v53 = (unsigned int)(3 * v52 + 1) >> 1;
                  v54 = 4 * v53 + 8;
                  if ( 4 * (int)v52 + 8 >= (unsigned int)v54 || (unsigned int)v52 >= v53 )
                  {
                    v9 = (char **)__cxa_allocate_exception(0x28u);
                    sub_116834((__int64 *)&v95, "Overflow encountered when expanding vector", v10);
                    *v9 = (char *)off_1C63128;
                    sub_2333C0(v9 + 1, &v95);
                    sub_233E40((__int64)&v95);
                    __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v92.m128i_i32[2] = (unsigned int)(3 * v52 + 1) >> 1;
                  v55 = (_DWORD *)sub_186B300(v48 - 2, v54);
                  v48 = v55 + 2;
                  *v55 = v92.m128i_i32[2];
                  v49 = &v55[v55[1] + 2];
                }
                else
                {
                  v49 = &v48[v52];
                }
              }
              else
              {
                v88 = (_QWORD *)sub_186B270(0x10u);
                *v88 = 2;
                v49 = v88 + 1;
                v48 = v49;
              }
              *v49 = v51;
              ++v45;
              v50 = (unsigned int)(*(v48 - 1) + 1);
              *(v48 - 1) = v50;
            }
            while ( v47 != v45 );
            v76 = v48;
            v92.m128i_i64[1] = (__int64)&v48[v50];
            for ( i = v48 - 2; (_DWORD *)v92.m128i_i64[1] != v76; ++v76 )
            {
              v95 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v76 ^ 1u), _mm_cvtsi32_si128(v92.m128i_u32[0])).m128i_u64[0];
              sub_7F3170(v11 + 20, 2, &v95);
            }
            v77 = (unsigned int)*(v48 - 1);
            v78 = v92.m128i_i32[0] ^ 1;
            if ( (_DWORD)v77 == *(v48 - 2) )
            {
              v81 = (unsigned int)(3 * v77 + 1) >> 1;
              v82 = 4 * v81 + 8;
              if ( 4 * (int)v77 + 8 >= (unsigned int)v82 || (unsigned int)v77 >= v81 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_116834((__int64 *)&v95, "Overflow encountered when expanding vector", v6);
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, &v95);
                sub_233E40((__int64)&v95);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v83 = (unsigned int *)sub_186B300(v48 - 2, v82);
              v48 = v83 + 2;
              *v83 = v81;
              v79 = (__int32 *)&v83[v83[1] + 2];
            }
            else
            {
              v79 = &v48[v77];
            }
          }
          else
          {
            v90 = (_QWORD *)sub_186B270(0x10u);
            v91 = v92.m128i_i32[0];
            v48 = v90 + 1;
            *v90 = 2;
            v79 = (__int32 *)(v90 + 1);
            v78 = v91 ^ 1;
          }
          *v79 = v78;
          v80 = (unsigned int)(*(v48 - 1) + 1);
          *(v48 - 1) = v80;
          sub_7F3170(v11 + 20, v80, v48);
          return sub_186B220(v48 - 2);
        case 7:
          if ( *(_DWORD *)(a2 + 24) == 2 )
          {
            v56 = v11[19];
            v57 = v11 + 20;
            v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v56 + 24LL))(v56, *(_QWORD *)(a2 + 32));
            v59 = *(v57 - 1);
            v60 = *(_QWORD *)(a2 + 40);
            v92.m128i_i32[2] = v58;
            v61 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v59 + 24LL))(v59, v60);
            v62 = _mm_cvtsi32_si128(v92.m128i_u32[2]);
            v63 = v61;
            v96 = v61;
            v64 = _mm_cvtsi128_si32(v62) ^ 1;
            v65 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92.m128i_u32[0]), v62).m128i_u64[0];
            v95 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92.m128i_u32[0]), _mm_cvtsi32_si128(v64)).m128i_u64[0];
            sub_7F3170(v57, 3, &v95);
            v95 = v65;
            v96 = v63 ^ 1;
            sub_7F3170(v57, 3, &v95);
            v96 = v63;
            v95 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92.m128i_i32[0] ^ 1u), _mm_cvtsi32_si128(v92.m128i_u32[2])).m128i_u64[0];
            sub_7F3170(v57, 3, &v95);
            LODWORD(v95) = v92.m128i_i32[0] ^ 1;
            HIDWORD(v95) = v64;
            v96 = v63 ^ 1;
            return sub_7F3170(v57, 3, &v95);
          }
          sub_180B130(a1);
          if ( (unsigned __int8)sub_186A530(a3) )
            goto LABEL_8;
          goto LABEL_6;
        case 8:
          v66 = v11[19];
          v67 = v11 + 20;
          v95 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(v92.m128i_u32[0]),
                  _mm_cvtsi32_si128((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v66 + 24LL))(v66, *(_QWORD *)(a2 + 32)))).m128i_u64[0];
          v92.m128i_i64[0] = v95;
          sub_7F3170(v67, 2, &v95);
          v95 = _mm_xor_si128(_mm_loadl_epi64(&v92), _mm_loadl_epi64((const __m128i *)&xmmword_18B64E0)).m128i_u64[0];
          return sub_7F3170(v67, 2, &v95);
        case 9:
          if ( *(_DWORD *)(a2 + 24) == 2 )
          {
            v68 = v11[19];
            v69 = v11 + 20;
            v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v68 + 24LL))(v68, *(_QWORD *)(a2 + 32));
            v96 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(v69 - 1) + 24LL))(
                    *(v69 - 1),
                    *(_QWORD *)(a2 + 40));
            v71 = v96 ^ 1;
            v72 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92.m128i_u32[0]), _mm_cvtsi32_si128(v70));
            v95 = _mm_xor_si128(_mm_loadl_epi64((const __m128i *)&xmmword_18B64E0), v72).m128i_u64[0];
            sub_7F3170(v69, 3, &v95);
            v95 = v72.m128i_i64[0];
            sub_7F3170(v69, 2, &v95);
            v95 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92.m128i_u32[0]), _mm_cvtsi32_si128(v71)).m128i_u64[0];
            return sub_7F3170(v69, 2, &v95);
          }
          sub_180B130(a1);
          if ( (unsigned __int8)sub_186A530(a3) )
            goto LABEL_8;
          goto LABEL_6;
        default:
          break;
      }
    }
    sub_1872CE0("");
    sub_1873130(114, 923);
  }
  sub_180B130(a1);
  if ( (unsigned __int8)sub_186A530(a3) )
  {
LABEL_8:
    sub_186A4C0(a3);
    v16 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(&v95, a2, v11[18], 0, 0, 0);
    sub_160E8B0(v16, &v95);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v97);
    sub_186A500(v97, "\n");
  }
  else
  {
LABEL_6:
    v14 = sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(&v95, a2, v11[18], 0, 0, 0);
    sub_160E8B0(v14, &v95);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v97);
  }
  return sub_7F0DA0(v11 + 20, 0);
}

