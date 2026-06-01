__int64 __fastcall sub_1956FD0(__int64 *a1, unsigned int *a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax

  v4 = *((_QWORD *)a2 + 2);
  if ( !v4 )
    return sub_1B116A0(*(_QWORD *)(*a1 + 760), *a2, a2[1], a2[3], v4);
  v5 = sub_1944E10(a1, *((unsigned __int16 **)a2 + 2), a3, a4);
  if ( v5 != 1 )
  {
    v4 = v5 & 0xFFFFFFFFFFFFFFFELL;
    return sub_1B116A0(*(_QWORD *)(*a1 + 760), *a2, a2[1], a2[3], v4);
  }
  return 0;
}
