unsigned __int64 __fastcall sub_341C30(QT::QWidget *this, int *a2, double a3, __m128 a4)
{
  int v5; // edx
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rsi
  __m128 v9; // xmm0
  __int8 v10; // dl
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  __int64 v13; // rcx
  int v14; // edx
  unsigned __int64 v15; // rax
  const __m128i *v16; // rdx
  const __m128i *v17; // rcx

  v5 = a2[1];
  v6 = *((_BYTE *)this + 345) == 0;
  v7 = *a2;
  v8 = v5;
  if ( v6 )
  {
    if ( (int)v7 < 0 )
      goto LABEL_4;
    v13 = v5;
    v8 = v7;
    v14 = v7;
    v7 = v13;
    if ( *(_DWORD *)(*((_QWORD *)this + 4) + 28LL) + 1 - *(_DWORD *)(*((_QWORD *)this + 4) + 20LL) <= v14 )
      goto LABEL_4;
  }
  else if ( v5 < 0LL || *(_DWORD *)(*((_QWORD *)this + 4) + 32LL) + 1 - *(_DWORD *)(*((_QWORD *)this + 4) + 24LL) <= v5 )
  {
    goto LABEL_4;
  }
  v15 = sub_3417A0((__int64)this, v8, v7, nullptr);
  v16 = *((const __m128i **)this + 14);
  v17 = &v16[2 * *((_QWORD *)this + 15)];
  if ( v16 != v17 )
  {
    while ( v15 < v16->m128i_i64[0] || v15 >= v16->m128i_i64[1] )
    {
      v16 += 2;
      if ( v17 == v16 )
        goto LABEL_4;
    }
    if ( v16 )
    {
      v9 = (__m128)_mm_loadu_si128(v16);
      v11 = v16[1].m128i_i64[0];
      v10 = v16[1].m128i_i8[8];
      if ( *((_QWORD *)this + 17) != v9.m128_u64[0] )
        goto LABEL_5;
      goto LABEL_13;
    }
  }
LABEL_4:
  v9 = (__m128)-1LL;
  v10 = 0;
  v11 = -1;
  if ( *((_QWORD *)this + 17) != -1 )
  {
LABEL_5:
    *((_QWORD *)this + 19) = v11;
    *((_BYTE *)this + 160) = v10;
    *((_BYTE *)this + 256) = 1;
    *(__m128 *)((char *)this + 136) = v9;
    return QT::QWidget::update(this);
  }
LABEL_13:
  result = _mm_movehl_ps(a4, v9).m128_u64[0];
  if ( result != *((_QWORD *)this + 18) )
    goto LABEL_5;
  return result;
}
