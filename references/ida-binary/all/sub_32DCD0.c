__int64 __fastcall sub_32DCD0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  int v16; // eax
  __int64 v17; // rbp
  QT::QMetaObject *v18; // rax
  int v19; // r12d
  const char *v20; // rsi
  __int64 v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rbp
  QT::QMetaObject *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _BYTE *v30; // r12
  __int64 v31; // r14
  __int64 v32; // r13
  double v33; // xmm0_8
  size_t v34; // r15
  unsigned __int64 v35; // rsi
  char v36; // al
  void *v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  double v40; // xmm4_8
  double v41; // xmm5_8
  unsigned int v42; // r13d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __m128 v47; // xmm4
  __m128 v48; // xmm5
  __int64 (*v49)(); // rax
  void *v50; // rax
  void *v51; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v52; // [rsp+8h] [rbp-F0h]
  __int128 v53; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-C8h]
  int v55; // [rsp+38h] [rbp-C0h]
  __int64 v56; // [rsp+40h] [rbp-B8h]
  __int128 v57; // [rsp+48h] [rbp-B0h]
  __m128i si128; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+68h] [rbp-90h]
  char v60; // [rsp+70h] [rbp-88h]
  __int64 v61; // [rsp+78h] [rbp-80h]
  int v62; // [rsp+80h] [rbp-78h]
  __int64 v63; // [rsp+88h] [rbp-70h]
  __int128 v64; // [rsp+90h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-58h]
  char v66; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_2BF110(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 1;
  v16 = *(_DWORD *)(a1 + 8);
  if ( v16 != 58 && v16 != 25 )
  {
    v17 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1
      || (*(_BYTE *)(*(_QWORD *)(v17 + 8) + 48LL) & 1) == 0
      || (v18 = (QT::QMetaObject *)(**(__int64 (__fastcall ***)(_QWORD))v17)(*(_QWORD *)a1),
          v19 = QT::QMetaObject::indexOfSlot(v18, "do_rename()"),
          v19 < 0) )
    {
      v60 = 0;
      v57 = 0;
      v20 = (const char *)&v53;
      LODWORD(v53) = 0;
      v65 = 0xFFFFFFFFLL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
      *((_QWORD *)&v53 + 1) = 0;
      v21 = xmmword_8CC810;
      v54 = -1;
      v55 = -1;
      v56 = 0;
      v59 = -1;
      v61 = -1;
      v62 = -2;
      v63 = -1;
      v66 = 0;
      v64 = 0;
      v22 = sub_1ED900(qword_8CD7E8, &v53, 0, v11, 0.0);
      if ( v22 == 4 )
      {
        v38 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] == -1 )
        {
          v38 = v61;
          if ( v61 == -1 )
          {
            v20 = nullptr;
            v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)qword_8CD7E8 + 720LL))(qword_8CD7E8, 0);
            if ( get_fchunk(v39) )
            {
              sub_32D3E0(a1, 0, (__m128)0LL, a4, a5, a6, v40, v41, a9, a10);
              goto LABEL_20;
            }
            goto LABEL_19;
          }
        }
      }
      else
      {
        if ( v22 <= 4 )
        {
          if ( v22 == 1 )
          {
            v20 = (const char *)&v53;
            v23 = sub_3B08D0(a1, &v53);
LABEL_21:
            if ( v62 >= -1 && v63 )
            {
              *(_QWORD *)&v64 = 0;
              qfree(v63, v20);
            }
            clear_tinfo_t(&si128.m128i_u64[1]);
            if ( v56 )
            {
              *(_QWORD *)&v57 = 0;
              qfree(v56, v20);
            }
            return v23;
          }
          if ( v22 - 2 <= 1 )
          {
            if ( (get_tinfo_property(si128.m128i_i64[1], 2) & 0x2F) == 0xD )
            {
              v20 = (const char *)&v53;
              v23 = sub_3B08A0(a1, &v53);
            }
            else
            {
              v20 = &si128.m128i_i8[8];
              v23 = sub_3BC590(a1, &si128.m128i_u64[1], v59);
            }
            goto LABEL_21;
          }
          goto LABEL_19;
        }
        if ( v22 != 5 )
        {
LABEL_19:
          sub_33D630(v21);
LABEL_20:
          v23 = 1;
          goto LABEL_21;
        }
        v38 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] == -1 )
          v38 = v61;
      }
      if ( (unsigned __int8)is_mapped(v38) )
      {
        v21 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] == -1 )
          v21 = v61;
      }
      goto LABEL_19;
    }
    v26 = (QT::QMetaObject *)(**(__int64 (__fastcall ***)(__int64))v17)(v17);
    v27 = QT::QMetaObject::method(v26, v19);
    v54 = 0;
    v53 = 0;
    QT::QMetaMethod::invokeImpl(v27, v28, v17, 1, 1, &v53, (char *)&v53 + 8);
    return 1;
  }
  v24 = *(_QWORD *)(a1 + 208);
  if ( *(_BYTE *)(v24 + 31) != 12 )
    return sub_3B0850(a1);
  v29 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0;
  v30 = *(_BYTE **)(v29 + 1000);
  if ( (v30[112] & 1) == 0 )
    return 0;
  if ( *(_QWORD *)(v24 + 16) == -2 )
  {
    v42 = *(_DWORD *)(v24 + 24);
    v33 = 0.0;
    v43 = *(_QWORD *)(v29 + 1000);
    v51 = nullptr;
    v52 = 0;
    if ( !(unsigned __int8)get_tinfo_from_tlc(0, &v51, v43, v42) )
    {
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        v23 = 0;
        qfree(v51, (const char *)&v51);
        return v23;
      }
      return 0;
    }
    v35 = 4;
    if ( (unsigned __int8)sub_196F50(
                            (int)&v51,
                            4,
                            (int)"Please enter the function name",
                            v44,
                            v45,
                            v46,
                            (__m128)0LL,
                            a4,
                            a5,
                            a6,
                            v47,
                            v48,
                            a9,
                            a10,
                            (char)v51)
      && (unsigned __int64)v52 > 1 )
    {
      v49 = *(__int64 (**)())(*(_QWORD *)v30 + 96LL);
      if ( v49 != sub_32B640 )
      {
        v35 = v42;
        ((void (__fastcall *)(_BYTE *, _QWORD, void **, _QWORD))v49)(v30, v42, &v51, 0);
      }
      v37 = v51;
      if ( !v51 )
        goto LABEL_59;
      goto LABEL_58;
    }
    if ( v51 )
      goto LABEL_51;
    return 1;
  }
  v31 = *(_QWORD *)(v24 + 32);
  if ( v31 == -1 )
    return 0;
  v32 = *(_QWORD *)(v24 + 296);
  if ( !v32 )
    return 0;
  v33 = 0.0;
  v51 = nullptr;
  v52 = 0;
  v34 = *(_QWORD *)(v32 + 24);
  if ( v34 )
  {
    v50 = (void *)qalloc_or_throw(*(_QWORD *)(v32 + 24));
    *((_QWORD *)&v52 + 1) = v34;
    v51 = v50;
    memcpy(v50, *(const void **)(v32 + 16), v34);
    *(_QWORD *)&v52 = v34;
  }
  if ( (unsigned __int8)sub_196F50(
                          (int)&v51,
                          4,
                          (int)"Please enter the argument name",
                          v11,
                          v12,
                          v13,
                          (__m128)0LL,
                          a4,
                          a5,
                          a6,
                          v14,
                          v15,
                          a9,
                          a10,
                          (char)v51)
    && (unsigned __int64)v52 > 1 )
  {
    v35 = (unsigned int)set_tinfo_property4(v24 + 8, 30, v31, v51, 0, 0);
    v36 = sub_3AC490(a1, v35, "Failed to rename argument");
    v37 = v51;
    if ( !v36 )
    {
      if ( v51 )
      {
        *(_QWORD *)&v52 = 0;
        qfree(v51, (const char *)v35);
      }
      return 0;
    }
    if ( !v51 )
      goto LABEL_59;
LABEL_58:
    *(_QWORD *)&v52 = 0;
    v33 = qfree(v37, (const char *)v35);
LABEL_59:
    if ( *(_BYTE *)(v24 + 29) )
      invalidate_cache_for_tlc(v30, v33);
    return 1;
  }
  if ( v51 )
  {
LABEL_51:
    *(_QWORD *)&v52 = 0;
    qfree(v51, &byte_4);
  }
  return 1;
}
