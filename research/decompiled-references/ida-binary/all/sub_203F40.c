__int64 __fastcall sub_203F40(
        __int64 *a1,
        _OWORD *a2,
        _OWORD *a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // r12
  _OWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  _OWORD *v24; // rbx
  const QT::QObject *v25; // rsi
  __m128i *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __m128i v30; // xmm0
  __int64 m128i_i64; // r12
  __int32 v32; // eax
  __m128i *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rdi
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned __int64 v43; // r14
  __int64 v44; // r13
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  __int64 v47; // r9
  const char *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r15
  __int64 v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rdx
  __m128i v55; // xmm0
  struct _Unwind_Exception *v57; // rbx
  __int64 *v58; // [rsp+0h] [rbp-E8h] BYREF
  int v59; // [rsp+8h] [rbp-E0h]
  __int64 v60; // [rsp+10h] [rbp-D8h]
  __m128i v61; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v62; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+40h] [rbp-A8h]
  __int64 v64; // [rsp+48h] [rbp-A0h]
  __m128i v65; // [rsp+50h] [rbp-98h] BYREF
  __m128i v66; // [rsp+60h] [rbp-88h]
  __int64 v67; // [rsp+70h] [rbp-78h]
  __int64 **v68; // [rsp+78h] [rbp-70h]
  int v69; // [rsp+80h] [rbp-68h] BYREF
  __int64 v70; // [rsp+88h] [rbp-60h]
  __int128 v71; // [rsp+90h] [rbp-58h]
  unsigned __int64 v72; // [rsp+A8h] [rbp-40h]

  v11 = (__int64)a2;
  v72 = __readfsqword(0x28u);
  v17 = sub_1E7840(a1, a3);
  if ( !v17 )
  {
    v17 = sub_1E7840(a1, a2);
    if ( !v17 )
    {
      v42 = a1[1];
      v43 = a1[2];
      if ( v43 < v42 + 1 )
      {
        v48 = nullptr;
        v49 = qvector_reserve(a1, 0, v42 + 1, 24);
        v50 = a1[1];
        v51 = a1[2];
        a1[2] = v43;
        v52 = *a1;
        v44 = v49;
        v53 = v50 - 1;
        if ( v53 >= 0 )
        {
          v54 = v49;
          do
          {
            v48 = *(const char **)v52;
            v55 = _mm_loadu_si128((const __m128i *)(v52 + 8));
            v54 += 24;
            v52 += 24;
            *(_QWORD *)(v52 - 24) = 0;
            *(_QWORD *)(v54 - 24) = v48;
            *(__m128i *)(v54 - 16) = v55;
            *(_QWORD *)(v52 - 8) = 0;
          }
          while ( v53-- != 0 );
          v52 = *a1;
        }
        qfree(v52, v48);
        *a1 = v44;
        v42 = a1[1];
        a1[2] = v51;
      }
      else
      {
        v44 = *a1;
      }
      a4 = 0;
      v17 = v44 + 24 * v42;
      *(_QWORD *)v17 = 0;
      *(_OWORD *)(v17 + 8) = 0;
      ++a1[1];
    }
  }
  v20 = *(_QWORD *)v17;
  v21 = *(_QWORD *)v17 + 16LL * *(_QWORD *)(v17 + 8);
  if ( *(_QWORD *)v17 != v21 )
  {
    v14 = *(_OWORD **)v17;
    while ( *v14 - *a3 != 0 )
    {
      if ( (_OWORD *)v21 == ++v14 )
        goto LABEL_26;
    }
    if ( v14 != (_OWORD *)v21 )
      goto LABEL_9;
  }
LABEL_26:
  sub_203DA0(a4, a5, a6, a7, v18, v19, a10, a11, (__int64)a1, (__int64 *)v17, (__int64)a3, (__int64)v14, v15, v16);
  v20 = *(_QWORD *)v17;
  v21 = *(_QWORD *)v17 + 16LL * *(_QWORD *)(v17 + 8);
  if ( *(_QWORD *)v17 == v21 )
    goto LABEL_27;
