unsigned __int64 __fastcall sub_427570(QT::QAbstractItemView *this, const char *a2, _QWORD *a3)
{
  char *v3; // rbx
  bool v4; // zf
  __int64 v6; // rax
  const char **v7; // rdx
  __m128i v8; // xmm1
  __int64 v9; // r14
  __int64 v10; // xmm0_8
  __int64 v11; // rbp
  double v12; // xmm1_8
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v16; // xmm2
  double v17; // xmm4_8
  double v18; // [rsp+0h] [rbp-98h]
  __m128i v19; // [rsp+10h] [rbp-88h] BYREF
  double v20; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h] BYREF
  __m128i v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+50h] [rbp-48h] BYREF
  __m128i v24; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-30h]

  v3 = (char *)a2;
  v4 = *a3 == -1;
  v25 = __readfsqword(0x28u);
  v22 = 0;
  v21 = 0;
  if ( v4 && a3[1] )
  {
    v12 = 0.0;
    v11 = 0;
    v10 = 0;
  }
  else
  {
    v6 = QT::QAbstractItemView::model(this);
    v7 = *(const char ***)(v6 + 216);
    if ( !v7 )
      v7 = *(const char ***)(v6 + 208);
    v23 = 0;
    v24 = 0;
    a2 = *v7;
    dirtree_get_abspath_by_cursor(&v23, *v7, a3, 0);
    v8 = _mm_loadu_si128(&v24);
    v9 = v23;
    v24 = 0;
    v23 = 0;
    v10 = v8.m128i_i64[0];
    v21 = v9;
    v22 = v8;
    if ( v8.m128i_i64[0] <= 1uLL )
    {
      v11 = v21;
      v12 = *(double *)&v22.m128i_i64[1];
    }
    else
    {
      QT::QAbstractItemView::model(this);
      a2 = (const char *)&v21;
      sub_42B280(&v23, &v21);
      v16 = _mm_loadu_si128(&v24);
      v11 = v23;
      v24 = 0;
      v10 = v16.m128i_i64[0];
      v23 = 0;
      *(_QWORD *)&v17 = _mm_srli_si128(v16, 8).m128i_u64[0];
      v12 = v17;
      if ( v21 )
      {
        v20 = *(double *)v16.m128i_i64;
        v19 = v16;
        v22.m128i_i64[0] = 0;
        v18 = v17;
        qfree(v21, (const char *)&v21, *(double *)v16.m128i_i64, v17);
        v21 = v11;
        v12 = v18;
        v10 = *(_QWORD *)&v20;
        v22 = _mm_load_si128(&v19);
        if ( v23 )
        {
          v24.m128i_i64[0] = 0;
          qfree(v23, (const char *)&v21, v20, v18);
          v11 = v21;
          v12 = *(double *)&v22.m128i_i64[1];
          v10 = v22.m128i_i64[0];
        }
      }
      else
      {
        v22 = v16;
      }
    }
  }
  v13 = *(_QWORD *)v3;
  v14 = *((_QWORD *)v3 + 2);
  *(_QWORD *)v3 = v11;
  *((_QWORD *)v3 + 1) = v10;
  v21 = v13;
  v22.m128i_i64[1] = v14;
  *((double *)v3 + 2) = v12;
  if ( v13 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v13, a2);
  }
  return v25 - __readfsqword(0x28u);
}
