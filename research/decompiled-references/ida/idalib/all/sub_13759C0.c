void __fastcall sub_13759C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  size_t *v10; // rbx
  size_t i; // rax
  unsigned __int64 v12; // rax
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int8 *v16; // r8
  char *v17; // rcx
  size_t v18; // rax
  __int64 v19; // rdi
  char v20; // dl
  char *v21; // rdi
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rbp
  unsigned __int64 v25; // rax
  void **v26; // rcx
  _BYTE *v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 *v29; // rdi
  __int64 v30; // rdx
  _DWORD *v31; // rax
  _DWORD *v32; // rdx
  size_t v33; // rdx
  char *p_src; // [rsp+8h] [rbp-320h] BYREF
  __int8 *v35; // [rsp+10h] [rbp-318h]
  char *v36; // [rsp+18h] [rbp-310h]
  void *v37; // [rsp+20h] [rbp-308h] BYREF
  __int64 v38; // [rsp+28h] [rbp-300h]
  _BYTE v39[16]; // [rsp+30h] [rbp-2F8h] BYREF
  void *dest; // [rsp+40h] [rbp-2E8h] BYREF
  __m128 v41; // [rsp+48h] [rbp-2E0h] BYREF
  void *src; // [rsp+60h] [rbp-2C8h] BYREF
  size_t n; // [rsp+68h] [rbp-2C0h]
  _QWORD v44[2]; // [rsp+70h] [rbp-2B8h] BYREF
  __int16 v45; // [rsp+80h] [rbp-2A8h] BYREF
  char *v46; // [rsp+88h] [rbp-2A0h]
  __int8 *v47; // [rsp+90h] [rbp-298h]
  __int64 v48; // [rsp+B0h] [rbp-278h] BYREF
  _OWORD *v49; // [rsp+B8h] [rbp-270h]
  unsigned __int64 v50; // [rsp+C0h] [rbp-268h]
  __m128i v51; // [rsp+C8h] [rbp-260h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+E0h] [rbp-248h] BYREF
  int v53; // [rsp+E8h] [rbp-240h]
  __int128 v54; // [rsp+F0h] [rbp-238h]
  _BYTE *v55; // [rsp+100h] [rbp-228h]
  char v56; // [rsp+108h] [rbp-220h]
  int v57; // [rsp+10Ch] [rbp-21Ch]
  void **v58; // [rsp+110h] [rbp-218h]
  void *ptr[2]; // [rsp+120h] [rbp-208h] BYREF
  int v60; // [rsp+130h] [rbp-1F8h] BYREF
  char v61; // [rsp+134h] [rbp-1F4h]
  __int64 v62; // [rsp+1B0h] [rbp-178h]
  __int64 v63; // [rsp+1B8h] [rbp-170h]
  __int64 (__fastcall ***v64)(); // [rsp+1C0h] [rbp-168h]
  __int64 v65; // [rsp+1C8h] [rbp-160h]
  char *s; // [rsp+1D0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+1D8h] [rbp-150h]
  _BYTE v68[320]; // [rsp+1E8h] [rbp-140h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(unsigned int *)(v7 + 520);
  LOBYTE(s) = 0;
  if ( (unsigned int)(v8 + 1) <= 1 )
    goto LABEL_35;
  if ( (int)v8 < 0 )
  {
    v22 = (unsigned int)(-2 - v8);
    v23 = *(_QWORD *)(*(_QWORD *)(v7 + 320) + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v23, v22) )
    {
      v24 = (_QWORD *)(*(_QWORD *)(v7 + 272) + 8 * ((unsigned __int64)(int)v22 >> 5));
      if ( *v24 )
      {
        v9 = *v24 + 24 * (v22 & 0x1F);
        goto LABEL_4;
      }
      v29 = (__int64 *)(*(_QWORD *)(v7 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v30 = *v29;
      v29[10] += 768;
      v31 = (_DWORD *)((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v29[1] >= (unsigned __int64)(v31 + 192) && v30 )
        *v29 = (__int64)(v31 + 192);
      else
        v31 = (_DWORD *)sub_986170((__int64)v29, 768, 768, 3, a5, a6);
      *v24 = v31;
      v32 = v31 + 192;
      do
      {
        *v31 = 0;
        v31 += 6;
        *((_OWORD *)v31 - 1) = 0;
        *((_QWORD *)v31 - 1) = 0;
      }
      while ( v31 != v32 );
      v20 = (char)s;
      v9 = *v24 + 24 * (v22 & 0x1F);
    }
    else
    {
      v9 = sub_101F930(v7, v22, &s);
      v20 = (char)s;
    }
    if ( v20 )
      goto LABEL_35;
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(v7 + 184) + 24 * v8;
LABEL_4:
  if ( v9 && *(char *)(v9 + 3) >= 0 )
  {
    v10 = *(size_t **)((*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    s = v68;
    if ( !v10 )
      goto LABEL_14;
    for ( i = v10[1]; i; i = *(_QWORD *)(v12 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v12 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        break;
      v10 = (size_t *)v12;
    }
    v13 = *v10;
    if ( *v10 > 0x100 )
    {
      sub_2236E10(&s, v68, *v10, 1);
      v21 = &s[si128.m128i_i64[0]];
    }
    else
    {
      if ( !v13 )
      {
LABEL_13:
        v14 = *(_QWORD *)(a1 + 8);
        si128.m128i_i64[0] = v13;
        sub_FD77C0(*(_QWORD *)(v14 + 16), (__int64)&s);
        goto LABEL_14;
      }
      v21 = v68;
    }
    memcpy(v21, v10 + 4, v13);
    v13 += si128.m128i_i64[0];
    goto LABEL_13;
  }
LABEL_35:
  s = v68;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
LABEL_14:
  v54 = 0;
  v37 = v39;
  v38 = 0;
  v39[0] = 0;
  v52 = &off_2BEBE68;
  v53 = 0;
  v56 = 0;
  v57 = 1;
  v55 = nullptr;
  v58 = &v37;
  sub_227B8B0(&v52, 0, 0, 0);
  v62 = 0;
  ptr[0] = &v60;
  ptr[1] = (void *)0x1000000001LL;
  v63 = 0;
  v64 = &v52;
  v65 = 0;
  v60 = 0;
  v61 = 0;
  sub_22299F0(ptr);
  v15 = si128.m128i_i64[0];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
  {
    sub_2236E10(&s, v68, si128.m128i_i64[0] + 1, 1);
    v15 = si128.m128i_i64[0];
  }
  v16 = nullptr;
  s[v15] = 0;
  v17 = s;
  if ( s )
  {
    p_src = s;
    v18 = strlen(s);
    v17 = p_src;
    v16 = (__int8 *)v18;
  }
  v36 = v17;
  v45 = 5;
  v46 = v17;
  v47 = v16;
  v35 = v16;
  p_src = (char *)&v48;
  if ( !(unsigned __int8)sub_22296D0(v17, v16, 0) )
  {
    sub_222A8E0(&dest, v36, v35);
    LOWORD(v48) = 6;
    if ( (unsigned __int8)sub_22296D0(dest, v41.m128_u64[0], 0) )
    {
LABEL_44:
      p_src = (char *)&v48;
      v49 = &v51;
      if ( dest == &v41.m128_u16[4] )
      {
        v51 = _mm_load_si128((const __m128i *)&v41.m128_u16[4]);
      }
      else
      {
        v49 = dest;
        v51.m128i_i64[0] = v41.m128_i64[1];
      }
      v25 = v41.m128_u64[0];
      v41.m128_i8[8] = 0;
      v41.m128_u64[0] = 0;
      v50 = v25;
      dest = &v41.m128_u16[4];
      v35 = &v41.m128_i8[8];
      sub_222B2A0(&v45);
      sub_2229580(&v45, p_src);
      sub_222B2A0(p_src);
      if ( dest != v35 )
        operator delete(dest);
      goto LABEL_19;
    }
    p_src = (char *)&src;
    sub_222A8E0(&src, dest, v41.m128_u64[0]);
    v26 = &src;
    v27 = dest;
    if ( src == v44 )
    {
      v33 = n;
      if ( n )
      {
        if ( n == 1 )
        {
          *(_BYTE *)dest = v44[0];
          v33 = n;
          v27 = dest;
        }
        else
        {
          memcpy(dest, src, n);
          v33 = n;
          v27 = dest;
          v26 = (void **)p_src;
        }
      }
      v41.m128_u64[0] = v33;
      v27[v33] = 0;
      v27 = src;
      goto LABEL_53;
    }
    if ( dest == &v41.m128_u16[4] )
    {
      p_src = (char *)v44[0];
      dest = src;
      v41 = _mm_loadh_ps((const double *)&p_src);
    }
    else
    {
      p_src = (char *)v44[0];
      v28 = v41.m128_u64[1];
      dest = src;
      v41 = _mm_loadh_ps((const double *)&p_src);
      if ( v27 )
      {
        src = v27;
        v44[0] = v28;
        goto LABEL_53;
      }
    }
    v27 = v44;
    src = v44;
LABEL_53:
    n = 0;
    *v27 = 0;
    if ( src != v26 + 2 )
      operator delete(src);
    goto LABEL_44;
  }
LABEL_19:
  sub_222AB70(ptr, "source", 6);
  sub_222CAC0(ptr, &v45);
  sub_2229BF0(ptr);
  sub_222B2A0(&v45);
  v48 = a1;
  v49 = ptr;
  sub_222AB70(ptr, "includes", 8);
  sub_22297F0(ptr);
  sub_1377320(p_src);
  sub_2229960(ptr);
  sub_2229BF0(ptr);
  sub_2229B60(ptr);
  if ( v55 == *((_BYTE **)&v54 + 1) )
    sub_227BF10(&v52, "\n", 1);
  else
    *v55++ = 10;
  v19 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v19 + 8) == 1 )
  {
    sub_227D5A0(p_src, *(_QWORD *)(a1 + 16));
    if ( ((unsigned __int8)v49 & 1) == 0 )
      sub_227BF10(*(_QWORD *)(a1 + 16), v37, v38);
    sub_10DFEF0((__int64 *)p_src);
  }
  else
  {
    sub_227BF10(v19, v37, v38);
  }
  if ( ptr[0] != &v60 )
    free(ptr[0]);
  v52 = &off_2BEBE68;
  sub_227B7A0(&v52);
  if ( v37 != v39 )
    operator delete(v37);
  if ( s != v68 )
    free(s);
}
