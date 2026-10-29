void __fastcall sub_129DB40(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r13
  _QWORD *v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  size_t v12; // r15
  const void *v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r15
  _QWORD *v17; // r13
  size_t v18; // r15
  size_t v19; // r9
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rdi
  size_t v22; // r15
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __m128i *v25; // rax
  size_t v26; // rax
  size_t v27; // r9
  unsigned __int64 v28; // rcx
  size_t v29; // r14
  size_t v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  char *v35; // rdi
  _BYTE *v36; // rdi
  __int64 v38; // [rsp+10h] [rbp-1C8h]
  size_t v39; // [rsp+10h] [rbp-1C8h]
  size_t v40; // [rsp+10h] [rbp-1C8h]
  size_t v41; // [rsp+10h] [rbp-1C8h]
  size_t v42; // [rsp+18h] [rbp-1C0h]
  void *v43; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v44; // [rsp+28h] [rbp-1B0h]
  __int64 v45; // [rsp+30h] [rbp-1A8h] BYREF
  void *v46; // [rsp+40h] [rbp-198h] BYREF
  size_t v47; // [rsp+48h] [rbp-190h]
  _QWORD v48[2]; // [rsp+50h] [rbp-188h] BYREF
  __int16 v49; // [rsp+60h] [rbp-178h]
  void *src; // [rsp+70h] [rbp-168h] BYREF
  size_t n; // [rsp+78h] [rbp-160h]
  _QWORD v52[2]; // [rsp+80h] [rbp-158h] BYREF
  __int16 v53; // [rsp+90h] [rbp-148h]
  void *v54; // [rsp+A0h] [rbp-138h] BYREF
  size_t v55; // [rsp+A8h] [rbp-130h]
  _QWORD v56[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int16 v57; // [rsp+C0h] [rbp-118h]
  void *v58; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-100h]
  __m128i v60; // [rsp+E0h] [rbp-F8h] BYREF
  __int16 v61; // [rsp+F0h] [rbp-E8h]
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+108h] [rbp-D0h]
  __int64 v64; // [rsp+118h] [rbp-C0h] BYREF
  __int16 v65; // [rsp+120h] [rbp-B8h]

  v38 = a1[1];
  (*(void (__fastcall **)(void **, _QWORD *))(*a1 + 552LL))(&v43, a1);
  LODWORD(ptr) = 3053;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    LODWORD(ptr) = 3033;
    v8 = sub_21B6DA0(a2, &ptr, 1);
    v9 = *(_QWORD *)(a2 + 8);
    v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
    v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
    if ( v10 != v11 )
    {
      while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3033) )
      {
        if ( v11 == ++v10 )
          goto LABEL_9;
      }
      if ( v11 != v10 )
      {
        do
        {
          v33 = *v10;
          if ( *(_QWORD *)(*v10 + 16LL) )
            v33 = *(_QWORD *)(*v10 + 16LL);
          ++v10;
          *(_BYTE *)(v33 + 44) |= 1u;
          if ( v10 == v11 )
            break;
          while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3033) )
          {
            if ( v11 == ++v10 )
              goto LABEL_13;
          }
        }
        while ( v11 != v10 );
LABEL_13:
        LODWORD(ptr) = 3055;
        v14 = sub_21B6DA0(a2, &ptr, 1);
        v15 = *(_QWORD *)(a2 + 8);
        v16 = (_QWORD *)(v15 + 8LL * (unsigned int)v14);
        v17 = (_QWORD *)(v15 + 8 * HIDWORD(v14));
        if ( v16 != v17 )
        {
          while ( !*v16 || !(unsigned __int8)sub_21B9810(*v16, 3055) )
          {
            if ( v17 == ++v16 )
              goto LABEL_17;
          }
          if ( v16 != v17 )
          {
            do
            {
              v34 = *v16;
              if ( *(_QWORD *)(*v16 + 16LL) )
                v34 = *(_QWORD *)(*v16 + 16LL);
              ++v16;
              *(_BYTE *)(v34 + 44) |= 1u;
              if ( v16 == v17 )
                break;
              while ( !*v16 || !(unsigned __int8)sub_21B9810(*v16, 3055) )
              {
                if ( v17 == ++v16 )
                  goto LABEL_52;
              }
            }
            while ( v17 != v16 );
            goto LABEL_52;
          }
        }
LABEL_17:
        sub_129BDF0((char *)&src, (__int64)(a1 + 2));
        v46 = v48;
        sub_129A5D0(&v46, v43, (__int64)v43 + v44);
        v18 = v47;
        if ( 0x7FFFFFFFFFFFFFFFLL - v47 <= 0xC )
