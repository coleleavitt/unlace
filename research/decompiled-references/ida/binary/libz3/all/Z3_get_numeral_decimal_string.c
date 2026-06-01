char *__fastcall Z3_get_numeral_decimal_string(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // bp
  __int64 v6; // rax
  _QWORD *v7; // r14
  void *v8; // rax
  _QWORD *v9; // rdi
  __m128i v10; // xmm3
  void *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  char *numeral_string; // rbx
  __m128i v15; // xmm0
  __int64 v16; // rax
  std::ios_base *v17; // rdi
  void *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // r14
  void *v24; // r15
  _QWORD *v25; // rcx
  __m128i v26; // xmm5
  void *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i si128; // xmm0
  __int64 v31; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  _QWORD *v36; // r15
  void *v37; // rax
  _QWORD *v38; // rdi
  __m128i v39; // xmm7
  void *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  _DWORD *v45; // rdi
  _DWORD *v46; // rcx
  int v47; // edx
  __int64 v48; // rsi
  __int64 v49; // rcx
  __int64 v50; // rsi
  _DWORD *v51; // rdi
  _DWORD *v52; // rcx
  int v53; // edx
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rsi
  _DWORD *v57; // rdi
  _DWORD *v58; // rdx
  int v59; // ecx
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rsi
  int v63[4]; // [rsp+0h] [rbp-298h] BYREF
  void *v64; // [rsp+10h] [rbp-288h]
  std::ios_base *v65; // [rsp+18h] [rbp-280h]
  __m128i v66; // [rsp+20h] [rbp-278h] BYREF
  __m128i v67; // [rsp+30h] [rbp-268h] BYREF
  std::locale *v68; // [rsp+40h] [rbp-258h]
  void **v69; // [rsp+48h] [rbp-250h]
  void *v70; // [rsp+50h] [rbp-248h]
  __int64 v71; // [rsp+58h] [rbp-240h]
  _BYTE v72[4]; // [rsp+6Ch] [rbp-22Ch] BYREF
  _QWORD v73[2]; // [rsp+70h] [rbp-228h] BYREF
  _QWORD v74[2]; // [rsp+80h] [rbp-218h] BYREF
  void *v75; // [rsp+90h] [rbp-208h] BYREF
  __int64 v76; // [rsp+98h] [rbp-200h]
  _QWORD v77[2]; // [rsp+A0h] [rbp-1F8h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-1E8h]
  _BYTE v79[8]; // [rsp+B8h] [rbp-1E0h] BYREF
  _BYTE v80[32]; // [rsp+C0h] [rbp-1D8h] BYREF
  void *v81[2]; // [rsp+E0h] [rbp-1B8h] BYREF
  __int128 v82; // [rsp+F0h] [rbp-1A8h] BYREF
  __int128 v83; // [rsp+100h] [rbp-198h]
  __int128 v84; // [rsp+110h] [rbp-188h]
  _BYTE v85[8]; // [rsp+120h] [rbp-178h] BYREF
  int v86; // [rsp+128h] [rbp-170h]
  void *v87; // [rsp+130h] [rbp-168h]
  __int64 v88; // [rsp+138h] [rbp-160h]
  _QWORD v89[2]; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v90[27]; // [rsp+150h] [rbp-148h] BYREF
  __int64 v91; // [rsp+228h] [rbp-70h]
  __int16 v92; // [rsp+230h] [rbp-68h]
  __int128 v93; // [rsp+238h] [rbp-60h]
  __int128 v94; // [rsp+248h] [rbp-50h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29A900(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      numeral_string = "";
      goto LABEL_37;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return "";
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 > 1 )
  {
    v6 = *(_QWORD *)(a1 + 376);
    v73[0] = 0;
    v73[1] = 0;
    v74[0] = 1;
    v74[1] = 0;
    v78 = v6 + 24;
    sub_181A6B0(v79);
    *(_QWORD *)v63 = v81;
    v64 = v73;
    v67.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
    v66 = _mm_unpacklo_epi64(
            (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
            (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    if ( !(unsigned __int8)sub_1666AE0(a1 + 296, a2, v73, v81) || (v74[0] & 0x100000000LL) == 0 && LODWORD(v74[0]) == 1 )
    {
      if ( (unsigned __int8)sub_1666670(a1 + 296, a2) )
      {
        v19 = sub_1666D30(a1 + 296, a2);
        v22 = *(_QWORD *)(a1 + 304);
        v70 = (void *)v19;
        if ( !v22 )
        {
          sub_16669E0(a1 + 296);
          v22 = *(_QWORD *)(a1 + 304);
        }
        v71 = sub_1666310(v22, a2, v20, v21);
        v65 = (std::ios_base *)v90;
        std::ios_base::ios_base((std::ios_base *)v90);
        v92 = 0;
        v93 = 0;
        v90[0] = (char *)&`vtable for'std::ios + 16;
        v94 = 0;
        v23 = (_QWORD *)`VTT for'std::ostringstream[1];
        v24 = (void *)`VTT for'std::ostringstream[2];
        v67.m128i_i64[1] = (__int64)&`vtable for'std::ios;
        v91 = 0;
        v25 = (_QWORD *)(*(v23 - 3) + *(_QWORD *)v63);
        v81[0] = v23;
        *v25 = v24;
        std::ios::init();
        v26 = _mm_load_si128(&v66);
        v68 = (std::locale *)v85;
        *(__m128i *)v81 = v26;
        v90[0] = (char *)&`vtable for'std::ostringstream + 64;
        v82 = 0;
        v83 = 0;
        v84 = 0;
        std::locale::locale((std::locale *)v85);
        v86 = 16;
        v66.m128i_i64[0] = (__int64)&`vtable for'std::stringbuf;
        v81[1] = (char *)&`vtable for'std::stringbuf + 16;
        v87 = v89;
        v88 = 0;
        LOBYTE(v89[0]) = 0;
        v69 = &v81[1];
        std::ios::init();
        sub_17B24F0(v71, *(_QWORD *)v63, v70, a3);
        v27 = v87;
        if ( (_QWORD)v84 )
        {
          v28 = v83;
          if ( !(_QWORD)v83 || (unsigned __int64)v83 < (unsigned __int64)v84 )
            v28 = v84;
          v88 = v28 - *((_QWORD *)&v83 + 1);
          *((_BYTE *)v87 + v28 - *((_QWORD *)&v83 + 1)) = 0;
          v27 = v87;
          v75 = v77;
          if ( v87 != v89 )
            goto LABEL_25;
        }
        else
        {
          v75 = v77;
          if ( v87 != v89 )
          {
LABEL_25:
            v75 = v27;
            v77[0] = v89[0];
            v29 = v88;
LABEL_26:
            v76 = v29;
            v87 = v89;
            v88 = 0;
            LOBYTE(v89[0]) = 0;
            std::stringbuf::_M_sync();
            v69 = &v75;
            numeral_string = (char *)sub_24ED70((_QWORD *)a1, (__int64)&v75);
            si128 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v67), (__m128i)(unsigned __int64)(v66.m128i_i64[0] + 16));
            if ( v75 != v77 )
            {
              *(__m128i *)v63 = si128;
              operator delete(v75, v77[0] + 1LL);
              si128 = _mm_load_si128((const __m128i *)v63);
            }
            *(__m128i *)v81 = si128;
            v90[0] = (char *)&`vtable for'std::ostringstream + 64;
            if ( v87 != v89 )
              operator delete(v87, v89[0] + 1LL);
            v81[1] = (char *)&`vtable for'std::streambuf + 16;
            std::locale::~locale(v68);
            v31 = *(v23 - 3);
            v81[0] = v23;
            *(void **)((char *)v81 + v31) = v24;
LABEL_31:
            v90[0] = v67.m128i_i64[1] + 16;
            std::ios_base::~ios_base(v65);
LABEL_16:
            sub_182EF00(*(_QWORD *)(v78 + 728), v80);
            v18 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v64);
            sub_182CBA0(v18, v74);
            goto LABEL_33;
          }
        }
        v29 = v88;
        v51 = v77;
        v52 = v89;
        v53 = v88 + 1;
        if ( (unsigned int)(v88 + 1) >= 8 )
        {
          LODWORD(v55) = 0;
          do
          {
            v56 = (unsigned int)v55;
            v55 = (unsigned int)(v55 + 8);
            *(_QWORD *)((char *)v77 + v56) = *(_QWORD *)((char *)v89 + v56);
          }
          while ( (unsigned int)v55 < (v53 & 0xFFFFFFF8) );
          v51 = (_DWORD *)((char *)v77 + v55);
          v52 = (_DWORD *)((char *)v89 + v55);
        }
        v54 = 0;
        if ( (v53 & 4) != 0 )
        {
          *v51 = *v52;
          v54 = 4;
        }
        if ( (v53 & 2) != 0 )
        {
          *(_WORD *)((char *)v51 + v54) = *(_WORD *)((char *)v52 + v54);
          v54 += 2;
        }
        if ( (v53 & 1) != 0 )
          *((_BYTE *)v51 + v54) = *((_BYTE *)v52 + v54);
        goto LABEL_26;
      }
      if ( (unsigned __int8)sub_15C5390(*(_QWORD *)(a1 + 376), a2, v72) )
      {
        numeral_string = (char *)Z3_get_numeral_string(a1, a2);
        goto LABEL_16;
      }
      if ( !(unsigned __int8)sub_15C4FC0(*(_QWORD *)(a1 + 376), a2, (unsigned int)v79, v33, v34, v35) )
      {
        if ( (unsigned __int8)Z3_get_numeral_rational(a1, a2) )
        {
          sub_1850940(*(_QWORD *)v63, qword_1C7F2C0, v64);
          numeral_string = (char *)sub_24ED70((_QWORD *)a1, *(__int64 *)v63);
          if ( v81[0] != &v82 )
            operator delete(v81[0], v82 + 1);
        }
        else
        {
          sub_24EA30(a1, 3u, nullptr);
          numeral_string = "";
        }
        goto LABEL_16;
      }
      v65 = (std::ios_base *)v90;
      std::ios_base::ios_base((std::ios_base *)v90);
      v93 = 0;
      v94 = 0;
      v67.m128i_i64[1] = (__int64)&`vtable for'std::ios;
      v90[0] = (char *)&`vtable for'std::ios + 16;
      v92 = 0;
      v91 = 0;
      v36 = (_QWORD *)`VTT for'std::ostringstream[1];
      v37 = (void *)`VTT for'std::ostringstream[2];
      v38 = (_QWORD *)(*(v36 - 3) + *(_QWORD *)v63);
      v81[0] = v36;
      *v38 = v37;
      v70 = v37;
      std::ios::init();
      v39 = _mm_load_si128(&v66);
      v82 = 0;
      *(__m128i *)v81 = v39;
      v90[0] = (char *)&`vtable for'std::ostringstream + 64;
      v68 = (std::locale *)v85;
      v83 = 0;
      v84 = 0;
      std::locale::locale((std::locale *)v85);
      v86 = 16;
      v87 = v89;
      v66.m128i_i64[0] = (__int64)&`vtable for'std::stringbuf;
      v81[1] = (char *)&`vtable for'std::stringbuf + 16;
      LOBYTE(v89[0]) = 0;
      v88 = 0;
      v69 = &v81[1];
      std::ios::init();
      sub_1820B30(*(_DWORD *)(a1 + 376) + 24, v63[0]);
      v40 = v87;
      if ( (_QWORD)v84 )
      {
        v41 = v83;
        if ( !(_QWORD)v83 || (unsigned __int64)v83 < (unsigned __int64)v84 )
          v41 = v84;
        v88 = v41 - *((_QWORD *)&v83 + 1);
        *((_BYTE *)v87 + v41 - *((_QWORD *)&v83 + 1)) = 0;
        v40 = v87;
        v75 = v77;
        if ( v87 != v89 )
          goto LABEL_47;
      }
      else
      {
        v75 = v77;
        if ( v87 != v89 )
        {
LABEL_47:
          v75 = v40;
          v77[0] = v89[0];
          v42 = v88;
LABEL_48:
          v76 = v42;
          v87 = v89;
          v88 = 0;
          LOBYTE(v89[0]) = 0;
          std::stringbuf::_M_sync();
          v69 = &v75;
          numeral_string = (char *)sub_24ED70((_QWORD *)a1, (__int64)&v75);
          v43 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v67), (__m128i)(unsigned __int64)(v66.m128i_i64[0] + 16));
          if ( v75 != v77 )
          {
            *(__m128i *)v63 = v43;
            operator delete(v75, v77[0] + 1LL);
            v43 = _mm_load_si128((const __m128i *)v63);
          }
          *(__m128i *)v81 = v43;
          v90[0] = (char *)&`vtable for'std::ostringstream + 64;
          if ( v87 != v89 )
            operator delete(v87, v89[0] + 1LL);
          v81[1] = (char *)&`vtable for'std::streambuf + 16;
          std::locale::~locale(v68);
          v44 = *(v36 - 3);
          v81[0] = v36;
          *(void **)((char *)v81 + v44) = v70;
          goto LABEL_31;
        }
      }
      v42 = v88;
      v57 = v77;
      v58 = v89;
      v59 = v88 + 1;
      if ( (unsigned int)(v88 + 1) >= 8 )
      {
        LODWORD(v61) = 0;
        do
        {
          v62 = (unsigned int)v61;
          v61 = (unsigned int)(v61 + 8);
          *(_QWORD *)((char *)v77 + v62) = *(_QWORD *)((char *)v89 + v62);
        }
        while ( (unsigned int)v61 < (v59 & 0xFFFFFFF8) );
        v57 = (_DWORD *)((char *)v77 + v61);
        v58 = (_DWORD *)((char *)v89 + v61);
      }
      v60 = 0;
      if ( (v59 & 4) != 0 )
      {
        *v57 = *v58;
        v60 = 4;
      }
      if ( (v59 & 2) != 0 )
      {
        *(_WORD *)((char *)v57 + v60) = *(_WORD *)((char *)v58 + v60);
        v60 += 2;
      }
      if ( (v59 & 1) != 0 )
        *((_BYTE *)v57 + v60) = *((_BYTE *)v58 + v60);
      goto LABEL_48;
    }
    v65 = (std::ios_base *)v90;
    std::ios_base::ios_base((std::ios_base *)v90);
    v92 = 0;
    v67.m128i_i64[1] = (__int64)&`vtable for'std::ios;
    v90[0] = (char *)&`vtable for'std::ios + 16;
    v93 = 0;
    v7 = (_QWORD *)`VTT for'std::ostringstream[1];
    v8 = (void *)`VTT for'std::ostringstream[2];
    v94 = 0;
    v91 = 0;
    v9 = (_QWORD *)(*(v7 - 3) + *(_QWORD *)v63);
    v81[0] = v7;
    *v9 = v8;
    v70 = v8;
    std::ios::init();
    v10 = _mm_load_si128(&v66);
    v82 = 0;
    *(__m128i *)v81 = v10;
    v90[0] = (char *)&`vtable for'std::ostringstream + 64;
    v68 = (std::locale *)v85;
    v83 = 0;
    v84 = 0;
    std::locale::locale((std::locale *)v85);
    v86 = 16;
    v87 = v89;
    v66.m128i_i64[0] = (__int64)&`vtable for'std::stringbuf;
    v81[1] = (char *)&`vtable for'std::stringbuf + 16;
    LOBYTE(v89[0]) = 0;
    v88 = 0;
    v69 = &v81[1];
    std::ios::init();
    sub_18499F0((int)qword_1C7F2C0, v63[0]);
    v11 = v87;
    if ( (_QWORD)v84 )
    {
      v12 = v83;
      if ( !(_QWORD)v83 || (unsigned __int64)v83 < (unsigned __int64)v84 )
        v12 = v84;
      v88 = v12 - *((_QWORD *)&v83 + 1);
      *((_BYTE *)v87 + v12 - *((_QWORD *)&v83 + 1)) = 0;
      v11 = v87;
      v75 = v77;
      if ( v87 != v89 )
        goto LABEL_10;
    }
    else
    {
      v75 = v77;
      if ( v87 != v89 )
      {
LABEL_10:
        v75 = v11;
        v77[0] = v89[0];
        v13 = v88;
LABEL_11:
        v76 = v13;
        v87 = v89;
        v88 = 0;
        LOBYTE(v89[0]) = 0;
        std::stringbuf::_M_sync();
        v69 = &v75;
        numeral_string = (char *)sub_24ED70((_QWORD *)a1, (__int64)&v75);
        v15 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v67), (__m128i)(unsigned __int64)(v66.m128i_i64[0] + 16));
        if ( v75 != v77 )
        {
          *(__m128i *)v63 = v15;
          operator delete(v75, v77[0] + 1LL);
          v15 = _mm_load_si128((const __m128i *)v63);
        }
        *(__m128i *)v81 = v15;
        v90[0] = (char *)&`vtable for'std::ostringstream + 64;
        if ( v87 != v89 )
          operator delete(v87, v89[0] + 1LL);
        v81[1] = (char *)&`vtable for'std::streambuf + 16;
        std::locale::~locale(v68);
        v16 = *(v7 - 3);
        v81[0] = v7;
        v17 = v65;
        *(void **)((char *)v81 + v16) = v70;
        v90[0] = v67.m128i_i64[1] + 16;
        std::ios_base::~ios_base(v17);
        goto LABEL_16;
      }
    }
    v13 = v88;
    v45 = v77;
    v46 = v89;
    v47 = v88 + 1;
    if ( (unsigned int)(v88 + 1) >= 8 )
    {
      LODWORD(v49) = 0;
      do
      {
        v50 = (unsigned int)v49;
        v49 = (unsigned int)(v49 + 8);
        *(_QWORD *)((char *)v77 + v50) = *(_QWORD *)((char *)v89 + v50);
      }
      while ( (unsigned int)v49 < (v47 & 0xFFFFFFF8) );
      v45 = (_DWORD *)((char *)v77 + v49);
      v46 = (_DWORD *)((char *)v89 + v49);
    }
    v48 = 0;
    if ( (v47 & 4) != 0 )
    {
      *v45 = *v46;
      v48 = 4;
    }
    if ( (v47 & 2) != 0 )
    {
      *(_WORD *)((char *)v45 + v48) = *(_WORD *)((char *)v46 + v48);
      v48 += 2;
    }
    if ( (v47 & 1) != 0 )
      *((_BYTE *)v45 + v48) = *((_BYTE *)v46 + v48);
    goto LABEL_11;
  }
  sub_24EA30(a1, 3u, "ast is not an expression");
  numeral_string = "";
LABEL_33:
  if ( v5 )
LABEL_37:
    byte_1C7EBA0 = 1;
  return numeral_string;
}

