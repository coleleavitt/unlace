__int64 __fastcall sub_1BC8220(
        __int64 a1,
        __int64 *a2,
        __m128i a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx

  v8 = *(_QWORD *)(*(_QWORD *)(*a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v8 + 16) == 13 )
  {
    v10 = *(unsigned __int16 *)(v8 + 18);
    LOWORD(v10) = ((unsigned __int16)v10 >> 3) & 0x1FF;
    if ( (unsigned __int16)v10 > 0x1F2u )
    {
      v11 = sub_1907C70(a1, (_QWORD *)*a2, a3, a4, v10, *a2, a7, a8);
      result = 1;
      if ( v11 != 1 )
      {
        *a2 = v11 & 0xFFFFFFFFFFFFFFFELL;
        return 0;
      }
    }
  }
  return result;
}
