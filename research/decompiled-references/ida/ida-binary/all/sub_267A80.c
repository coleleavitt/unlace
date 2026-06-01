__int64 __fastcall sub_267A80(__int64 a1, const char *a2, int a3)
{
  __int64 v3; // r13
  __int64 i; // r12
  __int64 *v5; // rbp
  __int64 v6; // rdi
  const char *v8; // rbp
  unsigned int v9; // r14d
  __m128i si128; // xmm0
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  const char *v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r12
  void *v24; // rax
  __int64 *v25; // r15
  size_t v26; // r12
  __int64 v27; // rdi
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 *v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 *v36; // r12
  char **v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  _DWORD *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const char *v46; // r8
  _QWORD *v47; // rbp
  size_t v48; // r15
  void *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __m128i **v53; // rbp
  __m128i *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rbp
  void *v57; // rax
  __int64 v58; // rax
  size_t v59; // r13
  _QWORD *v60; // r12
  void *v61; // rax
  struct _Unwind_Exception *v62; // rbx
  __int64 v63; // [rsp+0h] [rbp-E0h]
  const char *src; // [rsp+10h] [rbp-D0h]
  const char *v65; // [rsp+18h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+20h] [rbp-C0h]
  __int64 v67; // [rsp+38h] [rbp-A8h] BYREF
  __int128 v68; // [rsp+40h] [rbp-A0h]
  __int64 v69; // [rsp+58h] [rbp-88h] BYREF
  __int128 v70; // [rsp+60h] [rbp-80h]
  void *v71; // [rsp+78h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+80h] [rbp-60h] BYREF
  char v73[16]; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v8 = a2;
  v66 = 0;
  v65 = nullptr;
  if ( !(unsigned __int8)sub_2661C0((__int64 *)&v65, (__int64)a2, a3) )
    goto LABEL_5;
  a2 = &s1;
  if ( (_QWORD)v66 )
    a2 = v65;
  if ( !(unsigned __int8)sub_4B86E0(a1, a2) || (v9 = *(unsigned __int8 *)(a1 + 16), !(_BYTE)v9) )
  {
LABEL_5:
    v9 = 0;
    goto LABEL_6;
  }
  si128.m128i_i64[0] = 0;
  a2 = nullptr;
  v67 = 0;
  v68 = 0;
  if ( !(unsigned __int8)sub_4B7B20(a1, 0) )
  {
    v12 = v8[25];
    if ( (unsigned __int8)(v12 - 1) <= 1u )
    {
      si128.m128i_i64[0] = 0;
      v28 = "QState";
      v70 = 0;
      v69 = 0;
      if ( v12 == 2 )
        v28 = "QStateDbg";
      a2 = nullptr;
      if ( (unsigned __int8)reg_bin_op(v28, 0, &v69, 0, 0, 2) )
      {
        si128.m128i_i64[0] = 0;
        a2 = (const char *)&v69;
        v71 = nullptr;
        *(_OWORD *)n = 0;
        if ( (unsigned __int8)sub_4B7320(&v71, &v69) )
        {
          v55 = v68;
          if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
          {
            v67 = qvector_reserve(&v67, v67, v68 + 1, 40);
            v55 = v68;
          }
          v56 = (_QWORD *)(v67 + 40 * v55);
          *v56 = 0;
          *((_DWORD *)v56 + 6) = 0;
          v56[4] = 0;
          *(_OWORD *)(v56 + 1) = 0;
          *(_QWORD *)&v68 = v68 + 1;
          a2 = (const char *)*v56;
          v57 = (void *)qvector_reserve(v56, *v56, 13, 1);
          *v56 = v57;
          v56[1] = 13;
          qmemcpy(v57, "window_state", 12);
          *(_BYTE *)(*v56 + 12LL) = 0;
          v58 = operator new(0x18u);
          v59 = n[0];
          si128.m128i_i64[0] = 0;
          *(_QWORD *)v58 = 0;
          v60 = (_QWORD *)v58;
          *(_OWORD *)(v58 + 8) = 0;
          if ( v59 )
          {
            v61 = (void *)qalloc_or_throw(v59);
            *v60 = v61;
            a2 = (const char *)v71;
            v60[2] = v59;
            memcpy(v61, a2, v59);
            v60[1] = v59;
          }
          if ( *((_DWORD *)v56 + 6) )
            jvalue_t_clear(v56 + 3);
          *((_DWORD *)v56 + 6) = 2;
          v56[4] = v60;
        }
        if ( v71 )
        {
          n[0] = 0;
          *(double *)si128.m128i_i64 = qfree(v71, a2);
        }
      }
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        *(double *)si128.m128i_i64 = qfree(v69, a2);
      }
    }
  }
  if ( !sub_4B7E00(a1) )
  {
    v35 = operator new(0x18u);
    *(_QWORD *)v35 = 0;
    v36 = (__int64 *)v35;
    v37 = off_860400;
    *(_OWORD *)(v35 + 8) = 0;
    do
    {
      v69 = 0;
      *(_QWORD *)&v70 = 0;
      v43 = operator new(0x18u);
      v46 = *v37;
      *(_QWORD *)v43 = 0;
      v47 = (_QWORD *)v43;
      *(_OWORD *)(v43 + 8) = 0;
      if ( v46 )
      {
        src = v46;
        v48 = strlen(v46);
        v49 = (void *)qvector_reserve(v47, 0, v48 + 1, 1);
        *v47 = v49;
        v47[1] = v48 + 1;
        memmove(v49, src, v48);
        *(_BYTE *)(*v47 + v48) = 0;
      }
      if ( (_DWORD)v69 )
        jvalue_t_clear(&v69);
      *(_QWORD *)&v70 = v47;
      LODWORD(v69) = 2;
      LODWORD(v71) = 0;
      jvalue_t_copy(&v71, &v69, v44, v45);
      v39 = v36[1];
      v40 = *v36;
      v41 = v39 + 1;
      if ( v36[2] < (unsigned __int64)(v39 + 1) )
      {
        v50 = qvector_reserve(v36, v40, v41, 16);
        *v36 = v50;
        v40 = v50;
        v39 = v36[1];
      }
      v42 = (_DWORD *)(v40 + 16 * v39);
      *v42 = 0;
      jvalue_t_copy(v42, &v71, v41, v38);
      ++v36[1];
      ++v37;
      jvalue_t_clear(&v71);
      jvalue_t_clear(&v69);
    }
    while ( &off_860438 != v37 );
    v51 = v68;
    v52 = v67;
    if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
    {
      v67 = qvector_reserve(&v67, v67, v68 + 1, 40);
      v51 = v68;
      v52 = v67;
    }
    v53 = (__m128i **)(v52 + 40 * v51);
    *v53 = nullptr;
    *((_DWORD *)v53 + 6) = 0;
    v53[4] = nullptr;
    *(_OWORD *)(v53 + 1) = 0;
    *(_QWORD *)&v68 = v68 + 1;
    a2 = (const char *)*v53;
    v54 = (__m128i *)qvector_reserve(v53, *v53, 17, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DCC10);
    *v53 = v54;
    v53[1] = (__m128i *)(&word_10 + 1);
    *v54 = si128;
    (*v53)[1].m128i_i8[0] = 0;
    if ( *((_DWORD *)v53 + 6) )
      jvalue_t_clear(v53 + 3);
    *((_DWORD *)v53 + 6) = 4;
    v53[4] = (__m128i *)v36;
  }
  if ( !(_QWORD)v68 )
  {
    v27 = v67;
    if ( !v67 )
      goto LABEL_6;
    goto LABEL_25;
  }
  v15 = (const char *)a1;
  LODWORD(v69) = 0;
  v16 = &v69;
  jvalue_t_copy(&v69, a1, v13, v14);
  v19 = v67;
  v63 = v67 + 40 * v68;
  if ( v63 != v67 )
  {
    while ( (_DWORD)v69 == 3 )
    {
      v25 = (__int64 *)v70;
      v71 = nullptr;
      *(_OWORD *)n = 0;
      v26 = *(_QWORD *)(v19 + 8);
      if ( v26 )
      {
        v71 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 8));
        n[1] = v26;
        memcpy(v71, *(const void **)v19, v26);
        n[0] = v26;
      }
      *(_DWORD *)v73 = 0;
      jvalue_t_copy(v73, v19 + 24, v17, v18);
      v21 = v25[1];
      v22 = *v25;
      if ( v25[2] < (unsigned __int64)(v21 + 1) )
      {
        v29 = qvector_reserve(v25, v22, v21 + 1, 40);
        *v25 = v29;
        v21 = v25[1];
        v22 = v29;
      }
      si128 = _mm_loadu_si128((const __m128i *)n);
      v23 = v22 + 40 * v21;
      v24 = v71;
      *(_OWORD *)n = 0;
      v15 = v73;
      *(__m128i *)(v23 + 8) = si128;
      v71 = nullptr;
      *(_QWORD *)v23 = v24;
      *(_DWORD *)(v23 + 24) = 0;
      jvalue_t_copy(v23 + 24, v73, v21, v20);
      ++v25[1];
      jvalue_t_clear(v73);
      v16 = (__int64 *)v71;
      if ( v71 )
      {
        n[0] = 0;
        *(double *)si128.m128i_i64 = qfree(v71, v73);
      }
      v19 += 40;
      if ( v63 == v19 )
        goto LABEL_31;
    }
    sub_264AA0(*(double *)si128.m128i_i64, (__int64)v16, (__int64)v15, v17, v18);
