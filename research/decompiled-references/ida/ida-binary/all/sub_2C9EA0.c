unsigned __int64 __fastcall sub_2C9EA0(
        QT::QAbstractScrollArea *this,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  const char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // r13
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-58h] BYREF
  QT::QAbstractScrollArea *v31; // [rsp+10h] [rbp-48h] BYREF
  int v32; // [rsp+18h] [rbp-40h]
  __int64 v33; // [rsp+20h] [rbp-38h]
  unsigned __int64 v34; // [rsp+28h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)this, (__m128i)(unsigned __int64)this);
  v9 = (int *)sub_1E88B0(a3, a4);
  sub_27D070((__int64)this, a2, v9);
  v12 = _mm_load_si128(&v30);
  *((_QWORD *)this + 130) = 0;
  *((_QWORD *)this + 133) = -1;
  *(_QWORD *)this = &hexview_t___vtable;
  *((_QWORD *)this + 2) = hexview_t___vtable_at__16;
  *((_QWORD *)this + 13) = hexview_t___vtable_at__104;
  *((_QWORD *)this + 139) = (char *)this + 1096;
  *((_QWORD *)this + 140) = (char *)this + 1096;
  *((_QWORD *)this + 5) = hexview_t___vtable_at__40;
  *((_DWORD *)this + 268) = -1;
  *((_DWORD *)this + 274) = 0;
  *((_QWORD *)this + 138) = 0;
  *((_QWORD *)this + 141) = 0;
  *((_DWORD *)this + 286) = 0;
  *((_QWORD *)this + 144) = 0;
  *((_QWORD *)this + 145) = (char *)this + 1144;
  *((_QWORD *)this + 146) = (char *)this + 1144;
  *((_QWORD *)this + 147) = 0;
  *(_OWORD *)((char *)this + 1048) = 0;
  *((_BYTE *)this + 1032) = a6;
  *((_WORD *)this + 540) = 0;
  *((_BYTE *)this + 1082) = 0;
  *((_DWORD *)this + 296) = -1;
  *(__m128i *)(a4 + 8) = v12;
  if ( a6 )
  {
    v13 = sub_2C96B0(*(double *)v12.m128i_i64);
    v14 = 1;
    v15 = 4;
  }
  else
  {
    v13 = 1;
    v14 = 16;
    v15 = 1;
  }
  *(_DWORD *)(a4 + 24) = v13;
  *(_DWORD *)(a4 + 28) = v14;
  *(_DWORD *)(a4 + 36) = v15;
  *(_DWORD *)(a4 + 40) = 0;
  *(_BYTE *)(a4 + 32) = 0;
  *(_BYTE *)(a4 + 44) = 1;
  v16 = hexplace_t__name(
          &qword_8CCB80,
          a2,
          v15,
          v14,
          v10,
          v11,
          v30.m128i_i64[0],
          v30.m128i_i64[1],
          &idaplace_t___vtable,
          0,
          -1);
  v17 = idaplace_t__name(&v31);
  v18 = (const char *)v16;
  if ( !lookup_loc_converter2(v17, v16) )
  {
    v28 = hexplace_t__name(&qword_8CCB80, v16, v19, v20, v21, v22, v30.m128i_i64[0], v30.m128i_i64[1], v31, v32, v33);
    v29 = idaplace_t__name(&v31);
    v18 = (const char *)v28;
    register_loc_converter2(v29, v28, sub_2C81B0);
  }
  sub_27D430(this, v18);
  v23 = xmmword_8CCBC8;
  v31 = this;
  v24 = qword_8CCBC0;
  if ( *((_QWORD *)&xmmword_8CCBC8 + 1) < (unsigned __int64)(xmmword_8CCBC8 + 1) )
  {
    qword_8CCBC0 = qvector_reserve(&qword_8CCBC0, qword_8CCBC0, xmmword_8CCBC8 + 1, 8);
    v24 = qword_8CCBC0;
    v23 = xmmword_8CCBC8;
  }
  *(_QWORD *)(v24 + 8 * v23) = this;
  *(_QWORD *)&xmmword_8CCBC8 = xmmword_8CCBC8 + 1;
  if ( *((_BYTE *)this + 1032) )
  {
    *((_BYTE *)this + 1080) = 0;
    *((_BYTE *)this + 740) = 1;
    *((_DWORD *)this + 296) = dword_8BA590;
  }
  else
  {
    *((_BYTE *)this + 1080) = 0;
    *((_BYTE *)this + 740) = 1;
    sub_2C9D90((__int64)this);
  }
  sub_1FC230((__m128i *)this, a3);
  sub_27ED20((__int64)this, a3, *(double *)v12.m128i_i64, v25, v26);
  sub_4EBBA0(this);
  (*(void (__fastcall **)(QT::QAbstractScrollArea **, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 144LL))(
    &v31,
    QT::QCoreApplication::self,
    unk_8CA198);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)&v31);
  QT::QIcon::~QIcon((QT::QIcon *)&v31);
  sub_4B8B20(this, (dword_8BDE50 & 0x10000000) == 0 ? 256 : 128);
  return v34 - __readfsqword(0x28u);
}
