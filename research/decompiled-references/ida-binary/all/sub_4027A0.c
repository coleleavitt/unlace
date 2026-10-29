__int64 __fastcall sub_4027A0(__int64 a1)
{
  __int64 v1; // rdi
  QT::QObject *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v10; // [rsp+0h] [rbp-98h] BYREF
  __int128 v11; // [rsp+8h] [rbp-90h]
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int128 v13; // [rsp+20h] [rbp-78h]
  __m128i si128; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+58h] [rbp-40h]
  unsigned __int64 v18; // [rsp+68h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 88);
  v18 = __readfsqword(0x28u);
  v2 = sub_4026C0(v1, 1);
  v12 = 0;
  v16 = 0;
  v17 = 4194308;
  v11 = 0;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)ptr = 0;
  v3 = QT::QCoreApplication::self[2];
  v10 = 0;
  (*(void (__fastcall **)(_QWORD *, QT::QObject *, __int64 *))(v3 + 120))(QT::QCoreApplication::self + 2, v2, &v10);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = v12;
  if ( v12 )
  {
    v5 = v13;
    if ( (_QWORD)v13 )
    {
      v6 = 0;
      do
      {
        v7 = (__int64 *)(v4 + 40 * v6);
        jvalue_t_clear(v7 + 3);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8, (const char *)v2);
        }
        ++v6;
        v4 = v12;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v13 = 0;
    qfree(v4, (const char *)v2);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10, (const char *)v2);
  }
  return 1;
}
