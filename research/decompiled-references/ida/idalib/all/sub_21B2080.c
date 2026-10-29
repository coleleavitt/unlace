__int64 __fastcall sub_21B2080(__int64 a1, _DWORD *a2, __int64 a3)
{
  bool (__fastcall *v5)(_DWORD *, __int64); // rcx
  bool (__fastcall *v6)(__int64); // rax
  bool v7; // al
  bool v8; // al
  __int64 v10; // rcx
  bool (__fastcall *v11)(__int64); // rax
  bool v12; // al
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 (__fastcall ***v16)(); // rax
  size_t v17; // r12
  size_t v18; // r13
  __int64 v19; // rbp
  __m128i *v20; // rax
  __m128i si128; // xmm0
  char *v22; // r15
  void *v23; // rax
  char v24; // al
  _QWORD *v25; // rdx
  char v26; // dl
  void **v27; // rsi
  char v28; // al
  _QWORD *v29; // rcx
  char v30; // dl
  __m128i *v31; // rsi
  _QWORD *v32; // rcx
  char v33; // dl
  __m128i *v34; // rsi
  __m128i *v35; // rcx
  __int64 v36; // rax
  signed __int64 v37; // rbp
  unsigned __int64 v38; // rdi
  char *v39; // rax
  __m128i *v40; // r11
  __m128i v41; // xmm0
  __int64 (__fastcall ***v42)(); // r13
  __int64 v43; // r12
  __m128i *v44; // rdi
  __m128i v45; // xmm3
  __m128i v46; // xmm7
  __m128i v47; // xmm5
  __m128i v48; // xmm7
  __m128i *v49; // [rsp+0h] [rbp-258h]
  __int64 v50; // [rsp+8h] [rbp-250h]
  __int64 v51; // [rsp+10h] [rbp-248h]
  __int64 v52; // [rsp+18h] [rbp-240h]
  __int64 v53; // [rsp+20h] [rbp-238h]
  __int64 v54; // [rsp+28h] [rbp-230h]
  __int64 v55; // [rsp+30h] [rbp-228h]
  __int64 v56; // [rsp+38h] [rbp-220h]
  unsigned __int64 v57; // [rsp+40h] [rbp-218h] BYREF
  __int64 v58; // [rsp+48h] [rbp-210h] BYREF
  __int64 v59; // [rsp+50h] [rbp-208h] BYREF
  __int64 v60; // [rsp+58h] [rbp-200h] BYREF
  void *src; // [rsp+60h] [rbp-1F8h] BYREF
  size_t n; // [rsp+68h] [rbp-1F0h]
  __m128i v63; // [rsp+70h] [rbp-1E8h] BYREF
  void *v64[2]; // [rsp+80h] [rbp-1D8h] BYREF
  __m128i v65; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD v66[4]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int16 v67; // [rsp+C0h] [rbp-198h]
  __m128i v68; // [rsp+D0h] [rbp-188h] BYREF
  __m128i v69; // [rsp+E0h] [rbp-178h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-168h]
  _QWORD v71[4]; // [rsp+100h] [rbp-158h] BYREF
  __int16 v72; // [rsp+120h] [rbp-138h]
  __m128i v73; // [rsp+130h] [rbp-128h] BYREF
  __m128i v74; // [rsp+140h] [rbp-118h] BYREF
  __int64 v75; // [rsp+150h] [rbp-108h]
  _QWORD v76[4]; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v77; // [rsp+180h] [rbp-D8h]
  __m128i v78; // [rsp+190h] [rbp-C8h] BYREF
  __m128i v79; // [rsp+1A0h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+1B0h] [rbp-A8h]
  __m128i v81; // [rsp+1C0h] [rbp-98h] BYREF
  __m128i v82; // [rsp+1D0h] [rbp-88h] BYREF
  __int64 v83; // [rsp+1E0h] [rbp-78h]
  __m128i v84; // [rsp+1F0h] [rbp-68h] BYREF
  __m128i v85; // [rsp+200h] [rbp-58h]
  __int64 v86; // [rsp+210h] [rbp-48h]

  v5 = *(bool (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a2 + 224LL);
  if ( v5 == sub_21B17C0 )
  {
    v6 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v6 == sub_21B1110 )
      v7 = a2[2] == 12;
    else
      v7 = v6((__int64)a2);
    if ( v7 )
    {
      if ( !*(_QWORD *)(a3 + 32) )
        goto LABEL_7;
      goto LABEL_10;
    }
    v8 = *(_DWORD *)(a3 + 20) == 0;
  }
  else
  {
    v8 = v5(a2, a3);
  }
  if ( v8 )
  {
LABEL_7:
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    return a1;
  }
LABEL_10:
  v10 = *(_QWORD *)a2;
  v11 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v11 == sub_21B1110 )
  {
    v12 = a2[2] == 12;
  }
  else
  {
    v12 = v11((__int64)a2);
    v10 = *(_QWORD *)a2;
  }
  if ( v12 )
    v13 = _byteswap_uint64(*(_QWORD *)(a3 + 32));
  else
    v13 = _byteswap_ulong(*(_DWORD *)(a3 + 20));
  v57 = v13;
  v14 = *((_QWORD *)a2 + 2) + v13;
  v58 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(v10 + 168))(a2, a3);
  if ( !__CFADD__(v14, v58)
    && !__CFADD__(v14, v58)
    && (v15 = *((_QWORD *)a2 + 2), v14 + v58 <= v15 + *((_QWORD *)a2 + 3))
    && v15 <= v14
    || (v16 = sub_2195B10(), sub_2220500(&v59, 4, v16), !v59) )
  {
    v36 = v58;
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = v36;
    return a1;
  }
  v81.m128i_i64[0] = (__int64)" goes past the end of the file";
  v76[0] = &v58;
  v60 = v59;
  LOWORD(v83) = 259;
  v76[2] = 0;
  LOWORD(v77) = 271;
  v71[0] = " and size 0x";
  v72 = 259;
  v66[0] = &v57;
  v66[2] = 0;
  v67 = 271;
  v59 = 0;
  sub_2221210(&src, &v60);
  v17 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0x1C )
    std::__throw_length_error("basic_string::append");
  v18 = n + 29;
  if ( src == &v63 )
  {
    v19 = 15;
    if ( v18 <= 0xF )
      goto LABEL_22;
  }
  else
  {
    v19 = v63.m128i_i64[0];
    if ( v18 <= v63.m128i_i64[0] )
    {
LABEL_22:
      v20 = (__m128i *)((char *)src + n);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AB760);
      qmemcpy((char *)src + n + 16, "ith offset 0x", 13);
      *v20 = si128;
      v22 = (char *)src;
      goto LABEL_23;
    }
  }
  if ( (v18 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v37 = 2 * v19;
  if ( v18 < v37 )
  {
    v38 = v37 + 1;
    if ( v37 < 0 )
    {
      v38 = 0x8000000000000000LL;
      v37 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v38 = n + 30;
    v37 = n + 29;
  }
  v39 = (char *)operator new(v38);
  v40 = (__m128i *)src;
  v22 = v39;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      *v39 = *(_BYTE *)src;
    }
    else
    {
      v49 = (__m128i *)src;
      memcpy(v39, src, v17);
      v40 = v49;
    }
  }
  v41 = _mm_load_si128((const __m128i *)&xmmword_23AB760);
  qmemcpy(&v22[v17 + 16], "ith offset 0x", 13);
  *(__m128i *)&v22[v17] = v41;
  if ( v40 != &v63 )
    operator delete(v40);
  src = v22;
  v63.m128i_i64[0] = v37;
LABEL_23:
  n = v17 + 29;
  v22[v17 + 29] = 0;
  v64[0] = &v65;
  if ( src == &v63 )
  {
    v65 = _mm_load_si128(&v63);
  }
  else
  {
    v64[0] = src;
    v65.m128i_i64[0] = v63.m128i_i64[0];
  }
  v23 = (void *)n;
  v63.m128i_i8[0] = 0;
  n = 0;
  v64[1] = v23;
  src = &v63;
  v24 = v67;
  if ( !(_BYTE)v67 )
  {
    LOWORD(v70) = 256;
    goto LABEL_61;
  }
  if ( (_BYTE)v67 != 1 )
  {
    if ( HIBYTE(v67) == 1 )
    {
      v50 = v66[1];
      v25 = (_QWORD *)v66[0];
    }
    else
    {
      v25 = v66;
      v24 = 2;
    }
    v69.m128i_i64[0] = (__int64)v25;
    v68.m128i_i64[0] = (__int64)v64;
    v69.m128i_i64[1] = v50;
    v26 = v72;
    LOBYTE(v70) = 4;
    BYTE1(v70) = v24;
    if ( (_BYTE)v72 )
    {
      if ( (_BYTE)v72 != 1 )
      {
        v27 = (void **)&v68;
        v28 = 2;
        goto LABEL_32;
      }
      goto LABEL_80;
    }
LABEL_61:
    LOWORD(v75) = 256;
    goto LABEL_62;
  }
  v26 = v72;
  v68.m128i_i64[0] = (__int64)v64;
  LOWORD(v70) = 260;
  if ( !(_BYTE)v72 )
    goto LABEL_61;
  if ( (_BYTE)v72 == 1 )
  {
LABEL_80:
    v28 = v70;
    v45 = _mm_load_si128(&v69);
    v73 = _mm_load_si128(&v68);
    v74 = v45;
    v75 = v70;
    v30 = v77;
    if ( (_BYTE)v77 )
      goto LABEL_35;
LABEL_62:
    LOWORD(v80) = 256;
    goto LABEL_63;
  }
  v27 = v64;
  v51 = v68.m128i_i64[1];
  v28 = 4;
LABEL_32:
  if ( HIBYTE(v72) == 1 )
  {
    v52 = v71[1];
    v29 = (_QWORD *)v71[0];
  }
  else
  {
    v29 = v71;
    v26 = 2;
  }
  v73.m128i_i64[0] = (__int64)v27;
  BYTE1(v75) = v26;
  v30 = v77;
  v73.m128i_i64[1] = v51;
  v74.m128i_i64[0] = (__int64)v29;
  v74.m128i_i64[1] = v52;
  LOBYTE(v75) = v28;
  if ( !(_BYTE)v77 )
    goto LABEL_62;
LABEL_35:
  if ( v30 != 1 )
  {
    if ( BYTE1(v75) == 1 )
    {
      v53 = v73.m128i_i64[1];
      v31 = (__m128i *)v73.m128i_i64[0];
    }
    else
    {
      v31 = &v73;
      v28 = 2;
    }
    if ( BYTE1(v77) == 1 )
    {
      v54 = v76[1];
      v32 = (_QWORD *)v76[0];
    }
    else
    {
      v32 = v76;
      v30 = 2;
    }
    v78.m128i_i64[0] = (__int64)v31;
    BYTE1(v80) = v30;
    v33 = v83;
    v78.m128i_i64[1] = v53;
    v79.m128i_i64[0] = (__int64)v32;
    v79.m128i_i64[1] = v54;
    LOBYTE(v80) = v28;
    if ( (_BYTE)v83 )
      goto LABEL_41;
    goto LABEL_63;
  }
  v28 = v75;
  v47 = _mm_load_si128(&v74);
  v78 = _mm_load_si128(&v73);
  v79 = v47;
  v80 = v75;
  if ( !(_BYTE)v75 || (v33 = v83) == 0 )
  {
LABEL_63:
    LOWORD(v86) = 256;
    goto LABEL_64;
  }
  if ( (_BYTE)v75 != 1 )
  {
LABEL_41:
    if ( v33 == 1 )
    {
      v48 = _mm_load_si128(&v79);
      v84 = _mm_load_si128(&v78);
      v85 = v48;
      v86 = v80;
    }
    else
    {
      if ( BYTE1(v80) == 1 )
      {
        v55 = v78.m128i_i64[1];
        v34 = (__m128i *)v78.m128i_i64[0];
      }
      else
      {
        v34 = &v78;
        v28 = 2;
      }
      if ( BYTE1(v83) == 1 )
      {
        v56 = v81.m128i_i64[1];
        v35 = (__m128i *)v81.m128i_i64[0];
      }
      else
      {
        v35 = &v81;
        v33 = 2;
      }
      v84.m128i_i64[0] = (__int64)v34;
      v85.m128i_i64[0] = (__int64)v35;
      v84.m128i_i64[1] = v55;
      v85.m128i_i64[1] = v56;
      LOBYTE(v86) = v28;
      BYTE1(v86) = v33;
    }
    goto LABEL_64;
  }
  v46 = _mm_load_si128(&v82);
  v84 = _mm_load_si128(&v81);
  v85 = v46;
  v86 = v83;
LABEL_64:
  v42 = sub_2195B10();
  v43 = operator new(0x40u);
  sub_2220590(v43, &v84, 3, v42);
  v44 = (__m128i *)v64[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v43;
  if ( v44 != &v65 )
    operator delete(v44);
  if ( src != &v63 )
    operator delete(src);
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
  return a1;
}
