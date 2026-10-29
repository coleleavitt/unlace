__m128i *__fastcall sub_1265750(__m128i *a1, __int64 a2)
{
  __m128i *v2; // r12
  __int64 v4; // rax
  int v5; // eax
  char v6; // dl
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int8 (__fastcall *v12)(__int64, _QWORD *); // r10
  unsigned __int16 *v13; // rax
  size_t v15; // rax
  void *v16; // rdx
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, _QWORD *); // rdx
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 (__fastcall *v22)(__int64, _QWORD *); // rdx
  __m128i *v23; // rax
  _BYTE *v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64, _QWORD *); // rdx
  char v28; // al
  __m128i *v29; // rdi
  size_t v30; // rdx
  char *v31; // [rsp+0h] [rbp-138h] BYREF
  void **v32; // [rsp+8h] [rbp-130h]
  __int64 v33; // [rsp+10h] [rbp-128h]
  void *v34; // [rsp+18h] [rbp-120h]
  void *dest; // [rsp+20h] [rbp-118h] BYREF
  __m128 v36; // [rsp+28h] [rbp-110h] BYREF
  void *v37; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-F0h]
  __m128i v39; // [rsp+50h] [rbp-E8h] BYREF
  __int16 v40; // [rsp+60h] [rbp-D8h]
  void *src; // [rsp+70h] [rbp-C8h] BYREF
  size_t n; // [rsp+78h] [rbp-C0h]
  _QWORD v43[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int16 v44; // [rsp+90h] [rbp-A8h]
  void *p_src; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-90h]
  __m128i v47; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v48; // [rsp+C0h] [rbp-78h]
  _QWORD v49[2]; // [rsp+D0h] [rbp-68h] BYREF
  char *v50; // [rsp+E0h] [rbp-58h]
  __int16 v51; // [rsp+F0h] [rbp-48h]

  v2 = a1 + 1;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v4 + 496) )
  {
    a1->m128i_i64[0] = (__int64)v2;
    sub_1264810(a1, *(_BYTE **)(v4 + 488), *(_QWORD *)(v4 + 488) + *(_QWORD *)(v4 + 496));
    return a1;
  }
  if ( *(_DWORD *)(a2 + 64) == 17 )
  {
    v20 = *(_QWORD *)(v4 + 104);
    v49[1] = *(_QWORD *)(v4 + 112);
    v49[0] = v20;
    v51 = 773;
    v50 = "/../sysroot";
    sub_2253560(&p_src, v49);
    v21 = sub_112C5D0(a2);
    v22 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 96LL);
    v49[0] = &p_src;
    v51 = 260;
    if ( v22(v21, v49) )
    {
      v23 = (__m128i *)p_src;
      a1->m128i_i64[0] = (__int64)v2;
      if ( v23 == &v47 )
      {
        a1[1] = _mm_load_si128(&v47);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v23;
        a1[1].m128i_i64[0] = v47.m128i_i64[0];
      }
      a1->m128i_i64[1] = v46;
      return a1;
    }
    if ( p_src != &v47 )
      operator delete(p_src);
  }
  v5 = *(_DWORD *)(a2 + 48);
  v6 = *(_BYTE *)(a2 + 2384);
  if ( v5 != 10 )
  {
    if ( v6 && (unsigned int)(v5 - 16) <= 3 )
    {
      v7 = *(_QWORD *)(a2 + 2392);
      v8 = *(_QWORD *)(a2 + 2400);
      v9 = *(void **)(a2 + 2456);
      v10 = *(_QWORD *)(a2 + 2464);
      v39.m128i_i64[0] = (__int64)"/../../../../";
      v48 = 770;
      v51 = 1026;
      src = &v37;
      v43[0] = v7;
      v43[1] = v8;
      v37 = v9;
      v34 = v9;
      v38 = v10;
      v33 = v10;
      v49[0] = &p_src;
      v32 = &p_src;
      v40 = 773;
      v44 = 1282;
      v50 = (char *)(a2 + 2552);
      v31 = (char *)(a2 + 2552);
      v47.m128i_i64[0] = (__int64)"/libc";
      p_src = &src;
      sub_2253560(&dest, v49);
      v11 = sub_112C5D0(a2);
      v12 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 96LL);
      v51 = 260;
      v49[0] = &dest;
      if ( v12(v11, v49) )
      {
        v13 = (unsigned __int16 *)dest;
        a1->m128i_i64[0] = (__int64)v2;
        if ( v13 != &v36.m128_u16[4] )
        {
LABEL_8:
          a1->m128i_i64[0] = (__int64)v13;
          a1[1].m128i_i64[0] = v36.m128_i64[1];
LABEL_9:
          a1->m128i_i64[1] = v36.m128_u64[0];
          return a1;
        }
LABEL_32:
        a1[1] = _mm_load_si128((const __m128i *)&v36.m128_u16[4]);
        goto LABEL_9;
      }
      p_src = v34;
      v48 = 773;
      v51 = 1026;
      v47.m128i_i64[0] = (__int64)"/../../../../sysroot";
      v46 = v33;
      v49[0] = v32;
      v50 = v31;
      sub_2253560(&src, v49);
      v24 = dest;
      if ( src == v43 )
      {
        v30 = n;
        if ( n )
        {
          if ( n == 1 )
            *(_BYTE *)dest = v43[0];
          else
            memcpy(dest, src, n);
          v30 = n;
          v24 = dest;
        }
        v36.m128_u64[0] = v30;
        v24[v30] = 0;
        v24 = src;
        goto LABEL_28;
      }
      if ( dest == &v36.m128_u16[4] )
      {
        v31 = (char *)v43[0];
        dest = src;
        v36 = _mm_loadh_ps((const double *)&v31);
      }
      else
      {
        v31 = (char *)v43[0];
        v25 = v36.m128_u64[1];
        dest = src;
        v36 = _mm_loadh_ps((const double *)&v31);
        if ( v24 )
        {
          src = v24;
          v43[0] = v25;
LABEL_28:
          n = 0;
          *v24 = 0;
          if ( src != v43 )
            operator delete(src);
          v26 = sub_112C5D0(a2);
          v27 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 96LL);
          v51 = 260;
          v49[0] = &dest;
          v28 = v27(v26, v49);
          a1->m128i_i64[0] = (__int64)v2;
          if ( v28 )
          {
            v13 = (unsigned __int16 *)dest;
            if ( dest != &v36.m128_u16[4] )
              goto LABEL_8;
            goto LABEL_32;
          }
          v29 = (__m128i *)dest;
          a1->m128i_i64[1] = 0;
          a1[1].m128i_i8[0] = 0;
          if ( v29 == (__m128i *)&v36.m128_u16[4] )
            return a1;
LABEL_34:
          operator delete(v29);
          return a1;
        }
      }
      v24 = v43;
      src = v43;
      goto LABEL_28;
    }
