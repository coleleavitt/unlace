void *__fastcall sub_2270420(__int64 a1, __int64 *a2)
{
  char v3; // r8
  size_t v4; // rsi
  void *v5; // rdi

  v3 = **(_BYTE **)(a1 + 72);
  if ( v3 == 34 )
    return sub_2270210(a1, *(_QWORD *)(a1 + 72), *(_QWORD *)(a1 + 80), a2);
  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(void **)(a1 + 72);
  if ( v3 == 39 )
    return sub_22702C0((__int64)v5, v4, a2);
  else
    return sub_2270360(v5, v4, a2);
}
