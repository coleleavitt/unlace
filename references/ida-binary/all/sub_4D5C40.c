unsigned __int64 __fastcall sub_4D5C40(__int64 a1, QT::QComboBox *a2)
{
  __m128i v3; // xmm0
  __int64 v4; // rdx
  void *v5; // r13
  void **v6; // rbx
  __int64 v7; // rcx
  const char *v8; // rsi
  __int64 (*v9)(); // rax
  void **v10; // rbx
  void **v11; // rbp
  void **i; // r14
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  void *ptr[2]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v14 = 0;
  v17 = 0;
  v15 = 0;
  *(_OWORD *)ptr = 0;
  sub_4F65D0(&v14, "UIFLTR");
  v3 = _mm_loadu_si128((const __m128i *)ptr);
  v4 = v17;
  if ( v3.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v3.m128i_i64[0], 1u);
  v5 = xmmword_8D24A0;
  v6 = (void **)*(&xmmword_8D24A0 + 1);
  *(__m128i *)&xmmword_8D24A0 = v3;
  v7 = qword_8D24B0;
  qword_8D24B0 = v4;
  if ( v5 && !_InterlockedSub((volatile signed __int32 *)v5, 1u) )
  {
    for ( i = &v6[3 * v7]; i != v6; v6 += 3 )
    {
      if ( *v6 && !_InterlockedSub((volatile signed __int32 *)*v6, 1u) )
        free(*v6);
    }
    free(v5);
  }
  QT::QComboBox::clear(a2);
  v8 = (const char *)(unsigned int)QT::QComboBox::count(a2);
  QT::QComboBox::insertItems(a2, v8, ptr);
  v9 = *(__int64 (**)())(*QT::QCoreApplication::self + 288LL);
  if ( v9 != sub_3895F0 && !(unsigned __int8)v9() )
  {
    v8 = nullptr;
    QT::QComboBox::setCompleter(a2, nullptr);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v10 = (void **)ptr[1];
    v11 = (void **)((char *)ptr[1] + 24 * v17);
    if ( ptr[1] != v11 )
    {
      do
      {
        if ( *v10 && !_InterlockedSub((volatile signed __int32 *)*v10, 1u) )
          free(*v10);
        v10 += 3;
      }
      while ( v11 != v10 );
    }
    free(ptr[0]);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, v8);
  }
  return v18 - __readfsqword(0x28u);
}
