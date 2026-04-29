__int64 __fastcall sub_3ED340(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  char *v6; // rbx
  char *v7; // rax
  char *v8; // rbp
  const char *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  void *v15; // rax
  __m128i v16; // xmm0
  char *v17; // rax
  char *v18; // rbp
  char v19; // al
  char *v20; // rax
  __int16 v21; // ax
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rbx
  void *v26; // rbx
  __int64 v27; // rdi
  int v28; // ebp
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r12
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r14
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdi
  int v43; // ecx
  __int64 i; // rdx
  __int64 v45; // rax
  int v46; // edx
  int v47; // r9d
  __int64 v48; // [rsp+0h] [rbp-1C8h]
  const char *v49; // [rsp+8h] [rbp-1C0h]
  __int64 v53; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v54; // [rsp+50h] [rbp-178h] BYREF
  __int64 v55; // [rsp+58h] [rbp-170h]
  char *s; // [rsp+60h] [rbp-168h]
  __int128 v57; // [rsp+68h] [rbp-160h]
  __int64 v58; // [rsp+80h] [rbp-148h]
  void *src[2]; // [rsp+88h] [rbp-140h]
  size_t n[2]; // [rsp+98h] [rbp-130h]
  void *v61; // [rsp+A8h] [rbp-120h]
  size_t v62[2]; // [rsp+B0h] [rbp-118h]
  __int64 v63; // [rsp+C0h] [rbp-108h]
  int v64; // [rsp+C8h] [rbp-100h]
  _BYTE v65[24]; // [rsp+D0h] [rbp-F8h] BYREF
  __m128i v66; // [rsp+E8h] [rbp-E0h] BYREF
  void *v67; // [rsp+F8h] [rbp-D0h]
  __m128i v68; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+110h] [rbp-B8h]
  int v70; // [rsp+118h] [rbp-B0h]
  __int64 v71; // [rsp+120h] [rbp-A8h]
  __int128 v72; // [rsp+128h] [rbp-A0h]
  __int64 v73; // [rsp+138h] [rbp-90h]
  __int64 v74; // [rsp+140h] [rbp-88h]
  __int64 v75; // [rsp+148h] [rbp-80h]
  __int128 v76; // [rsp+150h] [rbp-78h]
  __int64 v77; // [rsp+160h] [rbp-68h]
  __int128 v78; // [rsp+168h] [rbp-60h]
  char v79; // [rsp+178h] [rbp-50h]
  unsigned __int64 v80; // [rsp+188h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  LOBYTE(v48) = *(_BYTE *)(a2 + 28);
  if ( a3 == ((v48 & 0x10) != 0) )
  {
    LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) != 25
              && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) - 10) > 1;
    if ( (_BYTE)v3 )
    {
      s = 0;
      v57 = 0;
      v6 = 0;
      if ( get_predef_insn_cmt() > 0 && (v7 = strchr(s, 59), (v8 = v7) != 0) )
      {
        *v7 = 0;
        v9 = v7 + 1;
        v71 = 0;
        v73 = 0;
        v74 = 0;
        *(_QWORD *)v65 = (-(__int64)(a3 == 0) & 0xFFFFFFFFFFFFFFF2LL) + 21;
        v79 = -16;
        v75 = 3;
        v77 = 0;
        v72 = 0;
        v76 = 0;
        v78 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v8[1] )
        {
          while ( 1 )
          {
            v17 = strchr(v9, 59);
            v18 = v17;
            if ( !v17 )
              break;
            v49 = v17 + 1;
            v19 = v17[1];
            v18[1] = 0;
            LOBYTE(v48) = v19;
            v20 = strchr(v9, 58);
            if ( !v20 )
              goto LABEL_38;
            *v20 = 0;
            toupper(*(unsigned __int8 *)v9);
            v21 = str2reg();
            if ( v21 == -1 )
              goto LABEL_38;
            src[1] = 0;
            v61 = 0;
            v63 = 0;
            v64 = 0;
            LODWORD(v58) = 3;
            src[0] = (void *)(unsigned int)v21;
            *(_OWORD *)n = 0;
            *(_OWORD *)v62 = 0;
            if ( !(unsigned __int8)parse_decl() )
            {
              clear_tinfo_t();
              cleanup_argloc();
LABEL_38:
              v3 = 0;
              goto LABEL_39;
            }
            v54 = 0;
            v55 = 0;
            if ( (unsigned __int8)get_tinfo_details() )
            {
              v53 = 0;
              memset(v65, 0, sizeof(v65));
              copy_tinfo_t();
              copy_tinfo_t();
              v66.m128i_i32[0] = 0;
              v66.m128i_i16[2] = 0;
              clear_tinfo_t();
              clear_tinfo_t();
              *(_QWORD *)v65 = v54;
              v54 = 0;
              create_tinfo();
              clear_tinfo_t();
              clear_tinfo_t();
              clear_tinfo_t();
            }
            clear_tinfo_t();
            if ( !a3 && get_tinfo_size() == 8 )
            {
              *(_QWORD *)v65 = 7;
              copy_tinfo_t();
              clear_tinfo_t();
            }
            *(_DWORD *)v65 = 0;
            copy_argloc();
            *(_QWORD *)&v65[16] = 0;
            v66 = 0;
            if ( n[0] )
            {
              *(_QWORD *)&v65[16] = qalloc_or_throw();
              v66.m128i_i64[1] = n[0];
              memcpy(*(void **)&v65[16], src[1], n[0]);
              v66.m128i_i64[0] = n[0];
            }
            v67 = 0;
            v68 = 0;
            if ( v62[0] )
            {
              v67 = (void *)qalloc_or_throw();
              v68.m128i_i64[1] = v62[0];
              memcpy(v67, v61, v62[0]);
              v68.m128i_i64[0] = v62[0];
            }
            v69 = 0;
            copy_tinfo_t();
            v10 = v72;
            v11 = v71;
            v70 = v64;
            if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
            {
              v71 = qvector_reserve();
              v10 = v72;
              v11 = v71;
            }
            v12 = v11 + 80 * v10;
            *(_DWORD *)v12 = 0;
            copy_argloc();
            v13 = *(_QWORD *)&v65[16];
            v14 = _mm_loadu_si128(&v66);
            *(_QWORD *)&v65[16] = 0;
            *(_QWORD *)(v12 + 16) = v13;
            *(__m128i *)(v12 + 24) = v14;
            v15 = v67;
            v16 = _mm_load_si128(&v68);
            v66 = 0;
            v67 = 0;
            v68 = 0;
            *(_QWORD *)(v12 + 40) = v15;
            *(_QWORD *)(v12 + 64) = 0;
            *(__m128i *)(v12 + 48) = v16;
            copy_tinfo_t();
            *(_QWORD *)&v72 = v72 + 1;
            *(_DWORD *)(v12 + 72) = v70;
            clear_tinfo_t();
            if ( v67 )
            {
              v68.m128i_i64[0] = 0;
              qfree();
            }
            if ( *(_QWORD *)&v65[16] )
            {
              v66.m128i_i64[0] = 0;
              qfree();
            }
            cleanup_argloc();
            clear_tinfo_t();
            if ( v61 )
            {
              v62[0] = 0;
              qfree();
            }
            if ( src[1] )
            {
              n[0] = 0;
              qfree();
            }
            cleanup_argloc();
            v18[1] = v48;
            if ( !(_BYTE)v48 )
              break;
            v9 = v49;
          }
        }
        v26 = (void *)v72;
        v58 = 0;
        *(_OWORD *)src = 0;
        if ( (_QWORD)v72
          && (v58 = qvector_reserve(),
              memset((void *)(v58 + 4 * (__int64)src[0]), 0, 4 * ((_QWORD)v26 - (unsigned __int64)src[0])),
              src[0] = v26,
              (_QWORD)v72) )
        {
          v28 = 0;
          v29 = 0;
          while ( 1 )
          {
            v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                    *(_QWORD *)(a1 + 832),
                    *(unsigned __int16 *)(v71 + 80 * v29 + 8));
            v27 = v58;
            if ( v30 == -1 )
              break;
            ++v28;
            *(_DWORD *)(v58 + 4 * v29) = v30;
            v29 = v28;
            if ( v28 >= (unsigned __int64)v72 )
              goto LABEL_52;
          }
          v3 = 0;
        }
        else
        {
LABEL_52:
          v53 = 0;
          create_tinfo();
          v3 = sub_329720(&v53, *(_QWORD *)(a1 + 800), -1);
          if ( (_BYTE)v3 )
          {
            v55 = 0;
            v54 = 0xFFFFFFFF00000000LL;
            v31 = j__qalloc_or_throw();
            *(_QWORD *)v31 = -1;
            v32 = v31;
            *(_QWORD *)(v31 + 8) = 0;
            *(_QWORD *)(v31 + 16) = 0;
            *(_QWORD *)(v31 + 24) = 0;
            *(_QWORD *)(v31 + 48) = 0;
            *(_QWORD *)(v31 + 72) = 0;
            *(_QWORD *)(v31 + 80) = 0;
            *(_QWORD *)(v31 + 88) = 0;
            *(_QWORD *)(v31 + 96) = 0;
            *(_QWORD *)(v31 + 104) = 0;
            *(_QWORD *)(v31 + 112) = 0;
            *(_QWORD *)(v31 + 136) = 0;
            *(_QWORD *)(v31 + 144) = 0;
            *(_QWORD *)(v31 + 152) = 0;
            *(_QWORD *)(v31 + 176) = 0;
            *(_QWORD *)(v31 + 184) = 0;
            *(_QWORD *)(v31 + 192) = 0;
            *(_QWORD *)(v31 + 216) = 0;
            *(_QWORD *)(v31 + 240) = 0;
            *(_QWORD *)(v31 + 248) = 0;
            *(_QWORD *)(v31 + 256) = 0;
            *(_QWORD *)(v31 + 280) = 0;
            *(_QWORD *)(v31 + 288) = 0;
            *(_OWORD *)(v31 + 32) = 0;
            *(_OWORD *)(v31 + 56) = 0;
            *(_OWORD *)(v31 + 120) = 0;
            *(_OWORD *)(v31 + 160) = 0;
            *(_OWORD *)(v31 + 200) = 0;
            *(_OWORD *)(v31 + 224) = 0;
            *(_OWORD *)(v31 + 264) = 0;
            *(_OWORD *)(v31 + 296) = 0;
            LOBYTE(v54) = 8;
            v55 = v31;
            HIDWORD(v54) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
            *(_DWORD *)(v31 + 280) = 4;
            if ( sub_11A180(*(_QWORD *)(a1 + 800), *(_QWORD *)(a1 + 40), 1) )
              *(_DWORD *)(v32 + 280) |= 8u;
            v3 = sub_331D80(v32, &v53);
            if ( (_BYTE)v3 )
            {
              sub_136BE0(*(_QWORD *)(a1 + 8), v32 + 96, (__int64 *)(v32 + 136), (__int64)&v53, *(_QWORD *)(a2 + 16), 0);
              memset(v65, 0, sizeof(v65));
              v37 = xmmword_4ED7D0;
              v38 = *((_QWORD *)&xmmword_4ED7D0 + 1);
              if ( (unsigned __int64)xmmword_4ED7D0 + v38 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
              {
                *(_QWORD *)v65 = qvector_reserve();
                v33 = 16 * *(_DWORD *)&v65[8];
                *(__m128i *)(*(_QWORD *)v65 + 16LL * *(_QWORD *)&v65[8]) = _mm_unpacklo_epi64(
                                                                             (__m128i)v37,
                                                                             (__m128i)v38);
                v39 = *(_QWORD *)&v65[16];
                v40 = *(_QWORD *)&v65[8] + 1LL;
                v41 = *(_QWORD *)v65;
              }
              else
              {
                v39 = 0;
                v40 = 0;
                v41 = 0;
              }
              memset(v65, 0, sizeof(v65));
              if ( *(_QWORD *)(v32 + 216) )
              {
                *(_QWORD *)(v32 + 224) = 0;
                v48 = v41;
                qfree();
                v42 = *(_QWORD *)v65;
                *(_QWORD *)(v32 + 224) = v40;
                *(_QWORD *)(v32 + 232) = v39;
                *(_QWORD *)(v32 + 216) = v48;
                if ( v42 )
                {
                  *(_QWORD *)&v65[8] = 0;
                  qfree();
                }
              }
              else
              {
                *(_QWORD *)(v32 + 216) = v41;
                *(_QWORD *)(v32 + 224) = v40;
                *(_QWORD *)(v32 + 232) = v39;
              }
              sub_32CE30(v32, *(_QWORD *)(a1 + 8), v33, v34, v35, v36, v48, (_DWORD)v49);
              v43 = 0;
              for ( i = 0; (unsigned __int64)v43 < *(_QWORD *)(v32 + 32); i = v43 )
              {
                ++v43;
                v45 = *(_QWORD *)(v32 + 24) + 80 * i;
                v46 = *(_DWORD *)(v58 + 4 * i);
                *(_BYTE *)v45 = 1;
                *(_DWORD *)(v45 + 8) = v46;
              }
              strrchr(s, 32);
              *(_OWORD *)v65 = 0xFFFFFFFF00000000LL;
              sub_11B060((__int64)v65);
              sub_1D38D0(a1, 56, (unsigned int)v65, 0, (unsigned int)&v54, v47);
              sub_11A960((__int64)v65);
            }
            sub_11A960((__int64)&v54);
          }
          clear_tinfo_t();
          v27 = v58;
        }
        if ( v27 )
        {
          src[0] = 0;
          qfree();
        }
LABEL_39:
        if ( v77 )
        {
          *(_QWORD *)&v78 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v22 = v71;
        if ( v71 )
        {
          v23 = v72;
          if ( (_QWORD)v72 )
          {
            v24 = 0;
            do
            {
              v25 = (_QWORD *)(v22 + 80 * v24);
              clear_tinfo_t();
              if ( v25[5] )
              {
                v25[6] = 0;
                qfree();
              }
              if ( v25[2] )
              {
                v25[3] = 0;
                qfree();
              }
              ++v24;
              cleanup_argloc();
              v22 = v71;
            }
            while ( v23 != v24 );
          }
          *(_QWORD *)&v72 = 0;
          qfree();
        }
        v6 = s;
      }
      else
      {
        v3 = 0;
      }
      if ( v6 )
      {
        *(_QWORD *)&v57 = 0;
        qfree();
      }
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
