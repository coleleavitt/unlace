void __fastcall sub_126C5F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *(__fastcall *v6)(void **, __int64); // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r15
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r14
  _QWORD *v15; // r15
  size_t v16; // r14
  unsigned __int64 v17; // rcx
  char *v18; // rdx
  __m128i si128; // xmm0
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r14
  _QWORD *v23; // r15
  size_t v24; // r14
  const void *v25; // r15
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // r14
  _QWORD *v29; // r15
  __m128i *(__fastcall *v30)(__m128i *, __int64, __int64, __int64); // rax
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-220h]
  void *v40; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-1F0h]
  _BYTE v42[16]; // [rsp+40h] [rbp-1E8h] BYREF
  __m128i v43; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-1C8h] BYREF
  void *v45[2]; // [rsp+70h] [rbp-1B8h] BYREF
  _BYTE v46[16]; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v47[4]; // [rsp+90h] [rbp-198h] BYREF
  __int16 v48; // [rsp+B0h] [rbp-178h]
  _QWORD v49[4]; // [rsp+C0h] [rbp-168h] BYREF
  __int16 v50; // [rsp+E0h] [rbp-148h]
  _BYTE v51[32]; // [rsp+F0h] [rbp-138h] BYREF
  __int16 v52; // [rsp+110h] [rbp-118h]
  void *v53; // [rsp+120h] [rbp-108h] BYREF
  size_t v54; // [rsp+128h] [rbp-100h]
  _QWORD v55[2]; // [rsp+130h] [rbp-F8h] BYREF
  __int16 v56; // [rsp+140h] [rbp-E8h]
  void *ptr; // [rsp+150h] [rbp-D8h] BYREF
  __m128i v58; // [rsp+158h] [rbp-D0h]
  __int64 v59; // [rsp+168h] [rbp-C0h] BYREF
  __int16 v60; // [rsp+170h] [rbp-B8h]

  v5 = a1[1];
  v6 = *(_QWORD *(__fastcall **)(void **, __int64))(*a1 + 552LL);
  v38 = v5;
  if ( (char *)v6 == (char *)sub_126C0E0 )
  {
    v7 = *(_QWORD *)(v5 + 496);
    v40 = v42;
    if ( v7 )
    {
      sub_126BE20(&v40, *(_BYTE **)(v5 + 488), *(_QWORD *)(v5 + 488) + v7);
    }
    else
    {
      v41 = 0;
      v42[0] = 0;
    }
  }
  else
  {
    v6(&v40, (__int64)a1);
  }
  LODWORD(ptr) = 3053;
  v8 = sub_21B6DA0(a2, &ptr, 1);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
  v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
  if ( v10 == v11 )
    goto LABEL_8;
  while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3053) )
  {
    if ( v11 == ++v10 )
      goto LABEL_8;
  }
  if ( v10 == v11 )
  {
LABEL_8:
    LODWORD(ptr) = 3055;
    v12 = sub_21B6DA0(a2, &ptr, 1);
    v13 = *(_QWORD *)(a2 + 8);
    v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
    v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
    if ( v14 == v15 )
      goto LABEL_12;
    while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
    {
      if ( v15 == ++v14 )
        goto LABEL_12;
    }
    if ( v15 == v14 )
    {
LABEL_12:
      v53 = v55;
      sub_126BE20(&v53, v40, (__int64)v40 + v41);
      v16 = v54;
      if ( 0x7FFFFFFFFFFFFFFFLL - v54 <= 0x11 )
        std::__throw_length_error("basic_string::append");
      if ( v53 == v55 )
        v17 = 15;
      else
        v17 = v55[0];
      if ( v54 + 18 > v17 )
      {
        sub_998B30((__int64)&v53, v54, 0, "/usr/local/include", 0x12u);
      }
      else
      {
        v18 = (char *)v53 + v54;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A9BC0);
        *((_WORD *)v18 + 8) = 25956;
        *(__m128i *)v18 = si128;
      }
      v54 = v16 + 18;
      *((_BYTE *)v53 + v16 + 18) = 0;
      v60 = 260;
      ptr = &v53;
      sub_112FA80(a2, a3, (__int64)&ptr);
      if ( v53 != v55 )
        operator delete(v53);
    }
    else
    {
      do
      {
        v34 = *v14;
        if ( *(_QWORD *)(*v14 + 16LL) )
          v34 = *(_QWORD *)(*v14 + 16LL);
        ++v14;
        *(_BYTE *)(v34 + 44) |= 1u;
        if ( v14 == v15 )
          break;
        while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3055) )
        {
          if ( v15 == ++v14 )
            goto LABEL_19;
        }
      }
      while ( v14 != v15 );
    }
LABEL_19:
    LODWORD(ptr) = 3033;
    v20 = sub_21B6DA0(a2, &ptr, 1);
    v21 = *(_QWORD *)(a2 + 8);
    v22 = (_QWORD *)(v21 + 8LL * (unsigned int)v20);
    v23 = (_QWORD *)(v21 + 8 * HIDWORD(v20));
    if ( v22 != v23 )
    {
      while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 3033) )
      {
        if ( v23 == ++v22 )
          goto LABEL_23;
      }
      if ( v23 != v22 )
      {
        do
        {
          v35 = *v22;
          if ( *(_QWORD *)(*v22 + 16LL) )
            v35 = *(_QWORD *)(*v22 + 16LL);
          ++v22;
          *(_BYTE *)(v35 + 44) |= 1u;
          if ( v22 == v23 )
            break;
          while ( !*v22 || !(unsigned __int8)sub_21B9810(*v22, 3033) )
          {
            if ( v23 == ++v22 )
              goto LABEL_27;
          }
        }
        while ( v23 != v22 );
        goto LABEL_27;
      }
    }
