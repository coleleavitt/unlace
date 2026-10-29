__int64 __fastcall sub_332D30(_QWORD *a1, __int64 a2)
{
  char **v2; // rbx
  int v3; // r12d
  __int64 v5; // rax
  unsigned int v6; // r14d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax
  int v12; // r13d
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _DWORD *v15; // rax
  unsigned int v16; // ebp
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rdi
  _QWORD *exception; // rax
  _BYTE *v24; // rbx
  _QWORD *v25; // rbp
  size_t v26; // rbx
  __int64 *v27; // rcx
  size_t v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int64 v31; // rdi
  void *v32; // rax
  void *v33; // r13
  void *v34; // [rsp+0h] [rbp-1F8h]
  void *v35; // [rsp+8h] [rbp-1F0h]
  void *v36; // [rsp+8h] [rbp-1F0h]
  void *p_dest; // [rsp+10h] [rbp-1E8h] BYREF
  size_t v38; // [rsp+18h] [rbp-1E0h]
  __int64 dest; // [rsp+20h] [rbp-1D8h] BYREF
  int v40; // [rsp+28h] [rbp-1D0h]
  int v41; // [rsp+30h] [rbp-1C8h]
  int v42; // [rsp+38h] [rbp-1C0h]
  __m128i v43; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v44; // [rsp+50h] [rbp-1A8h]
  void *src[2]; // [rsp+60h] [rbp-198h]
  __int128 v46; // [rsp+70h] [rbp-188h]
  int v47; // [rsp+80h] [rbp-178h] BYREF
  int v48; // [rsp+88h] [rbp-170h]
  int *v49; // [rsp+90h] [rbp-168h] BYREF
  __int64 v50; // [rsp+98h] [rbp-160h]
  int v51; // [rsp+A0h] [rbp-158h] BYREF
  char v52; // [rsp+A8h] [rbp-150h]
  _QWORD v53[28]; // [rsp+B0h] [rbp-148h] BYREF
  __int16 v54; // [rsp+190h] [rbp-68h]
  __int128 v55; // [rsp+198h] [rbp-60h]
  __int128 v56; // [rsp+1A8h] [rbp-50h]

  v3 = a2;
  a1[2] = a2;
  sub_340550(a2);
  v5 = a1[9];
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 192LL))(a2);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 200LL))(a2, 1);
  for ( result = a1[6]; result; ++*((_DWORD *)v13 - 1) )
  {
    if ( v6 >= *(_DWORD *)(result - 4) )
      break;
    v12 = sub_340820(
            v3,
            *(_QWORD *)(result + 8LL * v6),
            v7,
            v8,
            v9,
            v10,
            v34,
            v35,
            (int)p_dest,
            v38,
            dest,
            v40,
            v41,
            v42,
            v43.m128i_i32[0],
            v43.m128i_i8[8],
            v44,
            SDWORD2(v44),
            (int)src[0],
            (char)src[1],
            v46,
            SDWORD2(v46),
            v47,
            v48,
            (int)v49,
            v50,
            v51,
            v52);
    if ( v12 == -1 )
    {
      std::ios_base::ios_base((std::ios_base *)v53);
      v55 = 0;
      v56 = 0;
      v53[0] = (char *)&`vtable for'std::ios + 16;
      v54 = 0;
      v53[27] = 0;
      v21 = `VTT for'std::ostringstream[2];
      v22 = *(_QWORD *)(`VTT for'std::ostringstream[1] - 24LL);
      v43.m128i_i64[0] = `VTT for'std::ostringstream[1];
      *(__int64 *)((char *)v43.m128i_i64 + v22) = v21;
      std::ios::init();
      v53[0] = (char *)&`vtable for'std::ostringstream + 64;
      v43 = _mm_unpacklo_epi64(
              (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
              (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
      v44 = 0;
      *(_OWORD *)src = 0;
      v46 = 0;
      std::locale::locale((std::locale *)&v47);
      v48 = 16;
      LOBYTE(v51) = 0;
      v43.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
      v49 = &v51;
      v50 = 0;
      std::ios::init();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&p_dest, *(_QWORD *)(a1[6] + 8LL * v6), *a1, 0, 0, 0);
      sub_160E8B0(&v43, &p_dest);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(&dest);
      exception = __cxa_allocate_exception(0x28u);
      v24 = (_BYTE *)v46;
      p_dest = &dest;
      v38 = 0;
      v25 = exception;
      LOBYTE(dest) = 0;
      if ( (_QWORD)v46 )
      {
        if ( src[0] >= (void *)v46 )
          v24 = src[0];
        if ( !src[0] )
          v24 = (_BYTE *)v46;
        v26 = v24 - (char *)src[1];
        if ( (v26 & 0x8000000000000000LL) != 0LL )
          std::__throw_length_error("basic_string::_M_replace");
        if ( v26 > 0xF )
        {
          if ( v26 > 0x1D )
          {
            v30 = v26;
            v31 = v26 + 1;
            if ( (__int64)(v26 + 1) < 0 )
              std::__throw_bad_alloc();
          }
          else
          {
            v30 = 30;
            v31 = 31;
          }
          v36 = src[1];
          v32 = (void *)operator new(v31);
          v33 = v32;
          if ( v36 )
            memcpy(v32, v36, v26);
          if ( p_dest != &dest )
            operator delete(p_dest, dest + 1);
          p_dest = v33;
          dest = v30;
        }
        else if ( src[1] == &dest )
        {
          std::string::_M_replace_cold();
        }
        else if ( v26 )
        {
          if ( v26 == 1 )
            LOBYTE(dest) = *(_BYTE *)src[1];
          else
            memcpy(&dest, src[1], v26);
        }
        v38 = v26;
        *((_BYTE *)p_dest + v26) = 0;
      }
      else
      {
        sub_33D150(&p_dest, &v49);
      }
      v27 = (__int64 *)p_dest;
      v28 = v38;
      *v25 = off_1C63128;
      v25[1] = v25 + 3;
      if ( v27 == &dest )
      {
        qmemcpy(v25 + 3, &dest, (unsigned int)(v28 + 1));
      }
      else
      {
        v29 = dest;
        v25[1] = v27;
        v25[3] = v29;
      }
      v25[2] = v28;
      __cxa_throw(v25, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v13 = (_QWORD *)a1[9];
    if ( v13 )
    {
      v14 = *((unsigned int *)v13 - 1);
      if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
      {
        v16 = (unsigned int)(3 * v14 + 1) >> 1;
        v17 = 4 * v16 + 8;
        if ( 4 * (int)v14 + 8 >= (unsigned int)v17 || (unsigned int)v14 >= v16 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v43.m128i_i64, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v43);
          sub_233E40((__int64)&v43);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300(v13 - 1, v17);
        v13 = v18 + 2;
        *v18 = v16;
        v19 = v18[1];
        a1[9] = v13;
        v15 = (_DWORD *)v13 + v19;
      }
      else
      {
        v15 = (_DWORD *)v13 + v14;
      }
    }
    else
    {
      v20 = (_QWORD *)sub_186B270(0x10u);
      v13 = v20 + 1;
      *v20 = 2;
      a1[9] = v20 + 1;
      v15 = v20 + 1;
    }
    *v15 = v12;
    result = a1[6];
    ++v6;
  }
  return result;
}

