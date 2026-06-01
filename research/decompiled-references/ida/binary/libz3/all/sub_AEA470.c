void __fastcall sub_AEA470(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char **exception; // rbp
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rsi
  void (__fastcall ***v18)(_QWORD, __int64); // rbp
  unsigned int v19; // esi
  unsigned int v20; // ebx
  size_t v21; // r12
  __m128i *v22; // r13
  unsigned __int64 v23; // rdi
  __m128i *v24; // rax
  __m128i *v25; // r9
  unsigned int v26; // ebx
  unsigned int v27; // eax
  unsigned int v28; // esi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int8 v31; // bp
  size_t v32; // r13
  char *v33; // r12
  size_t v34; // rbx
  _BYTE *v35; // rdi
  _OWORD *v36; // rax
  char *v37; // rdx
  __m128i v38; // xmm0
  _BYTE *v39; // rdi
  size_t v40; // rsi
  __int64 v41; // rbp
  size_t v42; // rbp
  unsigned __int64 v43; // rdi
  char *v44; // rax
  char *v45; // r9
  size_t v46; // r8
  __m128i *v47; // r10
  char *v48; // rdi
  int v49; // esi
  _DWORD *v50; // r8
  __m128i *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdi
  int v55; // [rsp-8h] [rbp-1A8h]
  int v56; // [rsp-8h] [rbp-1A8h]
  void *v57; // [rsp+0h] [rbp-1A0h]
  int v58; // [rsp+8h] [rbp-198h]
  void *v59; // [rsp+10h] [rbp-190h]
  __int64 v60; // [rsp+10h] [rbp-190h]
  int v61; // [rsp+18h] [rbp-188h]
  __m128i *v62; // [rsp+18h] [rbp-188h]
  int v63; // [rsp+20h] [rbp-180h]
  __m128i *v64; // [rsp+20h] [rbp-180h]
  int v65; // [rsp+28h] [rbp-178h]
  int v66; // [rsp+28h] [rbp-178h]
  int v67[2]; // [rsp+30h] [rbp-170h] BYREF
  void *dest; // [rsp+38h] [rbp-168h] BYREF
  size_t n[2]; // [rsp+40h] [rbp-160h] BYREF
  int v70; // [rsp+50h] [rbp-150h]
  __int64 v71; // [rsp+58h] [rbp-148h] BYREF
  int v72; // [rsp+60h] [rbp-140h]
  int v73; // [rsp+68h] [rbp-138h]
  int v74; // [rsp+70h] [rbp-130h]
  void *src; // [rsp+78h] [rbp-128h] BYREF
  size_t v76; // [rsp+80h] [rbp-120h]
  __m128i v77; // [rsp+88h] [rbp-118h] BYREF
  void *v78[2]; // [rsp+98h] [rbp-108h] BYREF
  _OWORD v79[10]; // [rsp+A8h] [rbp-F8h] BYREF
  __m128i v80[5]; // [rsp+148h] [rbp-58h]

  if ( !*(_BYTE *)(a1 + 41) || *(_QWORD *)(a1 + 792) )
    return;
  sub_180CE20(
    (int)&dest,
    (int)v67,
    a3,
    a4,
    a5,
    a6,
    v55,
    v67,
    (int)&dest,
    (__int64)v59,
    v61,
    v63,
    v65,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 568LL),
    (int)dest,
    n[0],
    n[1],
    v70,
    v71,
    v72,
    v73,
    v74,
    (int)src,
    v76,
    v77.m128i_i32[0],
    v77.m128i_i32[2],
    (int)v78[0],
    v78[1],
    v79[0],
    *((__int64 *)&v79[0] + 1));
  v12 = dword_1C7ECF8;
  if ( dword_1C7ECF8 )
  {
    if ( (unsigned int)dword_1C7ECF8 <= 9 )
    {
      v77.m128i_i8[0] = 0;
      v21 = 1;
      src = &v77;
      v22 = &v77;
      goto LABEL_34;
    }
    v19 = dword_1C7ECF8;
    v20 = 1;
    while ( 1 )
    {
      if ( v19 <= 0x63 )
      {
        ++v20;
        goto LABEL_23;
      }
      if ( v19 <= 0x3E7 )
      {
        v20 += 2;
        goto LABEL_23;
      }
      if ( v19 <= 0x270F )
        break;
      v20 += 4;
      if ( v19 <= 0x1869F )
        goto LABEL_23;
      v19 /= 0x2710u;
    }
    v20 += 3;
LABEL_23:
    v77.m128i_i8[0] = 0;
    v21 = v20;
    src = &v77;
    v22 = &v77;
    v76 = 0;
    if ( v20 <= 0xF )
    {
LABEL_31:
      v26 = v20 - 1;
      *(__m128i *)v78 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
      v79[0] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
      v79[1] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
      v79[2] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
      v79[3] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
      v79[4] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
      v79[5] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
      v79[6] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
      v79[7] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
      v79[8] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
      v79[9] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
      v80[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
      *(__m128i *)((char *)v80 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
      if ( v12 <= 0x63 )
        goto LABEL_53;
      do
      {
        v27 = v12 % 0x64;
        v28 = v12;
        v12 /= 0x64u;
        v29 = 2 * v27;
        v22->m128i_i8[v26] = *((_BYTE *)v78 + (unsigned int)(v29 + 1));
        v30 = v26 - 1;
        v26 -= 2;
        v22->m128i_i8[v30] = *((_BYTE *)v78 + v29);
      }
      while ( v28 > 0x270F );
      if ( v28 > 0x3E7 )
      {
LABEL_53:
        v41 = 2 * v12;
        v22->m128i_i8[1] = *((_BYTE *)v78 + (unsigned int)(v41 + 1));
        v31 = *((_BYTE *)v78 + v41);
LABEL_35:
        v22->m128i_i8[0] = v31;
        v76 = v21;
        *((_BYTE *)src + v21) = 0;
        v32 = v76;
        if ( 0x7FFFFFFFFFFFFFFFLL - v76 < n[0] )
          std::__throw_length_error("basic_string::append");
        v33 = (char *)src;
        v34 = n[0] + v76;
        if ( src == &v77 )
        {
          if ( v34 <= 0xF )
          {
LABEL_38:
            if ( n[0] )
            {
              v35 = (char *)src + v76;
              if ( n[0] == 1 )
                *v35 = *(_BYTE *)dest;
              else
                memcpy(v35, dest, n[0]);
              v33 = (char *)src;
            }
            goto LABEL_42;
          }
          if ( (v34 & 0x8000000000000000LL) == 0LL )
          {
            if ( v34 <= 0x1D )
            {
              v43 = 31;
              v42 = 30;
              goto LABEL_59;
            }
            goto LABEL_58;
          }
        }
        else
        {
          if ( v77.m128i_i64[0] >= v34 )
            goto LABEL_38;
          if ( (v34 & 0x8000000000000000LL) == 0LL )
          {
            v42 = 2 * v77.m128i_i64[0];
            if ( v34 < 2 * v77.m128i_i64[0] )
            {
              v43 = v42 + 1;
              if ( (v77.m128i_i64[0] & 0x4000000000000000LL) != 0 )
                goto LABEL_57;
              goto LABEL_59;
            }
LABEL_58:
            v42 = n[0] + v76;
            v43 = v34 + 1;
            if ( (__int64)(v34 + 1) < 0 )
LABEL_57:
              std::__throw_bad_alloc();
LABEL_59:
            v62 = (__m128i *)n[0];
            v60 = (__int64)dest;
            v44 = (char *)operator new(v43);
            v45 = (char *)v60;
            v46 = (size_t)v62;
            v33 = v44;
            v47 = (__m128i *)src;
            if ( v32 )
            {
              if ( v32 == 1 )
              {
                *v44 = *(_BYTE *)src;
              }
              else
              {
                v64 = v62;
                v62 = (__m128i *)v60;
                v60 = (__int64)src;
                memcpy(v44, src, v32);
                v46 = (size_t)v64;
                v45 = (char *)v62;
                v47 = (__m128i *)v60;
              }
            }
            if ( v45 && v46 )
            {
              v48 = &v33[v32];
              if ( v46 == 1 )
              {
                *v48 = *v45;
              }
              else
              {
                v60 = (__int64)v47;
                memcpy(v48, v45, v46);
                v47 = (__m128i *)v60;
              }
            }
            if ( v47 != &v77 )
              operator delete(v47, v77.m128i_i64[0] + 1);
            src = v33;
            v77.m128i_i64[0] = v42;
LABEL_42:
            v76 = v34;
            v33[v34] = 0;
            v36 = src;
            v78[0] = v79;
            v37 = (char *)v76;
            if ( src == &v77 )
            {
              v49 = v76 + 1;
              v50 = v79;
              v51 = &v77;
              if ( (unsigned int)(v76 + 1) >= 8 )
              {
                LODWORD(v53) = 0;
                do
                {
                  v54 = (unsigned int)v53;
                  v53 = (unsigned int)(v53 + 8);
                  *(_QWORD *)((char *)v79 + v54) = *(__int64 *)((char *)v77.m128i_i64 + v54);
                }
                while ( (unsigned int)v53 < (v49 & 0xFFFFFFF8) );
                v50 = (_DWORD *)((char *)v79 + v53);
                v51 = (__m128i *)((char *)&v77 + v53);
              }
              v52 = 0;
              if ( (v49 & 4) != 0 )
              {
                *v50 = v51->m128i_i32[0];
                v52 = 2;
              }
              if ( (v49 & 2) != 0 )
              {
                *(_WORD *)((char *)v50 + v52 * 2) = v51->m128i_i16[v52];
                ++v52;
              }
              if ( (v49 & 1) != 0 )
                *((_BYTE *)v50 + v52 * 2) = v51->m128i_i8[v52 * 2];
              v39 = dest;
              v78[1] = v37;
              src = &v77;
              v76 = 0;
              v77.m128i_i8[0] = 0;
              if ( dest != &n[1] )
                goto LABEL_88;
              v36 = v79;
            }
            else
            {
              v38 = _mm_loadl_epi64(&v77);
              v39 = dest;
              v78[0] = src;
              v78[1] = (void *)v76;
              src = &v77;
              v76 = 0;
              v77.m128i_i8[0] = 0;
              *(_QWORD *)&v79[0] = v38.m128i_i64[0];
              if ( dest != &n[1] )
              {
                if ( v36 != v79 )
                {
                  v40 = n[1];
                  dest = v36;
                  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, v38);
                  if ( v39 )
                  {
                    v78[0] = v39;
                    *(_QWORD *)&v79[0] = v40;
LABEL_47:
                    v78[1] = nullptr;
                    *v39 = 0;
                    if ( v78[0] != v79 )
                      operator delete(v78[0], *(_QWORD *)&v79[0] + 1LL);
                    if ( src != &v77 )
                      operator delete(src, v77.m128i_i64[0] + 1);
                    v12 = dword_1C7ECF8;
                    goto LABEL_6;
                  }
LABEL_83:
                  v78[0] = v79;
                  v39 = v79;
                  goto LABEL_47;
                }
                goto LABEL_88;
              }
            }
            if ( v36 != v79 )
            {
              dest = v36;
              *(__m128 *)n = _mm_loadh_ps((const double *)v79);
              goto LABEL_83;
            }
LABEL_88:
            if ( v37 )
            {
              if ( v37 == (_BYTE *)&dword_0 + 1 )
                *v39 = v79[0];
              else
                memcpy(v39, v79, (size_t)v37);
              v37 = (char *)v78[1];
              v39 = dest;
            }
            n[0] = (size_t)v37;
            v37[(_QWORD)v39] = 0;
            v39 = v78[0];
            goto LABEL_47;
          }
        }
        std::__throw_length_error("basic_string::_M_create");
      }
LABEL_34:
      v31 = v12 + 48;
      goto LABEL_35;
    }
    if ( v20 <= 0x1DuLL )
    {
      v60 = 30;
      v23 = 31;
    }
    else
    {
      v60 = v20;
      v23 = v20 + 1LL;
    }
    v24 = (__m128i *)operator new(v23);
    v25 = (__m128i *)src;
    v22 = v24;
    if ( v76 )
    {
      if ( v76 != -1 )
      {
        v62 = (__m128i *)src;
        memcpy(v24, src, v76 + 1);
        v25 = v62;
        if ( v62 == &v77 )
          goto LABEL_30;
      }
    }
    else
    {
      v24->m128i_i8[0] = *(_BYTE *)src;
      if ( v25 == &v77 )
        goto LABEL_30;
    }
    operator delete(v25, v77.m128i_i64[0] + 1);
LABEL_30:
    src = v22;
    v77.m128i_i64[0] = v60;
    goto LABEL_31;
  }
LABEL_6:
  dword_1C7ECF8 = v12 + 1;
  v13 = sub_186B270(0x200u);
  std::ios_base::ios_base((std::ios_base *)(v13 + 248));
  *(_OWORD *)(v13 + 480) = 0;
  *(_OWORD *)(v13 + 496) = 0;
  *(_QWORD *)(v13 + 248) = (char *)&`vtable for'std::ios + 16;
  *(_WORD *)(v13 + 472) = 0;
  *(_QWORD *)(v13 + 464) = 0;
  v14 = `VTT for'std::ofstream[1];
  v15 = `VTT for'std::ofstream[2];
  v16 = *(_QWORD *)(v14 - 24);
  *(_QWORD *)v13 = v14;
  *(_QWORD *)(v13 + v16) = v15;
  std::ios::init();
  *(_QWORD *)v13 = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)(v13 + 248) = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  if ( std::filebuf::open() )
    v17 = 0;
  else
    v17 = *(_DWORD *)(v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 32) | 4u;
  std::ios::clear();
  v18 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 792);
  if ( v18 != (void (__fastcall ***)(_QWORD, __int64))v13 )
  {
    if ( v18 )
    {
      (**v18)(*(_QWORD *)(a1 + 792), v17);
      sub_186B220(v18);
    }
    *(_QWORD *)(a1 + 792) = v13;
  }
  if ( (*(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 32) & 5) != 0 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_180CE20(
      (int)&src,
      (int)v57,
      v7,
      v8,
      v9,
      v10,
      v56,
      v57,
      v58,
      v60,
      (int)v62,
      (int)v64,
      v66,
      v67[0],
      (int)dest,
      n[0],
      n[1],
      v70,
      v71,
      v72,
      v73,
      v74,
      (int)src,
      v76,
      v77.m128i_i32[0],
      v77.m128i_i32[2],
      (int)v78[0],
      v78[1],
      v79[0],
      *((__int64 *)&v79[0] + 1));
    sub_24ABB0(&v71, "Could not open file ");
    sub_AED2F0(v78, &v71, &src);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v78);
    sub_233E40((__int64)v78);
    sub_233E40((__int64)&v71);
    sub_233E40((__int64)&src);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( dest != &n[1] )
    operator delete(dest, n[1] + 1);
}

