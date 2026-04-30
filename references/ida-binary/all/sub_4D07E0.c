unsigned __int64 __fastcall sub_4D07E0(QT::QWidget *this, __int64 *a2)
{
  const QT::QObject *v2; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  size_t v11; // r14
  void *v12; // rax
  QT::QWidget *v13; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 *v18; // rbp
  __int64 v19; // rdi
  unsigned __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+18h] [rbp-70h]
  unsigned __int64 v23; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v24; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = (const QT::QObject *)sub_4CD420(this, 1u);
  v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_897C20, v2);
  if ( v3 )
  {
    v24 = nullptr;
    v4 = v3;
    v5 = a2[1];
    v25 = 0;
    v21 = 0xCCCCCCCCCCCCCCCDLL * ((40 * v5) >> 3);
    if ( v21 )
    {
      v6 = *a2;
      v22 = 40 * v5;
      v7 = (_QWORD *)qvector_reserve(&v24, 0, v21, 40);
      v24 = v7;
      v8 = v6 + v22;
      memmove(&v7[(unsigned __int64)v22 / 8], v7, 40 * v25);
      if ( v6 != v6 + v22 )
      {
        do
        {
          *v7 = 0;
          *(_OWORD *)(v7 + 1) = 0;
          v11 = *(_QWORD *)(v6 + 8);
          if ( v11 )
          {
            v12 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 8));
            *v7 = v12;
            v7[2] = v11;
            memcpy(v12, *(const void **)v6, v11);
            v7[1] = v11;
          }
          *((_DWORD *)v7 + 6) = 0;
          jvalue_t_copy(v7 + 3, v6 + 24, v9, v10);
          v6 += 40;
          v7 += 5;
        }
        while ( v8 != v6 );
      }
      *(_QWORD *)&v25 = v21 + v25;
    }
    sub_4B8A80(*(_QWORD *)(v4 + 40), (__int64)&v24);
    v13 = *(QT::QWidget **)(v4 + 40);
    v23 = _mm_sub_epi32(
            _mm_add_epi32(
              _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 28LL)),
              _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
            _mm_loadl_epi64((const __m128i *)(*((_QWORD *)this + 4) + 20LL))).m128i_u64[0];
    if ( v13 )
      sub_4CD5B0(this, v13, 1, (__int64)&v23);
    (*(void (__fastcall **)(QT::QWidget *, QT::QWidget *, __int64))(*(_QWORD *)this + 440LL))(this, v13, 3);
    QT::QObject::installEventFilter(v13, this);
    v15 = v24;
    if ( v24 )
    {
      v16 = v25;
      if ( (_QWORD)v25 )
      {
        v17 = 0;
        do
        {
          v18 = &v15[5 * v17];
          jvalue_t_clear(v18 + 3);
          v19 = *v18;
          if ( *v18 )
          {
            v18[1] = 0;
            qfree(v19, (const char *)this);
          }
          ++v17;
          v15 = v24;
        }
        while ( v16 != v17 );
      }
      *(_QWORD *)&v25 = 0;
      qfree(v15, (const char *)this);
    }
  }
  return v26 - __readfsqword(0x28u);
}
