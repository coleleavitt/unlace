__int64 __fastcall sub_3F7F00(__int64 a1, __int64 a2, char a3)
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
  __int8 v17; // al
  char *v18; // rax
  char *v19; // rbp
  __int8 v20; // al
  char *v21; // rax
  __int16 v22; // ax
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  _QWORD *v26; // rbx
  void *v27; // rbx
  __int64 *v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // rdi
  int v31; // ebp
  __int64 v32; // rbx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // rbx
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __m128i v39; // xmm0
  int v40; // ecx
  __int64 i; // rdx
  __int64 v42; // rax
  int v43; // edx
  __m128i v44; // [rsp+0h] [rbp-1D8h] BYREF
  const char *v45; // [rsp+18h] [rbp-1C0h]
  char v46; // [rsp+27h] [rbp-1B1h]
  __int64 v47; // [rsp+28h] [rbp-1B0h]
  __int64 *v48; // [rsp+30h] [rbp-1A8h]
  _BYTE *v49; // [rsp+38h] [rbp-1A0h]
  __int64 v50; // [rsp+40h] [rbp-198h]
  _QWORD *v51; // [rsp+48h] [rbp-190h]
  __int64 v52; // [rsp+50h] [rbp-188h]
  __int64 v53; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp-178h] BYREF
  __int64 v55; // [rsp+68h] [rbp-170h]
  char *s; // [rsp+70h] [rbp-168h]
  __int128 v57; // [rsp+78h] [rbp-160h]
  __int64 v58; // [rsp+90h] [rbp-148h]
  void *src[2]; // [rsp+98h] [rbp-140h]
  size_t n[2]; // [rsp+A8h] [rbp-130h]
  void *v61; // [rsp+B8h] [rbp-120h]
  size_t v62[2]; // [rsp+C0h] [rbp-118h]
  __int64 v63; // [rsp+D0h] [rbp-108h]
  int v64; // [rsp+D8h] [rbp-100h]
  _BYTE v65[24]; // [rsp+E0h] [rbp-F8h] BYREF
  __m128i v66; // [rsp+F8h] [rbp-E0h] BYREF
  void *v67; // [rsp+108h] [rbp-D0h]
  __m128i v68; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+120h] [rbp-B8h]
  int v70; // [rsp+128h] [rbp-B0h]
  __int64 v71; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v72; // [rsp+138h] [rbp-A0h]
  __int64 v73; // [rsp+148h] [rbp-90h]
  _QWORD v74[2]; // [rsp+150h] [rbp-88h] BYREF
  __int128 v75; // [rsp+160h] [rbp-78h]
  __int64 v76; // [rsp+170h] [rbp-68h]
  __int128 v77; // [rsp+178h] [rbp-60h]
  char v78; // [rsp+188h] [rbp-50h]
  unsigned __int64 v79; // [rsp+198h] [rbp-40h]

  v47 = a1;
  v50 = a2;
  v46 = a3;
  v79 = __readfsqword(0x28u);
  v44.m128i_i8[0] = *(_BYTE *)(a2 + 28);
  if ( a3 == ((v44.m128i_i8[0] & 0x10) != 0) )
  {
    LOBYTE(v3) = *(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) != 25
              && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) - 10) > 1;
    if ( (_BYTE)v3 )
    {
      s = nullptr;
      v57 = 0;
      v6 = nullptr;
      if ( get_predef_insn_cmt() > 0 && (v7 = strchr(s, 59), (v8 = v7) != nullptr) )
      {
        *v7 = 0;
        v9 = v7 + 1;
        v71 = 0;
        v73 = 0;
        v74[0] = 0;
        *(_QWORD *)v65 = (-(__int64)(a3 == 0) & 0xFFFFFFFFFFFFFFF2LL) + 21;
        v78 = -16;
        v74[1] = 3;
        v76 = 0;
        v51 = v74;
        v72 = 0;
        v75 = 0;
        v77 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v8[1] )
        {
          while ( 1 )
          {
            v18 = strchr(v9, 59);
            v19 = v18;
            if ( !v18 )
              break;
            v45 = v18 + 1;
            v20 = v18[1];
            v19[1] = 0;
            v44.m128i_i8[0] = v20;
            v21 = strchr(v9, 58);
            if ( !v21 )
              goto LABEL_38;
            *v21 = 0;
            toupper(*(unsigned __int8 *)v9);
            v22 = str2reg();
            if ( v22 == -1 )
              goto LABEL_38;
            src[1] = nullptr;
            v61 = nullptr;
            v63 = 0;
            v64 = 0;
            LODWORD(v58) = 3;
            src[0] = (void *)(unsigned int)v22;
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
              v52 = 0;
              v53 = 0;
              v48 = (__int64 *)&v65[8];
              *(_OWORD *)v65 = 0;
              copy_tinfo_t();
              *(_QWORD *)&v65[16] = 0;
              v49 = &v65[16];
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
            if ( !v46 && get_tinfo_size() == 8 )
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
            v67 = nullptr;
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
              v48 = &v71;
              v71 = qvector_reserve();
              v10 = v72;
              v11 = v71;
            }
            v48 = &v71;
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
            v67 = nullptr;
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
            v17 = v44.m128i_i8[0];
            v19[1] = v44.m128i_i8[0];
            if ( !v17 )
              break;
            v9 = v45;
          }
        }
        v27 = (void *)v72;
        v58 = 0;
        *(_OWORD *)src = 0;
        if ( (_QWORD)v72
          && (v58 = qvector_reserve(),
              memset((void *)(v58 + 4 * (__int64)src[0]), 0, 4 * ((_QWORD)v27 - (unsigned __int64)src[0])),
              src[0] = v27,
              (_QWORD)v72) )
        {
          v31 = 0;
          v32 = 0;
          while ( 1 )
          {
            v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v47 + 832) + 168LL))(
                    *(_QWORD *)(v47 + 832),
                    *(unsigned __int16 *)(v71 + 80 * v32 + 8));
            v30 = v58;
            if ( v33 == -1 )
              break;
            ++v31;
            *(_DWORD *)(v58 + 4 * v32) = v33;
            v32 = v31;
            if ( v31 >= (unsigned __int64)v72 )
              goto LABEL_52;
          }
          v3 = 0;
        }
        else
        {
LABEL_52:
          v53 = 0;
          v48 = &v71;
          create_tinfo();
          v28 = (__int64 *)v47;
          LOBYTE(v29) = sub_32CB80(&v53, *(_QWORD *)(v47 + 800));
          v3 = v29;
          if ( (_BYTE)v29 )
          {
            v55 = 0;
            v54 = 0xFFFFFFFF00000000LL;
            v34 = j__qalloc_or_throw();
            *(_QWORD *)v34 = -1;
            v35 = v34;
            *(_QWORD *)(v34 + 8) = 0;
            *(_QWORD *)(v34 + 16) = 0;
            *(_QWORD *)(v34 + 24) = 0;
            *(_QWORD *)(v34 + 48) = 0;
            *(_QWORD *)(v34 + 72) = 0;
            *(_QWORD *)(v34 + 80) = 0;
            *(_QWORD *)(v34 + 88) = 0;
            *(_QWORD *)(v34 + 96) = 0;
            *(_QWORD *)(v34 + 104) = 0;
            *(_QWORD *)(v34 + 112) = 0;
            *(_QWORD *)(v34 + 136) = 0;
            *(_QWORD *)(v34 + 144) = 0;
            *(_QWORD *)(v34 + 152) = 0;
            *(_QWORD *)(v34 + 176) = 0;
            *(_QWORD *)(v34 + 184) = 0;
            *(_QWORD *)(v34 + 192) = 0;
            *(_QWORD *)(v34 + 216) = 0;
            *(_QWORD *)(v34 + 240) = 0;
            *(_QWORD *)(v34 + 248) = 0;
            *(_QWORD *)(v34 + 256) = 0;
            *(_QWORD *)(v34 + 280) = 0;
            *(_QWORD *)(v34 + 288) = 0;
            *(_OWORD *)(v34 + 32) = 0;
            *(_OWORD *)(v34 + 56) = 0;
            *(_OWORD *)(v34 + 120) = 0;
            *(_OWORD *)(v34 + 160) = 0;
            *(_OWORD *)(v34 + 200) = 0;
            *(_OWORD *)(v34 + 224) = 0;
            *(_OWORD *)(v34 + 264) = 0;
            *(_OWORD *)(v34 + 296) = 0;
            LOBYTE(v54) = 8;
            v55 = v34;
            HIDWORD(v54) = *(_DWORD *)(v28[104] + 80);
            *(_DWORD *)(v34 + 280) = 4;
            if ( sub_11C5C0(v28[100], v28[5], 1) )
              *(_DWORD *)(v35 + 280) |= 8u;
            v3 = sub_335200(v35);
            if ( (_BYTE)v3 )
            {
              sub_1390C0(
                *(_QWORD *)(v47 + 8),
                v35 + 96,
                (__int64 *)(v35 + 136),
                (__int64)&v53,
                *(_QWORD *)(v50 + 16),
                0);
              memset(v65, 0, sizeof(v65));
              *(_QWORD *)v65 = qvector_reserve();
              *(__m128i *)(*(_QWORD *)v65 + 16LL * *(_QWORD *)&v65[8]) = _mm_load_si128((const __m128i *)&xmmword_424800);
              v36 = *(_QWORD *)v65;
              memset(v65, 0, sizeof(v65));
              v37 = (__m128i)_mm_loadh_ps((const double *)&v65[16]);
              if ( *(_QWORD *)(v35 + 216) )
              {
                *(_QWORD *)(v35 + 224) = 0;
                v44 = v37;
                qfree();
                v38 = *(_QWORD *)v65;
                v39 = _mm_load_si128(&v44);
                *(_QWORD *)(v35 + 216) = v36;
                *(__m128i *)(v35 + 224) = v39;
                if ( v38 )
                {
                  *(_QWORD *)&v65[8] = 0;
                  qfree();
                }
              }
              else
              {
                *(_QWORD *)(v35 + 216) = v36;
                *(__m128i *)(v35 + 224) = v37;
              }
              sub_330290(v35, *(_QWORD *)(v47 + 8));
              v40 = 0;
              for ( i = 0; (unsigned __int64)v40 < *(_QWORD *)(v35 + 32); i = v40 )
              {
                ++v40;
                v42 = *(_QWORD *)(v35 + 24) + 80 * i;
                v43 = *(_DWORD *)(v58 + 4 * i);
                *(_BYTE *)v42 = 1;
                *(_DWORD *)(v42 + 8) = v43;
              }
              strrchr(s, 32);
              *(_OWORD *)v65 = 0xFFFFFFFF00000000LL;
              sub_11D4A0((__int64)v65);
              sub_1D6450(v47, 56, v65, nullptr, (unsigned __int8 *)&v54);
              sub_11CDA0((__int64)v65);
            }
            sub_11CDA0((__int64)&v54);
          }
          clear_tinfo_t();
          v30 = v58;
        }
        if ( v30 )
        {
          src[0] = nullptr;
          qfree();
        }
LABEL_39:
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v23 = v71;
        if ( v71 )
        {
          v24 = v72;
          if ( (_QWORD)v72 )
          {
            v25 = 0;
            do
            {
              v26 = (_QWORD *)(v23 + 80 * v25);
              clear_tinfo_t();
              if ( v26[5] )
              {
                v26[6] = 0;
                qfree();
              }
              if ( v26[2] )
              {
                v26[3] = 0;
                qfree();
              }
              ++v25;
              cleanup_argloc();
              v23 = v71;
            }
            while ( v24 != v25 );
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