LABEL_11:
    a1->m128i_i64[0] = (__int64)v2;
    a1->m128i_i64[1] = 0;
    a1[1].m128i_i8[0] = 0;
    return a1;
  }
  if ( !v6 )
    goto LABEL_11;
  v15 = *(_QWORD *)(a2 + 2464);
  v16 = *(void **)(a2 + 2456);
  v48 = 1026;
  n = v15;
  v43[0] = "/../../../../";
  p_src = &src;
  v47.m128i_i64[0] = a2 + 2392;
  v49[0] = &p_src;
  v51 = 770;
  v44 = 773;
  src = v16;
  v50 = "/libc";
  sub_2253560(&v37, v49);
  v17 = sub_112C5D0(a2);
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 96LL);
  v49[0] = &v37;
  v51 = 260;
  v19 = v18(v17, v49);
  a1->m128i_i64[0] = (__int64)v2;
  if ( !v19 )
  {
    v29 = (__m128i *)v37;
    a1->m128i_i64[1] = 0;
    a1[1].m128i_i8[0] = 0;
    if ( v29 == &v39 )
      return a1;
    goto LABEL_34;
  }
  if ( v37 == &v39 )
  {
    a1[1] = _mm_load_si128(&v39);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v37;
    a1[1].m128i_i64[0] = v39.m128i_i64[0];
  }
  a1->m128i_i64[1] = v38;
  return a1;
}
