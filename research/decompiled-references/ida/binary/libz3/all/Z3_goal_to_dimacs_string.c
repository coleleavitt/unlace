__int64 __fastcall Z3_goal_to_dimacs_string(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v4; // rbx
  char v5; // r13
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  __m128i si128; // xmm3
  _DWORD *v10; // rbp
  char v11; // al
  bool v12; // zf
  void *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __m128i v18; // xmm0
  __int64 v19; // rax
  _DWORD *v21; // rdi
  _DWORD *v22; // rcx
  int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rsi
  std::locale *v27[2]; // [rsp+10h] [rbp-218h] BYREF
  int v28; // [rsp+24h] [rbp-204h]
  __int64 v29; // [rsp+28h] [rbp-200h]
  __m128i v30; // [rsp+30h] [rbp-1F8h] BYREF
  char *v31; // [rsp+40h] [rbp-1E8h]
  char v32; // [rsp+4Fh] [rbp-1D9h]
  void *v33; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-1D0h]
  _QWORD v35[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v36[2]; // [rsp+70h] [rbp-1B8h] BYREF
  __int128 v37; // [rsp+90h] [rbp-198h]
  __int128 v38; // [rsp+A0h] [rbp-188h]
  _BYTE v39[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v40; // [rsp+B8h] [rbp-170h]
  void *v41; // [rsp+C0h] [rbp-168h]
  __int64 v42; // [rsp+C8h] [rbp-160h]
  _QWORD v43[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v44[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v45; // [rsp+1C0h] [rbp-68h]
  __int128 v46; // [rsp+1C8h] [rbp-60h]
  __int128 v47; // [rsp+1D8h] [rbp-50h]

  v4 = (_DWORD *)a2;
  v28 = a3;
  v30.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v27 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29C810(a1, a2, (unsigned __int8)v28);
  *(_DWORD *)(a1 + 1520) = 0;
  v30.m128i_i64[1] = (__int64)v36;
  std::ios_base::ios_base((std::ios_base *)v44);
  v46 = 0;
  v47 = 0;
  v44[0] = (char *)&`vtable for'std::ios + 16;
  v45 = 0;
  v44[27] = 0;
  v6 = `VTT for'std::ostringstream[1];
  v7 = `VTT for'std::ostringstream[2];
  v8 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v36[0] = v6;
  v29 = v7;
  *(_QWORD *)((char *)v36 + v8) = v7;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v27);
  v36[1] = 0;
  v36[0] = si128;
  v44[0] = (char *)&`vtable for'std::ostringstream + 64;
  v27[0] = (std::locale *)v39;
  v37 = 0;
  v38 = 0;
  std::locale::locale((std::locale *)v39);
  v40 = 16;
  v41 = v43;
  LOBYTE(v43[0]) = 0;
  *((_QWORD *)&v36[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v31 = (char *)v36 + 8;
  v42 = 0;
  std::ios::init();
  v10 = nullptr;
  if ( a2 )
  {
    v10 = *(_DWORD **)(a2 + 24);
    if ( v10 )
      ++v10[8];
  }
  v11 = sub_ED5CA0(v10, (char *)v36 + 8);
  v12 = v10[8]-- == 1;
  if ( v12 )
  {
    v32 = v11;
    sub_ED44E0(v10);
    sub_186B220(v10);
    if ( v32 )
      goto LABEL_8;
  }
  else if ( v11 )
  {
LABEL_8:
    if ( a2 )
    {
      v4 = *(_DWORD **)(a2 + 24);
      if ( v4 )
        ++v4[8];
    }
    sub_ED6390(v4, v30.m128i_i64[1], (unsigned __int8)v28);
    v12 = v4[8]-- == 1;
    if ( v12 )
    {
      sub_ED44E0(v4);
      sub_186B220(v4);
    }
    v13 = v41;
    if ( (_QWORD)v38 )
    {
      v14 = v37;
      if ( !(_QWORD)v37 || (unsigned __int64)v37 < (unsigned __int64)v38 )
        v14 = v38;
      v42 = v14 - *((_QWORD *)&v37 + 1);
      *((_BYTE *)v41 + v14 - *((_QWORD *)&v37 + 1)) = 0;
      v13 = v41;
      v33 = v35;
      if ( v41 != v43 )
        goto LABEL_17;
    }
    else
    {
      v33 = v35;
      if ( v41 != v43 )
      {
LABEL_17:
        v33 = v13;
        v35[0] = v43[0];
        v15 = v42;
LABEL_18:
        v34 = v15;
        v41 = v43;
        v42 = 0;
        LOBYTE(v43[0]) = 0;
        std::stringbuf::_M_sync();
        v16 = v34;
        if ( !v34 )
          std::__throw_length_error("basic_string::_M_replace_aux");
        --v34;
        *((char *)v33 + v16 - 1) = 0;
        v17 = sub_24ED70((_QWORD *)a1, (__int64)&v33);
        if ( v33 != v35 )
          operator delete(v33, v35[0] + 1LL);
        goto LABEL_21;
      }
    }
    v15 = v42;
    v21 = v35;
    v22 = v43;
    v23 = v42 + 1;
    if ( (unsigned int)(v42 + 1) >= 8 )
    {
      LODWORD(v25) = 0;
      do
      {
        v26 = (unsigned int)v25;
        v25 = (unsigned int)(v25 + 8);
        *(_QWORD *)((char *)v35 + v26) = *(_QWORD *)((char *)v43 + v26);
      }
      while ( (unsigned int)v25 < (v23 & 0xFFFFFFF8) );
      v21 = (_DWORD *)((char *)v35 + v25);
      v22 = (_DWORD *)((char *)v43 + v25);
    }
    v24 = 0;
    if ( (v23 & 4) != 0 )
    {
      *v21 = *v22;
      v24 = 4;
    }
    if ( (v23 & 2) != 0 )
    {
      *(_WORD *)((char *)v21 + v24) = *(_WORD *)((char *)v22 + v24);
      v24 += 2;
    }
    if ( (v23 & 1) != 0 )
      *((_BYTE *)v21 + v24) = *((_BYTE *)v22 + v24);
    goto LABEL_18;
  }
  sub_24EA30(a1, 3u, "Goal is not converted into CNF. Preprocess by optional bit-blasting and applying tseitin-cnf");
  if ( v5 )
    sub_2BB620(0);
  v17 = 0;
LABEL_21:
  v18 = _mm_loadl_epi64(&v30);
  v44[0] = (char *)&`vtable for'std::ostringstream + 64;
  v36[0] = _mm_unpacklo_epi64(v18, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v41 != v43 )
    operator delete(v41, v43[0] + 1LL);
  *((_QWORD *)&v36[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v27[0]);
  v19 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)&v36[0] = v6;
  *(_QWORD *)((char *)v36 + v19) = v29;
  v44[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v44);
  if ( v5 )
    byte_1C7EBA0 = 1;
  return v17;
}

