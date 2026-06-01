unsigned __int64 __fastcall sub_203AD0(QT::QAbstractScrollArea *this)
{
  __m128i si128; // xmm0
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  double v8; // xmm0_8
  const char *v9; // r12
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  double v12; // xmm0_8
  __m128i v13; // xmm1
  __int64 v14; // rcx
  int *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rax
  void *ptr[2]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-C8h]
  const char *v22; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-B0h]
  void *v24[4]; // [rsp+40h] [rbp-98h] BYREF
  void *v25[4]; // [rsp+60h] [rbp-78h] BYREF
  void *v26[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v27; // [rsp+90h] [rbp-48h]
  __int128 v28; // [rsp+A0h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+B8h] [rbp-20h]

  si128.m128i_i64[0] = 0;
  v29 = __readfsqword(0x28u);
  v3 = (__int64 *)qword_8CB508;
  *(_OWORD *)ptr = 0;
  v21 = 0;
  if ( !qword_8CB508 )
  {
    v19 = operator new(0x18u);
    si128.m128i_i64[0] = 0;
    *(_QWORD *)v19 = 0;
    v3 = (__int64 *)v19;
    qword_8CB508 = v19;
    *(_OWORD *)(v19 + 8) = 0;
  }
  *((_QWORD *)&v28 + 1) = this;
  *(_QWORD *)&v28 = 0;
  v5 = (__int64 *)sub_1E7840(v3, &v28);
  if ( v5 )
  {
    v22 = nullptr;
    v23 = 0;
    sub_1FA020((__int64 *)&v22, v5, (__int64)this, v4);
    v8 = QT::QString::fromUtf8(v24, 22, "(Synchronized with %1)");
    if ( (_QWORD)v23 )
    {
      v11 = v23 - 1;
      v9 = v22;
      v10 = (unsigned __int64)(v23 - 1) >> 63;
      if ( !v22 )
        goto LABEL_26;
    }
    else
    {
      v9 = &s1;
      LOBYTE(v10) = 0;
      v11 = 0;
      if ( !&s1 )
        goto LABEL_26;
    }
    if ( !(_BYTE)v10 )
    {
LABEL_7:
      v12 = QT::QString::fromUtf8(v25, v11, v9, v8);
      QT::QString::arg(v26, v24, v25, 0, 32, v12);
      si128 = _mm_load_si128((const __m128i *)ptr);
      v13 = _mm_load_si128((const __m128i *)v26);
      v14 = v27;
      v27 = v21;
      v21 = v14;
      *(__m128i *)ptr = v13;
      *(__m128i *)v26 = si128;
      if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
        free(v26[0]);
      if ( v25[0] && !_InterlockedSub((volatile signed __int32 *)v25[0], 1u) )
        free(v25[0]);
      if ( v24[0] && !_InterlockedSub((volatile signed __int32 *)v24[0], 1u) )
        free(v24[0]);
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        *(double *)si128.m128i_i64 = qfree(v22, (const char *)v24);
      }
      goto LABEL_18;
    }
LABEL_26:
    v11 = 0;
    if ( v9 )
      v11 = strlen(v9);
    goto LABEL_7;
  }
LABEL_18:
  v15 = *((int **)this + 122);
  if ( !v15 || *v15 > 1 )
    sub_178660((__int64)this + 976, 0, 0, 0, v6, v7);
  QT::QLabel::setText(*(QT::QLabel **)(*((_QWORD *)this + 123) + 40LL), (const QT::QString *)ptr);
  sub_1FEB10(this, (__int64)ptr, v16, v17, *(double *)si128.m128i_i64);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v29 - __readfsqword(0x28u);
}
