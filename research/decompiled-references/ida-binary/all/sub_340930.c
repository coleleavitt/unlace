unsigned __int64 __fastcall sub_340930(QT::QWidget *this, double a2)
{
  char v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  void (__fastcall *v8)(char *, char *); // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  bool v17; // zf
  _DWORD *v18; // rax
  int v19; // r12d
  void *v20; // rdi
  __int64 v21; // rdx
  __m128i v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE v25[8]; // [rsp+8h] [rbp-70h] BYREF
  void (__fastcall **v26)(_QWORD, __int64 *, __m128i *); // [rsp+10h] [rbp-68h] BYREF
  QT::QWidget *v27; // [rsp+18h] [rbp-60h]
  _BYTE *v28; // [rsp+20h] [rbp-58h]
  __m128i v29; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  QT::QPainter::QPainter((QT::QPainter *)v25, (QT::QWidget *)((char *)this + 16));
  if ( *((_BYTE *)this + 344) && (v3 = netnode_inited(a2)) != 0 && *((_QWORD *)this + 21) )
  {
    v22.m128i_i64[0] = sub_524FA0((char *)this + 40, 2165563920LL, 0);
    v29 = v22;
  }
  else
  {
    v4 = QT::QWidget::palette(this);
    v3 = 0;
    v29 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)QT::QPalette::brush(v4, 1, 10) + 8LL));
  }
  v5 = *((_QWORD *)this + 4);
  v6 = _mm_loadl_epi64((const __m128i *)(v5 + 28));
  v7 = _mm_loadl_epi64((const __m128i *)(v5 + 20));
  v26 = nullptr;
  v27 = (QT::QWidget *)_mm_sub_epi32(v6, v7).m128i_u64[0];
  QT::QPainter::fillRect(v25, &v26, &v29);
  if ( v3 )
  {
    if ( *((_BYTE *)this + 256) )
    {
      v17 = *((_BYTE *)this + 345) == 0;
      v18 = *((_DWORD **)this + 4);
      *((_QWORD *)this + 30) = 0;
      v19 = v17 ? v18[7] + 1 - v18[5] : v18[8] + 1 - v18[6];
      if ( v19 )
      {
        v20 = *((void **)this + 29);
        v21 = v19;
        if ( *((_QWORD *)this + 31) < (unsigned __int64)v19 )
        {
          v23 = qvector_reserve((char *)this + 232, *((_QWORD *)this + 29), v19, 4);
          v24 = *((_QWORD *)this + 30);
          *((_QWORD *)this + 29) = v23;
          v21 = v19 - v24;
          v20 = (void *)(v23 + 4 * v24);
        }
        memset(v20, 0, 4 * v21);
        *((_QWORD *)this + 30) = v19;
      }
    }
    v27 = this;
    v26 = (void (__fastcall **)(_QWORD, __int64 *, __m128i *))&navband_t::paintEvent;
    v28 = v25;
    sub_33F870((__int64)this, &v26);
    if ( *((_BYTE *)this + 400) )
    {
      sub_33F010(*((_QWORD **)this + 46));
      *((_QWORD *)this + 46) = 0;
      *((_QWORD *)this + 47) = (char *)this + 360;
      *((_QWORD *)this + 48) = (char *)this + 360;
      v8 = *((void (__fastcall **)(char *, char *))this + 56);
      *((_QWORD *)this + 49) = 0;
      if ( v8 )
        v8((char *)this + 352, (char *)this + 184);
      *((_BYTE *)this + 400) = 0;
    }
    sub_3405B0((__int64)this, (__int64)v25);
    v9 = *((_QWORD *)this + 26);
    v10 = *((_QWORD *)this + 23);
    if ( v9 >= v10 && v9 < *((_QWORD *)this + 24) )
    {
      v11 = sub_33FA20((__int64)this, v9);
      if ( v11 != -1 )
      {
        v12 = v11 - *((_QWORD *)this + 25);
        if ( v12 != -1 )
        {
          sub_3404D0((__int64)this, (__int64)v25, v12, (QT::QWidget *)((char *)this + 264));
          v10 = *((_QWORD *)this + 23);
        }
      }
    }
    v13 = *((_QWORD *)this + 27);
    if ( v13 >= v10 && v13 < *((_QWORD *)this + 24) )
    {
      v15 = sub_33FA20((__int64)this, v13);
      if ( v15 != -1 )
      {
        v16 = v15 - *((_QWORD *)this + 25);
        if ( v16 != -1 )
        {
          sub_3404D0((__int64)this, (__int64)v25, v16, (QT::QWidget *)((char *)this + 288));
          v13 = *((_QWORD *)this + 27);
        }
      }
    }
    *((_QWORD *)this + 28) = v13;
    *((_BYTE *)this + 256) = 0;
    QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 408));
  }
  QT::QPainter::~QPainter((QT::QPainter *)v25);
  return v30 - __readfsqword(0x28u);
}
