unsigned __int64 __fastcall sub_1FEEB0(
        __int64 *a1,
        __m128i *a2,
        __m128i *a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        unsigned __int8 a14)
{
  __m128i *v15; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __m128i **v25; // rax
  __int64 v26; // rdx
  __int64 m128i_i64; // rdi
  __m128i v29; // xmm0
  __int32 v30; // eax
  __int64 (__fastcall *v31)(__int64, __int64, __int64); // rax
  char v32; // al
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  const __m128i *v39; // r15
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  QT::QObject *v44; // rsi
  __int64 *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  __int64 v51; // rbx
  __int64 v52; // rbp
  __int64 v53; // rdx
  QT::QAbstractScrollArea *v54; // rdi
  _QWORD *v55; // r12
  _QWORD *v56; // rdi
  __int64 v57; // rdx
  _QWORD *v58; // rdi
  __int64 v59; // r9
  __int64 v60; // rdx
  QT::QAbstractScrollArea *v61; // rdi
  const char *v62; // r15
  unsigned int v63; // eax
  const char *v64; // rsi
  const char *v65; // rdi
  __int64 v66; // rdi
  char v67; // [rsp+0h] [rbp-188h]
  __int64 v68; // [rsp+10h] [rbp-178h]
  char v72[8]; // [rsp+38h] [rbp-150h] BYREF
  _QWORD *v73; // [rsp+40h] [rbp-148h] BYREF
  __int64 v74; // [rsp+48h] [rbp-140h]
  _OWORD v75[2]; // [rsp+60h] [rbp-128h] BYREF
  __int32 v76; // [rsp+80h] [rbp-108h]
  __m128i *v77; // [rsp+88h] [rbp-100h]
  __m128i v78[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-D8h]
  __int64 v80; // [rsp+B8h] [rbp-D0h]
  __int128 v81; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+D0h] [rbp-B8h]
  __int64 v83; // [rsp+D8h] [rbp-B0h]
  __int64 v84; // [rsp+E0h] [rbp-A8h]
  __int128 v85; // [rsp+E8h] [rbp-A0h]
  __int128 v86; // [rsp+F8h] [rbp-90h]
  __int64 v87; // [rsp+108h] [rbp-80h]
  __int128 v88; // [rsp+110h] [rbp-78h]
  __int64 v89; // [rsp+120h] [rbp-68h]
  QT::QObject *v90; // [rsp+128h] [rbp-60h]
  __int128 v91; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v92; // [rsp+148h] [rbp-40h]

  v15 = (__m128i *)((char *)a2 + 104);
  v92 = __readfsqword(0x28u);
  if ( !a2 )
    v15 = nullptr;
  sub_277E70(v72, v15);
  if ( a3[2].m128i_i64[1]
    || (sub_169700(
          (int)"Coherency check failed: loc.is_valid()\n",
          (__int64)v15,
          v19,
          v20,
          v21,
          v22,
          a5,
          a6,
          a7,
          a8,
          v23,
          v24,
          a11,
          a12,
          v67),
        a3[2].m128i_i64[1]) )
  {
    v25 = (__m128i **)qword_8CB4F0;
    v26 = qword_8CB4F0 + 8 * xmmword_8CB4F8;
    if ( qword_8CB4F0 == v26 )
      goto LABEL_10;
    while ( a2 != *v25 )
    {
      if ( (__m128i **)v26 == ++v25 )
        goto LABEL_10;
    }
    if ( v25 == (__m128i **)v26 )
    {
LABEL_10:
      m128i_i64 = a2[26].m128i_i64[1];
      if ( !m128i_i64 )
        goto LABEL_91;
      v29 = _mm_loadu_si128(a2 + 24);
      v30 = a2[26].m128i_i32[0];
      v77 = nullptr;
      v75[0] = v29;
      a5 = (__m128)_mm_loadu_si128(a2 + 25);
      v76 = v30;
      v75[1] = a5;
      v77 = (__m128i *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)m128i_i64 + 16LL))(m128i_i64);
      if ( a4 )
      {
        sub_1E7BC0((__int64)&v73, a1, (__int64)a2);
        m128i_i64 = (__int64)a2[24].m128i_i64;
        *(_QWORD *)&v91 = 0;
        *((_QWORD *)&v91 + 1) = a2;
        sub_1F0EE0((__int64)a2[24].m128i_i64, a3, &v91, 1, 0, v59, *(double *)a5.m128_u64);
        goto LABEL_16;
      }
      v31 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a2->m128i_i64[0] + 592);
      if ( v31 == sub_1E6930 )
        v32 = !sub_192130((__int64)a3, (__int64)v75, (__int64)a2);
      else
        v32 = v31((__int64)a2, (__int64)v75, (__int64)a3);
      if ( v32 )
      {
LABEL_15:
        sub_1E7BC0((__int64)&v73, a1, (__int64)a2);
        m128i_i64 = (__int64)a2[24].m128i_i64;
        *((_QWORD *)&v91 + 1) = a2;
        *(_QWORD *)&v91 = 0;
        sub_1F1500((__int64)a2[24].m128i_i64, (__int64)a3, &v91, a14, v33, v34, *(double *)a5.m128_u64);
LABEL_16:
        if ( (a2[59].m128i_i8[10] & 1) == 0 )
        {
          v15 = v77;
          if ( !v77 || (m128i_i64 = (__int64)a2, !sub_1F0890((__int64)a2, v77->m128i_i64, a3[2].m128i_i64[1])) )
          {
            if ( (int)v74 > 0 )
            {
              v37 = 0;
              v68 = 8LL * (unsigned int)(v74 - 1) + 8;
              do
              {
                v39 = (const __m128i *)v73[v37 / 8];
                if ( a2 != v39 )
                {
                  if ( !v39[26].m128i_i64[1] )
                  {
                    sub_1E69C0(*(double *)a5.m128_u64, m128i_i64, (__int64)v15, v35, v36);
LABEL_91:
                    sub_1E69C0(*(double *)a5.m128_u64, m128i_i64, (__int64)v15, v26, v20);
                  }
                  v40 = a3[2].m128i_i64[1];
                  v41 = v39[26].m128i_i64[0];
                  v78[0] = _mm_loadu_si128(v39 + 24);
                  a5 = (__m128)_mm_loadu_si128(v39 + 25);
                  v79 = v41;
                  v80 = v40;
                  v78[1] = (__m128i)a5;
                  if ( v40 )
                    v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                  sub_1E95D0(
                    (QT::QObject *)&v81,
                    (__int64)v39,
                    v39[59].m128i_i32[1],
                    v39[59].m128i_i32[2] | 0x10000,
                    -32768,
                    *(double *)a5.m128_u64);
                  *(_QWORD *)&v91 = 0;
                  *((_QWORD *)&v91 + 1) = a2;
                  v15 = v78;
                  if ( a4 )
                    sub_1F0EE0((__int64)v39[24].m128i_i64, v78, &v91, 1, 0, v43, *(double *)a5.m128_u64);
                  else
                    sub_1F1500((__int64)v39[24].m128i_i64, (__int64)v78, &v91, a14, v42, v43, *(double *)a5.m128_u64);
                  if ( !(_BYTE)v83 )
                  {
                    v38 = v82;
                    if ( v82 )
                    {
                      *(_QWORD *)(v82 + 948) = v84;
                      *(_WORD *)(v38 + 956) = v85;
                    }
                  }
                  *(_QWORD *)&v81 = &object_lifecycle_monitor_t___vtable;
                  QT::QObject::~QObject((QT::QObject *)&v81);
                  m128i_i64 = v80;
                  if ( v80 )
                    *(double *)a5.m128_u64 = qfree(v80, v78[0].m128i_i8);
                }
                v37 += 8LL;
              }
              while ( v68 != v37 );
            }
          }
        }
        v44 = (QT::QObject *)&v91;
        v89 = 0;
        v90 = (QT::QObject *)a2;
        *(_QWORD *)&v91 = 0;
        *((_QWORD *)&v91 + 1) = a2;
        v45 = (__int64 *)sub_1E7840(a1, &v91);
        if ( !v45 )
          goto LABEL_58;
        v51 = *v45;
        v52 = *v45 + 16 * v45[1];
        if ( *v45 == v52 )
          goto LABEL_58;
        do
        {
          while ( 1 )
          {
            if ( !*(_BYTE *)v51 )
            {
              v44 = *(QT::QObject **)(v51 + 8);
              v54 = (QT::QAbstractScrollArea *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v44);
              if ( v54 )
                break;
            }
            v51 += 16;
            if ( v52 == v51 )
              goto LABEL_41;
          }
          sub_1FEB10(v54, (__int64)v44, v53, v46, *(double *)a5.m128_u64);
          v51 += 16;
        }
        while ( v52 != v51 );
LABEL_41:
        if ( !(_BYTE)v89 )
        {
LABEL_58:
          v44 = v90;
          v61 = (QT::QAbstractScrollArea *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v90);
          if ( v61 )
            sub_1FEB10(v61, (__int64)v44, v60, v46, *(double *)a5.m128_u64);
        }
        v55 = v73;
        if ( 8 * v74 )
        {
          do
          {
            v56 = (_QWORD *)qword_8CB4F0;
            v57 = qword_8CB4F0 + 8 * xmmword_8CB4F8;
            if ( qword_8CB4F0 == v57 )
              goto LABEL_54;
            while ( *v55 != *v56 )
            {
              if ( (_QWORD *)v57 == ++v56 )
                goto LABEL_54;
            }
            if ( v56 == (_QWORD *)v57 )
            {
LABEL_54:
              sub_169700(
                (int)"Coherency check failed: currently_being_synced.del(cur)\n",
                (__int64)v44,
                v57,
                v46,
                v47,
                v48,
                a5,
                a6,
                a7,
                a8,
                v49,
                v50,
                a11,
                a12,
                v67);
            }
            else
            {
              v44 = (QT::QObject *)(v56 + 1);
              memmove(v56, v56 + 1, v57 - (_QWORD)v56 - 8);
              *(_QWORD *)&xmmword_8CB4F8 = xmmword_8CB4F8 - 1;
            }
            v58 = v73;
            ++v55;
          }
          while ( v55 != &v73[v74] );
        }
        else
        {
          v58 = v73;
        }
        if ( v58 )
        {
          v74 = 0;
          *(double *)a5.m128_u64 = qfree(v58, (const char *)v44);
        }
        if ( v77 )
          qfree(v77, (const char *)v44, *(double *)a5.m128_u64);
        goto LABEL_9;
      }
      v62 = (const char *)a2[32].m128i_i64[0];
      v82 = 0;
      v81 = 0;
      a5 = 0;
      v83 = -1;
      v84 = 0;
      v87 = 0;
      v85 = 0;
      v86 = 0;
      v88 = 0;
      v63 = navstack_t_stack_index(v62);
      v64 = v62;
      if ( !(unsigned __int8)navstack_t_get_stack_entry(&v81, v62, v63) )
        goto LABEL_76;
      if ( a2[31].m128i_i64[0] )
      {
        v64 = (const char *)a2[30].m128i_i64[1];
        v65 = &s1;
        if ( !(_QWORD)v86 )
          goto LABEL_63;
      }
      else
      {
        v64 = &s1;
        if ( !(_QWORD)v86 )
          goto LABEL_64;
      }
      v65 = *((const char **)&v85 + 1);
