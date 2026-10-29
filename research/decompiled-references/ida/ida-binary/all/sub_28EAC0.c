const QT::QObject *__fastcall sub_28EAC0(const QT::QObject *a1, __int64 a2)
{
  __int64 v2; // rsi
  size_t v3; // rbx
  double v4; // xmm0_8
  const QT::QObject *v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  size_t v8; // rdx
  _BYTE *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  const QT::QObject *v14; // rbx
  void *v15; // rax
  __int64 v16; // rdx
  const char *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 *v22; // rbx
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 v25; // r15
  __int64 v26; // r14
  bool v27; // zf
  char *v28; // rsi
  volatile signed __int32 *v29; // rbp
  volatile signed __int32 *v30; // rdx
  signed __int32 v31; // eax
  signed __int32 v32; // eax
  double v33; // xmm0_8
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v38; // [rsp+28h] [rbp-180h] BYREF
  __int64 v39; // [rsp+30h] [rbp-178h] BYREF
  __int64 v40; // [rsp+38h] [rbp-170h] BYREF
  void *v41; // [rsp+40h] [rbp-168h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-160h]
  void *src; // [rsp+60h] [rbp-148h] BYREF
  __int128 v44; // [rsp+68h] [rbp-140h]
  __int64 v45; // [rsp+80h] [rbp-128h] BYREF
  __int128 v46; // [rsp+88h] [rbp-120h]
  __m128i v47; // [rsp+A0h] [rbp-108h] BYREF
  __m128i v48; // [rsp+B0h] [rbp-F8h] BYREF
  int v49; // [rsp+C0h] [rbp-E8h]
  __int64 v50; // [rsp+D0h] [rbp-D8h] BYREF
  _OWORD v51[3]; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+108h] [rbp-A0h]
  __m128i v53; // [rsp+110h] [rbp-98h]
  __m128i v54; // [rsp+120h] [rbp-88h]
  __int64 v55; // [rsp+130h] [rbp-78h]
  __int128 v56; // [rsp+138h] [rbp-70h]
  __int64 v57; // [rsp+148h] [rbp-60h]
  __int64 v58; // [rsp+150h] [rbp-58h]
  char v59; // [rsp+158h] [rbp-50h]
  __int64 v60; // [rsp+160h] [rbp-48h]
  unsigned __int64 v61; // [rsp+168h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v38 = 0;
  if ( !(unsigned __int8)get_func_frame(&v38, a1) )
  {
    v14 = nullptr;
    goto LABEL_23;
  }
  v2 = *(_QWORD *)a1;
  *(_OWORD *)n = 0;
  v41 = nullptr;
  get_ea_name(&v41, v2, 0, 0);
  v3 = n[0];
  v4 = 0.0;
  src = nullptr;
  v44 = 0;
  if ( n[0] )
  {
    v15 = (void *)qalloc_or_throw(n[0]);
    *((_QWORD *)&v44 + 1) = v3;
    src = v15;
    v7 = v3 + 8;
    v6 = v3 + 9;
    memcpy(v15, v41, v3);
    v8 = v3 - 1;
    *(_QWORD *)&v44 = v3;
    v5 = (const QT::QObject *)src;
    --v3;
    if ( *((_QWORD *)&v44 + 1) >= v6 )
      goto LABEL_5;
  }
  else
  {
    v5 = nullptr;
    v6 = 10;
    v7 = 9;
  }
  src = (void *)qvector_reserve(&src, v5, v6, 1);
  v5 = (const QT::QObject *)src;
  v8 = v3;
