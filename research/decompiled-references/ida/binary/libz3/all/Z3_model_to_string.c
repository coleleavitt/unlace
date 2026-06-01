__int64 __fastcall Z3_model_to_string(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // al
  char v5; // r15
  __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // r14
  __m128i si128; // xmm3
  bool v10; // zf
  unsigned __int8 v11; // al
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  void *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  void *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 *v35; // rdi
  _DWORD *v36; // rcx
  int v37; // edx
  __int64 v38; // rsi
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __int64 *v41; // rdi
  _DWORD *v42; // rcx
  int v43; // edx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned __int64 v49; // rcx
  int v50; // edx
  char *v51; // rdi
  unsigned int v52; // edx
  unsigned int v53; // edx
  unsigned int v54; // eax
  __int64 v55; // rsi
  unsigned __int64 v56; // rcx
  int v57; // edx
  char *v58; // rdi
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // eax
  __int64 v62; // rsi
  void *v63; // [rsp+0h] [rbp-258h]
  std::ios_base *v64; // [rsp+8h] [rbp-250h]
  void *v65[2]; // [rsp+10h] [rbp-248h] BYREF
  __m128i v66; // [rsp+20h] [rbp-238h] BYREF
  int v67[2]; // [rsp+30h] [rbp-228h]
  std::locale *v68; // [rsp+38h] [rbp-220h]
  int v69[2]; // [rsp+40h] [rbp-218h]
  int v70[2]; // [rsp+48h] [rbp-210h]
  int v71[2]; // [rsp+50h] [rbp-208h]
  int v72; // [rsp+58h] [rbp-200h] BYREF
  void *v73; // [rsp+60h] [rbp-1F8h] BYREF
  __m128 v74; // [rsp+68h] [rbp-1F0h] BYREF
  void *v75; // [rsp+80h] [rbp-1D8h]
  __m128i v76; // [rsp+88h] [rbp-1D0h] BYREF
  int v77[4]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int128 v78; // [rsp+B0h] [rbp-1A8h]
  __int128 v79; // [rsp+C0h] [rbp-198h]
  __int128 v80; // [rsp+D0h] [rbp-188h]
  int v81[4]; // [rsp+E0h] [rbp-178h] BYREF
  void *v82; // [rsp+F0h] [rbp-168h]
  __int64 v83; // [rsp+F8h] [rbp-160h]
  _QWORD v84[2]; // [rsp+100h] [rbp-158h] BYREF
  int v85[2]; // [rsp+110h] [rbp-148h] BYREF
  __int64 v86; // [rsp+1E8h] [rbp-70h]
  __int16 v87; // [rsp+1F0h] [rbp-68h]
  __int128 v88; // [rsp+1F8h] [rbp-60h]
  __int128 v89; // [rsp+208h] [rbp-50h]

  v3 = a2;
  v66.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  *(__m128i *)v65 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v5 = v4;
  if ( v4 )
  {
    sub_29BD40();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
LABEL_24:
      byte_1C7EBA0 = 1;
      return v3;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      return 0;
    }
  }
  *(_QWORD *)v69 = v77;
  v64 = (std::ios_base *)v85;
  std::ios_base::ios_base((std::ios_base *)v85);
  v86 = 0;
  v88 = 0;
  v89 = 0;
  *(_QWORD *)v85 = (char *)&`vtable for'std::ios + 16;
  v87 = 0;
  v6 = `VTT for'std::ostringstream[1];
  v7 = `VTT for'std::ostringstream[2];
  v8 = (_QWORD *)((char *)v77 + *(_QWORD *)(v6 - 24));
  *(_QWORD *)v77 = v6;
  *v8 = v7;
  *(_QWORD *)v67 = v7;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v65);
  v78 = 0;
  *(__m128i *)v77 = si128;
  *(_QWORD *)v85 = (char *)&`vtable for'std::ostringstream + 64;
  v68 = (std::locale *)v81;
  v79 = 0;
  v80 = 0;
  std::locale::locale((std::locale *)v81);
  v81[2] = 16;
  v82 = v84;
  v83 = 0;
  *(_QWORD *)&v77[2] = (char *)&`vtable for'std::stringbuf + 16;
  LOBYTE(v84[0]) = 0;
  *(_QWORD *)v70 = &v77[2];
  std::ios::init();
  v10 = *(_DWORD *)(a1 + 1568) == 2;
  v74.m128_i8[8] = 0;
  v73 = &v74.m128_u16[4];
  v74.m128_u64[0] = 0;
  if ( !v10 )
  {
    v66.m128i_i64[1] = (__int64)&v73;
    *(_QWORD *)v71 = &qword_1C7F4C8;
    v65[0] = &v72;
    sub_17F9A60(&v72, "model");
    v11 = sub_1859630(*(_QWORD *)v71, "partial", v65[0], 0);
    sub_135DE10(
      v69[0],
      *(_QWORD *)(a2 + 24),
      v11,
      v12,
      v13,
      v14,
      v63,
      (int)v85,
      (int)v65[0],
      (int)v65[1],
      v66.m128i_i32[0],
      v66.m128i_i32[2],
      v67[0],
      (int)v68,
      v69[0],
      v70[0],
      v71[0],
      v72);
    v15 = v82;
    if ( (_QWORD)v80 )
    {
      v16 = v79;
      if ( !(_QWORD)v79 || (unsigned __int64)v79 < (unsigned __int64)v80 )
        v16 = v80;
      v83 = v16 - *((_QWORD *)&v79 + 1);
      *((_BYTE *)v82 + v16 - *((_QWORD *)&v79 + 1)) = 0;
      v15 = v82;
      v75 = &v76.m128i_u64[1];
      if ( v82 != v84 )
        goto LABEL_8;
    }
    else
    {
      v75 = &v76.m128i_u64[1];
      if ( v82 != v84 )
      {
LABEL_8:
        v75 = v15;
        v76.m128i_i64[1] = v84[0];
        v17 = v83;
        goto LABEL_9;
      }
    }
    v17 = v83;
    v35 = &v76.m128i_i64[1];
    v36 = v84;
    v37 = v83 + 1;
    if ( (unsigned int)(v83 + 1) >= 8 )
    {
      LODWORD(v47) = 0;
      do
      {
        v48 = (unsigned int)v47;
        v47 = (unsigned int)(v47 + 8);
        *(__int64 *)((char *)&v76.m128i_i64[1] + v48) = *(_QWORD *)((char *)v84 + v48);
      }
      while ( (unsigned int)v47 < (v37 & 0xFFFFFFF8) );
      v35 = (__int64 *)((char *)&v76.m128i_i64[1] + v47);
      v36 = (_DWORD *)((char *)v84 + v47);
    }
    v38 = 0;
    if ( (v37 & 4) != 0 )
    {
      *(_DWORD *)v35 = *v36;
      v38 = 4;
    }
    if ( (v37 & 2) != 0 )
    {
      *(_WORD *)((char *)v35 + v38) = *(_WORD *)((char *)v36 + v38);
      v38 += 2;
    }
    if ( (v37 & 1) != 0 )
      *((_BYTE *)v35 + v38) = *((_BYTE *)v36 + v38);
LABEL_9:
    v76.m128i_i64[0] = v17;
    v82 = v84;
    v83 = 0;
    LOBYTE(v84[0]) = 0;
    std::stringbuf::_M_sync();
    v18 = (__int64 *)v73;
    v19 = (__int64 *)v73;
    if ( v73 == &v74.m128_u16[4] )
    {
      if ( v75 != &v76.m128i_u64[1] )
      {
        v39 = _mm_loadu_si128(&v76);
        v73 = v75;
        v74 = (__m128)v39;
        goto LABEL_50;
      }
      v20 = v76.m128i_i64[0];
      v21 = v76.m128i_i64[0];
    }
    else
    {
      v20 = v76.m128i_i64[0];
      v21 = v76.m128i_i64[0];
      if ( v75 != &v76.m128i_u64[1] )
      {
        v73 = v75;
        v22 = v74.m128_i64[1];
        v74 = _mm_loadh_ps((const double *)&v76.m128i_i64[1]);
        if ( v18 )
        {
          v75 = v18;
          v76.m128i_i64[1] = v22;
LABEL_13:
          v76.m128i_i64[0] = 0;
          *(_BYTE *)v18 = 0;
          if ( v75 != &v76.m128i_u64[1] )
            operator delete(v75, v76.m128i_i64[1] + 1);
          sub_18572D0(v65[0]);
          goto LABEL_16;
        }
LABEL_50:
        v75 = &v76.m128i_u64[1];
        v18 = &v76.m128i_i64[1];
        goto LABEL_13;
      }
    }
    if ( !v20 )
    {
LABEL_61:
      v74.m128_u64[0] = v21;
      *((_BYTE *)v18 + v21) = 0;
      v18 = (__int64 *)v75;
      goto LABEL_13;
    }
    if ( v20 == 1 )
    {
      *(_BYTE *)v73 = v76.m128i_i8[8];
      v21 = v76.m128i_i64[0];
      v18 = (__int64 *)v73;
      goto LABEL_61;
    }
    if ( (unsigned int)v20 >= 8 )
    {
      *(_QWORD *)v73 = v76.m128i_i64[1];
      *(__int64 *)((char *)v19 + (unsigned int)v20 - 8) = *(__int64 *)((char *)v76.m128i_i64 + (unsigned int)v20);
      v49 = (unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v50 = (_DWORD)v19 - v49;
      v51 = (char *)((char *)&v76.m128i_u64[1] - ((char *)v19 - v49));
      v52 = (v20 + v50) & 0xFFFFFFF8;
      if ( v52 >= 8 )
      {
        v53 = v52 & 0xFFFFFFF8;
        v54 = 0;
        do
        {
          v55 = v54;
          v54 += 8;
          *(_QWORD *)(v49 + v55) = *(_QWORD *)&v51[v55];
        }
        while ( v54 < v53 );
      }
    }
    else
    {
      if ( (v20 & 4) != 0 )
      {
        *(_DWORD *)v73 = v76.m128i_i32[2];
        *(_DWORD *)((char *)v19 + (unsigned int)v20 - 4) = *(__int32 *)((char *)&v76.m128i_i32[1] + (unsigned int)v20);
        v19 = (__int64 *)v73;
        v20 = v76.m128i_i64[0];
        goto LABEL_60;
      }
      if ( !(_DWORD)v20 )
      {
LABEL_60:
        v21 = v20;
        v18 = v19;
        goto LABEL_61;
      }
      *(_BYTE *)v73 = v76.m128i_i8[8];
      if ( (v20 & 2) != 0 )
      {
        *(_WORD *)((char *)v19 + (unsigned int)v20 - 2) = *(__int16 *)((char *)&v76.m128i_i16[3] + (unsigned int)v20);
        v19 = (__int64 *)v73;
        v20 = v76.m128i_i64[0];
        goto LABEL_60;
      }
    }
    v19 = (__int64 *)v73;
    v20 = v76.m128i_i64[0];
    goto LABEL_60;
  }
  v66.m128i_i64[1] = (__int64)&v73;
  sub_1352510(v69[0]);
  v26 = v82;
  if ( (_QWORD)v80 )
  {
    v27 = v79;
    if ( !(_QWORD)v79 || (unsigned __int64)v79 < (unsigned __int64)v80 )
      v27 = v80;
    v83 = v27 - *((_QWORD *)&v79 + 1);
    *((_BYTE *)v82 + v27 - *((_QWORD *)&v79 + 1)) = 0;
    v26 = v82;
    v75 = &v76.m128i_u64[1];
    if ( v82 != v84 )
      goto LABEL_29;
  }
  else
  {
    v75 = &v76.m128i_u64[1];
    if ( v82 != v84 )
    {
LABEL_29:
      v75 = v26;
      v76.m128i_i64[1] = v84[0];
      v28 = v83;
      goto LABEL_30;
    }
  }
  v28 = v83;
  v41 = &v76.m128i_i64[1];
  v42 = v84;
  v43 = v83 + 1;
  if ( (unsigned int)(v83 + 1) >= 8 )
  {
    LODWORD(v45) = 0;
    do
    {
      v46 = (unsigned int)v45;
      v45 = (unsigned int)(v45 + 8);
      *(__int64 *)((char *)&v76.m128i_i64[1] + v46) = *(_QWORD *)((char *)v84 + v46);
    }
    while ( (unsigned int)v45 < (v43 & 0xFFFFFFF8) );
    v41 = (__int64 *)((char *)&v76.m128i_i64[1] + v45);
    v42 = (_DWORD *)((char *)v84 + v45);
  }
  v44 = 0;
  if ( (v43 & 4) != 0 )
  {
    *(_DWORD *)v41 = *v42;
    v44 = 4;
  }
  if ( (v43 & 2) != 0 )
  {
    *(_WORD *)((char *)v41 + v44) = *(_WORD *)((char *)v42 + v44);
    v44 += 2;
  }
  if ( (v43 & 1) != 0 )
    *((_BYTE *)v41 + v44) = *((_BYTE *)v42 + v44);
LABEL_30:
  v76.m128i_i64[0] = v28;
  v82 = v84;
  v83 = 0;
  LOBYTE(v84[0]) = 0;
  std::stringbuf::_M_sync();
  v29 = (__int64 *)v73;
  v30 = (__int64 *)v73;
  if ( v73 == &v74.m128_u16[4] )
  {
    if ( v75 != &v76.m128i_u64[1] )
    {
      v40 = _mm_loadu_si128(&v76);
      v73 = v75;
      v74 = (__m128)v40;
      goto LABEL_64;
    }
    v31 = v76.m128i_i64[0];
    v32 = v76.m128i_i64[0];
LABEL_66:
    if ( !v31 )
    {
LABEL_74:
      v74.m128_u64[0] = v32;
      *((_BYTE *)v29 + v32) = 0;
      v29 = (__int64 *)v75;
      goto LABEL_34;
    }
    if ( v31 == 1 )
    {
      *(_BYTE *)v73 = v76.m128i_i8[8];
      v32 = v76.m128i_i64[0];
      v29 = (__int64 *)v73;
      goto LABEL_74;
    }
    if ( (unsigned int)v31 >= 8 )
    {
      *(_QWORD *)v73 = v76.m128i_i64[1];
      *(__int64 *)((char *)v30 + (unsigned int)v31 - 8) = *(__int64 *)((char *)v76.m128i_i64 + (unsigned int)v31);
      v56 = (unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v57 = (_DWORD)v30 - v56;
      v58 = (char *)((char *)&v76.m128i_u64[1] - ((char *)v30 - v56));
      v59 = (v31 + v57) & 0xFFFFFFF8;
      if ( v59 >= 8 )
      {
        v60 = v59 & 0xFFFFFFF8;
        v61 = 0;
        do
        {
          v62 = v61;
          v61 += 8;
          *(_QWORD *)(v56 + v62) = *(_QWORD *)&v58[v62];
        }
        while ( v61 < v60 );
      }
    }
    else
    {
      if ( (v31 & 4) != 0 )
      {
        *(_DWORD *)v73 = v76.m128i_i32[2];
        *(_DWORD *)((char *)v30 + (unsigned int)v31 - 4) = *(__int32 *)((char *)&v76.m128i_i32[1] + (unsigned int)v31);
        v30 = (__int64 *)v73;
        v31 = v76.m128i_i64[0];
        goto LABEL_73;
      }
      if ( !(_DWORD)v31 )
      {
LABEL_73:
        v32 = v31;
        v29 = v30;
        goto LABEL_74;
      }
      *(_BYTE *)v73 = v76.m128i_i8[8];
      if ( (v31 & 2) != 0 )
      {
        *(_WORD *)((char *)v30 + (unsigned int)v31 - 2) = *(__int16 *)((char *)&v76.m128i_i16[3] + (unsigned int)v31);
        v30 = (__int64 *)v73;
        v31 = v76.m128i_i64[0];
        goto LABEL_73;
      }
    }
    v30 = (__int64 *)v73;
    v31 = v76.m128i_i64[0];
    goto LABEL_73;
  }
  v31 = v76.m128i_i64[0];
  v32 = v76.m128i_i64[0];
  if ( v75 == &v76.m128i_u64[1] )
    goto LABEL_66;
  v73 = v75;
  v33 = v74.m128_i64[1];
  v74 = _mm_loadh_ps((const double *)&v76.m128i_i64[1]);
  if ( !v29 )
  {
LABEL_64:
    v75 = &v76.m128i_u64[1];
    v29 = &v76.m128i_i64[1];
    goto LABEL_34;
  }
  v75 = v29;
  v76.m128i_i64[1] = v33;
LABEL_34:
  v76.m128i_i64[0] = 0;
  *(_BYTE *)v29 = 0;
  if ( v75 != &v76.m128i_u64[1] )
    operator delete(v75, v76.m128i_i64[1] + 1);
  v34 = v74.m128_u64[0];
  if ( v74.m128_u64[0] )
  {
    --v74.m128_u64[0];
    *((char *)v73 + v34 - 1) = 0;
  }
LABEL_16:
  v66.m128i_i64[1] = (__int64)&v73;
  v3 = sub_24ED70((_QWORD *)a1, (__int64)&v73);
  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v66), (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v73 != &v74.m128_u16[4] )
  {
    *(__m128i *)v65 = v23;
    operator delete(v73, v74.m128_u64[1] + 1);
    v23 = _mm_load_si128((const __m128i *)v65);
  }
  *(__m128i *)v77 = v23;
  *(_QWORD *)v85 = (char *)&`vtable for'std::ostringstream + 64;
  if ( v82 != v84 )
    operator delete(v82, v84[0] + 1LL);
  *(_QWORD *)&v77[2] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v68);
  v24 = *(_QWORD *)(v6 - 24);
  *(_QWORD *)v77 = v6;
  *(_QWORD *)((char *)v77 + v24) = *(_QWORD *)v67;
  *(_QWORD *)v85 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v64);
  if ( v5 )
    goto LABEL_24;
  return v3;
}

