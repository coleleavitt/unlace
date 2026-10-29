__int64 __fastcall sub_193AF50(__int64 *a1, unsigned int *a2, double a3, __m128 a4)
{
  __int64 v4; // rax

  v4 = sub_1933BC0(a1, *((_QWORD *)a2 + 4), a3, a4);
  if ( v4 == 1 )
    return 0;
  else
    return sub_1B10BB0(*(_QWORD *)(*a1 + 760), v4 & 0xFFFFFFFFFFFFFFFELL, *a2, a2[7], a2[1]);
}