LABEL_5:
  *(_QWORD *)&v44 = v6;
  *((_BYTE *)v5 + v7) = 0;
  v9 = src;
  if ( v8 )
  {
    v5 = (const QT::QObject *)src;
    memmove((char *)src + 9, src, v8);
  }
  v9[8] = 32;
  *(_QWORD *)v9 = 0x666F206B63617453LL;
  v10 = xmmword_8CB528;
  v11 = *(_QWORD *)a1;
  if ( (_QWORD)xmmword_8CB528 )
  {
    v12 = 0;
    while ( 1 )
    {
      v5 = *(const QT::QObject **)(qword_8CB520 + 8 * v12);
      v13 = QT::QMetaObject::cast((QT::QMetaObject *)&off_884740, v5);
      v14 = (const QT::QObject *)v13;
      if ( v13 )
      {
        if ( v11 == *(_QWORD *)(v13 + 1016) )
          break;
      }
      if ( v10 == ++v12 )
        goto LABEL_12;
    }
    v50 = 1;
    *(_QWORD *)&v51[0] = -2;
    v16 = 8 * a2;
    if ( a2 == -1 )
      v16 = -1;
    (*(void (__fastcall **)(_QWORD, _OWORD *, __int64 *, __int64, __int64))(**(_QWORD **)(v13 + 1000) + 104LL))(
      *(_QWORD *)(v13 + 1000),
      v51,
      &v38,
      0xFFFFFFFFLL,
      v16);
    sub_3ACC30(v14, &v50, 3);
    v5 = v14;
    sub_479090(QT::QCoreApplication::self + 2, v14, 1);
  }
  else
  {
LABEL_12:
    if ( (unsigned __int8)netnode_inited(0.0) && (v5 = a1, (unsigned __int8)get_func_frame(&v38, a1)) )
    {
      v45 = 0;
      v18 = &s1;
      v46 = 0;
      if ( n[0] )
        v18 = (const char *)v41;
      sub_169A50(&v45, (__int64)"frame_%s", v18);
      v19 = create_frame_tlc(&v38, &v45, a1);
      v20 = v19;
      v39 = 0;
      v40 = -2;
      if ( a2 )
      {
        LODWORD(v39) = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v19 + 48LL))(v19, &v38, 0);
        v21 = 8 * a2;
        if ( a2 == -1 )
          v21 = -1;
        (*(void (__fastcall **)(__int64, __int64 *, __int64 *, __int64, __int64))(*(_QWORD *)v20 + 104LL))(
          v20,
          &v40,
          &v38,
          0xFFFFFFFFLL,
          v21);
        v22 = &v39;
      }
      else
      {
        v22 = nullptr;
      }
      v50 = 0;
      v52 = 0;
      v54.m128i_i64[0] = 0;
      v54.m128i_i64[1] = -1;
      v55 = 0;
      v57 = 0;
      v58 = 0;
      memset(v51, 0, sizeof(v51));
      v53 = 0;
      v56 = 0;
      sub_1E8870((__int64)&v47, 1);
      v23 = _mm_load_si128(&v47);
      v59 = 0;
      v53 = v23;
      v24 = _mm_load_si128(&v48);
      LODWORD(v55) = v49;
      v60 = 0;
      v54 = v24;
      *(double *)v24.m128i_i64 = sub_3AC770(&v50, v20, v22);
      sub_1E8790((__int64)&v50, 0, 0, 0, *(double *)v24.m128i_i64);
      LODWORD(v58) = v58 | 3;
      v14 = (const QT::QObject *)operator new(0x400u);
      v25 = *(_QWORD *)a1;
      v26 = operator new(0x18u);
      v27 = (_QWORD)v44 == 0;
      v28 = (char *)&s1;
      *(_QWORD *)(v26 + 16) = v20;
      *(_QWORD *)(v26 + 8) = 0x100000001LL;
      *(_QWORD *)v26 = std::_Sp_counted_ptr_type_listing_contents_t_______gnu_cxx::_Lock_policy_2____vtable;
      if ( !v27 )
        v28 = (char *)src;
      v47.m128i_i64[0] = v20;
      v47.m128i_i64[1] = v26;
      if ( v26 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
        else
          *(_DWORD *)(v26 + 8) = 2;
      }
      sub_3AF7B0(v14, v28);
      v29 = (volatile signed __int32 *)v47.m128i_i64[1];
      if ( v47.m128i_i64[1] )
      {
        v30 = (volatile signed __int32 *)(v47.m128i_i64[1] + 8);
        if ( *(_QWORD *)(v47.m128i_i64[1] + 8) == 0x100000001LL )
        {
          v34 = *(_QWORD *)v47.m128i_i64[1];
          v35 = v47.m128i_i64[1];
          *(_QWORD *)(v47.m128i_i64[1] + 8) = 0;
          (*(void (__fastcall **)(__int64, char *, volatile signed __int32 *))(v34 + 16))(v35, v28, v30);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 24LL))(v29);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v31 = _InterlockedExchangeAdd(v30, 0xFFFFFFFF);
          }
          else
          {
            v31 = *(_DWORD *)(v47.m128i_i64[1] + 8);
            *(_DWORD *)(v47.m128i_i64[1] + 8) = v31 - 1;
          }
          if ( v31 == 1 )
            sub_28E9C0(v29);
        }
      }
      *((_QWORD *)v14 + 127) = v25;
      *(_QWORD *)v14 = &frame_view_t___vtable;
      *((_QWORD *)v14 + 2) = frame_view_t___vtable_at__16;
      *((_QWORD *)v14 + 5) = frame_view_t___vtable_at__40;
      *((_QWORD *)v14 + 13) = frame_view_t___vtable_at__104;
      if ( v26 )
      {
        if ( *(_QWORD *)(v26 + 8) == 0x100000001LL )
        {
          v36 = *(_QWORD *)v26;
          *(_QWORD *)(v26 + 8) = 0;
          (*(void (__fastcall **)(__int64))(v36 + 16))(v26);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 8), 0xFFFFFFFF);
          }
          else
          {
            v32 = *(_DWORD *)(v26 + 8);
            *(_DWORD *)(v26 + 8) = v32 - 1;
          }
          if ( v32 == 1 )
            sub_28E9C0((volatile signed __int32 *)v26);
        }
      }
      v5 = (const QT::QObject *)(&loc_400002 + 2);
      sub_2DE3A0(v14, 4194308, 0);
      v33 = qfree(*((_QWORD *)&v56 + 1), (_BYTE *)&loc_400002 + 2);
      *((_QWORD *)&v56 + 1) = 0;
      v4 = qfree(v57, (_BYTE *)&loc_400002 + 2, v33);
      v57 = 0;
      if ( (_QWORD)v56 )
        v4 = qfree(v56, (_BYTE *)&loc_400002 + 2, v4);
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        v4 = qfree(v45, (_BYTE *)&loc_400002 + 2, v4);
      }
    }
    else
    {
      v14 = nullptr;
    }
  }
  if ( src )
  {
    *(_QWORD *)&v44 = 0;
    v4 = qfree(src, (const char *)v5);
  }
  if ( v41 )
  {
    n[0] = 0;
    qfree(v41, (const char *)v5, v4);
  }
LABEL_23:
  clear_tinfo_t(&v38);
  return v14;
}
