QT::QString *__fastcall sub_4D03E0(QT::QString *this, const QT::QChar *a2, const __m128i *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  _WORD *v8; // r13
  const QT::QChar *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  volatile signed __int32 *v13; // rax
  unsigned __int64 v14; // rax
  __m128i v15; // xmm0
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v3 = a3[1].m128i_i64[0];
  v18 = __readfsqword(0x28u);
  if ( v3 > 3 )
  {
    v8 = (_WORD *)a3->m128i_i64[1];
    v9 = a2;
    if ( v3 == 4 )
    {
      v13 = (volatile signed __int32 *)a3->m128i_i64[0];
      v17 = 4;
      *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v8);
      if ( v13 )
      {
        _InterlockedAdd(v13, 1u);
        v8 = ptr[1];
      }
    }
    else
    {
      a2 = (const QT::QChar *)a3->m128i_i64[1];
      QT::QString::QString((QT::QString *)ptr, a2, 4);
      v8 = ptr[1];
    }
    if ( *(_WORD *)v9 == *v8
      && (int)QT::QChar::digitValue((QT::QChar *)(unsigned __int16)v8[1], (char32_t)a2) >= 0
      && *((_WORD *)v9 + 1) == v8[2]
      && *((_WORD *)v9 + 2) == v8[3] )
    {
      v14 = a3[1].m128i_u64[0];
      if ( v14 > 3 )
      {
        QT::QString::QString(this, (const QT::QChar *)(a3->m128i_i64[1] + 8), v14 - 4);
      }
      else
      {
        v15 = _mm_loadu_si128(a3);
        *((_QWORD *)this + 2) = v14;
        *(__m128i *)this = v15;
        if ( v15.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)v15.m128i_i64[0], 1u);
      }
    }
    else
    {
      v10 = a3->m128i_i64[0];
      a3->m128i_i64[0] = 0;
      *(_QWORD *)this = v10;
      v11 = a3->m128i_i64[1];
      a3->m128i_i64[1] = 0;
      *((_QWORD *)this + 1) = v11;
      v12 = a3[1].m128i_i64[0];
      a3[1].m128i_i64[0] = 0;
      *((_QWORD *)this + 2) = v12;
    }
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  else
  {
    v5 = a3->m128i_i64[0];
    a3[1].m128i_i64[0] = 0;
    a3->m128i_i64[0] = 0;
    *(_QWORD *)this = v5;
    v6 = a3->m128i_i64[1];
    *((_QWORD *)this + 2) = v3;
    a3->m128i_i64[1] = 0;
    *((_QWORD *)this + 1) = v6;
  }
  return this;
}
