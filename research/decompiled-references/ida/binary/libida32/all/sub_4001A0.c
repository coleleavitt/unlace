__int64 __fastcall sub_4001A0(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int64 a5)
{
  __int64 v8; // rdi
  char *v9; // rsi
  size_t v10; // r8
  char *v11; // rdi
  unsigned int v12; // r15d
  char *v14; // rax
  void *idati; // rax
  _BYTE *v16; // r8
  char *v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r14
  char *v20; // rbx
  void *v21; // rdi
  void *v22; // rdi
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // r9
  int v26; // eax
  __m128 v27; // xmm4
  int v28; // r10d
  __m128 v29; // xmm0
  unsigned __int64 v30; // r13
  void *v31; // rdx
  __m128i v32; // xmm1
  unsigned __int64 v33; // xmm4_8
  __int64 v34; // rbx
  size_t v35; // rax
  __int64 v36; // rbx
  size_t v37; // r14
  size_t v38; // r15
  size_t v39; // rdx
  __int64 v40; // rsi
  void *v41; // rax
  __int64 v42; // rdx
  __m128i v43; // xmm0
  __int64 v44; // r15
  __int64 v45; // r9
  __int64 v46; // rax
  size_t v47; // [rsp+0h] [rbp-120h]
  __int64 v48; // [rsp+8h] [rbp-118h]
  unsigned int v49; // [rsp+8h] [rbp-118h]
  __int64 v50; // [rsp+8h] [rbp-118h]
  char *n; // [rsp+10h] [rbp-110h]
  size_t na; // [rsp+10h] [rbp-110h]
  __int64 v54; // [rsp+18h] [rbp-108h]
  __int64 v55; // [rsp+20h] [rbp-100h] BYREF
  unsigned __int64 v56; // [rsp+28h] [rbp-F8h] BYREF
  char *s1; // [rsp+30h] [rbp-F0h] BYREF
  __int128 v58; // [rsp+38h] [rbp-E8h]
  void *ptr; // [rsp+50h] [rbp-D0h] BYREF
  __m128i v60; // [rsp+58h] [rbp-C8h] BYREF
  void *v61; // [rsp+70h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+78h] [rbp-A8h]
  void *v63; // [rsp+88h] [rbp-98h]
  __int128 v64; // [rsp+90h] [rbp-90h]
  int v65; // [rsp+A0h] [rbp-80h]
  char v66; // [rsp+A4h] [rbp-7Ch]
  __m128i v67; // [rsp+B0h] [rbp-70h] BYREF
  __m128i v68; // [rsp+C0h] [rbp-60h]
  char s[24]; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v70; // [rsp+E8h] [rbp-38h]

  v70 = __readfsqword(0x28u);
  v55 = 0;
  copy_tinfo_t(&v55);
  v8 = v55;
  s1 = nullptr;
  v58 = 0;
  if ( (v55 & 0x100) != 0 )
  {
    get_tinfo_pdata(&s1, v55, 0);
    v8 = v55;
  }
  v9 = (_BYTE *)(&dword_0 + 2);
  if ( (get_tinfo_property(v8, 2) & 0x3F) == 0x2D )
    goto LABEL_33;
  v10 = v58;
  v11 = s1;
  if ( !(_QWORD)v58 )
  {
    if ( *((_QWORD *)&v58 + 1) > 6u )
    {
      *(_QWORD *)&v58 = 7;
      s1[6] = 0;
      goto LABEL_12;
    }
    v44 = 7;
    v45 = 6;
    goto LABEL_59;
  }
  v47 = v58 - 1;
  if ( (unsigned __int64)(v58 - 1) > 5 )
  {
    v12 = 0;
    v48 = v58;
    n = s1;
    v11 = s1;
    if ( !strncmp(s1, "MACRO_", 6u) )
      goto LABEL_7;
    v45 = v48 + 5;
    v44 = v48 + 6;
    if ( *((_QWORD *)&v58 + 1) >= (unsigned __int64)(v48 + 6) )
    {
      *(_QWORD *)&v58 = v48 + 6;
      n[v48 + 5] = 0;
      v10 = v47;
      goto LABEL_61;
    }
    v10 = v47;
    goto LABEL_59;
  }
  v45 = v58 + 5;
  v44 = v58 + 6;
  v10 = v58 - 1;
  if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 6) )
  {
LABEL_59:
    v9 = v11;
    v50 = v45;
    na = v10;
    s1 = (char *)qvector_reserve(&s1, v11, v44, 1);
    v45 = v50;
    v11 = s1;
    v10 = na;
  }
  *(_QWORD *)&v58 = v44;
  v11[v45] = 0;
  if ( v10 )
  {
LABEL_61:
    v9 = s1;
    memmove(s1 + 6, s1, v10);
  }
