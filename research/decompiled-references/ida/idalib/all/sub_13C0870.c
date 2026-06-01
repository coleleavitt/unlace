__int64 __fastcall sub_13C0870(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        unsigned __int64 a4,
        void *a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        bool *a9)
{
  void **v9; // rbp
  void **p_ptr; // rbx
  __int64 v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // r13
  char v15; // r14
  __int64 v16; // rbp
  __int64 **v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r13
  size_t v20; // r15
  __int64 v21; // rax
  void **v22; // r9
  __int64 v23; // r13
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r12
  const void *v27; // rbx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 *v31; // rax
  __int64 v32; // rdx
  char v33; // al
  bool v34; // al
  __int64 v35; // rdi
  __int64 v36; // rax
  void **v37; // rdx
  _BYTE *v38; // rax
  __int64 v39; // rdx
  char v40; // al
  __int64 *v41; // rax
  __int64 v42; // rdx
  char v43; // al
  __m128 v45; // [rsp+10h] [rbp-238h] BYREF
  void **v46; // [rsp+20h] [rbp-228h]
  __int64 v47; // [rsp+28h] [rbp-220h]
  void **v48; // [rsp+30h] [rbp-218h]
  __int64 *v49; // [rsp+38h] [rbp-210h]
  void *v50; // [rsp+40h] [rbp-208h]
  __int64 v51; // [rsp+48h] [rbp-200h]
  void *v52; // [rsp+50h] [rbp-1F8h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-1F0h]
  char v54; // [rsp+6Bh] [rbp-1DDh] BYREF
  unsigned int v55; // [rsp+6Ch] [rbp-1DCh] BYREF
  __m128i v56; // [rsp+70h] [rbp-1D8h] BYREF
  unsigned int *v57; // [rsp+80h] [rbp-1C8h]
  void *v58; // [rsp+90h] [rbp-1B8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-1B0h]
  __int64 v60; // [rsp+A8h] [rbp-1A0h] BYREF
  void *v61; // [rsp+D0h] [rbp-178h] BYREF
  __m128i v62; // [rsp+D8h] [rbp-170h]
  _BYTE v63[136]; // [rsp+E8h] [rbp-160h] BYREF
  void *ptr; // [rsp+170h] [rbp-D8h] BYREF
  __m128i v65; // [rsp+178h] [rbp-D0h]
  __int64 v66; // [rsp+188h] [rbp-C0h] BYREF
  __int16 v67; // [rsp+190h] [rbp-B8h]

  v9 = &v58;
  p_ptr = &ptr;
  v52 = a3;
  v46 = a7;
  v53 = a4;
  v47 = a8;
  v50 = a5;
  v51 = a6;
  v58 = &v60;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  sub_A1FE50(&v58, a3, &a3[a4]);
  if ( v51 )
  {
    v67 = 261;
    ptr = v58;
    v65.m128i_i64[0] = si128.m128i_i64[0];
    if ( !(unsigned __int8)sub_228B020(&ptr, 0) )
    {
      v67 = 261;
      ptr = v50;
      v65.m128i_i64[0] = v51;
      sub_228E8C0(&ptr, &v58);
    }
  }
  v45.m128_u64[0] = (unsigned __int64)&v52;
  v45 = _mm_loadh_ps((const double *)v45.m128_u64);
  sub_228F0B0(&v58, 1, 0);
  sub_228EF50(&v58, 1);
  v11 = *(_QWORD *)(a2 + 56);
  v55 = 0;
  v12 = _mm_load_si128((const __m128i *)&v45);
  v52 = v58;
  v56 = v12;
  v53 = si128.m128i_i64[0];
  v57 = &v55;
  v13 = *(_QWORD *)(a2 + 48);
  v14 = (v11 - v13) >> 4;
  if ( !v14 )
  {
    v15 = 0;
LABEL_35:
    v38 = (_BYTE *)sub_228A4B0(v46, v47, 0);
    ptr = &v66;
    v65 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    sub_A1FE50(&ptr, v38, &v38[v39]);
    if ( (unsigned __int8)sub_13BF410((__int64)&v56, &ptr) )
    {
      if ( ptr != &v66 )
        free(ptr);
      v15 = 0;
      v18 = v55;
      if ( a9 )
        *a9 = 0;
    }
    else
    {
      if ( ptr != &v66 )
        free(ptr);
      v18 = v55;
    }
    goto LABEL_9;
  }
  v48 = &v58;
  v15 = 0;
  v45.m128_u64[0] = (unsigned __int64)&v56;
  v16 = 0;
  while ( 1 )
  {
    v17 = (__int64 **)(v13 + 16 * v16);
    if ( ((*((_BYTE *)v17 + 8) >> 3) & 3) != 0 )
    {
      if ( ((*((_BYTE *)v17 + 8) >> 3) & 3) == 1 )
      {
        v41 = *v17;
        v42 = **v17;
        v65 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
        ptr = &v66;
        sub_A1FE50(&ptr, (_BYTE *)v41 + 32, (_BYTE *)v41 + v42 + 32);
        v43 = sub_13BF410(v45.m128_i64[0], &ptr);
        if ( ptr != &v66 )
        {
          LOBYTE(v49) = v43;
          free(ptr);
          v43 = (char)v49;
        }
        if ( v43 )
        {
          v15 = v43;
          if ( a9 )
            *a9 = v55 != 0;
        }
      }
    }
    else
    {
      v31 = *v17;
      v49 = &v66;
      v32 = *v31;
      ptr = &v66;
      v65 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      sub_A1FE50(&ptr, (_BYTE *)v31 + 32, (_BYTE *)v31 + v32 + 32);
      v33 = sub_13BF410(v45.m128_i64[0], &ptr);
      if ( ptr != v49 )
      {
        LOBYTE(v49) = v33;
        free(ptr);
        v33 = (char)v49;
      }
      if ( v33 )
      {
        v15 = 0;
        if ( a9 )
        {
          v34 = 0;
          if ( v55 )
            v34 = ((_BYTE)v17[1] & 7) != 3 && ((_BYTE)v17[1] & 7) != 0;
          v15 = 0;
          *a9 = v34;
        }
      }
    }
    if ( v14 == ++v16 )
      break;
    v13 = *(_QWORD *)(a2 + 48);
  }
  v18 = v55;
  v9 = v48;
  if ( !v55 )
    goto LABEL_35;
LABEL_9:
  v19 = v53;
  v20 = 0;
  if ( v18 <= v53 )
  {
    v19 = v18;
    v20 = v53 - v18;
  }
  v21 = *(_QWORD *)(a2 + 48);
  v22 = (void **)v20;
  v23 = (__int64)v52 + v19;
  v24 = v23;
  v25 = (*(_QWORD *)(a2 + 56) - v21) >> 4;
  if ( v25 )
  {
    v45.m128_u64[0] = (unsigned __int64)v9;
    v46 = &ptr;
    v26 = 0;
    v27 = (const void *)v23;
    v28 = v25;
    while ( 1 )
    {
      v29 = 16 * v26 + v21;
      if ( ((*(_BYTE *)(v29 + 8) >> 3) & 3) == 2 )
      {
        v35 = *(_QWORD *)v29;
        v48 = v22;
        v47 = v24;
        v36 = sub_13BEE30(v35, v27, v20);
        v24 = v47;
        v22 = v48;
        if ( v37 )
          break;
      }
      if ( v28 == ++v26 )
      {
        v23 = (__int64)v27;
        v9 = (void **)v45.m128_u64[0];
        p_ptr = v46;
        goto LABEL_17;
      }
      v21 = *(_QWORD *)(a2 + 48);
    }
    p_ptr = v46;
    v24 = v36;
    v9 = (void **)v45.m128_u64[0];
    v22 = v37;
    v62.m128i_i64[0] = 0;
    v62.m128i_i64[1] = 128;
    v61 = v63;
    ptr = v46 + 3;
    v65.m128i_i64[0] = 0;
    v65.m128i_i64[1] = 128;
  }
  else
  {
LABEL_17:
    v61 = v63;
    v62 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr = p_ptr + 3;
    v65 = v62;
    if ( v15 )
    {
      v46 = v22;
      v45.m128_u64[0] = v24;
      v40 = sub_13C05F0(v23, v20, &v54, &v61, p_ptr);
      v24 = v45.m128_u64[0];
      v22 = v46;
      if ( v40 )
      {
        v24 = (__int64)ptr;
        v22 = (void **)v65.m128i_i64[0];
      }
    }
  }
  sub_228A9A0(a1, v24, v22, 0);
  if ( ptr != p_ptr + 3 )
    free(ptr);
  if ( v61 != v63 )
    free(v61);
  if ( v58 != v9 + 3 )
    free(v58);
  return a1;
}
