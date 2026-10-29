_QWORD *__fastcall sub_669CA0(_QWORD *a1, const char *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v14; // edx
  unsigned __int64 v15; // rsi
  char *v16; // rax
  char *v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rdi
  std::locale *v22[2]; // [rsp+10h] [rbp-1E8h] BYREF
  __m128i v23; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-1C8h]
  char *v25; // [rsp+38h] [rbp-1C0h]
  _OWORD v26[2]; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v27; // [rsp+60h] [rbp-198h]
  __int128 v28; // [rsp+70h] [rbp-188h]
  _BYTE v29[8]; // [rsp+80h] [rbp-178h] BYREF
  int v30; // [rsp+88h] [rbp-170h]
  void *v31; // [rsp+90h] [rbp-168h]
  __int64 v32; // [rsp+98h] [rbp-160h]
  _QWORD v33[2]; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD v34[28]; // [rsp+B0h] [rbp-148h] BYREF
  __int16 v35; // [rsp+190h] [rbp-68h]
  __int128 v36; // [rsp+198h] [rbp-60h]
  __int128 v37; // [rsp+1A8h] [rbp-50h]

  v24 = a3;
  v23 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  *(__m128i *)v22 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v34);
  v36 = 0;
  v37 = 0;
  v34[0] = (char *)&`vtable for'std::ios + 16;
  v35 = 0;
  v34[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = `VTT for'std::ostringstream[2];
  v6 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v26[0] = v4;
  *(_QWORD *)((char *)v26 + v6) = v5;
  std::ios::init();
  v26[0] = _mm_load_si128((const __m128i *)v22);
  v34[0] = (char *)&`vtable for'std::ostringstream + 64;
  v22[0] = (std::locale *)v29;
  v26[1] = 0;
  v27 = 0;
  v28 = 0;
  std::locale::locale((std::locale *)v29);
  v30 = 16;
  v31 = v33;
  LOBYTE(v33[0]) = 0;
  *((_QWORD *)&v26[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v25 = (char *)v26 + 8;
  v32 = 0;
  std::ios::init();
  if ( a2 )
  {
    strlen(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::ios::clear();
  }
  sub_160E8B0(v26, v24);
  v7 = v31;
  if ( (_QWORD)v28 )
  {
    v8 = v27;
    if ( !(_QWORD)v27 || (unsigned __int64)v27 < (unsigned __int64)v28 )
      v8 = v28;
    v32 = v8 - *((_QWORD *)&v27 + 1);
    *((_BYTE *)v31 + v8 - *((_QWORD *)&v27 + 1)) = 0;
    v7 = v31;
    v9 = a1 + 2;
    *a1 = a1 + 2;
    if ( v7 != v33 )
      goto LABEL_7;
  }
  else
  {
    v9 = a1 + 2;
    *a1 = a1 + 2;
    if ( v7 != v33 )
    {
LABEL_7:
      v10 = v33[0];
      *a1 = v7;
      v11 = v32;
      a1[2] = v10;
      goto LABEL_8;
    }
  }
  v11 = v32;
  v14 = v32 + 1;
  if ( (unsigned int)(v32 + 1) >= 8 )
  {
    *v9 = v33[0];
    *(_QWORD *)((char *)v9 + v14 - 8) = *(_QWORD *)((char *)&v33[-1] + v14);
    v15 = (unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = (char *)v9 - v15;
    v17 = (char *)((char *)v33 - v16);
    v18 = (v14 + (_DWORD)v16) & 0xFFFFFFF8;
    if ( v18 >= 8 )
    {
      v19 = v18 & 0xFFFFFFF8;
      v20 = 0;
      do
      {
        v21 = v20;
        v20 += 8;
        *(_QWORD *)(v15 + v21) = *(_QWORD *)&v17[v21];
      }
      while ( v20 < v19 );
    }
  }
  else if ( (v14 & 4) != 0 )
  {
    *(_DWORD *)v9 = v33[0];
    *(_DWORD *)((char *)v9 + v14 - 4) = *(_DWORD *)((char *)&v32 + v14 + 4);
  }
  else if ( (_DWORD)v32 != -1 )
  {
    *(_BYTE *)v9 = v33[0];
    if ( (v14 & 2) != 0 )
      *(_WORD *)((char *)v9 + v14 - 2) = *(_WORD *)((char *)&v32 + v14 + 6);
  }
LABEL_8:
  a1[1] = v11;
  v31 = v33;
  v32 = 0;
  LOBYTE(v33[0]) = 0;
  std::stringbuf::_M_sync();
  v26[0] = _mm_load_si128(&v23);
  v34[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v31 != v33 )
    operator delete(v31, v33[0] + 1LL);
  *((_QWORD *)&v26[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v22[0]);
  v12 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v26[0] = v4;
  *(_QWORD *)((char *)v26 + v12) = v5;
  v34[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v34);
  return a1;
}

