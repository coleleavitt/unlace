__int64 __fastcall Z3_goal_to_string(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r14
  char v4; // al
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __m128i si128; // xmm3
  void *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rax
  _DWORD *v18; // rdi
  _DWORD *v19; // rcx
  int v20; // edx
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __m128i v24; // [rsp+0h] [rbp-218h] BYREF
  std::locale *v25[2]; // [rsp+10h] [rbp-208h] BYREF
  char v26; // [rsp+2Fh] [rbp-1E9h]
  __int64 v27; // [rsp+30h] [rbp-1E8h]
  __m128i v28; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-1D0h]
  _QWORD v30[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _OWORD v31[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v32; // [rsp+80h] [rbp-198h]
  __int128 v33; // [rsp+90h] [rbp-188h]
  _BYTE v34[8]; // [rsp+A0h] [rbp-178h] BYREF
  int v35; // [rsp+A8h] [rbp-170h]
  void *v36; // [rsp+B0h] [rbp-168h]
  __int64 v37; // [rsp+B8h] [rbp-160h]
  _QWORD v38[2]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v39[28]; // [rsp+D0h] [rbp-148h] BYREF
  __int16 v40; // [rsp+1B0h] [rbp-68h]
  __int128 v41; // [rsp+1B8h] [rbp-60h]
  __int128 v42; // [rsp+1C8h] [rbp-50h]

  v2 = (_DWORD *)a2;
  v28.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v25 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v26 = v4;
  if ( v4 )
    sub_29C7D0();
  *(_DWORD *)(a1 + 1520) = 0;
  v24.m128i_i64[0] = (__int64)v31;
  std::ios_base::ios_base((std::ios_base *)v39);
  v41 = 0;
  v42 = 0;
  v39[0] = (char *)&`vtable for'std::ios + 16;
  v40 = 0;
  v39[27] = 0;
  v5 = `VTT for'std::ostringstream[1];
  v6 = `VTT for'std::ostringstream[2];
  v7 = (_QWORD *)((char *)v31 + *(_QWORD *)(v5 - 24));
  *(_QWORD *)&v31[0] = v5;
  *v7 = v6;
  v27 = v6;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v25);
  v31[1] = 0;
  v31[0] = si128;
  v39[0] = (char *)&`vtable for'std::ostringstream + 64;
  v25[0] = (std::locale *)v34;
  v32 = 0;
  v33 = 0;
  std::locale::locale((std::locale *)v34);
  v35 = 16;
  v36 = v38;
  *((_QWORD *)&v31[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v37 = 0;
  LOBYTE(v38[0]) = 0;
  std::ios::init();
  if ( a2 )
  {
    v2 = *(_DWORD **)(a2 + 24);
    if ( v2 )
      ++v2[8];
  }
  sub_ED65F0(v2, v24.m128i_i64[0]);
  if ( v2[8]-- == 1 )
  {
    sub_ED44E0(v2);
    sub_186B220(v2);
  }
  v10 = v36;
  if ( (_QWORD)v33 )
  {
    v11 = v32;
    if ( !(_QWORD)v32 || (unsigned __int64)v32 < (unsigned __int64)v33 )
      v11 = v33;
    v37 = v11 - *((_QWORD *)&v32 + 1);
    *((_BYTE *)v36 + v11 - *((_QWORD *)&v32 + 1)) = 0;
    v10 = v36;
    v28.m128i_i64[1] = (__int64)v30;
    if ( v36 != v38 )
      goto LABEL_12;
  }
  else
  {
    v28.m128i_i64[1] = (__int64)v30;
    if ( v36 != v38 )
    {
LABEL_12:
      v28.m128i_i64[1] = (__int64)v10;
      v30[0] = v38[0];
      v12 = v37;
      goto LABEL_13;
    }
  }
  v12 = v37;
  v18 = v30;
  v19 = v38;
  v20 = v37 + 1;
  if ( (unsigned int)(v37 + 1) >= 8 )
  {
    LODWORD(v22) = 0;
    do
    {
      v23 = (unsigned int)v22;
      v22 = (unsigned int)(v22 + 8);
      *(_QWORD *)((char *)v30 + v23) = *(_QWORD *)((char *)v38 + v23);
    }
    while ( (unsigned int)v22 < (v20 & 0xFFFFFFF8) );
    v18 = (_DWORD *)((char *)v30 + v22);
    v19 = (_DWORD *)((char *)v38 + v22);
  }
  v21 = 0;
  if ( (v20 & 4) != 0 )
  {
    *v18 = *v19;
    v21 = 4;
  }
  if ( (v20 & 2) != 0 )
  {
    *(_WORD *)((char *)v18 + v21) = *(_WORD *)((char *)v19 + v21);
    v21 += 2;
  }
  if ( (v20 & 1) != 0 )
    *((_BYTE *)v18 + v21) = *((_BYTE *)v19 + v21);
LABEL_13:
  v29 = v12;
  v36 = v38;
  v37 = 0;
  LOBYTE(v38[0]) = 0;
  std::stringbuf::_M_sync();
  v13 = v29;
  if ( !v29 )
    std::__throw_length_error("basic_string::_M_replace_aux");
  --v29;
  *(_BYTE *)(v28.m128i_i64[1] + v13 - 1) = 0;
  v14 = sub_24ED70((_QWORD *)a1, (__int64)&v28.m128i_i64[1]);
  v15 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v28), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( (_QWORD *)v28.m128i_i64[1] != v30 )
  {
    v24 = v15;
    operator delete((void *)v28.m128i_i64[1], v30[0] + 1LL);
    v15 = _mm_load_si128(&v24);
  }
  v31[0] = v15;
  v39[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v36 != v38 )
    operator delete(v36, v38[0] + 1LL);
  *((_QWORD *)&v31[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v25[0]);
  v16 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)&v31[0] = v5;
  *(_QWORD *)((char *)v31 + v16) = v27;
  v39[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v39);
  if ( v26 )
    byte_1C7EBA0 = 1;
  return v14;
}