LABEL_9:
  while ( 1 )
  {
    v22 = *(_QWORD *)(v20 + 8) ^ *(_QWORD *)(v11 + 8);
    if ( *(_OWORD *)v20 - *(_OWORD *)v11 == 0 )
      break;
    v20 += 16;
    if ( v20 == v21 )
      goto LABEL_27;
  }
  if ( v20 == v21 )
LABEL_27:
    sub_203DA0(a4, a5, a6, a7, v18, v19, a10, a11, (__int64)a1, (__int64 *)v17, v11, v22, v15, v16);
  if ( *(_BYTE *)v11 )
  {
    if ( *(_BYTE *)a3 )
      return 1;
    v24 = (_OWORD *)v11;
    v11 = (__int64)a3;
  }
  else
  {
    v24 = a3;
  }
  if ( v11 )
  {
    v25 = *(const QT::QObject **)(v11 + 8);
    v26 = (__m128i *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v25);
    if ( v26 )
    {
      v29 = v26[26].m128i_i64[1];
      if ( !v29 )
        sub_1E69C0(*(double *)a4.m128_u64, 0, (__int64)v25, v27, v28);
      v30.m128i_i64[0] = 0;
      m128i_i64 = (__int64)v26[24].m128i_i64;
      v62.m128i_i64[0] = 0;
      v62.m128i_i64[1] = -1;
      v63 = 0;
      v64 = 0;
      v61 = 0;
      if ( &v26[24] != &v61 )
      {
        v61 = _mm_loadu_si128(v26 + 24);
        v30 = _mm_loadu_si128(v26 + 25);
        v32 = v26[26].m128i_i32[0];
        v62 = v30;
        LODWORD(v63) = v32;
        v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      if ( *(_BYTE *)v24 )
      {
        v33 = (__m128i *)&v69;
        v69 = -2;
        v70 = -1;
        v71 = 0;
        if ( (unsigned __int8)sub_23FA90(v24, &v69) )
        {
          v45 = _mm_load_si128(&v61);
          v59 = 0;
          v58 = &idaplace_t___vtable;
          v65 = v45;
          v46 = _mm_load_si128(&v62);
          v60 = v70;
          v68 = &v58;
          v67 = v63;
          v66 = v46;
          v33 = &v65;
          v68 = (__int64 **)idaplace_t__clone(&v58);
          sub_1F0EE0(m128i_i64, &v65, a3, 4, 0, v47, *(double *)v46.m128i_i64);
          if ( v68 )
            qfree(v68, v65.m128i_i8);
        }
        if ( v69 >= -1 && v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70, v33->m128i_i8);
        }
      }
      else
      {
        v33 = *((__m128i **)v24 + 1);
        v34 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, (const QT::QObject *)v33);
        if ( v34 )
        {
          v37 = *(__int64 **)(v34 + 424);
          if ( !v37 )
          {
            v57 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)v30.m128i_i64, 0, (__int64)v33, v35, v36);
            if ( v68 )
              *(double *)v30.m128i_i64 = qfree(v68, v33->m128i_i8);
            if ( v69 >= -1 && v70 )
            {
              *(_QWORD *)&v71 = 0;
              *(double *)v30.m128i_i64 = qfree(v70, v33->m128i_i8, *(double *)v30.m128i_i64);
            }
            if ( v64 )
              qfree(v64, v33->m128i_i8, *(double *)v30.m128i_i64);
            _Unwind_Resume(v57);
          }
          v38 = _mm_load_si128(&v61);
          v68 = *(__int64 ***)(v34 + 424);
          v67 = v63;
          v39 = *v37;
          v65 = v38;
          v40 = _mm_load_si128(&v62);
          v66 = v40;
          v33 = &v65;
          v68 = (__int64 **)(*(__int64 (__fastcall **)(__int64 *))(v39 + 16))(v37);
          sub_1F0EE0(m128i_i64, &v65, a3, 4, 0, v41, *(double *)v40.m128i_i64);
          if ( v68 )
            qfree(v68, v65.m128i_i8);
        }
      }
      if ( v64 )
        qfree(v64, v33->m128i_i8);
    }
  }
  return 1;
}
