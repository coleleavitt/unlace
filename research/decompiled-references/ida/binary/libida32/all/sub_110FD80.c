__int64 __fastcall sub_110FD80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v6; // rax
  __int64 v7; // rax
  size_t v8; // rax
  unsigned int v9; // r8d
  __int32 v10; // eax
  unsigned int v11; // r10d
  __int64 v12; // r15
  __int64 v13; // rax
  _WORD *v14; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r10d
  __int64 v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // rax
  __int64 *v27; // rdi
  size_t v28; // rax
  unsigned __int64 v29; // rax
  __m128i *v30; // rax
  void *v31; // rax
  __m128i *v32; // rdi
  __int64 v33; // rax
  __int64 v35; // [rsp+8h] [rbp-330h]
  size_t v36; // [rsp+8h] [rbp-330h]
  __int32 v37; // [rsp+18h] [rbp-320h]
  __int64 v38; // [rsp+18h] [rbp-320h]
  unsigned int v39; // [rsp+18h] [rbp-320h]
  unsigned int v40; // [rsp+20h] [rbp-318h]
  __int64 v41; // [rsp+38h] [rbp-300h] BYREF
  __int64 v42; // [rsp+40h] [rbp-2F8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-2F0h]
  char v44; // [rsp+50h] [rbp-2E8h]
  void *v45[2]; // [rsp+60h] [rbp-2D8h] BYREF
  _BYTE v46[16]; // [rsp+70h] [rbp-2C8h] BYREF
  void *v47[2]; // [rsp+80h] [rbp-2B8h] BYREF
  __int64 v48; // [rsp+90h] [rbp-2A8h] BYREF
  void *v49[2]; // [rsp+A0h] [rbp-298h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-288h] BYREF
  __m128i v51; // [rsp+C0h] [rbp-278h] BYREF
  _QWORD v52[2]; // [rsp+D0h] [rbp-268h] BYREF
  __int16 v53; // [rsp+E0h] [rbp-258h]
  __m128i v54; // [rsp+F0h] [rbp-248h] BYREF
  __m128i v55; // [rsp+100h] [rbp-238h] BYREF
  __int16 v56; // [rsp+110h] [rbp-228h]
  __m128i v57; // [rsp+120h] [rbp-218h] BYREF
  char *v58; // [rsp+130h] [rbp-208h] BYREF
  __int16 v59; // [rsp+140h] [rbp-1F8h]
  __m128i v60; // [rsp+150h] [rbp-1E8h] BYREF
  _BYTE v61[16]; // [rsp+160h] [rbp-1D8h] BYREF
  __int16 v62; // [rsp+170h] [rbp-1C8h]
  __m128i v63; // [rsp+180h] [rbp-1B8h] BYREF
  __int64 v64; // [rsp+190h] [rbp-1A8h]
  __int16 v65; // [rsp+1A0h] [rbp-198h]
  const char *v66; // [rsp+1B0h] [rbp-188h] BYREF
  __int128 v67; // [rsp+1B8h] [rbp-180h]
  void *v68; // [rsp+1C8h] [rbp-170h]
  __int64 v69; // [rsp+1D0h] [rbp-168h]
  char v70; // [rsp+1D8h] [rbp-160h]
  const char *v71; // [rsp+1E0h] [rbp-158h]
  __int128 v72; // [rsp+1E8h] [rbp-150h]
  void *v73; // [rsp+200h] [rbp-138h] BYREF
  __m128i si128; // [rsp+208h] [rbp-130h]
  _BYTE v75[72]; // [rsp+218h] [rbp-120h] BYREF
  _BYTE ptr[24]; // [rsp+260h] [rbp-D8h] BYREF
  _WORD v77[64]; // [rsp+278h] [rbp-C0h] BYREF
  char v78; // [rsp+2F8h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  v73 = v75;
  v6 = j__strlen("txt");
  *(_QWORD *)ptr = "toolchain-program";
  v77[4] = 259;
  sub_226C0A0(ptr, "txt", v6, &v73, 1);
  v7 = si128.m128i_i64[0];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
  {
    sub_22130D0(&v73, v75, si128.m128i_i64[0] + 1, 1);
    v7 = si128.m128i_i64[0];
  }
  *((_BYTE *)v73 + v7) = 0;
  LOWORD(v69) = 257;
  if ( *(_BYTE *)v73 )
  {
    v66 = (const char *)v73;
    LOBYTE(v69) = 3;
  }
  *(_QWORD *)ptr = v77;
  *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v78 = 1;
  sub_222FB80(&v66, ptr);
  v66 = &byte_22CD811;
  v68 = v73;
  v71 = &byte_22CD811;
  v67 = 0;
  v72 = 0;
  v69 = si128.m128i_i64[0];
  BYTE8(v67) = 1;
  v70 = 1;
  BYTE8(v72) = 1;
  v45[0] = v46;
  v45[1] = nullptr;
  v46[0] = 0;
  v8 = j__strlen("CLANG_TOOLCHAIN_PROGRAM_TIMEOUT");
  sub_226CD00(&v60, "CLANG_TOOLCHAIN_PROGRAM_TIMEOUT", v8);
  v9 = (unsigned int)&v66;
  if ( !(_BYTE)v62 )
  {
    v10 = 60;
LABEL_7:
    v60.m128i_i64[0] = a3;
    v64 = 0;
    v60.m128i_i64[1] = a4;
    v11 = sub_22725F0(
            a3,
            a4,
            (unsigned int)&v60,
            1,
            v9,
            3,
            v63.m128i_i64[0],
            v63.m128i_i64[1],
            0,
            v10,
            0,
            (__int64)v45,
            0,
            0);
    if ( v11 )
    {
      v62 = 260;
      v57.m128i_i64[1] = a4;
      v59 = 773;
      v57.m128i_i64[0] = a3;
      v58 = ": ";
      v60.m128i_i64[0] = (__int64)v45;
      sub_A1D840(&v63, &v57, &v60, a4, 260, 773);
      v12 = std::_V2::system_category((std::_V2 *)&v63);
      sub_222F820(&v54, &v63);
      sub_21FC890(&v51, &v54, 0, v12);
      if ( (__m128i *)v54.m128i_i64[0] != &v55 )
        operator delete((void *)v54.m128i_i64[0]);
      v13 = v51.m128i_i64[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v13;
    }
    else
    {
      v16 = si128.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        v39 = v11;
        sub_22130D0(&v73, v75, si128.m128i_i64[0] + 1, 1);
        v11 = v39;
        v16 = si128.m128i_i64[0];
      }
      *((_BYTE *)v73 + v16) = 0;
      v65 = 257;
      if ( *(_BYTE *)v73 )
      {
        v63.m128i_i64[0] = (__int64)v73;
        LOBYTE(v65) = 3;
      }
      v40 = v11;
      sub_220D290(&v42, &v63, 0, 1, 0, 0);
      if ( (v44 & 1) != 0 )
      {
        (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v43 + 32LL))(v47, v43, (unsigned int)v42);
        v52[0] = a3;
        v60.m128i_i64[0] = (__int64)v47;
        v54.m128i_i64[0] = (__int64)": ";
        v51.m128i_i64[0] = (__int64)"Failed to read stdout of ";
        v62 = 260;
        v53 = 1283;
        v56 = 259;
        v52[1] = a4;
        sub_A1D840(&v57, &v51, &v54, 259, v17, v18);
        sub_A1D840(&v63, &v57, &v60, v19, v20, v21);
        if ( (v44 & 1) != 0 )
        {
          v23 = v42;
          v24 = v43;
        }
        else
        {
          v22 = std::_V2::system_category((std::_V2 *)&v63);
          v23 = v40;
          v24 = v22;
        }
        v25 = v23;
        v35 = v24;
        sub_222F820(v49, &v63);
        sub_21FC890(&v41, v49, v25, v35);
        if ( v49[0] != &v50 )
          operator delete(v49[0]);
        v26 = v41;
        v27 = (__int64 *)v47[0];
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v26;
        if ( v27 != &v48 )
          operator delete(v27);
      }
      else
      {
        v33 = v42;
        *(_BYTE *)(a1 + 8) &= ~1u;
        v42 = 0;
        *(_QWORD *)a1 = v33;
      }
      sub_F9EDB0(&v42);
    }
    goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_2223D10(v60.m128i_i64[0], v60.m128i_i64[1], 0, &v63) )
  {
    v10 = v63.m128i_i32[0];
    if ( v63.m128i_i64[0] == v63.m128i_i32[0] )
    {
      v9 = (unsigned int)&v66;
      if ( v63.m128i_i32[0] < 0 )
        v10 = 0;
      if ( (_BYTE)v62 && (_BYTE *)v60.m128i_i64[0] != v61 )
      {
        v37 = v10;
        operator delete((void *)v60.m128i_i64[0]);
        v10 = v37;
        v9 = (unsigned int)&v66;
      }
      goto LABEL_7;
    }
  }
  v28 = j__strlen("CLANG_TOOLCHAIN_PROGRAM_TIMEOUT expected an integer, got '");
  v51.m128i_i64[1] = 0;
  v51.m128i_i64[0] = (__int64)v52;
  v36 = v28;
  LOBYTE(v52[0]) = 0;
  sub_971EF0((__int64)&v51, v60.m128i_i64[1] + v28);
  if ( v36 > 0x7FFFFFFFFFFFFFFFLL - v51.m128i_i64[1]
    || (sub_9CA820(&v51, "CLANG_TOOLCHAIN_PROGRAM_TIMEOUT expected an integer, got '", v36),
        sub_9CA820(&v51, v60.m128i_i64[0], v60.m128i_u64[1]),
        v29 = j__strlen("'"),
        v29 > 0x7FFFFFFFFFFFFFFFLL - v51.m128i_i64[1]) )
  {
    std::__throw_length_error("basic_string::append");
  }
  v30 = (__m128i *)sub_9CA820(&v51, "'", v29);
  v54.m128i_i64[0] = (__int64)&v55;
  if ( (__m128i *)v30->m128i_i64[0] == &v30[1] )
  {
    v55 = _mm_loadu_si128(v30 + 1);
  }
  else
  {
    v54.m128i_i64[0] = v30->m128i_i64[0];
    v55.m128i_i64[0] = v30[1].m128i_i64[0];
  }
  v54.m128i_i64[1] = v30->m128i_i64[1];
  v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
  v30->m128i_i64[1] = 0;
  v30[1].m128i_i8[0] = 0;
  v63.m128i_i64[0] = (__int64)&v54;
  v65 = 260;
  v38 = std::_V2::system_category((std::_V2 *)&v51);
  sub_222F820(&v57, &v63);
  sub_21FC890(v49, &v57, 0, v38);
  if ( (char **)v57.m128i_i64[0] != &v58 )
    operator delete((void *)v57.m128i_i64[0]);
  v31 = v49[0];
  *(_BYTE *)(a1 + 8) |= 1u;
  v32 = (__m128i *)v54.m128i_i64[0];
  *(_QWORD *)a1 = v31;
  if ( v32 != &v55 )
    operator delete(v32);
  if ( (_QWORD *)v51.m128i_i64[0] != v52 )
    operator delete((void *)v51.m128i_i64[0]);
  if ( (_BYTE)v62 && (_BYTE *)v60.m128i_i64[0] != v61 )
    operator delete((void *)v60.m128i_i64[0]);
LABEL_11:
  if ( v45[0] != v46 )
    operator delete(v45[0]);
  v14 = *(_WORD **)ptr;
  if ( v78 )
  {
    v63 = *(__m128i *)ptr;
    v65 = 261;
    sub_2268230(&v63, 1);
    v14 = *(_WORD **)ptr;
  }
  if ( v14 != v77 )
    free(v14);
  if ( v73 != v75 )
    free(v73);
  return a1;
}

