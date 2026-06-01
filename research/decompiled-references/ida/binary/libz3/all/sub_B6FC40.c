_QWORD *__fastcall sub_B6FC40(_QWORD *a1, _DWORD a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r15
  __m128i si128; // xmm1
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v16; // edx
  unsigned __int64 v17; // rsi
  char *v18; // rax
  char *v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rdi
  std::locale *v24[2]; // [rsp+0h] [rbp-1F8h] BYREF
  _OWORD *v25; // [rsp+18h] [rbp-1E0h]
  __m128i v26; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-1C8h]
  char *v28; // [rsp+38h] [rbp-1C0h]
  _OWORD v29[2]; // [rsp+40h] [rbp-1B8h] BYREF
  __int128 v30; // [rsp+60h] [rbp-198h]
  __int128 v31; // [rsp+70h] [rbp-188h]
  _BYTE v32[8]; // [rsp+80h] [rbp-178h] BYREF
  int v33; // [rsp+88h] [rbp-170h]
  void *v34; // [rsp+90h] [rbp-168h]
  __int64 v35; // [rsp+98h] [rbp-160h]
  _QWORD v36[2]; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD v37[28]; // [rsp+B0h] [rbp-148h] BYREF
  __int16 v38; // [rsp+190h] [rbp-68h]
  __int128 v39; // [rsp+198h] [rbp-60h]
  __int128 v40; // [rsp+1A8h] [rbp-50h]

  v27 = a3;
  v25 = v29;
  v26.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v24 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v37);
  v39 = 0;
  v40 = 0;
  v37[0] = (char *)&`vtable for'std::ios + 16;
  v38 = 0;
  v37[27] = 0;
  v4 = `VTT for'std::ostringstream[1];
  v5 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v29[0] = v4;
  v6 = `VTT for'std::ostringstream[2];
  *(_QWORD *)((char *)v29 + v5) = v6;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v24);
  v29[1] = 0;
  v29[0] = si128;
  v37[0] = (char *)&`vtable for'std::ostringstream + 64;
  v24[0] = (std::locale *)v32;
  v30 = 0;
  v31 = 0;
  std::locale::locale((std::locale *)v32);
  v33 = 16;
  v34 = v36;
  LOBYTE(v36[0]) = 0;
  *((_QWORD *)&v29[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v28 = (char *)v29 + 8;
  v35 = 0;
  std::ios::init();
  v8 = std::__ostream_insert<char,std::char_traits<char>>();
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v26), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_160E8B0(v8, v27);
  v9 = v34;
  if ( (_QWORD)v31 )
  {
    v10 = v30;
    if ( !(_QWORD)v30 || (unsigned __int64)v30 < (unsigned __int64)v31 )
      v10 = v31;
    v35 = v10 - *((_QWORD *)&v30 + 1);
    *((_BYTE *)v34 + v10 - *((_QWORD *)&v30 + 1)) = 0;
    v9 = v34;
    v11 = a1 + 2;
    *a1 = a1 + 2;
    if ( v9 != v36 )
      goto LABEL_5;
  }
  else
  {
    v11 = a1 + 2;
    *a1 = a1 + 2;
    if ( v9 != v36 )
    {
LABEL_5:
      v12 = v36[0];
      *a1 = v9;
      v13 = v35;
      a1[2] = v12;
      goto LABEL_6;
    }
  }
  v13 = v35;
  v16 = v35 + 1;
  if ( (unsigned int)(v35 + 1) >= 8 )
  {
    *v11 = v36[0];
    *(_QWORD *)((char *)v11 + v16 - 8) = *(_QWORD *)((char *)&v36[-1] + v16);
    v17 = (unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = (char *)v11 - v17;
    v19 = (char *)((char *)v36 - v18);
    v20 = (v16 + (_DWORD)v18) & 0xFFFFFFF8;
    if ( v20 >= 8 )
    {
      v21 = v20 & 0xFFFFFFF8;
      v22 = 0;
      do
      {
        v23 = v22;
        v22 += 8;
        *(_QWORD *)(v17 + v23) = *(_QWORD *)&v19[v23];
      }
      while ( v22 < v21 );
    }
  }
  else if ( (v16 & 4) != 0 )
  {
    *(_DWORD *)v11 = v36[0];
    *(_DWORD *)((char *)v11 + v16 - 4) = *(_DWORD *)((char *)&v35 + v16 + 4);
  }
  else if ( (_DWORD)v35 != -1 )
  {
    *(_BYTE *)v11 = v36[0];
    if ( (v16 & 2) != 0 )
      *(_WORD *)((char *)v11 + v16 - 2) = *(_WORD *)((char *)&v35 + v16 + 6);
  }
LABEL_6:
  a1[1] = v13;
  v34 = v36;
  v35 = 0;
  LOBYTE(v36[0]) = 0;
  std::stringbuf::_M_sync();
  v29[0] = _mm_load_si128(&v26);
  v37[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v34 != v36 )
    operator delete(v34, v36[0] + 1LL);
  *((_QWORD *)&v29[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v24[0]);
  v14 = *(_QWORD *)(v4 - 24);
  *(_QWORD *)&v29[0] = v4;
  *(_QWORD *)((char *)v29 + v14) = v6;
  v37[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v37);
  return a1;
}

