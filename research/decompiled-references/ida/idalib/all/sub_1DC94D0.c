unsigned __int64 __fastcall sub_1DC94D0(
        __int64 *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rax

  v8 = sub_1DC71F0(a1, *((_QWORD *)a2 + 2), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  else
    return sub_1B13F10(
             *(__int64 **)(*a1 + 760),
             (_QWORD *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL),
             *a2,
             a2[3],
             a2[1],
             a7,
             a8);
}
