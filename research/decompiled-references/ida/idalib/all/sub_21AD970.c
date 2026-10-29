void **__fastcall sub_21AD970(void **a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // eax
  void *v5; // rdx
  __m128i *v6; // rbx
  __m128i *v7; // r14
  const void *v8; // rbp
  void *v9; // r13
  void **v10; // r12
  void **v11; // r13
  _QWORD *v12; // rbp
  char v13; // dl
  void *v14; // rbx
  const void *v15; // rbp
  _QWORD *v16; // r13
  unsigned int v17; // eax
  __m128i *v18; // r12
  unsigned int v19; // eax
  size_t v20; // rdx
  char *v21; // rsi
  size_t v22; // rcx
  int v23; // eax
  _BYTE *v24; // r14
  unsigned __int64 v25; // rbx
  bool v26; // zf
  __m128i *v27; // rbp
  __m128i *v28; // rbx
  size_t v29; // rbp
  __m128i *v30; // r12
  __int64 v31; // r9
  __int64 v32; // rbx
  __int64 *v33; // r13
  __int64 *v34; // r14
  __m128i *v35; // rbx
  __int64 v36; // rsi
  _QWORD **v37; // r12
  __int64 *v38; // rbp
  _QWORD **v39; // rbx
  _QWORD **v40; // rbx
  __int64 v41; // r12
  _QWORD **v42; // rbp
  __m128i v44; // xmm0
  char v45; // dl
  __m128i *v46; // rcx
  _QWORD **v47; // rbx
  __int64 *v48; // r12
  _QWORD **v49; // rbp
  char *v50; // rsi
  __m128i si128; // xmm0
  __int64 v52; // rdx
  __m128i v53; // [rsp+0h] [rbp-268h] BYREF
  __m128i *v54; // [rsp+18h] [rbp-250h]
  char **v55; // [rsp+20h] [rbp-248h]
  void **v56; // [rsp+28h] [rbp-240h]
  void *v57[2]; // [rsp+30h] [rbp-238h] BYREF
  __int64 *p_ptr; // [rsp+40h] [rbp-228h]
  __int64 v59; // [rsp+48h] [rbp-220h]
  size_t *v60; // [rsp+50h] [rbp-218h]
  _BYTE *v61; // [rsp+58h] [rbp-210h]
  unsigned __int64 v62; // [rsp+60h] [rbp-208h]
  __m128i *v63; // [rsp+68h] [rbp-200h]
  unsigned __int64 v64; // [rsp+70h] [rbp-1F8h]
  void **v65; // [rsp+78h] [rbp-1F0h]
  void **v66; // [rsp+80h] [rbp-1E8h]
  __int64 v67; // [rsp+88h] [rbp-1E0h]
  _QWORD *v68; // [rsp+90h] [rbp-1D8h]
  __int64 v69; // [rsp+98h] [rbp-1D0h]
  void *s2[2]; // [rsp+A0h] [rbp-1C8h] BYREF
  size_t n[2]; // [rsp+B0h] [rbp-1B8h] BYREF
  void *v72; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v73; // [rsp+C8h] [rbp-1A0h]
  __m128i v74; // [rsp+D0h] [rbp-198h] BYREF
  void *v75[2]; // [rsp+E0h] [rbp-188h] BYREF
  __m128i v76; // [rsp+F0h] [rbp-178h] BYREF
  void *v77; // [rsp+100h] [rbp-168h] BYREF
  __int64 v78; // [rsp+108h] [rbp-160h]
  char v79; // [rsp+110h] [rbp-158h] BYREF
  int v80; // [rsp+148h] [rbp-120h] BYREF
  void *v81; // [rsp+150h] [rbp-118h]
  int *v82; // [rsp+158h] [rbp-110h]
  int *v83; // [rsp+160h] [rbp-108h]
  __int64 v84; // [rsp+168h] [rbp-100h]
  void *ptr; // [rsp+170h] [rbp-F8h] BYREF
  __int64 v86; // [rsp+178h] [rbp-F0h]
  int v87; // [rsp+208h] [rbp-60h]
  void *v88; // [rsp+210h] [rbp-58h]
  __int64 *v89; // [rsp+218h] [rbp-50h]
  __int64 *v90; // [rsp+220h] [rbp-48h]
  __int64 v91; // [rsp+228h] [rbp-40h]

  v66 = a1;
  v77 = &v79;
  v78 = 0x300000000LL;
  v68 = a2;
  v65 = &v77;
  v80 = 0;
  v81 = nullptr;
  v82 = &v80;
  v83 = &v80;
  v84 = 0;
  v4 = sub_21A2A40(a3);
  v69 = v4;
  if ( !v4 )
    goto LABEL_45;
  v67 = 0;
  p_ptr = (__int64 *)&ptr;
  v56 = &v72;
  v54 = &v74;
  while ( 1 )
  {
LABEL_3:
    s2[0] = (void *)sub_21A2A80(a3);
    s2[1] = v5;
    if ( v84 )
    {
      sub_102B060((__int64)(v65 + 8), (__int64)s2);
      if ( !v13 )
        goto LABEL_80;
    }
    else
    {
      v6 = (__m128i *)v77;
      v53.m128i_i64[0] = (unsigned int)v78;
      v7 = (__m128i *)((char *)v77 + 16 * (unsigned int)v78);
      if ( v77 == v7 )
      {
        if ( v53.m128i_i64[0] > 2uLL )
          goto LABEL_13;
      }
      else
      {
        v8 = s2[0];
        v9 = s2[1];
        v10 = (void **)v77;
        while ( v10[1] != v9 || v9 && memcmp(*v10, v8, (size_t)v9) )
        {
          v10 += 2;
          if ( v7 == (__m128i *)v10 )
            goto LABEL_10;
        }
        if ( v7 != (__m128i *)v10 )
        {
LABEL_80:
          v50 = "producers section does not have unique fields";
          goto LABEL_76;
        }
LABEL_10:
        if ( v53.m128i_i64[0] > 2uLL )
        {
          v11 = v65;
          v12 = v65 + 9;
          ptr = v65 + 8;
          do
            sub_21AD8A0(v11 + 8, v12, (__int64)v6++);
          while ( v7 != v6 );
LABEL_13:
          LODWORD(v78) = 0;
          sub_102B060((__int64)(v65 + 8), (__int64)s2);
          goto LABEL_15;
        }
      }
      si128 = _mm_load_si128((const __m128i *)s2);
      v52 = v53.m128i_i64[0] + 1;
      if ( v53.m128i_i64[0] + 1 > (unsigned __int64)HIDWORD(v78) )
      {
        v53 = si128;
        sub_2237220(v65, v65 + 2, v52, 16);
        si128 = _mm_load_si128(&v53);
        v7 = (__m128i *)((char *)v77 + 16 * (unsigned int)v78);
      }
      *v7 = si128;
      LODWORD(v78) = v78 + 1;
    }
LABEL_15:
    v14 = s2[1];
    v15 = s2[0];
    if ( s2[1] == byte_8 )
    {
      if ( *(_QWORD *)s2[0] == 0x65676175676E616CLL )
      {
        v16 = v68 + 26;
        goto LABEL_18;
      }
      if ( j__strlen("processed-by") != 8 )
      {
        if ( j__strlen("sdk") != 8 )
        {
LABEL_75:
          v50 = "producers section field is not named one of language, processed-by, or sdk";
LABEL_76:
          sub_21A2C10(p_ptr, v50);
          *v66 = ptr;
          goto LABEL_47;
        }
        goto LABEL_74;
      }
    }
    else
    {
      if ( v14 != (void *)j__strlen("processed-by") )
      {
        if ( v14 != (void *)j__strlen("sdk") )
          goto LABEL_75;
        if ( !v14 )
          goto LABEL_83;
        goto LABEL_74;
      }
      if ( !v14 )
        goto LABEL_89;
    }
    if ( memcmp(v15, "processed-by", (size_t)v14) )
    {
      if ( v14 != (void *)j__strlen("sdk") )
        goto LABEL_75;
LABEL_74:
      if ( memcmp(v15, "sdk", (size_t)v14) )
        goto LABEL_75;
LABEL_83:
      v16 = v68 + 32;
      goto LABEL_18;
    }
LABEL_89:
    v16 = v68 + 29;
LABEL_18:
    v17 = sub_21A2A40(a3);
    v87 = 0;
    v88 = nullptr;
    v59 = v17;
    ptr = p_ptr + 2;
    v86 = 0x800000000LL;
    v89 = p_ptr + 19;
    v90 = p_ptr + 19;
    v91 = 0;
    if ( v17 )
      break;
LABEL_87:
    if ( ++v67 == v69 )
      goto LABEL_45;
  }
  v53.m128i_i64[0] = 0;
  v18 = (__m128i *)v75;
  v55 = (char **)(a3 + 8);
  v60 = n;
  while ( 1 )
  {
LABEL_20:
    v19 = sub_21A29A0(v55, *(char **)(a3 + 16));
    v20 = *(_QWORD *)(a3 + 8);
    v21 = *(char **)(a3 + 16);
    v22 = v20 + v19;
    if ( v22 > (unsigned __int64)v21
      || (*(_QWORD *)(a3 + 8) = v22,
          n[0] = v20,
          n[1] = v19,
          v23 = sub_21A29A0(v55, v21),
          v24 = *(_BYTE **)(a3 + 8),
          v25 = (unsigned __int64)&v24[v23],
          v25 > *(_QWORD *)(a3 + 16)) )
    {
      sub_2221C70("EOF while reading string", 1);
    }
    v26 = v91 == 0;
    *(_QWORD *)(a3 + 8) = v25;
    if ( v26 )
    {
      v64 = (unsigned int)v86;
      v27 = (__m128i *)((char *)ptr + 16 * (unsigned int)v86);
      if ( ptr == v27 )
      {
        if ( v64 > 7 )
        {
LABEL_33:
          LODWORD(v86) = 0;
          sub_102B060((__int64)(p_ptr + 18), (__int64)v60);
          goto LABEL_34;
        }
      }
      else
      {
        v62 = (unsigned __int64)ptr;
        v61 = &v24[v23];
        v28 = (__m128i *)((char *)ptr + 16 * (unsigned int)v86);
        v57[0] = (void *)n[0];
        v29 = n[1];
        v63 = v18;
        v30 = (__m128i *)ptr;
        while ( v30->m128i_i64[1] != v29 || v29 && memcmp((const void *)v30->m128i_i64[0], v57[0], v29) )
        {
          if ( v28 == ++v30 )
          {
            v27 = v28;
            v31 = v62;
            v25 = (unsigned __int64)v61;
            v18 = v63;
            if ( v64 <= 7 )
              goto LABEL_53;
LABEL_30:
            v57[0] = v16;
            v61 = v24;
            v62 = v25;
            v32 = v31;
            v75[0] = p_ptr + 18;
            v33 = p_ptr + 19;
            v34 = p_ptr;
            do
            {
              sub_21AD8A0(v34 + 18, v33, v32);
              v32 += 16;
            }
            while ( v27 != (__m128i *)v32 );
            v16 = v57[0];
            v24 = v61;
            v25 = v62;
            goto LABEL_33;
          }
        }
        v27 = v28;
        v46 = v30;
        v31 = v62;
        v25 = (unsigned __int64)v61;
        v18 = v63;
        if ( v27 != v46 )
          goto LABEL_64;
        if ( v64 > 7 )
          goto LABEL_30;
      }
LABEL_53:
      v44 = _mm_load_si128((const __m128i *)n);
      if ( v64 + 1 > HIDWORD(v86) )
      {
        *(__m128i *)v57 = v44;
        sub_2237220(p_ptr, p_ptr + 2, v64 + 1, 16);
        v44 = _mm_load_si128((const __m128i *)v57);
        v27 = (__m128i *)((char *)ptr + 16 * (unsigned int)v86);
      }
      *v27 = v44;
      LODWORD(v86) = v86 + 1;
    }
    else
    {
      sub_102B060((__int64)(p_ptr + 18), (__int64)v60);
      if ( !v45 )
      {
LABEL_64:
        sub_21A2C10((__int64 *)v75, "producers section contains repeated producer");
        v47 = (_QWORD **)v88;
        *v66 = v75[0];
        v48 = p_ptr + 18;
        if ( v47 )
        {
          do
          {
            sub_9ED9D0((__int64)v48, v47[3]);
            v49 = (_QWORD **)v47[2];
            operator delete(v47);
            v47 = v49;
          }
          while ( v49 );
        }
        if ( ptr != p_ptr + 2 )
          free(ptr);
        goto LABEL_47;
      }
    }
LABEL_34:
    v75[0] = &v18[1];
    sub_21A31E0(v18, v24, v25);
    v35 = v54;
    v72 = v54;
    sub_21A31E0(v56, (_BYTE *)n[0], n[0] + n[1]);
    v36 = v16[1];
    if ( v36 == v16[2] )
      break;
    *(_QWORD *)v36 = v36 + 16;
    if ( v72 == v35 )
    {
      *(__m128i *)(v36 + 16) = _mm_load_si128(&v74);
    }
    else
    {
      *(_QWORD *)v36 = v72;
      *(_QWORD *)(v36 + 16) = v74.m128i_i64[0];
    }
    *(_QWORD *)(v36 + 8) = v73;
    v73 = 0;
    v72 = v54;
    *(_QWORD *)(v36 + 32) = v36 + 48;
    v74.m128i_i8[0] = 0;
    if ( v75[0] == &v18[1] )
    {
      *(__m128i *)(v36 + 48) = _mm_load_si128(&v76);
    }
    else
    {
      *(void **)(v36 + 32) = v75[0];
      *(_QWORD *)(v36 + 48) = v76.m128i_i64[0];
    }
    *(void **)(v36 + 40) = v75[1];
    v16[1] += 64LL;
LABEL_40:
    if ( ++v53.m128i_i64[0] == v59 )
      goto LABEL_41;
  }
  sub_130B4F0((__int64)v16, (const __m128i *)v36, (__m128i *)v56, v18);
  if ( v72 != v54 )
    operator delete(v72);
  if ( v75[0] == &v18[1] )
    goto LABEL_40;
  operator delete(v75[0]);
  if ( v59 != ++v53.m128i_i64[0] )
    goto LABEL_20;
LABEL_41:
  v37 = (_QWORD **)v88;
  v38 = p_ptr + 18;
  if ( v88 )
  {
    do
    {
      sub_9ED9D0((__int64)v38, v37[3]);
      v39 = (_QWORD **)v37[2];
      operator delete(v37);
      v37 = v39;
    }
    while ( v39 );
  }
  if ( ptr == p_ptr + 2 )
    goto LABEL_87;
  free(ptr);
  if ( v69 != ++v67 )
    goto LABEL_3;
LABEL_45:
  if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 16) )
  {
    *v66 = nullptr;
  }
  else
  {
    sub_21A2C10((__int64 *)&ptr, "producers section ended prematurely");
    *v66 = ptr;
  }
LABEL_47:
  v40 = (_QWORD **)v81;
  v41 = (__int64)(v65 + 8);
  if ( v81 )
  {
    do
    {
      sub_9ED9D0(v41, v40[3]);
      v42 = (_QWORD **)v40[2];
      operator delete(v40);
      v40 = v42;
    }
    while ( v42 );
  }
  if ( v77 != v65 + 2 )
    free(v77);
  return v66;
}