LABEL_63:
    v62 = (struct _Unwind_Exception *)sub_264AC0(*(double *)si128.m128i_i64, (__int64)v16, (__int64)v15, v17, v18);
    if ( v71 )
    {
      n[0] = 0;
      *(double *)si128.m128i_i64 = qfree(v71, v15);
    }
    jvalue_t_clear(&v69);
    if ( v67 )
    {
      v3 = v68;
      for ( i = 0; v3 != i; ++i )
      {
        v5 = (__int64 *)(v67 + 40 * i);
        jvalue_t_clear(v5 + 3);
        v6 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v6, v15);
        }
      }
      *(_QWORD *)&v68 = 0;
      *(double *)si128.m128i_i64 = qfree(v67, v15);
    }
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65, v15, *(double *)si128.m128i_i64);
    }
    _Unwind_Resume(v62);
  }
LABEL_31:
  LOBYTE(n[1]) = 0;
  v71 = nullptr;
  n[0] = 0;
  if ( (_DWORD)v69 != 3 )
    goto LABEL_63;
  v30 = v70;
  *(_QWORD *)&v70 = 0;
  LODWORD(v69) = 0;
  sub_4B74C0(&v71, v30);
  a2 = (const char *)&v71;
  sub_4B7F50(a1, &v71);
  jvalue_t_clear(&v71);
  jvalue_t_clear(&v69);
  v27 = v67;
  if ( v67 )
  {
    v31 = v68;
    if ( (_QWORD)v68 )
    {
      v32 = 0;
      do
      {
        v33 = (__int64 *)(v27 + 40 * v32);
        jvalue_t_clear(v33 + 3);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34, (const char *)&v71);
        }
        ++v32;
        v27 = v67;
      }
      while ( v31 != v32 );
    }
LABEL_25:
    *(_QWORD *)&v68 = 0;
    qfree(v27, a2);
  }
LABEL_6:
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65, a2);
  }
  return v9;
}
