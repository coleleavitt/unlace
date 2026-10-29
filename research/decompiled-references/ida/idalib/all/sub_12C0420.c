void __fastcall sub_12C0420(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // r15
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  size_t v15; // rbx
  const void *v16; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // r15
  __int8 *v21; // r13
  signed __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i *v26; // rax
  size_t v27; // rbx
  unsigned __int64 v28; // rdx
  char *v29; // rdi
  __int8 *v30; // rsi
  signed __int64 v31; // rcx
  __m128i *v32; // rax
  size_t v33; // rax
  size_t v34; // r9
  unsigned __int64 v35; // rcx
  char *v36; // rdx
  _BYTE *v37; // rax
  size_t v38; // r9
  unsigned __int64 v39; // rdx
  _BYTE *v40; // rdi
  _QWORD *v41; // [rsp+8h] [rbp-1B0h]
  size_t v42; // [rsp+10h] [rbp-1A8h]
  signed __int64 v43; // [rsp+10h] [rbp-1A8h]
  __int64 v44; // [rsp+10h] [rbp-1A8h]
  size_t v45; // [rsp+10h] [rbp-1A8h]
  size_t v46; // [rsp+10h] [rbp-1A8h]
  __int8 *v47; // [rsp+18h] [rbp-1A0h]
  size_t v48; // [rsp+18h] [rbp-1A0h]
  char *v49; // [rsp+20h] [rbp-198h] BYREF
  __int16 v50; // [rsp+40h] [rbp-178h]
  void *src; // [rsp+50h] [rbp-168h] BYREF
  size_t n; // [rsp+58h] [rbp-160h]
  _WORD v53[16]; // [rsp+60h] [rbp-158h] BYREF
  void *v54; // [rsp+80h] [rbp-138h] BYREF
  size_t v55; // [rsp+88h] [rbp-130h]
  __m128i v56; // [rsp+90h] [rbp-128h] BYREF
  __int16 v57; // [rsp+A0h] [rbp-118h]
  void *v58; // [rsp+B0h] [rbp-108h] BYREF
  size_t v59; // [rsp+B8h] [rbp-100h]
  __m128i v60; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v61; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  __int64 v64; // [rsp+F8h] [rbp-C0h] BYREF
  __int16 v65; // [rsp+100h] [rbp-B8h]

  LODWORD(ptr) = 3053;
  v6 = sub_21B6DA0(a2, &ptr, 1);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_5;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3053) )
  {
    if ( v9 == ++v8 )
      goto LABEL_5;
  }
  if ( v9 == v8 )
  {
LABEL_5:
    v10 = *(_QWORD **)(a1 + 8);
    LODWORD(ptr) = 3033;
    v41 = v10;
    v11 = sub_21B6DA0(a2, &ptr, 1);
    v12 = *(_QWORD *)(a2 + 8);
    v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
    v14 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
    if ( v13 != v14 )
    {
      while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3033) )
      {
        if ( v14 == ++v13 )
          goto LABEL_9;
      }
      if ( v14 != v13 )
      {
        do
        {
          v24 = *v13;
          if ( *(_QWORD *)(*v13 + 16LL) )
            v24 = *(_QWORD *)(*v13 + 16LL);
          ++v13;
          *(_BYTE *)(v24 + 44) |= 1u;
          if ( v13 == v14 )
            break;
          while ( !*v13 || !(unsigned __int8)sub_21B9810(*v13, 3033) )
          {
            if ( v14 == ++v13 )
              goto LABEL_13;
          }
        }
        while ( v14 != v13 );
LABEL_13:
        LODWORD(ptr) = 3055;
        v17 = sub_21B6DA0(a2, &ptr, 1);
        v18 = *(_QWORD *)(a2 + 8);
        v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
        v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
        if ( v19 != v20 )
        {
          while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3055) )
          {
            if ( v20 == ++v19 )
              goto LABEL_17;
          }
          if ( v20 != v19 )
          {
            do
            {
              v25 = *v19;
              if ( *(_QWORD *)(*v19 + 16LL) )
                v25 = *(_QWORD *)(*v19 + 16LL);
              ++v19;
              *(_BYTE *)(v25 + 44) |= 1u;
              if ( v19 == v20 )
                break;
              while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3055) )
              {
                if ( v20 == ++v19 )
                  return;
              }
            }
            while ( v19 != v20 );
            return;
          }
        }
