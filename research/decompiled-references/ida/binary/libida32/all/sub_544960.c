__int64 __fastcall sub_544960(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 tinfo_size; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  char v9; // al
  const char *v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE *v17; // rsi
  size_t v18; // rax
  char *v19; // r8
  size_t v20; // r9
  char *v21; // r10
  void *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  _BYTE *v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // r15
  _BYTE *v29; // rsi
  char *v30; // r8
  __int64 v31; // r15
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  _BYTE *v36; // rsi
  __int64 v37; // r15
  size_t v38; // rax
  char *v39; // r8
  size_t v40; // r9
  size_t v41; // r10
  _BYTE *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r15
  unsigned __int64 v45; // rdx
  _BYTE *v46; // rsi
  unsigned __int64 v47; // rdx
  __int64 v48; // r15
  _BYTE *v49; // rsi
  __int64 v50; // r15
  unsigned __int64 v51; // rdx
  _BYTE *v52; // rsi
  unsigned __int64 v53; // rdx
  __int64 v54; // r15
  _BYTE *v55; // rsi
  unsigned __int64 v56; // rdx
  __int64 v57; // r15
  _BYTE *v58; // rsi
  __int64 v59; // rbp
  unsigned __int64 v60; // r14
  _BYTE *v61; // rsi
  unsigned __int64 v62; // r14
  __int64 v63; // rbp
  _BYTE *v64; // rsi
  __m128i v65; // xmm0
  void *v66; // rax
  char *v67; // rdi
  _BYTE *v69; // rax
  __int64 v70; // rbp
  unsigned __int64 v71; // r14
  _BYTE *v72; // rsi
  bool v73; // zf
  char *src; // [rsp+0h] [rbp-A8h]
  char *srca; // [rsp+0h] [rbp-A8h]
  void *srcn; // [rsp+0h] [rbp-A8h]
  void *srcm; // [rsp+0h] [rbp-A8h]
  void *srcl; // [rsp+0h] [rbp-A8h]
  void *srch; // [rsp+0h] [rbp-A8h]
  void *srcj; // [rsp+0h] [rbp-A8h]
  void *srcg; // [rsp+0h] [rbp-A8h]
  void *srck; // [rsp+0h] [rbp-A8h]
  void *srcd; // [rsp+0h] [rbp-A8h]
  void *srci; // [rsp+0h] [rbp-A8h]
  void *srcb; // [rsp+0h] [rbp-A8h]
  void *srcc; // [rsp+0h] [rbp-A8h]
  void *srce; // [rsp+0h] [rbp-A8h]
  void *srcf; // [rsp+0h] [rbp-A8h]
  char *v89; // [rsp+8h] [rbp-A0h]
  char *v90; // [rsp+8h] [rbp-A0h]
  char *v91; // [rsp+8h] [rbp-A0h]
  char *v92; // [rsp+8h] [rbp-A0h]
  __int64 v93; // [rsp+8h] [rbp-A0h]
  __int64 v94; // [rsp+8h] [rbp-A0h]
  char *v95; // [rsp+10h] [rbp-98h]
  size_t v96; // [rsp+10h] [rbp-98h]
  size_t v97; // [rsp+18h] [rbp-90h]
  size_t v98; // [rsp+18h] [rbp-90h]
  __int64 tinfo_property; // [rsp+28h] [rbp-80h] BYREF
  void *v100; // [rsp+30h] [rbp-78h] BYREF
  __m128i v101; // [rsp+38h] [rbp-70h] BYREF
  char *s; // [rsp+50h] [rbp-58h] BYREF
  __int128 v103; // [rsp+58h] [rbp-50h]
  unsigned __int64 v104; // [rsp+68h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  v101 = 0;
  v100 = nullptr;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a3 + 64), 0);
  if ( tinfo_size == -1 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v69 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
    *(_QWORD *)a1 = v69;
    *(_QWORD *)(a1 + 8) = 2;
    *v69 = 63;
    *(_BYTE *)(*(_QWORD *)a1 + 1LL) = 0;
    goto LABEL_85;
  }
  tinfo_property = get_tinfo_property(*(_QWORD *)(a3 + 64), 289);
  v7 = tinfo_property;
  v8 = get_tinfo_size(0, tinfo_property, 0);
  s = nullptr;
  v103 = 0;
  if ( (tinfo_property & 0x100) != 0 )
  {
    if ( get_tinfo_pdata(&s, tinfo_property, 0) )
    {
      if ( (_QWORD)v103 )
      {
        v30 = s;
        if ( *s )
        {
          v31 = v101.m128i_i64[0];
          v32 = 2;
          if ( v101.m128i_i64[0] )
          {
            v32 = v101.m128i_i64[0] + 1;
            v31 = v101.m128i_i64[0] - 1;
          }
          v33 = v100;
          if ( v101.m128i_i64[1] < v32 )
          {
            v90 = s;
            srcg = (void *)v32;
            v100 = (void *)qvector_reserve(&v100, v100, v32, 1);
            v30 = v90;
            v33 = v100;
            v32 = (unsigned __int64)srcg;
          }
          v101.m128i_i64[0] = v32;
          v34 = 2;
          v33[v31] = 1;
          *((_BYTE *)v100 + v31 + 1) = 0;
          v35 = v101.m128i_i64[0];
          if ( v101.m128i_i64[0] )
          {
            v34 = v101.m128i_i64[0] + 1;
            v35 = v101.m128i_i64[0] - 1;
          }
          v36 = v100;
          if ( v101.m128i_i64[1] < v34 )
          {
            v89 = v30;
            srch = (void *)v34;
            v100 = (void *)qvector_reserve(&v100, v100, v34, 1);
            v30 = v89;
            v36 = v100;
            v34 = (unsigned __int64)srch;
          }
          v101.m128i_i64[0] = v34;
          v36[v35] = 23;
          *((_BYTE *)v100 + v35 + 1) = 0;
          if ( v30 )
          {
            v37 = v101.m128i_i64[0];
            srca = v30;
            v38 = strlen(v30);
            v39 = srca;
            v40 = v38;
            v41 = v38;
            if ( v37 )
            {
              --v37;
              v41 = v38 + v37;
            }
            v42 = v100;
            v43 = v41 + 1;
            if ( v101.m128i_i64[1] < v41 + 1 )
            {
              v98 = v38;
              v96 = v41;
              v92 = srca;
              srci = (void *)(v41 + 1);
              v100 = (void *)qvector_reserve(&v100, v100, v43, 1);
              v40 = v98;
              v42 = v100;
              v41 = v96;
              v39 = v92;
              v43 = (__int64)srci;
            }
            v101.m128i_i64[0] = v43;
            v42[v41] = 0;
            memmove((char *)v100 + v37, v39, v40);
          }
          v44 = v101.m128i_i64[0];
          v45 = 2;
          if ( v101.m128i_i64[0] )
          {
            v45 = v101.m128i_i64[0] + 1;
            v44 = v101.m128i_i64[0] - 1;
          }
          v46 = v100;
          if ( v101.m128i_i64[1] < v45 )
          {
            srcj = (void *)v45;
            v100 = (void *)qvector_reserve(&v100, v100, v45, 1);
            v45 = (unsigned __int64)srcj;
            v46 = v100;
          }
          v101.m128i_i64[0] = v45;
          v47 = 2;
          v46[v44] = 2;
          *((_BYTE *)v100 + v44 + 1) = 0;
          v48 = v101.m128i_i64[0];
          if ( v101.m128i_i64[0] )
          {
            v47 = v101.m128i_i64[0] + 1;
            v48 = v101.m128i_i64[0] - 1;
          }
          v49 = v100;
          if ( v101.m128i_i64[1] < v47 )
          {
            srck = (void *)v47;
            v100 = (void *)qvector_reserve(&v100, v100, v47, 1);
            v47 = (unsigned __int64)srck;
            v49 = v100;
          }
          v101.m128i_i64[0] = v47;
          v49[v48] = 23;
          *((_BYTE *)v100 + v48 + 1) = 0;
        }
      }
      goto LABEL_60;
    }
    v7 = tinfo_property;
  }
  v9 = get_tinfo_property(v7, 2);
  if ( (v9 & 0x3E) != 0 && (v9 & 0xFu) <= 8
    || (get_tinfo_property(tinfo_property, 2) & 0xF) == 0xA
    || (get_tinfo_property(tinfo_property, 2) & 0xF) == 0xE )
  {
    v10 = (const char *)sub_541940(a2, v8);
  }
  else if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 9 )
  {
    v10 = *(const char **)(*(_QWORD *)(a2 + 200) + 1024LL);
  }
  else if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 0x19 )
  {
    v10 = *(const char **)(*(_QWORD *)(a2 + 200) + 1032LL);
  }
  else if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 0x39 )
  {
    v10 = *(const char **)(*(_QWORD *)(a2 + 200) + 1040LL);
  }
  else
  {
    v73 = (get_tinfo_property(tinfo_property, 2) & 0x3F) == 41;
    v11 = *(_QWORD **)(a2 + 200);
    if ( !v73 )
      goto LABEL_9;
    if ( v11[110] == v8 )
    {
      v10 = (const char *)v11[130];
    }
    else if ( v8 == 8 )
    {
      v10 = (const char *)v11[129];
    }
    else
    {
      if ( v8 != 4 )
        goto LABEL_9;
      v10 = (const char *)v11[128];
    }
  }
  if ( !v10 || tinfo_size % v8 )
  {
    v11 = *(_QWORD **)(a2 + 200);
LABEL_9:
    v10 = (const char *)v11[123];
    v8 = 1;
  }
  if ( *v10 )
  {
    v12 = v101.m128i_i64[0];
    v13 = 2;
    if ( v101.m128i_i64[0] )
    {
      v13 = v101.m128i_i64[0] + 1;
      v12 = v101.m128i_i64[0] - 1;
    }
    v14 = v100;
    if ( v101.m128i_i64[1] < v13 )
    {
      v93 = v12;
      srcb = (void *)v13;
      v100 = (void *)qvector_reserve(&v100, v100, v13, 1);
      v12 = v93;
      v14 = v100;
      v13 = (unsigned __int64)srcb;
    }
    v101.m128i_i64[0] = v13;
    v15 = 2;
    v14[v12] = 1;
    *((_BYTE *)v100 + v12 + 1) = 0;
    v16 = v101.m128i_i64[0];
    if ( v101.m128i_i64[0] )
    {
      v15 = v101.m128i_i64[0] + 1;
      v16 = v101.m128i_i64[0] - 1;
    }
    v17 = v100;
    if ( v101.m128i_i64[1] < v15 )
    {
      v94 = v16;
      srcc = (void *)v15;
      v100 = (void *)qvector_reserve(&v100, v100, v15, 1);
      v16 = v94;
      v17 = v100;
      v15 = (unsigned __int64)srcc;
    }
    v101.m128i_i64[0] = v15;
    v17[v16] = 32;
    *((_BYTE *)v100 + v16 + 1) = 0;
    if ( v10 )
    {
      src = (char *)v101.m128i_i64[0];
      v18 = strlen(v10);
      v19 = src;
      v20 = v18;
      v21 = (char *)v18;
      if ( src )
      {
        v19 = src - 1;
        v21 = &src[v18 - 1];
      }
      v22 = v100;
      v23 = (__int64)(v21 + 1);
      if ( v101.m128i_i64[1] < (unsigned __int64)(v21 + 1) )
      {
        v97 = v18;
        v95 = v21;
        v91 = v19;
        srcd = v21 + 1;
        v100 = (void *)qvector_reserve(&v100, v100, v23, 1);
        v20 = v97;
        v22 = v100;
        v21 = v95;
        v19 = v91;
        v23 = (__int64)srcd;
      }
      v101.m128i_i64[0] = v23;
      v21[(_QWORD)v22] = 0;
      memmove((char *)v100 + (_QWORD)v19, v10, v20);
    }
    v24 = v101.m128i_i64[0];
    v25 = 2;
    if ( v101.m128i_i64[0] )
    {
      v25 = v101.m128i_i64[0] + 1;
      v24 = v101.m128i_i64[0] - 1;
    }
    v26 = v100;
    if ( v101.m128i_i64[1] < v25 )
    {
      srce = (void *)v25;
      v100 = (void *)qvector_reserve(&v100, v100, v25, 1);
      v25 = (unsigned __int64)srce;
      v26 = v100;
    }
    v101.m128i_i64[0] = v25;
    v27 = 2;
    v26[v24] = 2;
    *((_BYTE *)v100 + v24 + 1) = 0;
    v28 = v101.m128i_i64[0];
    if ( v101.m128i_i64[0] )
    {
      v27 = v101.m128i_i64[0] + 1;
      v28 = v101.m128i_i64[0] - 1;
    }
    v29 = v100;
    if ( v101.m128i_i64[1] < v27 )
    {
      srcf = (void *)v27;
      v100 = (void *)qvector_reserve(&v100, v100, v27, 1);
      v27 = (unsigned __int64)srcf;
      v29 = v100;
    }
    v101.m128i_i64[0] = v27;
    v29[v28] = 32;
    *((_BYTE *)v100 + v28 + 1) = 0;
  }
