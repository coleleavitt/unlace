__int64 __fastcall sub_3DA260(double a1, double a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  QT::QAbstractScrollArea *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 *v16; // rbp
  __int64 v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-98h] BYREF
  __int128 v20; // [rsp+8h] [rbp-90h]
  __int64 v21; // [rsp+18h] [rbp-80h]
  __int128 v22; // [rsp+20h] [rbp-78h]
  __m128i si128; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  int v26; // [rsp+58h] [rbp-40h]
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v19 = 0;
  v21 = 0;
  v25 = 0;
  v26 = 4194308;
  v20 = 0;
  v22 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)ptr = 0;
  v10 = sub_3D9A40(0.0, *(double *)si128.m128i_i64, a3, a4, a5, a6, a7, a8);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *, QT::QAbstractScrollArea *, __int64 *))(QT::QCoreApplication::self[2] + 120LL))(
      QT::QCoreApplication::self + 2,
      v10,
      &v19);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v13 = v21;
  if ( v21 )
  {
    v14 = v22;
    if ( (_QWORD)v22 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 40 * v15);
        jvalue_t_clear(v16 + 3);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, (const char *)v10);
        }
        ++v15;
        v13 = v21;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v22 = 0;
    qfree(v13, (const char *)v10, v8, v9, v11, v12, v19, v20);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19, (const char *)v10);
  }
  return 1;
}