LABEL_103:
          std::__throw_length_error("basic_string::append");
        v19 = v47 + 13;
        if ( v46 == v48 )
          v20 = 15;
        else
          v20 = v48[0];
        if ( v19 > v20 )
        {
          v39 = v47 + 13;
          sub_998B30((__int64)&v46, v47, 0, "/usr/include/", 0xDu);
          v19 = v39;
        }
        else
        {
          qmemcpy((char *)v46 + v47, "/usr/include/", 13);
        }
        v47 = v19;
        *((_BYTE *)v46 + v18 + 13) = 0;
        v21 = v46;
        v22 = v47 + n;
        if ( v46 == v48 )
          v23 = 15;
        else
          v23 = v48[0];
        if ( v22 <= v23 )
        {
          if ( n )
          {
            v36 = (char *)v46 + v47;
            if ( n == 1 )
              *v36 = *(_BYTE *)src;
            else
              memcpy(v36, src, n);
            v21 = v46;
          }
        }
        else
        {
          if ( src == v52 )
            v24 = 15;
          else
            v24 = v52[0];
          if ( v22 <= v24 )
          {
            v25 = (__m128i *)sub_99BDC0(&src, 0, 0, v46, v47);
LABEL_30:
            v58 = &v60;
            if ( (__m128i *)v25->m128i_i64[0] == &v25[1] )
            {
              v60 = _mm_loadu_si128(v25 + 1);
            }
            else
            {
              v58 = (void *)v25->m128i_i64[0];
              v60.m128i_i64[0] = v25[1].m128i_i64[0];
            }
            v59 = v25->m128i_i64[1];
            v25->m128i_i64[0] = (__int64)v25[1].m128i_i64;
            v25->m128i_i64[1] = 0;
            v25[1].m128i_i8[0] = 0;
            v65 = 260;
            ptr = &v58;
            sub_112FAC0(a2, a3, (__int64)&ptr);
            if ( v58 != &v60 )
              operator delete(v58);
            if ( v46 != v48 )
              operator delete(v46);
            if ( src != v52 )
              operator delete(src);
            v54 = v56;
            sub_129A5D0(&v54, v43, (__int64)v43 + v44);
            v26 = v55;
            if ( 0x7FFFFFFFFFFFFFFFLL - v55 > 7 )
            {
              v27 = v55 + 8;
              if ( v54 == v56 )
                v28 = 15;
              else
                v28 = v56[0];
              if ( v27 > v28 )
              {
                v42 = v55 + 8;
                v40 = v55;
                sub_998B30((__int64)&v54, v55, 0, "/include", 8u);
                v27 = v42;
                v26 = v40;
              }
              else
              {
                *(_QWORD *)((char *)v54 + v55) = 0x6564756C636E692FLL;
              }
              v55 = v27;
              *((_BYTE *)v54 + v26 + 8) = 0;
              v65 = 260;
              ptr = &v54;
              sub_112FAC0(a2, a3, (__int64)&ptr);
              if ( v54 != v56 )
                operator delete(v54);
              v58 = &v60;
              sub_129A5D0(&v58, v43, (__int64)v43 + v44);
              v29 = v59;
              if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v59) > 0xB )
              {
                v30 = v59 + 12;
                if ( v58 == &v60 )
                  v31 = 15;
                else
                  v31 = v60.m128i_i64[0];
                if ( v30 > v31 )
                {
                  v41 = v59 + 12;
                  sub_998B30((__int64)&v58, v59, 0, "/usr/include", 0xCu);
                  v30 = v41;
                }
                else
                {
                  qmemcpy((char *)v58 + v59, "/usr/include", 12);
                }
                v59 = v30;
                *((_BYTE *)v58 + v29 + 12) = 0;
                ptr = &v58;
                v65 = 260;
                sub_112FAC0(a2, a3, (__int64)&ptr);
                if ( v58 != &v60 )
                  operator delete(v58);
                goto LABEL_52;
              }
            }
            goto LABEL_103;
          }
          sub_998B30((__int64)&v46, v47, 0, src, n);
          v21 = v46;
        }
        v47 = v22;
        v25 = (__m128i *)&v46;
        v21[v22] = 0;
        goto LABEL_30;
      }
    }
LABEL_9:
    v12 = *(_QWORD *)(v38 + 256);
    v13 = *(const void **)(v38 + 248);
    ptr = &v64;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v12 > 0x80 )
    {
      sub_2236E10(&ptr, &v64, v12, 1);
      v35 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      if ( !v12 )
        goto LABEL_11;
      v35 = (char *)&v64;
    }
    memcpy(v35, v13, v12);
    v12 += si128.m128i_i64[0];
LABEL_11:
    si128.m128i_i64[0] = v12;
    v61 = 257;
    v46 = "include";
    v57 = 257;
    v53 = 257;
    v49 = 259;
    sub_228A3B0(&ptr, &v46, &src, &v54, &v58);
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
    v32 = *v6;
    if ( *(_QWORD *)(*v6 + 16LL) )
      v32 = *(_QWORD *)(*v6 + 16LL);
    ++v6;
    *(_BYTE *)(v32 + 44) |= 1u;
    if ( v6 == v7 )
      break;
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
    {
      if ( v7 == ++v6 )
        goto LABEL_52;
    }
  }
  while ( v7 != v6 );
LABEL_52:
  if ( v43 != &v45 )
    operator delete(v43);
}