LABEL_60:
  v50 = v101.m128i_i64[0];
  v51 = 2;
  if ( v101.m128i_i64[0] )
  {
    v51 = v101.m128i_i64[0] + 1;
    v50 = v101.m128i_i64[0] - 1;
  }
  v52 = v100;
  if ( v101.m128i_i64[1] < v51 )
  {
    srcl = (void *)v51;
    v100 = (void *)qvector_reserve(&v100, v100, v51, 1);
    v51 = (unsigned __int64)srcl;
    v52 = v100;
  }
  v101.m128i_i64[0] = v51;
  v53 = 2;
  v52[v50] = 32;
  *((_BYTE *)v100 + v50 + 1) = 0;
  v54 = v101.m128i_i64[0];
  if ( v101.m128i_i64[0] )
  {
    v53 = v101.m128i_i64[0] + 1;
    v54 = v101.m128i_i64[0] - 1;
  }
  v55 = v100;
  if ( v101.m128i_i64[1] < v53 )
  {
    srcm = (void *)v53;
    v100 = (void *)qvector_reserve(&v100, v100, v53, 1);
    v53 = (unsigned __int64)srcm;
    v55 = v100;
  }
  v101.m128i_i64[0] = v53;
  v56 = 2;
  v55[v54] = 1;
  *((_BYTE *)v100 + v54 + 1) = 0;
  v57 = v101.m128i_i64[0];
  if ( v101.m128i_i64[0] )
  {
    v56 = v101.m128i_i64[0] + 1;
    v57 = v101.m128i_i64[0] - 1;
  }
  v58 = v100;
  if ( v101.m128i_i64[1] < v56 )
  {
    srcn = (void *)v56;
    v100 = (void *)qvector_reserve(&v100, v100, v56, 1);
    v56 = (unsigned __int64)srcn;
    v58 = v100;
  }
  v101.m128i_i64[0] = v56;
  v58[v57] = 32;
  *((_BYTE *)v100 + v57 + 1) = 0;
  if ( v8 == tinfo_size )
  {
    v70 = v101.m128i_i64[0];
    v71 = 2;
    if ( v101.m128i_i64[0] )
    {
      v71 = v101.m128i_i64[0] + 1;
      v70 = v101.m128i_i64[0] - 1;
    }
    v72 = v100;
    if ( v101.m128i_i64[1] < v71 )
    {
      v100 = (void *)qvector_reserve(&v100, v100, v71, 1);
      v72 = v100;
    }
    v101.m128i_i64[0] = v71;
    v72[v70] = 63;
    *((_BYTE *)v100 + v70 + 1) = 0;
  }
  else
  {
    sub_357520((__int64 *)&v100);
  }
  v59 = v101.m128i_i64[0];
  v60 = 2;
  if ( v101.m128i_i64[0] )
  {
    v60 = v101.m128i_i64[0] + 1;
    v59 = v101.m128i_i64[0] - 1;
  }
  v61 = v100;
  if ( v101.m128i_i64[1] < v60 )
  {
    v100 = (void *)qvector_reserve(&v100, v100, v60, 1);
    v61 = v100;
  }
  v101.m128i_i64[0] = v60;
  v62 = 2;
  v61[v59] = 2;
  *((_BYTE *)v100 + v59 + 1) = 0;
  v63 = v101.m128i_i64[0];
  if ( v101.m128i_i64[0] )
  {
    v62 = v101.m128i_i64[0] + 1;
    v63 = v101.m128i_i64[0] - 1;
  }
  v64 = v100;
  if ( v101.m128i_i64[1] < v62 )
  {
    v100 = (void *)qvector_reserve(&v100, v100, v62, 1);
    v64 = v100;
  }
  v101.m128i_i64[0] = v62;
  v64[v63] = 32;
  *((_BYTE *)v100 + v63 + 1) = 0;
  value_repr_t__print_(a3 + 72, a2 + 312, 0);
  v65 = _mm_loadu_si128(&v101);
  v66 = v100;
  v100 = nullptr;
  v67 = s;
  *(__m128i *)(a1 + 8) = v65;
  *(_QWORD *)a1 = v66;
  v101 = 0;
  if ( v67 )
  {
    *(_QWORD *)&v103 = 0;
    qfree(v67);
  }
  clear_tinfo_t(&tinfo_property);
LABEL_85:
  if ( v100 )
  {
    v101.m128i_i64[0] = 0;
    qfree(v100);
  }
  return a1;
}

