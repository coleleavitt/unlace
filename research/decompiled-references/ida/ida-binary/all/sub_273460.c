unsigned __int64 __fastcall sub_273460(__m128i *this, __int64 a2)
{
  const char *v3; // rsi
  QT::QGuiApplication *v5; // rdi
  const char **v6; // rbx
  __int64 v7; // r14
  const char *v8; // r12
  __int64 v9; // rdx
  void *v10; // r15
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  __m128i si128; // xmm0
  QT::QWidget *v14; // rdi
  size_t n[2]; // [rsp+0h] [rbp-68h] BYREF
  const void **v17; // [rsp+18h] [rbp-50h]
  _BYTE v18[4]; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) )
    return v19 - __readfsqword(0x28u);
  v3 = *((const char **)this + 5);
  if ( v3 )
  {
    v5 = (QT::QGuiApplication *)v18;
    sub_277780(v18, v3);
    v6 = *(const char ***)a2;
    v7 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
    if ( v7 == *(_QWORD *)a2 )
    {
LABEL_15:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 16LL))(*((_QWORD *)this + 5));
      sub_277860(v18);
      goto LABEL_16;
    }
    while ( 1 )
    {
      v8 = *v6;
      if ( *((__m128i **)*v6 + 2) == this )
        goto LABEL_6;
      if ( *(_DWORD *)v8 == 6 )
      {
        if ( (QT::QGuiApplication::keyboardModifiers(v5) & 0x2000000) != 0 )
          goto LABEL_6;
        v9 = *((_QWORD *)v8 + 1);
        v10 = nullptr;
        v11 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          v17 = (const void **)v9;
          n[0] = 8 * v11;
          v10 = (void *)qalloc_or_throw(8 * v11);
          v3 = (const char *)*v17;
          memcpy(v10, *v17, n[0]);
        }
        v12 = *((_QWORD *)this + 9);
        si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
        if ( v12 )
        {
          *((_QWORD *)this + 10) = 0;
          *(__m128i *)n = si128;
          qfree(v12, v3);
          si128 = _mm_load_si128((const __m128i *)n);
        }
        *((_QWORD *)this + 9) = v10;
        v3 = (char *)this + 72;
        v5 = (QT::QGuiApplication *)this;
        *(this + 5) = si128;
        sub_51B6E0((QT::QSplitter *)this);
        if ( (const char **)v7 == ++v6 )
          goto LABEL_15;
      }
      else
      {
        v5 = *((QT::QGuiApplication **)this + 5);
        v3 = *v6;
        (*(void (__fastcall **)(QT::QGuiApplication *, const char *))(*(_QWORD *)v5 + 48LL))(v5, *v6);
LABEL_6:
        if ( (const char **)v7 == ++v6 )
          goto LABEL_15;
      }
    }
  }
LABEL_16:
  v14 = *((QT::QWidget **)this + 6);
  if ( v14 )
    return QT::QWidget::update(v14);
  return v19 - __readfsqword(0x28u);
}
