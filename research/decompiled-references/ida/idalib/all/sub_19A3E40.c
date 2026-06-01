unsigned __int16 *__fastcall sub_19A3E40(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  if ( !a2 )
    return (_WORD *)(&dword_0 + 1);
  if ( (*((_BYTE *)a2 + 1) & 6) != 0 )
    return a2;
  return (unsigned __int16 *)sub_19A1850(a1, a2, a3, a4, a5, a6, a7);
}
