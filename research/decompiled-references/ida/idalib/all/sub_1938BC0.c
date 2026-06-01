__int64 __fastcall sub_1938BC0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax

  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 )
    return sub_1A894D0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v4);
  v5 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( v5 != 1 )
  {
    v4 = v5 & 0xFFFFFFFFFFFFFFFELL;
    return sub_1A894D0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v4);
  }
  return 1;
}
