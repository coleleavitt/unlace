unsigned __int64 __fastcall sub_1931340(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int16 a4,
        unsigned __int64 a5,
        __m128 a6,
        __m128 a7)
{
  _BOOL4 v8; // r13d

  v8 = a4 != 34;
  if ( (*(_WORD *)a5 & 0x1FF) == 0x13 )
    a5 = sub_192A480(a1, a2, a5, a6, a7);
  if ( a5 == 1 )
    return 1;
  else
    return sub_1925670(a1, a2, a3, v8, (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFELL), 0, a6, a7);
}
