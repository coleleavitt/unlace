void __fastcall sub_F74830(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        const __m128i *a3,
        const void ***a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r10

  v5 = *a1;
  v6 = (_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = v5 & 7;
  if ( (a3->m128i_i8[5] & 1) != 0 )
  {
    v5 = v7 | v6[1];
    v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = v5 & 7;
  }
  if ( (v5 & 8) != 0 )
  {
    v7 |= v6[3];
    v6 = (_QWORD *)*v6;
  }
  sub_F74650((__int64)v6, v7, a2, a3, a4, a5);
}
