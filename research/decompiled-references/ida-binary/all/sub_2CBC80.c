unsigned __int64 __fastcall sub_2CBC80(const char *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // [rsp+0h] [rbp-98h] BYREF
  __int128 v10; // [rsp+8h] [rbp-90h]
  __int64 v11; // [rsp+18h] [rbp-80h]
  __int128 v12; // [rsp+20h] [rbp-78h]
  __m128i si128; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-48h]
  int v16; // [rsp+58h] [rbp-40h]
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v16 = 4194308;
  v10 = 0;
  v11 = 0;
  v15 = 0;
  v12 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)ptr = 0;
  v1 = QT::QCoreApplication::self[2];
  v9 = 0;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(v1 + 120))(QT::QCoreApplication::self + 2, a1, &v9);
  (*(void (__fastcall **)(const char *))(*(_QWORD *)a1 + 696LL))(a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = v11;
  if ( v11 )
  {
    v4 = v12;
    if ( (_QWORD)v12 )
    {
      v5 = 0;
      do
      {
        v6 = (__int64 *)(v3 + 40 * v5);
        jvalue_t_clear(v6 + 3);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a1);
        }
        ++v5;
        v3 = v11;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v12 = 0;
    qfree(v3, a1);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, a1);
  }
  return v17 - __readfsqword(0x28u);
}
