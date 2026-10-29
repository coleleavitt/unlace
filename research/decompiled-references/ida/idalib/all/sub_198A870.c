__int64 __fastcall sub_198A870(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v4; // rax

  v4 = sub_1988430(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( !v4 )
    return 1;
  if ( v4 == *(_QWORD **)(a2 + 16) )
    return a2;
  return sub_19D2DA0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 24), v4, *(unsigned int *)(a2 + 28));
}