LABEL_12:
  v14 = s1;
  v12 = 0;
  *(_DWORD *)s1 = 1380139341;
  *((_WORD *)v14 + 2) = 24399;
  if ( !s1 )
    goto LABEL_9;
  idati = *(void **)(a1 + 8);
  *(_QWORD *)&v62 = s1;
  WORD4(v62) = 256;
  if ( !idati )
    idati = (void *)get_idati(256, v9);
  v61 = idati;
  v12 = create_tinfo(&v55, 61, 61, &v61);
  if ( !(_BYTE)v12 )
    goto LABEL_32;
  if ( (get_tinfo_property(v55, 2) & 0x3F) != 0x2D )
  {
    v11 = s1;
    v12 = 0;
    goto LABEL_7;
  }
LABEL_33:
  v61 = nullptr;
  v63 = nullptr;
  v65 = 0;
  v66 = 0x80;
  v62 = 0;
  v64 = 0;
  get_tinfo_details(v55, 45, &v61);
  if ( (v66 & 7) != 0 )
    v49 = 1 << ((v66 & 7) - 1);
  else
    v49 = (unsigned __int8)getinf(61);
  v60 = 0;
  v56 = a5;
  ptr = nullptr;
  v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&ptr, (__m128i)(unsigned __int64)&v56);
  v68 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFDAD8), (__m128i)(unsigned __int64)sub_3FF320);
  sub_3FFBA0(a1, &v55, a5, v49, a4, (__int64)&v67, 1);
  if ( v68.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v68.m128i_i64[0])(&v67, &v67, 3);
  if ( v60.m128i_i64[0] <= 1uLL )
  {
    v16 = ptr;
    v12 = 0;
  }
  else
  {
    if ( (v66 & 7) != 0 )
      v23 = 1 << ((v66 & 7) - 1);
    else
      v23 = (unsigned __int8)getinf(61);
    v24 = 8 * v23;
    if ( v24 <= 63 )
      a5 &= ~(-1LL << v24);
    v16 = ptr;
    if ( v56 )
    {
      sub_400110(a5);
      v26 = sub_400110(a5 & ~v25);
      if ( v28 >= 2 * v26 )
      {
        v12 = 0;
      }
      else
      {
        v12 = 1;
        if ( a2 )
        {
          v29 = (__m128)_mm_loadu_si128(&v60);
          v30 = 2;
          v31 = *(void **)a2;
          v32 = _mm_loadu_si128((const __m128i *)(a2 + 8));
          v33 = _mm_movehl_ps(v27, v29).m128_u64[0];
          v34 = v29.m128_u64[0];
          *(_QWORD *)a2 = v16;
          ptr = v31;
          *(__m128 *)(a2 + 8) = v29;
          v60 = v32;
          if ( v29.m128_u64[0] )
          {
            v30 = v29.m128_u64[0] + 1;
            v34 = v29.m128_u64[0] - 1;
          }
          if ( v33 < v30 )
          {
            v46 = qvector_reserve(a2, v16, v30, 1);
            *(_QWORD *)a2 = v46;
            v16 = (_BYTE *)v46;
          }
          *(_QWORD *)(a2 + 8) = v30;
          v16[v34] = 124;
          *(_BYTE *)(*(_QWORD *)a2 + v34 + 1) = 0;
          format_c_number(s, 21, v56, 0, v49, 129);
          v35 = strlen(s);
          v36 = *(_QWORD *)(a2 + 8);
          v37 = v35;
          v38 = v35;
          if ( v36 )
          {
            --v36;
            v38 = v35 + v36;
          }
          v39 = v38 + 1;
          v40 = *(_QWORD *)a2;
          if ( *(_QWORD *)(a2 + 16) < v38 + 1 )
          {
            v40 = qvector_reserve(a2, v40, v39, 1);
            v39 = v38 + 1;
            *(_QWORD *)a2 = v40;
          }
          *(_QWORD *)(a2 + 8) = v39;
          *(_BYTE *)(v40 + v38) = 0;
          v12 = 1;
          memmove((void *)(*(_QWORD *)a2 + v36), s, v37);
          v16 = ptr;
        }
      }
    }
    else
    {
      v12 = 1;
      if ( a2 )
      {
        v41 = *(void **)a2;
        v42 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = ptr;
        v43 = _mm_loadu_si128(&v60);
        ptr = v41;
        v16 = v41;
        v60.m128i_i64[1] = v42;
        *(__m128i *)(a2 + 8) = v43;
      }
    }
  }
  if ( v16 )
  {
    v60.m128i_i64[0] = 0;
    qfree(v16);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  v17 = (char *)v61;
  if ( v61 )
  {
    v18 = v62;
    if ( (_QWORD)v62 )
    {
      v54 = 0;
      v19 = 0;
      do
      {
        v20 = &v17[v19];
        v21 = *(void **)&v17[v19 + 24];
        if ( v21 )
        {
          *((_QWORD *)v20 + 4) = 0;
          qfree(v21);
        }
        v22 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *((_QWORD *)v20 + 1) = 0;
          qfree(v22);
        }
        ++v54;
        v19 += 56;
        v17 = (char *)v61;
      }
      while ( v18 != v54 );
    }
    *(_QWORD *)&v62 = 0;
    qfree(v17);
  }
LABEL_32:
  v11 = s1;
LABEL_7:
  if ( v11 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v11);
  }
LABEL_9:
  clear_tinfo_t(&v55);
  return v12;
}

