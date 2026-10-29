__int64 __fastcall sub_193CA80(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rax

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  else
    return sub_19D7F10(*(_QWORD *)(*a1 + 736), *(_QWORD *)(a2 + 32), v4 & 0xFFFFFFFFFFFFFFFELL);
}
