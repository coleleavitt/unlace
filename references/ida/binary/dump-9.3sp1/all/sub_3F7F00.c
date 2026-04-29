__int64 __fastcall sub_3F7F00(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  char *v6; // rbx
  char *v7; // rax
  char *v8; // rbp
  const char *v9; // rbx
  size_t v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  __m128i v15; // xmm0
  void *v16; // rax
  __m128i v17; // xmm0
  __int8 v18; // al
  char *v19; // rax
  char *v20; // rbp
  __int8 v21; // al
  char *v22; // rax
  __int16 v23; // ax
  unsigned __int64 v24; // rax
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  size_t v28; // rbx
  void *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r12
  _QWORD *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rdi
  void *v36; // rbx
  __int64 *v37; // rbx
  __int64 v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  int v43; // ebp
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rbx
  __m128i v49; // xmm0
  __int64 v50; // rdi
  __int64 v51; // rdi
  __m128i v52; // xmm0
  int v53; // ecx
  __int64 i; // rdx
  __int64 v55; // rax
  int v56; // edx
  __m128i v57; // [rsp+0h] [rbp-1D8h] BYREF
  const char *v58; // [rsp+18h] [rbp-1C0h]
  char v59; // [rsp+27h] [rbp-1B1h]
  __int64 v60; // [rsp+28h] [rbp-1B0h]
  __int64 *v61; // [rsp+30h] [rbp-1A8h]
  _BYTE *v62; // [rsp+38h] [rbp-1A0h]
  __int64 v63; // [rsp+40h] [rbp-198h]
  _QWORD *v64; // [rsp+48h] [rbp-190h]
  __int64 v65; // [rsp+50h] [rbp-188h]
  __int64 v66; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v67; // [rsp+60h] [rbp-178h] BYREF
  __int64 v68; // [rsp+68h] [rbp-170h]
  char *s; // [rsp+70h] [rbp-168h]
  __int128 v70; // [rsp+78h] [rbp-160h]
  __int64 v71; // [rsp+90h] [rbp-148h] BYREF
  void *src[2]; // [rsp+98h] [rbp-140h]
  size_t n[2]; // [rsp+A8h] [rbp-130h]
  void *v74; // [rsp+B8h] [rbp-120h]
  size_t v75[2]; // [rsp+C0h] [rbp-118h]
  __int64 v76; // [rsp+D0h] [rbp-108h]
  int v77; // [rsp+D8h] [rbp-100h]
  _BYTE v78[24]; // [rsp+E0h] [rbp-F8h] BYREF
  __m128i v79; // [rsp+F8h] [rbp-E0h] BYREF
  void *v80; // [rsp+108h] [rbp-D0h]
  __m128i v81; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+120h] [rbp-B8h]
  int v83; // [rsp+128h] [rbp-B0h]
  __int64 v84; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v85; // [rsp+138h] [rbp-A0h]
  __int64 v86; // [rsp+148h] [rbp-90h]
  _QWORD v87[2]; // [rsp+150h] [rbp-88h] BYREF
  __int128 v88; // [rsp+160h] [rbp-78h]
  __int64 v89; // [rsp+170h] [rbp-68h]
  __int128 v90; // [rsp+178h] [rbp-60h]
  char v91; // [rsp+188h] [rbp-50h]
  unsigned __int64 v92; // [rsp+198h] [rbp-40h]

  v60 = a1;
  v63 = a2;
  v59 = a3;
  v92 = __readfsqword(0x28u);
  v57.m128i_i8[0] = *(_BYTE *)(a2 + 28);
  if ( a3 == ((v57.m128i_i8[0] & 0x10) != 0) )
  {
    LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) != 25
              && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) - 10) > 1;
    if ( (_BYTE)v3 )
    {
      s = nullptr;
      v70 = 0;
      v6 = nullptr;
      if ( get_predef_insn_cmt() > 0 && (v7 = strchr(s, 59), (v8 = v7) != nullptr) )
      {
        *v7 = 0;
        v9 = v7 + 1;
        v84 = 0;
        v86 = 0;
        v87[0] = 0;
        *(_QWORD *)v78 = (-(__int64)(a3 == 0) & 0xFFFFFFFFFFFFFFF2LL) + 21;
        v91 = -16;
        v87[1] = 3;
        v89 = 0;
        v64 = v87;
        v85 = 0;
        v88 = 0;
        v90 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v8[1] )
        {
          while ( 1 )
          {
            v19 = strchr(v9, 59);
            v20 = v19;
            if ( !v19 )
              break;
            v58 = v19 + 1;
            v21 = v19[1];
            v20[1] = 0;
            v57.m128i_i8[0] = v21;
            v22 = strchr(v9, 58);
            if ( !v22 )
              goto LABEL_42;
            *v22 = 0;
            toupper(*(unsigned __int8 *)v9);
            v23 = str2reg();
            if ( v23 == -1 )
              goto LABEL_42;
            src[1] = nullptr;
            v74 = nullptr;
            v76 = 0;
            v77 = 0;
            LODWORD(v71) = 3;
            src[0] = (void *)(unsigned int)v23;
            *(_OWORD *)n = 0;
            *(_OWORD *)v75 = 0;
            if ( !(unsigned __int8)parse_decl() )
            {
              clear_tinfo_t();
              if ( v74 )
              {
                v75[0] = 0;
                qfree((__int64)v74);
              }
              if ( src[1] )
              {
                n[0] = 0;
                qfree((__int64)src[1]);
              }
              cleanup_argloc();
LABEL_42:
              v3 = 0;
              goto LABEL_43;
            }
            v67 = 0;
            v68 = 0;
            if ( (unsigned __int8)get_tinfo_details() )
            {
              v65 = 0;
              v66 = 0;
              v61 = (__int64 *)&v78[8];
              *(_OWORD *)v78 = 0;
              copy_tinfo_t();
              *(_QWORD *)&v78[16] = 0;
              v62 = &v78[16];
              copy_tinfo_t();
              v79.m128i_i32[0] = 0;
              v79.m128i_i16[2] = 0;
              clear_tinfo_t();
              clear_tinfo_t();
              v24 = *(_QWORD *)v78;
              *(_QWORD *)v78 = v67;
              v67 = v24;
              create_tinfo();
              clear_tinfo_t();
              clear_tinfo_t();
              clear_tinfo_t();
            }
            clear_tinfo_t();
            if ( !v59 && get_tinfo_size() == 8 )
            {
              *(_QWORD *)v78 = 7;
              copy_tinfo_t();
              clear_tinfo_t();
            }
            *(_DWORD *)v78 = 0;
            v25 = &v71;
            copy_argloc();
            v28 = n[0];
            *(_QWORD *)&v78[16] = 0;
            v79 = 0;
            if ( n[0] )
            {
              v29 = (void *)qalloc_or_throw(n[0], (__int64)&v71, v26, v27);
              v25 = (__int64 *)src[1];
              *(_QWORD *)&v78[16] = v29;
              v79.m128i_i64[1] = v28;
              memcpy(v29, src[1], v28);
              v79.m128i_i64[0] = v28;
            }
            v10 = v75[0];
            v80 = nullptr;
            v81 = 0;
            if ( v75[0] )
            {
              v80 = (void *)qalloc_or_throw(v75[0], (__int64)v25, v26, v27);
              v81.m128i_i64[1] = v10;
              memcpy(v80, v74, v10);
              v81.m128i_i64[0] = v10;
            }
            v82 = 0;
            copy_tinfo_t();
            v11 = v85;
            v12 = v84;
            v83 = v77;
            if ( *((_QWORD *)&v85 + 1) < (unsigned __int64)(v85 + 1) )
            {
              v61 = &v84;
              v84 = qvector_reserve((__int64)&v84, v84, v85 + 1, 80);
              v11 = v85;
              v12 = v84;
            }
            v61 = &v84;
            v13 = v12 + 80 * v11;
            *(_DWORD *)v13 = 0;
            copy_argloc();
            v14 = *(_QWORD *)&v78[16];
            v15 = _mm_loadu_si128(&v79);
            *(_QWORD *)&v78[16] = 0;
            *(_QWORD *)(v13 + 16) = v14;
            *(__m128i *)(v13 + 24) = v15;
            v16 = v80;
            v17 = _mm_load_si128(&v81);
            v79 = 0;
            v80 = nullptr;
            v81 = 0;
            *(_QWORD *)(v13 + 40) = v16;
            *(_QWORD *)(v13 + 64) = 0;
            *(__m128i *)(v13 + 48) = v17;
            copy_tinfo_t();
            *(_QWORD *)&v85 = v85 + 1;
            *(_DWORD *)(v13 + 72) = v83;
            clear_tinfo_t();
            if ( v80 )
            {
              v81.m128i_i64[0] = 0;
              qfree((__int64)v80);
            }
            if ( *(_QWORD *)&v78[16] )
            {
              v79.m128i_i64[0] = 0;
              qfree(*(__int64 *)&v78[16]);
            }
            cleanup_argloc();
            clear_tinfo_t();
            if ( v74 )
            {
              v75[0] = 0;
              qfree((__int64)v74);
            }
            if ( src[1] )
            {
              n[0] = 0;
              qfree((__int64)src[1]);
            }
            cleanup_argloc();
            v18 = v57.m128i_i8[0];
            v20[1] = v57.m128i_i8[0];
            if ( !v18 )
              break;
            v9 = v58;
          }
        }
        v36 = (void *)v85;
        v71 = 0;
        *(_OWORD *)src = 0;
        if ( (_QWORD)v85
          && (v71 = qvector_reserve((__int64)&v71, 0, v85, 4),
              memset((void *)(v71 + 4 * (__int64)src[0]), 0, 4 * ((_QWORD)v36 - (unsigned __int64)src[0])),
              src[0] = v36,
              (_QWORD)v85) )
        {
          v43 = 0;
          v44 = 0;
          while ( 1 )
          {
            v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v60 + 832) + 168LL))(
                    *(_QWORD *)(v60 + 832),
                    *(unsigned __int16 *)(v84 + 80 * v44 + 8));
            v42 = v71;
            if ( v45 == -1 )
              break;
            ++v43;
            *(_DWORD *)(v71 + 4 * v44) = v45;
            v44 = v43;
            if ( v43 >= (unsigned __int64)v85 )
              goto LABEL_56;
          }
          v3 = 0;
        }
        else
        {
LABEL_56:
          v66 = 0;
          v61 = &v84;
          create_tinfo();
          v37 = (__int64 *)v60;
          v38 = *(_QWORD *)(v60 + 800);
          LOBYTE(v39) = sub_32CB80(&v66, v38);
          v3 = v39;
          if ( (_BYTE)v39 )
          {
            v68 = 0;
            v67 = 0xFFFFFFFF00000000LL;
            v46 = j__qalloc_or_throw(312, v38, v40, v41);
            *(_QWORD *)v46 = -1;
            v47 = v46;
            *(_QWORD *)(v46 + 8) = 0;
            *(_QWORD *)(v46 + 16) = 0;
            *(_QWORD *)(v46 + 24) = 0;
            *(_QWORD *)(v46 + 48) = 0;
            *(_QWORD *)(v46 + 72) = 0;
            *(_QWORD *)(v46 + 80) = 0;
            *(_QWORD *)(v46 + 88) = 0;
            *(_QWORD *)(v46 + 96) = 0;
            *(_QWORD *)(v46 + 104) = 0;
            *(_QWORD *)(v46 + 112) = 0;
            *(_QWORD *)(v46 + 136) = 0;
            *(_QWORD *)(v46 + 144) = 0;
            *(_QWORD *)(v46 + 152) = 0;
            *(_QWORD *)(v46 + 176) = 0;
            *(_QWORD *)(v46 + 184) = 0;
            *(_QWORD *)(v46 + 192) = 0;
            *(_QWORD *)(v46 + 216) = 0;
            *(_QWORD *)(v46 + 240) = 0;
            *(_QWORD *)(v46 + 248) = 0;
            *(_QWORD *)(v46 + 256) = 0;
            *(_QWORD *)(v46 + 280) = 0;
            *(_QWORD *)(v46 + 288) = 0;
            *(_OWORD *)(v46 + 32) = 0;
            *(_OWORD *)(v46 + 56) = 0;
            *(_OWORD *)(v46 + 120) = 0;
            *(_OWORD *)(v46 + 160) = 0;
            *(_OWORD *)(v46 + 200) = 0;
            *(_OWORD *)(v46 + 224) = 0;
            *(_OWORD *)(v46 + 264) = 0;
            *(_OWORD *)(v46 + 296) = 0;
            LOBYTE(v67) = 8;
            v68 = v46;
            HIDWORD(v67) = *(_DWORD *)(v37[104] + 80);
            *(_DWORD *)(v46 + 280) = 4;
            if ( sub_11C5C0(v37[100], v37[5], 1) )
              *(_DWORD *)(v47 + 280) |= 8u;
            v3 = sub_335200(v47);
            if ( (_BYTE)v3 )
            {
              sub_1390C0(
                *(_QWORD *)(v60 + 8),
                v47 + 96,
                (__int64 *)(v47 + 136),
                (__int64)&v66,
                *(_QWORD *)(v63 + 16),
                0);
              memset(v78, 0, sizeof(v78));
              *(_QWORD *)v78 = qvector_reserve((__int64)v78, 0, 1, 16);
              *(__m128i *)(*(_QWORD *)v78 + 16LL * *(_QWORD *)&v78[8]) = _mm_load_si128((const __m128i *)&xmmword_424800);
              v48 = *(_QWORD *)v78;
              memset(v78, 0, sizeof(v78));
              v49 = (__m128i)_mm_loadh_ps((const double *)&v78[16]);
              v50 = *(_QWORD *)(v47 + 216);
              if ( v50 )
              {
                *(_QWORD *)(v47 + 224) = 0;
                v57 = v49;
                qfree(v50);
                v51 = *(_QWORD *)v78;
                v52 = _mm_load_si128(&v57);
                *(_QWORD *)(v47 + 216) = v48;
                *(__m128i *)(v47 + 224) = v52;
                if ( v51 )
                {
                  *(_QWORD *)&v78[8] = 0;
                  qfree(v51);
                }
              }
              else
              {
                *(_QWORD *)(v47 + 216) = v48;
                *(__m128i *)(v47 + 224) = v49;
              }
              sub_330290(v47, *(_QWORD *)(v60 + 8));
              v53 = 0;
              for ( i = 0; (unsigned __int64)v53 < *(_QWORD *)(v47 + 32); i = v53 )
              {
                ++v53;
                v55 = *(_QWORD *)(v47 + 24) + 80 * i;
                v56 = *(_DWORD *)(v71 + 4 * i);
                *(_BYTE *)v55 = 1;
                *(_DWORD *)(v55 + 8) = v56;
              }
              strrchr(s, 32);
              *(_OWORD *)v78 = 0xFFFFFFFF00000000LL;
              sub_11D4A0((__int64)v78);
              sub_1D6450(v60, 56, v78, nullptr, (unsigned __int8 *)&v67);
              sub_11CDA0((__int64)v78);
            }
            sub_11CDA0((__int64)&v67);
          }
          clear_tinfo_t();
          v42 = v71;
        }
        if ( v42 )
        {
          src[0] = nullptr;
          qfree(v42);
        }
LABEL_43:
        if ( v89 )
        {
          *(_QWORD *)&v90 = 0;
          qfree(v89);
        }
        cleanup_argloc();
        clear_tinfo_t();
        v30 = v84;
        if ( v84 )
        {
          v31 = v85;
          if ( (_QWORD)v85 )
          {
            v32 = 0;
            do
            {
              v33 = (_QWORD *)(v30 + 80 * v32);
              clear_tinfo_t();
              v34 = v33[5];
              if ( v34 )
              {
                v33[6] = 0;
                qfree(v34);
              }
              v35 = v33[2];
              if ( v35 )
              {
                v33[3] = 0;
                qfree(v35);
              }
              ++v32;
              cleanup_argloc();
              v30 = v84;
            }
            while ( v31 != v32 );
          }
          *(_QWORD *)&v85 = 0;
          qfree(v30);
        }
        v6 = s;
      }
      else
      {
        v3 = 0;
      }
      if ( v6 )
      {
        *(_QWORD *)&v70 = 0;
        qfree((__int64)v6);
      }
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
