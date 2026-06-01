_QWORD *__fastcall sub_20D7CD0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi

  sub_20D1ED0(a2, 2u, "[]");
  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v2 + 8) == 52 )
    sub_20D7AC0((_QWORD *)v2, (__int64)a2);
  return sub_20D1ED0(a2, 5u, "{...}");
}
