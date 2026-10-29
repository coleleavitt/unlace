__int64 __fastcall sub_244AA0(
        int *a1,
        const char *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 v27; // rsi
  __int64 v28; // rcx
  int v29; // edx
  __m128i v30; // xmm0
  void *v31; // rdi
  signed int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __m128 v35; // xmm4
  __m128 v36; // xmm5
  int v37; // ebp
  unsigned __int64 v38; // rbx
  __int64 v39; // r13
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // r15
  int v42; // eax
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // r9
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  unsigned __int64 *v49; // [rsp+0h] [rbp-88h]
  char v50; // [rsp+0h] [rbp-88h]
  unsigned __int64 v51; // [rsp+10h] [rbp-78h]
  unsigned __int64 v52; // [rsp+28h] [rbp-60h] BYREF
  __m128i *v53; // [rsp+30h] [rbp-58h] BYREF
  __int128 v54; // [rsp+38h] [rbp-50h]
  unsigned __int64 v55; // [rsp+48h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  callui(45, (_DWORD)a2, a3, a4, a5, a6);
  if ( (dword_8CC5F0 > 0 || byte_8CC5ED) && (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
    goto LABEL_4;
  v31 = qword_8CC600;
  if ( !qword_8CC600 )
  {
    if ( !*(_BYTE *)(sub_227580(*(double *)a7.m128_u64, 0, (__int64)a2, v15, (__int64)v16) + 200) )
      goto LABEL_4;
    v32 = -5;
    goto LABEL_51;
  }
  if ( dbg && (*(_BYTE *)(dbg + 34) & 0x20) != 0 )
  {
    if ( !*(_BYTE *)(sub_227580(*(double *)a7.m128_u64, (__int64)qword_8CC600, (__int64)a2, v15, (__int64)v16) + 200) )
    {
LABEL_54:
      sub_234E50(&qword_8CC470, a2);
      goto LABEL_4;
    }
    v32 = -4;
LABEL_51:
    v48 = sub_227580(*(double *)a7.m128_u64, (__int64)v31, (__int64)a2, v15, (__int64)v16);
    a2 = (const char *)&qword_8CC470;
    if ( (int)sub_2444A0(v48, &qword_8CC470, v32) < -1 )
      goto LABEL_4;
    goto LABEL_20;
  }
  a2 = (const char *)&word_12;
  *(_QWORD *)qword_8CC600 = &qword_8CC470;
  v32 = sub_23D480((__int64)v31, 18, v15, v16, *(double *)a7.m128_u64);
  if ( *(_BYTE *)(sub_227580(*(double *)a7.m128_u64, (__int64)v31, 18, v33, v34) + 200) )
    goto LABEL_51;
  if ( v32 == -6 )
    goto LABEL_4;
  if ( v32 == -4 )
    goto LABEL_54;
  if ( v32 < -1 )
    goto LABEL_4;
  if ( v32 == -1 && (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 2 )
    goto LABEL_49;
LABEL_20:
  a7 = 0;
  v53 = nullptr;
  v54 = 0;
  sub_228780((const __m128i **)&v53, a2);
  a2 = (const char *)xmmword_8CC478;
  v37 = 0;
  if ( (_QWORD)xmmword_8CC478 )
  {
    v51 = 0;
    v38 = 0;
    while ( 1 )
    {
      a2 = (const char *)v38;
      v39 = 80 * v51;
      v40 = (unsigned __int64 *)(80 * v51 + qword_8CC470);
      v41 = *v40;
      v38 = v40[1];
      v42 = sub_22E380(
              (__int64)&v53,
              (unsigned __int64)a2,
              *v40,
              0.0,
              a8,
              a9,
              a10,
              *(double *)v35.m128_u64,
              *(double *)v36.m128_u64,
              a13,
              a14);
      if ( v42 < 0 )
        break;
      v52 = v41;
      v37 += v42;
      while ( v41 < v38 )
      {
        while ( 1 )
        {
          v43 = sub_2280F0((unsigned __int64 *)v53, v54, v41, v38);
          if ( !v43 )
          {
            a2 = (const char *)(v39 + qword_8CC470);
            if ( !(unsigned __int8)sub_22DCA0(
                                     (__int64)&v53,
                                     v39 + qword_8CC470,
                                     v41,
                                     v38,
                                     0.0,
                                     a8,
                                     a9,
                                     a10,
                                     *(double *)v35.m128_u64,
                                     *(double *)v36.m128_u64,
                                     a13,
                                     a14) )
              goto LABEL_47;
            ++v37;
            goto LABEL_29;
          }
          if ( *((_BYTE *)v43 + 16) )
            break;
          v44 = v43[1];
          if ( v41 < *v43 )
          {
            v49 = (unsigned __int64 *)v43[1];
            a2 = (const char *)(v39 + qword_8CC470);
            if ( !(unsigned __int8)sub_22DCA0(
                                     (__int64)&v53,
                                     v39 + qword_8CC470,
                                     v41,
                                     *v43,
                                     0.0,
                                     a8,
                                     a9,
                                     a10,
                                     *(double *)v35.m128_u64,
                                     *(double *)v36.m128_u64,
                                     a13,
                                     a14) )
              goto LABEL_47;
            v44 = (unsigned __int64)v49;
            ++v37;
          }
          v41 = v44;
          v52 = v44;
          if ( v44 >= v38 )
            goto LABEL_29;
        }
        v49 = v43;
        a2 = (const char *)(v39 + qword_8CC470);
        v47 = sub_228EC0(v43, v39 + qword_8CC470);
        if ( v47 == -1 )
          goto LABEL_47;
        v37 += v47;
        if ( *v49 == v41 && v38 == v49[1] )
          break;
        a2 = (const char *)(v39 + qword_8CC470);
        if ( !(unsigned __int8)sub_22DFF0(
                                 (__int64)&v53,
                                 (const char *)(v39 + qword_8CC470),
                                 &v52,
                                 v38,
                                 (_QWORD)xmmword_8CC478 - 1LL == v51,
                                 0.0,
                                 a8,
                                 a9,
                                 a10,
                                 *(double *)v35.m128_u64,
                                 *(double *)v36.m128_u64,
                                 a13,
                                 a14) )
          goto LABEL_47;
        v41 = v52;
        ++v37;
      }
LABEL_29:
      ++v51;
      a2 = (const char *)xmmword_8CC478;
      if ( v51 >= (unsigned __int64)xmmword_8CC478 )
      {
        if ( (_QWORD)xmmword_8CC478 )
          a2 = *(const char **)(qword_8CC470 + 80 * xmmword_8CC478 - 72);
        goto LABEL_32;
      }
    }
    LODWORD(v49) = v42;
    if ( !v53 )
      goto LABEL_49;
    *(_QWORD *)&v54 = 0;
    *(double *)a7.m128_u64 = qfree(v53, a2);
    v46 = (int)v49;
  }
  else
  {
LABEL_32:
    v45 = sub_22E380(
            (__int64)&v53,
            (unsigned __int64)a2,
            0xFFFFFFFFFFFFFFFFLL,
            0.0,
            a8,
            a9,
            a10,
            *(double *)v35.m128_u64,
            *(double *)v36.m128_u64,
            a13,
            a14);
    if ( v45 < 0 )
    {
LABEL_47:
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        *(double *)a7.m128_u64 = qfree(v53, a2);
      }
      goto LABEL_49;
    }
    v46 = v37 + v45;
    if ( v53 )
    {
      a2 = nullptr;
      LODWORD(v49) = v46;
      *(_QWORD *)&v54 = 0;
      *(double *)a7.m128_u64 = qfree(v53, nullptr);
      v46 = (int)v49;
    }
    if ( v46 > 0 )
    {
      sub_22FC60(0x15u, &qword_8CC470, &qword_8CC340);
      LODWORD(a2) = 0;
      mark_builtin_widgets(32, 0, 1);
      goto LABEL_4;
    }
  }
  if ( v46 )
LABEL_49:
    sub_169630(
      (int)"interr: failed to sync segment information",
      (__int64)a2,
      v15,
      (__int64)v16,
      v17,
      v18,
      a7,
      a8,
      a9,
      a10,
      v35,
      v36,
      a13,
      a14,
      (char)v49);
LABEL_4:
  callui(46, (_DWORD)a2, v15, (_DWORD)v16, v17, v18, v49);
  v19 = xmmword_8CC478;
  *a1 = xmmword_8CC478;
  if ( !v19 )
    return 0;
  result = qcalloc((int)v19, 16);
  if ( !result )
    sub_22DB40((int)"get_memory_config", 16, v21, v22, v23, v24, a7, a8, a9, a10, v25, v26, a13, a14, v50);
  if ( *a1 > 0 )
  {
    v27 = result;
    v28 = 0;
    v29 = 0;
    do
    {
      ++v29;
      v27 += 16;
      v30 = _mm_loadu_si128((const __m128i *)(qword_8CC470 + v28));
      v28 += 80;
      *(__m128i *)(v27 - 16) = v30;
    }
    while ( *a1 > v29 );
  }
  return result;
}