LABEL_63:
      if ( !strcmp(v65, v64) )
      {
LABEL_64:
        v66 = v85;
        a2[57].m128i_i32[0] = 0;
        if ( v66 )
        {
          qfree(v66, v64);
          *(_QWORD *)&v85 = 0;
        }
        if ( *((_QWORD *)&v85 + 1) )
        {
          *(_QWORD *)&v86 = 0;
          qfree(*((_QWORD *)&v85 + 1), v64);
          *((_QWORD *)&v85 + 1) = 0;
          *((_QWORD *)&v86 + 1) = 0;
        }
        if ( v87 )
        {
          *(_QWORD *)&v88 = 0;
          qfree(v87, v64);
        }
        if ( *((_QWORD *)&v85 + 1) )
        {
          *(_QWORD *)&v86 = 0;
          qfree(*((_QWORD *)&v85 + 1), v64);
        }
        if ( (_QWORD)v85 )
          qfree(v85, v64);
        if ( v77 )
          qfree(v77, v64);
        goto LABEL_9;
      }
LABEL_76:
      if ( (_QWORD)v85 )
      {
        *(double *)a5.m128_u64 = qfree(v85, v64);
        *(_QWORD *)&v85 = 0;
      }
      if ( *((_QWORD *)&v85 + 1) )
      {
        *(_QWORD *)&v86 = 0;
        *(double *)a5.m128_u64 = qfree(*((_QWORD *)&v85 + 1), v64);
        *((_QWORD *)&v85 + 1) = 0;
        *((_QWORD *)&v86 + 1) = 0;
      }
      if ( v87 )
      {
        *(_QWORD *)&v88 = 0;
        *(double *)a5.m128_u64 = qfree(v87, v64);
      }
      if ( *((_QWORD *)&v85 + 1) )
      {
        *(_QWORD *)&v86 = 0;
        *(double *)a5.m128_u64 = qfree(*((_QWORD *)&v85 + 1), v64);
      }
      if ( (_QWORD)v85 )
        *(double *)a5.m128_u64 = qfree(v85, v64);
      goto LABEL_15;
    }
  }
LABEL_9:
  sub_278AD0(v72);
  return v92 - __readfsqword(0x28u);
}
