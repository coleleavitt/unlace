void __fastcall thread_run_to(
        _QWORD *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx

  if ( a2 )
  {
    v10 = (__int64)a2;
    if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 6 )
    {
      a2 = (const char *)a1[15];
      if ( !(unsigned int)sub_23D8E0(v10, (__int64)a2, 2, nullptr, 0, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
        byte_8CC5EC = 0;
    }
    v11 = *(_QWORD **)(v10 + 248);
    if ( v11 )
    {
      v12 = nullptr;
      while ( 1 )
      {
        v13 = v11[1];
        if ( a1 == v11 )
          break;
        v12 = v11;
        if ( !v13 )
          return;
        v11 = (_QWORD *)v11[1];
      }
      if ( v12 )
        v12[1] = v13;
      else
        *(_QWORD *)(v10 + 248) = v13;
      thread_run_to(a1, a2);
    }
  }
}
