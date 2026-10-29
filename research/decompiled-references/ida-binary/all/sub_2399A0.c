_QWORD *__fastcall sub_2399A0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  bool v16; // r13
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rsi
  char v21; // [rsp+0h] [rbp-58h]

  if ( !byte_8BA544 )
  {
    if ( !byte_8CC068 )
    {
      byte_8CC068 = 1;
      sub_169630(
        (int)"The source level debugger has been disabled.\nTo enable it, use Debugger, Use source-level debugging",
        a2,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        v21);
    }
    goto LABEL_8;
  }
  if ( !(_QWORD)xmmword_8CC458 )
  {
LABEL_8:
    *a1 = 0;
    return a1;
  }
  v16 = a2 != 0;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *((_QWORD *)qword_8CC450 + v18);
    if ( v19 == a2 || !v16 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*(_QWORD *)v19 + 88LL))(a1, v19, a4, a3);
      if ( *a1 )
        return a1;
    }
    v18 = ++v17;
    if ( v17 >= (unsigned __int64)xmmword_8CC458 )
      goto LABEL_8;
  }
}
