unsigned __int64 __fastcall sub_496080(__int64 *a1, __int64 a2, const char *a3, double a4, double a5, __m128 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v10; // r8
  QT::QAbstractItemView *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  const char **v14; // rbp
  const char *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r15
  __m128i v18; // xmm0
  __int64 v19; // rdi
  QT::QAbstractItemView *v21; // rdi
  char v22; // al
  __m128i v23; // [rsp+0h] [rbp-88h] BYREF
  const char *v24; // [rsp+10h] [rbp-78h] BYREF
  __m128i v25[3]; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  QT::QObject::QObject((QT::QObject *)(a1 + 3), nullptr);
  a1[5] = 0;
  a1[3] = (__int64)&object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1 + 24, a2, 0.0, v8, v9, v10);
  if ( *((_BYTE *)a1 + 48) )
    return v26 - __readfsqword(0x28u);
  v11 = (QT::QAbstractItemView *)a1[5];
  if ( !v11 )
    return v26 - __readfsqword(0x28u);
  v12 = 0;
  if ( a3 )
    goto LABEL_4;
  v21 = (QT::QAbstractItemView *)a1[5];
  v25[0] = 0;
  v24 = nullptr;
  memset(&v25[1], 255, 32);
  v22 = sub_4956F0(v21, (__int64 *)&v24, 3, NAN, a5, a6);
  a3 = v24;
  if ( v22 )
  {
    if ( !v24 )
      return v26 - __readfsqword(0x28u);
    v12 = (__int64)v24;
LABEL_4:
    v13 = QT::QAbstractItemView::model(v11);
    v14 = *(const char ***)(v13 + 216);
    if ( !v14 )
      v14 = *(const char ***)(v13 + 208);
    v24 = nullptr;
    v25[0] = 0;
    v15 = *v14;
    dirtree_getcwd(&v24, *v14);
    v16 = *a1;
    v17 = (__int64)v24;
    v24 = nullptr;
    v18 = _mm_loadu_si128(v25);
    v25[0] = 0;
    if ( v16 )
    {
      a1[1] = 0;
      v23 = v18;
      qfree(v16, v15);
      v18 = _mm_load_si128(&v23);
      v19 = (__int64)v24;
      *a1 = v17;
      *(__m128i *)(a1 + 1) = v18;
      if ( v19 )
      {
        v25[0].m128i_i64[0] = 0;
        *(double *)v18.m128i_i64 = qfree(v19, v15);
      }
    }
    else
    {
      *a1 = v17;
      *(__m128i *)(a1 + 1) = v18;
    }
    dirtree_chdir(*v14, a3);
    if ( v12 )
      qfree(v12, a3, *(double *)v18.m128i_i64);
    return v26 - __readfsqword(0x28u);
  }
  if ( v24 )
    qfree(v24, (const char *)&v24);
  return v26 - __readfsqword(0x28u);
}
