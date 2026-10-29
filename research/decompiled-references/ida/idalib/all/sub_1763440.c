__int64 __fastcall sub_1763440(__int64 *a1, unsigned int *a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax

  v2 = *((_QWORD *)a2 + 2);
  if ( !v2 )
    return sub_1B116A0(*(_QWORD *)(*a1 + 760), *a2, a2[1], a2[3], v2);
  v3 = sub_175B800(a1, *((unsigned __int16 **)a2 + 2));
  if ( v3 != 1 )
  {
    v2 = v3 & 0xFFFFFFFFFFFFFFFELL;
    return sub_1B116A0(*(_QWORD *)(*a1 + 760), *a2, a2[1], a2[3], v2);
  }
  return 0;
}
