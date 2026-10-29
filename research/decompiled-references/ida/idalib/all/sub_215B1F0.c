__int64 __fastcall sub_215B1F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rsi
  __m128i *v7; // rax
  __m128i si128; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rsi
  size_t v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rax
  size_t v23; // rax
  size_t v24; // r10
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  void *v36; // rax
  __m128i v37; // xmm1
  __int16 v38; // ax
  __m128i v39; // xmm2
  __int64 v40; // [rsp+0h] [rbp-168h]
  size_t v41; // [rsp+0h] [rbp-168h]
  size_t v42; // [rsp+0h] [rbp-168h]
  size_t v43; // [rsp+0h] [rbp-168h]
  void *v44; // [rsp+18h] [rbp-150h]
  size_t v45; // [rsp+18h] [rbp-150h]
  __int64 v46; // [rsp+20h] [rbp-148h] BYREF
  __int64 v47; // [rsp+28h] [rbp-140h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-138h] BYREF
  char v49; // [rsp+38h] [rbp-130h]
  __m128i v50; // [rsp+40h] [rbp-128h] BYREF
  char v51; // [rsp+50h] [rbp-118h]
  void *src; // [rsp+60h] [rbp-108h] BYREF
  size_t n; // [rsp+68h] [rbp-100h]
  _QWORD v54[2]; // [rsp+70h] [rbp-F8h] BYREF
  void *v55; // [rsp+80h] [rbp-E8h] BYREF
  size_t v56; // [rsp+88h] [rbp-E0h]
  _QWORD v57[2]; // [rsp+90h] [rbp-D8h] BYREF
  __m128i v58; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v59; // [rsp+B0h] [rbp-B8h] BYREF
  __int16 v60; // [rsp+C0h] [rbp-A8h]
  __m128i v61; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-78h]
  __m128i v63; // [rsp+100h] [rbp-68h] BYREF
  __int64 v64; // [rsp+120h] [rbp-48h]

  (*(void (__fastcall **)(unsigned __int64 *))(**(_QWORD **)(a2 + 8) + 88LL))(&v48);
  if ( (v49 & 1) != 0 )
  {
    v4 = v48;
    *(_BYTE *)(a1 + 40) |= 1u;
    v48 = 0;
    *(_QWORD *)a1 = v4;
    goto LABEL_3;
  }
  if ( !v48 )
  {
    *(_BYTE *)(a1 + 40) &= ~1u;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_WORD *)(a1 + 32) = -1;
    goto LABEL_3;
  }
  v6 = *(_QWORD *)a2;
  if ( v48 > *(_QWORD *)(*(_QWORD *)a2 + 16LL) + *(_QWORD *)(*(_QWORD *)a2 + 24LL) )
  {
    src = v54;
    v7 = (__m128i *)operator new(0x48u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB560);
    v7[4].m128i_i32[0] = 1651336557;
    *v7 = si128;
    v9 = _mm_load_si128((const __m128i *)&xmmword_23AB570);
    v7[4].m128i_i16[2] = 29285;
    v7[1] = v9;
    v10 = _mm_load_si128((const __m128i *)&xmmword_23AB580);
    v7[4].m128i_i8[6] = 32;
    v7[2] = v10;
    v11 = _mm_load_si128((const __m128i *)&xmmword_23AB590);
    v7[4].m128i_i8[7] = 0;
    v7[3] = v11;
    src = v7;
    v54[0] = 71;
    n = 71;
    sub_2157700((__int64)&v50, a2);
    if ( (v51 & 1) == 0 )
    {
      v58.m128i_i64[0] = (__int64)&src;
      LOWORD(v62) = 261;
      v60 = 260;
      v61 = v50;
      sub_A41580(&v63, &v58, &v61, v12, v13, v14);
      sub_2158040(&v55, (__int64)&v58, v32, v33, v34, v35, v63.m128i_i8[0]);
      v36 = v55;
      *(_BYTE *)(a1 + 40) |= 1u;
      *(_QWORD *)a1 = v36;
LABEL_28:
      sub_111DFC0(v50.m128i_i64);
      if ( src != v54 )
        operator delete(src);
      goto LABEL_3;
    }
    v15 = v50.m128i_i64[0];
    v50.m128i_i64[0] = 0;
    v61.m128i_i64[0] = v15;
    sub_A05760(&v63, &v61);
    if ( v61.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61.m128i_i64[0] + 8LL))(v61.m128i_i64[0]);
    v40 = *(_QWORD *)(a2 + 16);
    v16 = sub_215DEC0(*(_QWORD *)a2);
    v19 = src;
    v60 = 267;
    v46 = v40 - v16;
    v20 = n;
    v58.m128i_i64[0] = (__int64)&v46;
    v55 = v57;
    if ( (char *)src + n && !src )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      v44 = src;
      v42 = n;
      v22 = (_QWORD *)operator new(n + 1);
      v20 = v42;
      v19 = v44;
      v55 = v22;
      v57[0] = v42;
    }
    else
    {
      if ( n == 1 )
      {
        LOBYTE(v57[0]) = *(_BYTE *)src;
        v22 = v57;
LABEL_19:
        v56 = v20;
        *((_BYTE *)v22 + v20) = 0;
        v23 = v56;
        if ( 0x7FFFFFFFFFFFFFFFLL - v56 <= 9 )
          std::__throw_length_error("basic_string::append");
        v24 = v56 + 10;
        if ( v55 == v57 )
          v25 = 15;
        else
          v25 = v57[0];
        if ( v24 > v25 )
        {
          v45 = v56 + 10;
          v43 = v56;
          sub_998B30((__int64)&v55, v56, 0, "at offset ", 0xAu);
          v24 = v45;
          v23 = v43;
        }
        else
        {
          qmemcpy((char *)v55 + v56, "at offset ", 10);
        }
        v56 = v24;
        *((_BYTE *)v55 + v23 + 10) = 0;
        LOWORD(v64) = 260;
        v63.m128i_i64[0] = (__int64)&v55;
        sub_A41580(&v61, &v63, &v58, 260, v17, v18);
        sub_2158040(&v47, (__int64)&v63, v26, v27, v28, v29, v61.m128i_i8[0]);
        v30 = v47;
        v31 = v55;
        *(_BYTE *)(a1 + 40) |= 1u;
        *(_QWORD *)a1 = v30;
        if ( v31 != v57 )
          operator delete(v31);
        goto LABEL_28;
      }
      v22 = v57;
      if ( !n )
        goto LABEL_19;
    }
    v41 = v20;
    memcpy(v22, v19, v20);
    v22 = v55;
    v20 = v41;
    goto LABEL_19;
  }
  v55 = nullptr;
  sub_215AC80((__int64)&v58, v6, v48, (__int64 *)&v55);
  if ( v55 )
  {
    v21 = v58.m128i_i64[1];
    *(_QWORD *)a1 = v55;
    v55 = nullptr;
    *(_BYTE *)(a1 + 40) |= 1u;
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v55 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v55 + 8LL))(v55);
    }
  }
  else
  {
    v37 = _mm_load_si128(&v58);
    v38 = v60;
    v39 = _mm_load_si128(&v59);
    *(_BYTE *)(a1 + 40) &= ~1u;
    *(__m128i *)a1 = v37;
    *(__m128i *)(a1 + 16) = v39;
    *(_WORD *)(a1 + 32) = v38;
  }
LABEL_3:
  sub_20CE630((__int64 *)&v48);
  return a1;
}
