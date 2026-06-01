unsigned __int64 __fastcall sub_1D6850(
        double a1,
        __m128 si128,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __m128i *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v18; // r14
  const char *v19; // r15
  size_t v20; // rax
  size_t v21; // r8
  size_t v22; // r9
  size_t v23; // r11
  __int64 v24; // rsi
  size_t v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rax
  const char *v28; // rsi
  const char *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rbp
  __int64 v37; // rbx
  void (__fastcall ***v38)(_QWORD); // rdi
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm4
  __m128 v43; // xmm5
  const char *v44; // rdx
  const char *v45; // rsi
  __int64 v46; // r8
  __int64 v47; // rdx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  __int64 v52; // rsi
  __m128i *v53; // [rsp+0h] [rbp-1C8h]
  size_t v54; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v55; // [rsp+8h] [rbp-1C0h]
  __int64 v56; // [rsp+8h] [rbp-1C0h]
  __int64 v57; // [rsp+8h] [rbp-1C0h]
  size_t v58; // [rsp+10h] [rbp-1B8h]
  __int64 v59; // [rsp+10h] [rbp-1B8h]
  __int64 v60; // [rsp+10h] [rbp-1B8h]
  size_t v61; // [rsp+18h] [rbp-1B0h]
  size_t v62; // [rsp+20h] [rbp-1A8h]
  char v63; // [rsp+3Fh] [rbp-189h] BYREF
  __m128i v64; // [rsp+40h] [rbp-188h] BYREF
  __int64 v65; // [rsp+50h] [rbp-178h]
  __m128i v66; // [rsp+60h] [rbp-168h] BYREF
  __int64 v67; // [rsp+70h] [rbp-158h]
  __int64 v68; // [rsp+80h] [rbp-148h] BYREF
  size_t v69; // [rsp+88h] [rbp-140h]
  unsigned __int64 v70; // [rsp+90h] [rbp-138h]
  const char *v71; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-120h]
  __m128i *v73; // [rsp+C0h] [rbp-108h] BYREF
  __int128 v74; // [rsp+C8h] [rbp-100h]
  __m128i s[2]; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 (__fastcall **v76)(); // [rsp+100h] [rbp-C8h] BYREF
  __int128 v77; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+120h] [rbp-A8h]
  int v79; // [rsp+128h] [rbp-A0h]
  __int64 v80; // [rsp+130h] [rbp-98h]
  __int64 v81; // [rsp+138h] [rbp-90h]
  __int128 v82; // [rsp+140h] [rbp-88h]
  __int128 v83; // [rsp+150h] [rbp-78h] BYREF
  __int64 v84; // [rsp+160h] [rbp-68h]
  __int128 v85; // [rsp+168h] [rbp-60h] BYREF
  __int64 v86; // [rsp+178h] [rbp-50h]
  unsigned __int64 v87; // [rsp+188h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v77 = 0;
  v78 = 0;
  v80 = 0;
  v79 = 0;
  v76 = &deskcfg_target_t___vtable;
  sub_1CD1B0((__int64)&v76, 0, a11, a12, 0.0);
  v12 = nullptr;
  v81 = 0;
  v76 = &ida_deskcfg_t___vtable;
  v53 = &v64;
  v84 = 0;
  v86 = 0;
  v82 = 0;
  v83 = 0;
  v85 = 0;
  sub_1D5FD0(&v64, nullptr, v13, v14, 0.0, si128);
  if ( (int)v65 > 0 )
  {
    v17 = 0;
    v18 = 8 * (3LL * (unsigned int)(v65 - 1) + 3);
    do
    {
      if ( !v64.m128i_i64[0] || *(int *)v64.m128i_i64[0] > 1 )
        sub_1B21C0(v53, 0, 0, 0, v15, v16);
      v26 = _mm_loadu_si128((const __m128i *)(v17 + v64.m128i_i64[1]));
      v67 = *(_QWORD *)(v17 + v64.m128i_i64[1] + 16);
      v66 = v26;
      if ( v26.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v26.m128i_i64[0], 1u);
      v12 = (__m128i *)&word_3C;
      if ( (unsigned __int8)QT::QString::startsWith(&v66, 60, 1) )
      {
        v12 = (__m128i *)&word_3E;
        if ( (unsigned __int8)QT::QString::endsWith(&v66, 62, 1) )
        {
          v12 = &v66;
          QT::QString::mid(s, &v66, 1, v67 - 2);
          v27 = v67;
          si128 = (__m128)_mm_load_si128(s);
          s[0] = _mm_load_si128(&v66);
          v67 = s[1].m128i_i64[0];
          s[1].m128i_i64[0] = v27;
          v66 = (__m128i)si128;
          sub_16D970((void **)s);
        }
      }
      if ( !v67 )
        goto LABEL_15;
      sub_1A1F60((__int64)&v68, "QDesktop\\");
      QT::QString::toUtf8_helper((QT::QString *)s, (const QT::QString *)&v66);
      v19 = (const char *)s[0].m128i_i64[1];
      if ( !s[0].m128i_i64[1] )
      {
        if ( !&QT::QByteArray::_empty )
          goto LABEL_10;
        v19 = (const char *)&QT::QByteArray::_empty;
      }
      v20 = strlen(v19);
      v21 = v69;
      v22 = v20;
      v23 = v20;
      if ( v69 )
      {
        v21 = v69 - 1;
        v23 = v20 + v69 - 1;
      }
      v24 = v68;
      v25 = v23 + 1;
      if ( v70 < v23 + 1 )
      {
        v62 = v20;
        v61 = v23;
        v58 = v21;
        v54 = v23 + 1;
        v68 = qvector_reserve(&v68, v68, v25, 1);
        v22 = v62;
        v24 = v68;
        v23 = v61;
        v21 = v58;
        v25 = v54;
      }
      v69 = v25;
      *(_BYTE *)(v24 + v23) = 0;
      memmove((void *)(v21 + v68), v19, v22);
LABEL_10:
      sub_17F470((void **)s);
      v12 = (__m128i *)&s1;
      if ( v69 )
        v12 = (__m128i *)v68;
      if ( (unsigned __int8)reg_exists("Layout", v12) )
        goto LABEL_13;
      QT::QString::toUtf8_helper((QT::QString *)s, (const QT::QString *)&v66);
      v28 = (const char *)s[0].m128i_i64[1];
      if ( !s[0].m128i_i64[1] )
        v28 = (const char *)&QT::QByteArray::_empty;
      sub_1D0E00((__int64)&v71, v28);
      sub_17F470((void **)s);
      v29 = &s1;
      if ( v72 )
        v29 = v71;
      v12 = (__m128i *)"rb";
      v30 = qfopen(v29, "rb");
      v31 = v30;
      if ( v30 )
      {
        v32 = qfsize(v30);
        v33 = v32;
        if ( v32 > 0x20000 )
        {
LABEL_35:
          qfclose(v31);
          goto LABEL_36;
        }
        v12 = nullptr;
        v73 = nullptr;
        v74 = 0;
        if ( v32 )
        {
          v55 = v32;
          v73 = (__m128i *)qvector_reserve(&v73, 0, v32, 1);
          memset(&v73->m128i_i8[v74], 0, v55 - v74);
          v33 = v55;
          v12 = v73;
          *(_QWORD *)&v74 = v55;
        }
        if ( qfread(v31, v12, v33) != v33 )
        {
LABEL_33:
          if ( v73 )
          {
            *(_QWORD *)&v74 = 0;
            qfree(v73, v12->m128i_i8);
          }
          goto LABEL_35;
        }
        v12 = (__m128i *)&v73;
        memset(s, 0, 24);
        if ( (__int64)sub_1CCE70((void **)s, (unsigned __int8 **)&v73) > 0 )
        {
          v44 = &s1;
          if ( v69 )
            v44 = (const char *)v68;
          v45 = &s1;
          if ( v72 )
            v45 = v71;
          sub_169700(
            (int)"Importing layout found in file '%s' to registry (under key '%s\\%s')\n",
            (__int64)v45,
            (__int64)v44,
            (__int64)"Layout",
            v40,
            v41,
            (__m128)0LL,
            si128,
            a3,
            a4,
            v42,
            v43,
            a7,
            a8,
            (char)v53);
          v46 = s[0].m128i_i64[1];
          v47 = s[0].m128i_i64[0];
          v63 = 0;
          v48 = s[0].m128i_i64[1] + 1;
          if ( s[0].m128i_i64[1] == -1 )
          {
            s[0].m128i_i64[1] = 0;
            goto LABEL_55;
          }
          if ( (unsigned __int64)&v63 >= s[0].m128i_i64[0] )
          {
            v49 = s[0].m128i_u64[1];
            if ( (unsigned __int64)&v63 >= s[0].m128i_i64[0] + s[1].m128i_i64[0] )
            {
              if ( s[1].m128i_i64[0] < v48 )
                goto LABEL_73;
              goto LABEL_71;
            }
            if ( s[1].m128i_i64[0] < v48 )
            {
              v60 = s[0].m128i_i64[1];
              v57 = s[0].m128i_i64[1] + 1;
              s[0].m128i_i64[0] = qvector_reserve(s, s[0].m128i_i64[0], s[0].m128i_i64[1] + 1, 1);
              v47 = s[0].m128i_i64[0];
              v46 = v60;
              v49 = s[0].m128i_u64[1];
              v48 = v57;
            }
            if ( v49 >= v48 )
            {
              v52 = s[0].m128i_i64[0];
            }
            else
            {
              do
              {
                *(_BYTE *)(v47 + v49) = 0;
                v47 = s[0].m128i_i64[0];
                v51 = v49++;
                v52 = s[0].m128i_i64[0];
              }
              while ( v46 != v51 );
            }
            s[0].m128i_i64[1] = v48;
            v47 = v52;
          }
          else
          {
            v49 = s[0].m128i_u64[1];
            if ( s[1].m128i_i64[0] >= v48 )
            {
              do
              {
LABEL_62:
                *(_BYTE *)(v47 + v49) = v63;
                v50 = v49;
                v47 = s[0].m128i_i64[0];
                ++v49;
              }
              while ( v46 != v50 );
              goto LABEL_63;
            }
LABEL_73:
            v59 = s[0].m128i_i64[1];
            v56 = s[0].m128i_i64[1] + 1;
            s[0].m128i_i64[0] = qvector_reserve(s, s[0].m128i_i64[0], s[0].m128i_i64[1] + 1, 1);
            v47 = s[0].m128i_i64[0];
            v46 = v59;
            v49 = s[0].m128i_u64[1];
            v48 = v56;
LABEL_71:
            if ( v49 < v48 )
              goto LABEL_62;
LABEL_63:
            s[0].m128i_i64[1] = v48;
          }
LABEL_55:
          v12 = (__m128i *)&s1;
          if ( v69 )
            v12 = (__m128i *)v68;
          reg_str_set("Layout", v12, v47);
        }
        if ( s[0].m128i_i64[0] )
        {
          s[0].m128i_i64[1] = 0;
          qfree(s[0].m128i_i64[0], v12->m128i_i8);
        }
        goto LABEL_33;
      }
LABEL_36:
      if ( v71 )
      {
        v72 = 0;
        qfree(v71, v12->m128i_i8);
      }
LABEL_13:
      if ( v68 )
      {
        v69 = 0;
        qfree(v68, v12->m128i_i8);
      }
LABEL_15:
      v17 += 24;
      sub_16D970((void **)&v66);
    }
    while ( v17 != v18 );
  }
  sub_1AF880((__int64)v53);
  v76 = &ida_deskcfg_t___vtable;
  sub_16D970((void **)&v85);
  sub_16D970((void **)&v83);
  v34 = v81;
  v76 = &deskcfg_t___vtable;
  if ( v81 )
  {
    v35 = v82;
    if ( (_QWORD)v82 )
    {
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = (void (__fastcall ***)(_QWORD))(v36 + v34);
        ++v37;
        v36 += 56;
        (**v38)(v38);
        v34 = v81;
      }
      while ( v35 != v37 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v34, v12->m128i_i8);
  }
  v76 = &deskcfg_target_t___vtable;
  if ( v80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
  sub_16D970((void **)&v77);
  return v87 - __readfsqword(0x28u);
}