LABEL_23:
    v24 = *(_QWORD *)(v38 + 256);
    v25 = *(const void **)(v38 + 248);
    ptr = &v59;
    v58 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v24 > 0x80 )
    {
      sub_2236E10(&ptr, &v59, v24, 1);
      v37 = (char *)ptr + v58.m128i_i64[0];
    }
    else
    {
      if ( !v24 )
        goto LABEL_25;
      v37 = (char *)&v59;
    }
    memcpy(v37, v25, v24);
    v24 += v58.m128i_i64[0];
LABEL_25:
    v47[0] = "include";
    v48 = 259;
    v56 = 257;
    v52 = 257;
    v50 = 257;
    v58.m128i_i64[0] = v24;
    sub_228A3B0(&ptr, v47, v49, v51, &v53);
    v53 = ptr;
    v56 = 261;
    v54 = v58.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v53);
    if ( ptr != &v59 )
      free(ptr);
LABEL_27:
    LODWORD(ptr) = 3055;
    v26 = sub_21B6DA0(a2, &ptr, 1);
    v27 = *(_QWORD *)(a2 + 8);
    v28 = (_QWORD *)(v27 + 8LL * (unsigned int)v26);
    v29 = (_QWORD *)(v27 + 8 * HIDWORD(v26));
    if ( v28 == v29 )
      goto LABEL_31;
    while ( !*v28 || !(unsigned __int8)sub_21B9810(*v28, 3055) )
    {
      if ( v29 == ++v28 )
        goto LABEL_31;
    }
    if ( v28 == v29 )
    {
LABEL_31:
      sub_1216510((__int64)a1, a2, a3);
      v30 = *(__m128i *(__fastcall **)(__m128i *, __int64, __int64, __int64))(*a1 + 512LL);
      if ( v30 == sub_126C1A0 )
        sub_126C3D0(&v43, (__int64)(a1 + 2));
      else
        ((void (__fastcall *)(__m128i *, _QWORD *, __int64, _QWORD *, void *, __int64))v30)(
          &v43,
          a1,
          v38,
          a1 + 2,
          v40,
          v41);
      v31 = v40;
      v32 = v41;
      if ( v43.m128i_i64[1] )
      {
        v49[0] = &v43;
        v56 = 257;
        v52 = 257;
        v50 = 260;
        v48 = 259;
        v47[0] = "/usr/include";
        sub_1130220(v45, v40, v41, (__int64)v47, (__int64)v49, (__int64)v51, (__int64)&v53);
        ptr = v45;
        v60 = 260;
        sub_112FAC0(a2, a3, (__int64)&ptr);
        if ( v45[0] != v46 )
          operator delete(v45[0]);
        v31 = v40;
        v32 = v41;
      }
      v56 = 257;
      v52 = 257;
      v50 = 257;
      v47[0] = "/include";
      v48 = 259;
      sub_1130220(v45, v31, v32, (__int64)v47, (__int64)v49, (__int64)v51, (__int64)&v53);
      ptr = v45;
      v60 = 260;
      sub_112FAC0(a2, a3, (__int64)&ptr);
      if ( v45[0] != v46 )
        operator delete(v45[0]);
      v52 = 257;
      v48 = 259;
      v56 = 257;
      v50 = 257;
      v47[0] = "/usr/include";
      sub_1130220(v45, v40, v41, (__int64)v47, (__int64)v49, (__int64)v51, (__int64)&v53);
      ptr = v45;
      v60 = 260;
      sub_112FAC0(a2, a3, (__int64)&ptr);
      if ( v45[0] != v46 )
        operator delete(v45[0]);
      if ( (__int64 *)v43.m128i_i64[0] != &v44 )
        operator delete((void *)v43.m128i_i64[0]);
    }
    else
    {
      do
      {
        v36 = *v28;
        if ( *(_QWORD *)(*v28 + 16LL) )
          v36 = *(_QWORD *)(*v28 + 16LL);
        ++v28;
        *(_BYTE *)(v36 + 44) |= 1u;
        if ( v28 == v29 )
          break;
        while ( !*v28 || !(unsigned __int8)sub_21B9810(*v28, 3055) )
        {
          if ( v29 == ++v28 )
            goto LABEL_40;
        }
      }
      while ( v28 != v29 );
    }
    goto LABEL_40;
  }
  do
  {
    v33 = *v10;
    if ( *(_QWORD *)(*v10 + 16LL) )
      v33 = *(_QWORD *)(*v10 + 16LL);
    ++v10;
    *(_BYTE *)(v33 + 44) |= 1u;
    if ( v10 == v11 )
      break;
    while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3053) )
    {
      if ( v11 == ++v10 )
        goto LABEL_40;
    }
  }
  while ( v11 != v10 );
LABEL_40:
  if ( v40 != v42 )
    operator delete(v40);
}
