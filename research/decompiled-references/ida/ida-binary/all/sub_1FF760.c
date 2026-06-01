__int64 __fastcall sub_1FF760(
        __m128i *this,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char *v10; // r13
  const __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int32 v14; // eax
  QT::QAbstractSlider *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  double v20; // xmm4_8
  double v21; // xmm5_8
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i *v24; // rsi
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdi
  struct _Unwind_Exception *v30; // rbx
  int v31; // [rsp+Ch] [rbp-9Ch] BYREF
  char v32[8]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v33; // [rsp+20h] [rbp-88h]
  char v34; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+30h] [rbp-78h]
  __int16 v36; // [rsp+38h] [rbp-70h]
  __m128i v37[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38; // [rsp+60h] [rbp-48h]
  __int64 v39; // [rsp+68h] [rbp-40h]
  unsigned __int64 v40; // [rsp+78h] [rbp-30h]

  v11 = this;
  v40 = __readfsqword(0x28u);
  if ( (int)a2 > 6 )
  {
    if ( (_DWORD)a2 != 7 )
      return v40 - __readfsqword(0x28u);
    v10 = v32;
    sub_1E95D0(
      (QT::QObject *)v32,
      (__int64)this,
      *((_DWORD *)this + 237),
      *((_DWORD *)this + 238) | 0x20000,
      *((_WORD *)this + 478),
      *(double *)a3.m128_u64);
    v31 = 0;
    a2 = (const char *)&v31;
    v16 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar((QT::QAbstractScrollArea *)this);
    v19 = sub_1EC350(this, &v31, v16);
    if ( v31 == 2 )
    {
      this = (__m128i *)v16;
      if ( (unsigned __int8)QT::QAbstractSlider::isSliderDown(v16) )
      {
        if ( !v11[26].m128i_i64[1] )
          goto LABEL_50;
        if ( v11[26].m128i_i32[0] != 1 || (this = (__m128i *)v11[55].m128i_i64[1]) == nullptr )
        {
LABEL_15:
          v22 = _mm_loadu_si128(v11 + 24);
          v23 = v11[26].m128i_i64[0];
          v39 = v19;
          v37[0] = v22;
          a3 = (__m128)_mm_loadu_si128(v11 + 25);
          v38 = v23;
          v37[1] = (__m128i)a3;
          if ( !v19 )
          {
            sub_1FF700((__int64)v11[24].m128i_i64, v37, a3, a4, a5, a6, v20, v21, a9, a10);
            if ( v39 )
              qfree(v39, v37[0].m128i_i8);
            goto LABEL_19;
          }
          v24 = v37;
          v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          sub_1FF700((__int64)v11[24].m128i_i64, v37, a3, a4, a5, a6, v25, v26, a9, a10);
          if ( v39 )
            *(double *)a3.m128_u64 = qfree(v39, v37[0].m128i_i8);
          goto LABEL_18;
        }
        if ( !v11[60].m128i_i8[8] )
          this = nullptr;
        a2 = (_BYTE *)(&dword_0 + 2);
        if ( !(*(unsigned __int8 (__fastcall **)(__m128i *, __int64))(this->m128i_i64[0] + 304))(this, 2) )
        {
          v24 = (__m128i *)(&dword_0 + 2);
          (*(void (__fastcall **)(const __m128i *, __int64, _QWORD))(v11->m128i_i64[0] + 536))(v11, 2, 0);
          if ( !v19 )
          {
LABEL_19:
            if ( !v34 )
            {
              v27 = v33;
              if ( v33 )
              {
                *(_QWORD *)(v33 + 948) = v35;
                *(_WORD *)(v27 + 956) = v36;
              }
            }
            *(_QWORD *)v32 = &object_lifecycle_monitor_t___vtable;
            QT::QObject::~QObject((QT::QObject *)v32);
            return v40 - __readfsqword(0x28u);
          }
LABEL_18:
          qfree(v19, v24->m128i_i8, *(double *)a3.m128_u64);
          goto LABEL_19;
        }
      }
    }
    if ( !v11[26].m128i_i64[1] )
    {
      sub_1E69C0(*(double *)a3.m128_u64, (__int64)this, (__int64)a2, v17, v18);
      goto LABEL_49;
    }
    goto LABEL_15;
  }
  if ( (int)a2 > 4 )
  {
    sub_1FE050((__int64)this, a2, *(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a10);
    return (*(__int64 (__fastcall **)(__m128i *, _QWORD, __int64))(this->m128i_i64[0] + 536))(
             this,
             (unsigned int)((_DWORD)a2 != 5) + 1,
             1);
  }
  if ( (int)a2 > 2 )
  {
    sub_1FE050((__int64)this, a2, *(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a10);
    this = nullptr;
    if ( !v11[60].m128i_i8[8] )
      return (*(__int64 (__fastcall **)(__m128i *, bool))(this->m128i_i64[0] + 240))(this, (_DWORD)a2 == 4);
    if ( v11[26].m128i_i64[1] )
    {
      v14 = v11[26].m128i_i32[0];
      if ( v14 == 2 )
      {
        this = (__m128i *)v11[56].m128i_i64[0];
      }
      else if ( v14 == 3 )
      {
        this = (__m128i *)v11[56].m128i_i64[1];
      }
      else
      {
        this = nullptr;
        if ( v14 == 1 )
          this = (__m128i *)v11[55].m128i_i64[1];
      }
      return (*(__int64 (__fastcall **)(__m128i *, bool))(this->m128i_i64[0] + 240))(this, (_DWORD)a2 == 4);
    }
    goto LABEL_49;
  }
  if ( (int)a2 <= 0 )
    return v40 - __readfsqword(0x28u);
  sub_1FE050((__int64)this, a2, *(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a10);
  if ( *((_BYTE *)this + 968) )
  {
    if ( *((_QWORD *)this + 53) )
    {
      v28 = *((_DWORD *)this + 104);
      if ( v28 == 2 )
      {
        v29 = *((_QWORD *)this + 112);
      }
      else if ( v28 == 3 )
      {
        v29 = *((_QWORD *)this + 113);
      }
      else
      {
        v29 = 0;
        if ( v28 == 1 )
          v29 = v11[55].m128i_i64[1];
      }
      return (*(__int64 (__fastcall **)(__int64, bool, __int64))(*(_QWORD *)v29 + 248LL))(v29, (_DWORD)a2 == 2, 1);
    }
LABEL_49:
    sub_1E69C0(*(double *)a3.m128_u64, (__int64)this, (__int64)a2, v12, v13);
LABEL_50:
    v30 = (struct _Unwind_Exception *)sub_1E69C0(*(double *)a3.m128_u64, (__int64)this, (__int64)a2, v17, v18);
    sub_1E9680((__int64)v10);
    _Unwind_Resume(v30);
  }
  v29 = 0;
  return (*(__int64 (__fastcall **)(__int64, bool, __int64))(*(_QWORD *)v29 + 248LL))(v29, (_DWORD)a2 == 2, 1);
}