LABEL_17:
        if ( !*(_DWORD *)(a1 + 60) )
        {
LABEL_18:
          v58 = &v60;
          v21 = (__int8 *)v41[61];
          v22 = v41[62];
          if ( &v21[v22] && !v21 )
            goto LABEL_20;
          if ( (unsigned __int64)v22 <= 0xF )
          {
            if ( v22 == 1 )
            {
              v60.m128i_i8[0] = *v21;
              v26 = &v60;
              goto LABEL_54;
            }
            v26 = &v60;
            if ( !v22 )
            {
LABEL_54:
              v59 = v22;
              v26->m128i_i8[v22] = 0;
              v27 = v59;
              if ( 0x7FFFFFFFFFFFFFFFLL - v59 > 7 )
              {
                if ( v58 == &v60 )
                  v28 = 15;
                else
                  v28 = v60.m128i_i64[0];
                if ( v59 + 8 > v28 )
                  sub_998B30((__int64)&v58, v59, 0, "/include", 8u);
                else
                  *(_QWORD *)((char *)v58 + v59) = 0x6564756C636E692FLL;
                v59 = v27 + 8;
                *((_BYTE *)v58 + v27 + 8) = 0;
                ptr = &v58;
                v65 = 260;
                sub_112FA80(a2, a3, (__int64)&ptr);
                if ( v58 != &v60 )
                  operator delete(v58);
                return;
              }
LABEL_104:
              std::__throw_length_error("basic_string::append");
            }
LABEL_64:
            memcpy(v26, v21, v22);
            v26 = (__m128i *)v58;
            goto LABEL_54;
          }
          if ( v22 >= 0 )
          {
            v26 = (__m128i *)operator new(v22 + 1);
            v60.m128i_i64[0] = v22;
            v58 = v26;
            goto LABEL_64;
          }
LABEL_105:
          std::__throw_length_error("basic_string::_M_create");
        }
        sub_12B8E90((__int64)&src, a1 + 16);
        v54 = &v56;
        v30 = (__int8 *)v41[61];
        v31 = v41[62];
        if ( &v30[v31] && !v30 )
LABEL_20:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v31 > 0xF )
        {
          if ( v31 < 0 )
            goto LABEL_105;
          v47 = (__int8 *)v41[61];
          v44 = v41[62];
          v32 = (__m128i *)operator new(v31 + 1);
          v31 = v44;
          v30 = v47;
          v54 = v32;
          v56.m128i_i64[0] = v44;
        }
        else
        {
          if ( v31 == 1 )
          {
            v56.m128i_i8[0] = *v30;
            v32 = &v56;
LABEL_70:
            v55 = v31;
            v32->m128i_i8[v31] = 0;
            v33 = v55;
            if ( 0x7FFFFFFFFFFFFFFFLL - v55 <= 8 )
              goto LABEL_104;
            v34 = v55 + 9;
            if ( v54 == &v56 )
              v35 = 15;
            else
              v35 = v56.m128i_i64[0];
            if ( v34 > v35 )
            {
              v48 = v55 + 9;
              v46 = v55;
              sub_998B30((__int64)&v54, v55, 0, "/include/", 9u);
              v34 = v48;
              v33 = v46;
            }
            else
            {
              v36 = (char *)v54 + v55;
              *(_QWORD *)v36 = 0x6564756C636E692FLL;
              v36[8] = 47;
            }
            v55 = v34;
            *((_BYTE *)v54 + v33 + 9) = 0;
            v37 = v54;
            v38 = n + v55;
            if ( v54 == &v56 )
              v39 = 15;
            else
              v39 = v56.m128i_i64[0];
            if ( v38 > v39 )
            {
              v45 = n + v55;
              sub_998B30((__int64)&v54, v55, 0, src, n);
              v37 = v54;
              v38 = v45;
            }
            else if ( n )
            {
              v40 = (char *)v54 + v55;
              if ( n == 1 )
              {
                *v40 = *(_BYTE *)src;
                v37 = v54;
              }
              else
              {
                v42 = n + v55;
                memcpy(v40, src, n);
                v37 = v54;
                v38 = v42;
              }
            }
            v55 = v38;
            v37[v38] = 0;
            v58 = &v60;
            if ( v54 == &v56 )
            {
              v60 = _mm_load_si128(&v56);
            }
            else
            {
              v58 = v54;
              v60.m128i_i64[0] = v56.m128i_i64[0];
            }
            v65 = 260;
            ptr = &v58;
            v59 = v55;
            v54 = &v56;
            v55 = 0;
            v56.m128i_i8[0] = 0;
            sub_112FA80(a2, a3, (__int64)&ptr);
            if ( v58 != &v60 )
              operator delete(v58);
            if ( v54 != &v56 )
              operator delete(v54);
            if ( src != v53 )
              operator delete(src);
            goto LABEL_18;
          }
          v32 = &v56;
          if ( !v31 )
            goto LABEL_70;
        }
        v43 = v31;
        memcpy(v32, v30, v31);
        v32 = (__m128i *)v54;
        v31 = v43;
        goto LABEL_70;
      }
    }
LABEL_9:
    v15 = v41[32];
    v16 = (const void *)v41[31];
    ptr = &v64;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v15 > 0x80 )
    {
      sub_2236E10(&ptr, &v64, v15, 1);
      v29 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v15 )
        goto LABEL_11;
      v29 = (char *)&v64;
    }
    memcpy(v29, v16, v15);
    v15 += si128.m128i_i64[0];
LABEL_11:
    v50 = 259;
    v61 = 257;
    v57 = 257;
    v53[8] = 257;
    v49 = "include";
    si128.m128i_i64[0] = v15;
    sub_228A3B0(&ptr, &v49, &src, &v54, &v58);
    v61 = 261;
    v58 = ptr;
    v59 = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v58);
    if ( ptr != &v64 )
      free(ptr);
    goto LABEL_13;
  }
  do
  {
    v23 = *v8;
    if ( *(_QWORD *)(*v8 + 16LL) )
      v23 = *(_QWORD *)(*v8 + 16LL);
    ++v8;
    *(_BYTE *)(v23 + 44) |= 1u;
    if ( v8 == v9 )
      break;
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 3053) )
    {
      if ( v9 == ++v8 )
        return;
    }
  }
  while ( v9 != v8 );
}
