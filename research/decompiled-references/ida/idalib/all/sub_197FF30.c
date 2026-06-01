__int64 __fastcall sub_197FF30(__int64 *a1, unsigned __int16 **a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rax

  v4 = sub_190CCA0(a1, a2[2], a3, a4);
  if ( v4 == 1 )
    return 0;
  else
    return sub_1B11A30(
             *(_QWORD *)(*a1 + 760),
             v4 & 0xFFFFFFFFFFFFFFFELL,
             *(unsigned int *)a2,
             *((unsigned int *)a2 + 3),
             *((unsigned int *)a2 + 1));
}
