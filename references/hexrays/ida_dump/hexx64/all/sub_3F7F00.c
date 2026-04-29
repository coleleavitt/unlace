__int64 __fastcall sub_3F7F00(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  __int64 predef_insn_cmt; // rax
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rbp
  const char *v10; // rbx
  size_t v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rax
  __m128i v16; // xmm0
  void *v17; // rax
  __m128i v18; // xmm0
  __int8 v19; // al
  char *v20; // rax
  char *v21; // rbp
  __int8 v22; // al
  char *v23; // rax
  char *v24; // r14
  int v25; // eax
  __int16 v26; // ax
  unsigned __int64 v27; // rax
  size_t v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r12
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  void *v35; // rbx
  __int64 *v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rdi
  int v39; // ebp
  __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // rbx
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rdi
  __m128i v48; // xmm0
  int v49; // ecx
  __int64 i; // rdx
  __int64 v51; // rax
  int v52; // edx
  char *v53; // r12
  char *v54; // rax
  __m128i v55; // [rsp+0h] [rbp-1D8h] BYREF
  const char *v56; // [rsp+18h] [rbp-1C0h]
  char v57; // [rsp+27h] [rbp-1B1h]
  __int64 v58; // [rsp+28h] [rbp-1B0h]
  __int64 *v59; // [rsp+30h] [rbp-1A8h]
  _BYTE *v60; // [rsp+38h] [rbp-1A0h]
  __int64 v61; // [rsp+40h] [rbp-198h]
  __int64 *v62; // [rsp+48h] [rbp-190h]
  __int64 v63; // [rsp+50h] [rbp-188h] BYREF
  __int64 v64; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v65; // [rsp+60h] [rbp-178h] BYREF
  __int64 v66; // [rsp+68h] [rbp-170h]
  char *s; // [rsp+70h] [rbp-168h] BYREF
  __int128 v68; // [rsp+78h] [rbp-160h]
  __int64 v69; // [rsp+90h] [rbp-148h] BYREF
  void *src[2]; // [rsp+98h] [rbp-140h] BYREF
  size_t n[2]; // [rsp+A8h] [rbp-130h]
  void *v72; // [rsp+B8h] [rbp-120h]
  size_t v73[2]; // [rsp+C0h] [rbp-118h]
  __int64 v74; // [rsp+D0h] [rbp-108h] BYREF
  int v75; // [rsp+D8h] [rbp-100h]
  _BYTE v76[24]; // [rsp+E0h] [rbp-F8h] BYREF
  __m128i v77; // [rsp+F8h] [rbp-E0h] BYREF
  void *v78; // [rsp+108h] [rbp-D0h]
  __m128i v79; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+120h] [rbp-B8h] BYREF
  int v81; // [rsp+128h] [rbp-B0h]
  __int64 v82; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v83; // [rsp+138h] [rbp-A0h]
  __int64 v84; // [rsp+148h] [rbp-90h]
  __int64 v85; // [rsp+150h] [rbp-88h] BYREF
  __int64 v86; // [rsp+158h] [rbp-80h] BYREF
  __int128 v87; // [rsp+160h] [rbp-78h]
  __int64 v88; // [rsp+170h] [rbp-68h]
  __int128 v89; // [rsp+178h] [rbp-60h]
  char v90; // [rsp+188h] [rbp-50h]
  unsigned __int64 v91; // [rsp+198h] [rbp-40h]

  v58 = a1;
  v61 = a2;
  v57 = a3;
  v91 = __readfsqword(0x28u);
  v55.m128i_i8[0] = *(_BYTE *)(a2 + 28);
  if ( a3 == ((v55.m128i_i8[0] & 0x10) != 0) )
  {
    LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) != 25
              && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) - 10) > 1;
    if ( (_BYTE)v3 )
    {
      s = nullptr;
      v68 = 0;
      predef_insn_cmt = get_predef_insn_cmt(&s);
      v7 = s;
      if ( predef_insn_cmt > 0 && (v8 = strchr(s, 59), (v9 = v8) != nullptr) )
      {
        *v8 = 0;
        v10 = v8 + 1;
        v82 = 0;
        v84 = 0;
        v85 = 0;
        *(_QWORD *)v76 = (-(__int64)(a3 == 0) & 0xFFFFFFFFFFFFFFF2LL) + 21;
        v90 = -16;
        v86 = 3;
        v88 = 0;
        v62 = &v85;
        v83 = 0;
        v87 = 0;
        v89 = 0;
        copy_tinfo_t(&v85, v76);
        clear_tinfo_t(v76);
        if ( v9[1] )
        {
          while ( 1 )
          {
            v20 = strchr(v10, 59);
            v21 = v20;
            if ( !v20 )
              break;
            v56 = v20 + 1;
            v22 = v20[1];
            v21[1] = 0;
            v55.m128i_i8[0] = v22;
            v23 = strchr(v10, 58);
            if ( !v23 )
              goto LABEL_42;
            *v23 = 0;
            v24 = v23 + 1;
            v25 = toupper(*(unsigned __int8 *)v10);
            v26 = str2reg(&v10[v25 == 69]);
            if ( v26 == -1 )
              goto LABEL_42;
            src[1] = nullptr;
            v72 = nullptr;
            v74 = 0;
            v75 = 0;
            LODWORD(v69) = 3;
            src[0] = (void *)(unsigned int)v26;
            *(_OWORD *)n = 0;
            *(_OWORD *)v73 = 0;
            if ( !(unsigned __int8)parse_decl(&v74, &src[1], 0, v24, 3) )
            {
              clear_tinfo_t(&v74);
              if ( v72 )
              {
                v73[0] = 0;
                qfree(v72);
              }
              if ( src[1] )
              {
                n[0] = 0;
                qfree(src[1]);
              }
              cleanup_argloc(&v69);
LABEL_42:
              v3 = 0;
              goto LABEL_43;
            }
            v65 = 0;
            v66 = 0;
            if ( (unsigned __int8)get_tinfo_details(v74, 11, &v65) )
            {
              v63 = 0;
              v64 = 0;
              *(_OWORD *)v76 = 0;
              copy_tinfo_t(&v76[8], &v64);
              *(_QWORD *)&v76[16] = 0;
              v60 = &v76[16];
              copy_tinfo_t(&v76[16], &v63);
              v77.m128i_i32[0] = 0;
              v77.m128i_i16[2] = 0;
              clear_tinfo_t(&v64);
              clear_tinfo_t(&v63);
              v27 = *(_QWORD *)v76;
              *(_QWORD *)v76 = v65;
              v65 = v27;
              create_tinfo(&v74, 10, 10, v76);
              clear_tinfo_t(&v76[16]);
              clear_tinfo_t(&v76[8]);
              clear_tinfo_t(v76);
            }
            clear_tinfo_t(&v65);
            if ( !v57 && get_tinfo_size(0, v74, 0) == 8 )
            {
              *(_QWORD *)v76 = 7;
              copy_tinfo_t(&v74, v76);
              clear_tinfo_t(v76);
            }
            *(_DWORD *)v76 = 0;
            copy_argloc(v76, &v69);
            v28 = n[0];
            *(_QWORD *)&v76[16] = 0;
            v77 = 0;
            if ( n[0] )
            {
              *(_QWORD *)&v76[16] = qalloc_or_throw(n[0]);
              v77.m128i_i64[1] = v28;
              memcpy(*(void **)&v76[16], src[1], v28);
              v77.m128i_i64[0] = v28;
            }
            v11 = v73[0];
            v78 = nullptr;
            v79 = 0;
            if ( v73[0] )
            {
              v78 = (void *)qalloc_or_throw(v73[0]);
              v79.m128i_i64[1] = v11;
              memcpy(v78, v72, v11);
              v79.m128i_i64[0] = v11;
            }
            v80 = 0;
            copy_tinfo_t(&v80, &v74);
            v12 = v83;
            v13 = v82;
            v81 = v75;
            if ( *((_QWORD *)&v83 + 1) < (unsigned __int64)(v83 + 1) )
            {
              v59 = &v82;
              v82 = qvector_reserve(&v82, v82, v83 + 1, 80);
              v12 = v83;
              v13 = v82;
            }
            v59 = &v82;
            v14 = v13 + 80 * v12;
            *(_DWORD *)v14 = 0;
            copy_argloc(v14, v76);
            v15 = *(_QWORD *)&v76[16];
            v16 = _mm_loadu_si128(&v77);
            *(_QWORD *)&v76[16] = 0;
            *(_QWORD *)(v14 + 16) = v15;
            *(__m128i *)(v14 + 24) = v16;
            v17 = v78;
            v18 = _mm_load_si128(&v79);
            v77 = 0;
            v78 = nullptr;
            v79 = 0;
            *(_QWORD *)(v14 + 40) = v17;
            *(_QWORD *)(v14 + 64) = 0;
            *(__m128i *)(v14 + 48) = v18;
            copy_tinfo_t(v14 + 64, &v80);
            *(_QWORD *)&v83 = v83 + 1;
            *(_DWORD *)(v14 + 72) = v81;
            clear_tinfo_t(&v80);
            if ( v78 )
            {
              v79.m128i_i64[0] = 0;
              qfree(v78);
            }
            if ( *(_QWORD *)&v76[16] )
            {
              v77.m128i_i64[0] = 0;
              qfree(*(_QWORD *)&v76[16]);
            }
            cleanup_argloc(v76);
            clear_tinfo_t(&v74);
            if ( v72 )
            {
              v73[0] = 0;
              qfree(v72);
            }
            if ( src[1] )
            {
              n[0] = 0;
              qfree(src[1]);
            }
            cleanup_argloc(&v69);
            v19 = v55.m128i_i8[0];
            v21[1] = v55.m128i_i8[0];
            if ( !v19 )
              break;
            v10 = v56;
          }
        }
        v35 = (void *)v83;
        v69 = 0;
        *(_OWORD *)src = 0;
        if ( (_QWORD)v83
          && (v69 = qvector_reserve(&v69, 0, v83, 4),
              memset((void *)(v69 + 4 * (__int64)src[0]), 0, 4 * ((_QWORD)v35 - (unsigned __int64)src[0])),
              src[0] = v35,
              (_QWORD)v83) )
        {
          v39 = 0;
          v40 = 0;
          while ( 1 )
          {
            v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v58 + 832) + 168LL))(
                    *(_QWORD *)(v58 + 832),
                    *(unsigned __int16 *)(v82 + 80 * v40 + 8));
            v38 = v69;
            if ( v41 == -1 )
              break;
            ++v39;
            *(_DWORD *)(v69 + 4 * v40) = v41;
            v40 = v39;
            if ( v39 >= (unsigned __int64)v83 )
              goto LABEL_56;
          }
          v3 = 0;
        }
        else
        {
LABEL_56:
          v64 = 0;
          v59 = &v82;
          create_tinfo(&v64, 12, 12, &v82);
          v36 = (__int64 *)v58;
          LOBYTE(v37) = sub_32CB80(&v64, *(_QWORD *)(v58 + 800), -1);
          v3 = v37;
          if ( (_BYTE)v37 )
          {
            v66 = 0;
            v65 = 0xFFFFFFFF00000000LL;
            v42 = j__qalloc_or_throw(312);
            *(_QWORD *)v42 = -1;
            v43 = v42;
            *(_QWORD *)(v42 + 8) = 0;
            *(_QWORD *)(v42 + 16) = 0;
            *(_QWORD *)(v42 + 24) = 0;
            *(_QWORD *)(v42 + 48) = 0;
            *(_QWORD *)(v42 + 72) = 0;
            *(_QWORD *)(v42 + 80) = 0;
            *(_QWORD *)(v42 + 88) = 0;
            *(_QWORD *)(v42 + 96) = 0;
            *(_QWORD *)(v42 + 104) = 0;
            *(_QWORD *)(v42 + 112) = 0;
            *(_QWORD *)(v42 + 136) = 0;
            *(_QWORD *)(v42 + 144) = 0;
            *(_QWORD *)(v42 + 152) = 0;
            *(_QWORD *)(v42 + 176) = 0;
            *(_QWORD *)(v42 + 184) = 0;
            *(_QWORD *)(v42 + 192) = 0;
            *(_QWORD *)(v42 + 216) = 0;
            *(_QWORD *)(v42 + 240) = 0;
            *(_QWORD *)(v42 + 248) = 0;
            *(_QWORD *)(v42 + 256) = 0;
            *(_QWORD *)(v42 + 280) = 0;
            *(_QWORD *)(v42 + 288) = 0;
            *(_OWORD *)(v42 + 32) = 0;
            *(_OWORD *)(v42 + 56) = 0;
            *(_OWORD *)(v42 + 120) = 0;
            *(_OWORD *)(v42 + 160) = 0;
            *(_OWORD *)(v42 + 200) = 0;
            *(_OWORD *)(v42 + 224) = 0;
            *(_OWORD *)(v42 + 264) = 0;
            *(_OWORD *)(v42 + 296) = 0;
            LOBYTE(v65) = 8;
            v66 = v42;
            HIDWORD(v65) = *(_DWORD *)(v36[104] + 80);
            *(_DWORD *)(v42 + 280) = 4;
            if ( sub_11C5C0(v36[100], v36[5], 1) )
              *(_DWORD *)(v43 + 280) |= 8u;
            v3 = sub_335200(v43, &v64);
            if ( (_BYTE)v3 )
            {
              sub_1390C0(*(_QWORD *)(v58 + 8), v43 + 96, (__int64 *)(v43 + 136), &v64, *(_QWORD *)(v61 + 16), 0);
              memset(v76, 0, sizeof(v76));
              *(_QWORD *)v76 = qvector_reserve(v76, 0, 1, 16);
              *(__m128i *)(*(_QWORD *)v76 + 16LL * *(_QWORD *)&v76[8]) = _mm_load_si128((const __m128i *)&xmmword_424800);
              v44 = *(_QWORD *)v76;
              memset(v76, 0, sizeof(v76));
              v45 = (__m128i)_mm_loadh_ps((const double *)&v76[16]);
              v46 = *(_QWORD *)(v43 + 216);
              if ( v46 )
              {
                *(_QWORD *)(v43 + 224) = 0;
                v55 = v45;
                qfree(v46);
                v47 = *(_QWORD *)v76;
                v48 = _mm_load_si128(&v55);
                *(_QWORD *)(v43 + 216) = v44;
                *(__m128i *)(v43 + 224) = v48;
                if ( v47 )
                {
                  *(_QWORD *)&v76[8] = 0;
                  qfree(v47);
                }
              }
              else
              {
                *(_QWORD *)(v43 + 216) = v44;
                *(__m128i *)(v43 + 224) = v45;
              }
              sub_330290(v43, *(_QWORD *)(v58 + 8));
              v49 = 0;
              for ( i = 0; (unsigned __int64)v49 < *(_QWORD *)(v43 + 32); i = v49 )
              {
                ++v49;
                v51 = *(_QWORD *)(v43 + 24) + 80 * i;
                v52 = *(_DWORD *)(v69 + 4 * i);
                *(_BYTE *)v51 = 1;
                *(_DWORD *)(v51 + 8) = v52;
              }
              v53 = s;
              v54 = strrchr(s, 32);
              *(_QWORD *)&v76[8] = 0;
              if ( v54 )
                v53 = v54 + 1;
              *(_QWORD *)v76 = 0xFFFFFFFF00000000LL;
              sub_11D4A0((__int64)v76, (__int64)v53);
              sub_1D6450(v58, 56, v76, nullptr, (unsigned __int8 *)&v65);
              sub_11CDA0((__int64)v76);
            }
            sub_11CDA0((__int64)&v65);
          }
          clear_tinfo_t(&v64);
          v38 = v69;
        }
        if ( v38 )
        {
          src[0] = nullptr;
          qfree(v38);
        }
LABEL_43:
        if ( v88 )
        {
          *(_QWORD *)&v89 = 0;
          qfree(v88);
        }
        cleanup_argloc(&v86);
        clear_tinfo_t(v62);
        v29 = v82;
        if ( v82 )
        {
          v30 = v83;
          if ( (_QWORD)v83 )
          {
            v31 = 0;
            do
            {
              v32 = (_QWORD *)(v29 + 80 * v31);
              clear_tinfo_t(v32 + 8);
              v33 = v32[5];
              if ( v33 )
              {
                v32[6] = 0;
                qfree(v33);
              }
              v34 = v32[2];
              if ( v34 )
              {
                v32[3] = 0;
                qfree(v34);
              }
              ++v31;
              cleanup_argloc(v32);
              v29 = v82;
            }
            while ( v30 != v31 );
          }
          *(_QWORD *)&v83 = 0;
          qfree(v29);
        }
        v7 = s;
      }
      else
      {
        v3 = 0;
      }
      if ( v7 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v7);
      }
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
