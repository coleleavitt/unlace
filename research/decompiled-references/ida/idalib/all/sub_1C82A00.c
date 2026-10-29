unsigned __int64 __fastcall sub_1C82A00(
        __int64 *a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v7; // rax

  v7 = sub_1C7CFE0(a1, *((_QWORD *)a2 + 2), a6, a7, a3, a4, a5);
  if ( v7 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  else
    return sub_1B13F10(
             *(__int64 **)(*a1 + 760),
             (_QWORD *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFELL),
             *a2,
             a2[3],
             a2[1],
             a6,
             a7);
}
